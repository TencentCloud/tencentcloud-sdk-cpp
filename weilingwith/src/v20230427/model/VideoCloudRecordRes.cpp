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

#include <tencentcloud/weilingwith/v20230427/model/VideoCloudRecordRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

VideoCloudRecordRes::VideoCloudRecordRes() :
    m_totalCountHasBeenSet(false),
    m_recordSetHasBeenSet(false)
{
}

CoreInternalOutcome VideoCloudRecordRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TotalCount") && !value["TotalCount"].IsNull())
    {
        if (!value["TotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VideoCloudRecordRes.TotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalCount = value["TotalCount"].GetInt64();
        m_totalCountHasBeenSet = true;
    }

    if (value.HasMember("RecordSet") && !value["RecordSet"].IsNull())
    {
        if (!value["RecordSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `VideoCloudRecordRes.RecordSet` is not array type"));

        const rapidjson::Value &tmpValue = value["RecordSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            RecordInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_recordSet.push_back(item);
        }
        m_recordSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VideoCloudRecordRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_totalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalCount, allocator);
    }

    if (m_recordSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_recordSet.begin(); itr != m_recordSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t VideoCloudRecordRes::GetTotalCount() const
{
    return m_totalCount;
}

void VideoCloudRecordRes::SetTotalCount(const int64_t& _totalCount)
{
    m_totalCount = _totalCount;
    m_totalCountHasBeenSet = true;
}

bool VideoCloudRecordRes::TotalCountHasBeenSet() const
{
    return m_totalCountHasBeenSet;
}

vector<RecordInfo> VideoCloudRecordRes::GetRecordSet() const
{
    return m_recordSet;
}

void VideoCloudRecordRes::SetRecordSet(const vector<RecordInfo>& _recordSet)
{
    m_recordSet = _recordSet;
    m_recordSetHasBeenSet = true;
}

bool VideoCloudRecordRes::RecordSetHasBeenSet() const
{
    return m_recordSetHasBeenSet;
}

