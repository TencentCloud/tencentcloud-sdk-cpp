/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/iotvideo/v20201215/model/CloudStorageTimeData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

CloudStorageTimeData::CloudStorageTimeData() :
    m_timeListHasBeenSet(false),
    m_videoURLHasBeenSet(false)
{
}

CoreInternalOutcome CloudStorageTimeData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TimeList") && !value["TimeList"].IsNull())
    {
        if (!value["TimeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudStorageTimeData.TimeList` is not array type"));

        const rapidjson::Value &tmpValue = value["TimeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudStorageTimeInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_timeList.push_back(item);
        }
        m_timeListHasBeenSet = true;
    }

    if (value.HasMember("VideoURL") && !value["VideoURL"].IsNull())
    {
        if (!value["VideoURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudStorageTimeData.VideoURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_videoURL = string(value["VideoURL"].GetString());
        m_videoURLHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudStorageTimeData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TimeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_timeList.begin(); itr != m_timeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_videoURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VideoURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_videoURL.c_str(), allocator).Move(), allocator);
    }

}


vector<CloudStorageTimeInfo> CloudStorageTimeData::GetTimeList() const
{
    return m_timeList;
}

void CloudStorageTimeData::SetTimeList(const vector<CloudStorageTimeInfo>& _timeList)
{
    m_timeList = _timeList;
    m_timeListHasBeenSet = true;
}

bool CloudStorageTimeData::TimeListHasBeenSet() const
{
    return m_timeListHasBeenSet;
}

string CloudStorageTimeData::GetVideoURL() const
{
    return m_videoURL;
}

void CloudStorageTimeData::SetVideoURL(const string& _videoURL)
{
    m_videoURL = _videoURL;
    m_videoURLHasBeenSet = true;
}

bool CloudStorageTimeData::VideoURLHasBeenSet() const
{
    return m_videoURLHasBeenSet;
}

