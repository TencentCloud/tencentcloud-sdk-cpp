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

#include <tencentcloud/oceanus/v20190422/model/RefJobStatusCountItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

RefJobStatusCountItem::RefJobStatusCountItem() :
    m_jobStatusHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome RefJobStatusCountItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("JobStatus") && !value["JobStatus"].IsNull())
    {
        if (!value["JobStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RefJobStatusCountItem.JobStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_jobStatus = value["JobStatus"].GetInt64();
        m_jobStatusHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RefJobStatusCountItem.Count` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetInt64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RefJobStatusCountItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_jobStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jobStatus, allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


int64_t RefJobStatusCountItem::GetJobStatus() const
{
    return m_jobStatus;
}

void RefJobStatusCountItem::SetJobStatus(const int64_t& _jobStatus)
{
    m_jobStatus = _jobStatus;
    m_jobStatusHasBeenSet = true;
}

bool RefJobStatusCountItem::JobStatusHasBeenSet() const
{
    return m_jobStatusHasBeenSet;
}

int64_t RefJobStatusCountItem::GetCount() const
{
    return m_count;
}

void RefJobStatusCountItem::SetCount(const int64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool RefJobStatusCountItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

