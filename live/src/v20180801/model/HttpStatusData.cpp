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

#include <tencentcloud/live/v20180801/model/HttpStatusData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Live::V20180801::Model;
using namespace std;

HttpStatusData::HttpStatusData() :
    m_timeHasBeenSet(false),
    m_httpStatusInfoListHasBeenSet(false)
{
}

CoreInternalOutcome HttpStatusData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Time") && !value["Time"].IsNull())
    {
        if (!value["Time"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HttpStatusData.Time` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_time = string(value["Time"].GetString());
        m_timeHasBeenSet = true;
    }

    if (value.HasMember("HttpStatusInfoList") && !value["HttpStatusInfoList"].IsNull())
    {
        if (!value["HttpStatusInfoList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HttpStatusData.HttpStatusInfoList` is not array type"));

        const rapidjson::Value &tmpValue = value["HttpStatusInfoList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            HttpStatusInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_httpStatusInfoList.push_back(item);
        }
        m_httpStatusInfoListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HttpStatusData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_timeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Time";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_time.c_str(), allocator).Move(), allocator);
    }

    if (m_httpStatusInfoListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpStatusInfoList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_httpStatusInfoList.begin(); itr != m_httpStatusInfoList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string HttpStatusData::GetTime() const
{
    return m_time;
}

void HttpStatusData::SetTime(const string& _time)
{
    m_time = _time;
    m_timeHasBeenSet = true;
}

bool HttpStatusData::TimeHasBeenSet() const
{
    return m_timeHasBeenSet;
}

vector<HttpStatusInfo> HttpStatusData::GetHttpStatusInfoList() const
{
    return m_httpStatusInfoList;
}

void HttpStatusData::SetHttpStatusInfoList(const vector<HttpStatusInfo>& _httpStatusInfoList)
{
    m_httpStatusInfoList = _httpStatusInfoList;
    m_httpStatusInfoListHasBeenSet = true;
}

bool HttpStatusData::HttpStatusInfoListHasBeenSet() const
{
    return m_httpStatusInfoListHasBeenSet;
}

