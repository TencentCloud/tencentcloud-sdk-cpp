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

#include <tencentcloud/dts/v20211206/model/SkipCheckItemRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

SkipCheckItemRequest::SkipCheckItemRequest() :
    m_jobIdHasBeenSet(false),
    m_stepIdsHasBeenSet(false),
    m_foreignKeyFlagHasBeenSet(false)
{
}

string SkipCheckItemRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_jobIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "JobId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_jobId.c_str(), allocator).Move(), allocator);
    }

    if (m_stepIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StepIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_stepIds.begin(); itr != m_stepIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_foreignKeyFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForeignKeyFlag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_foreignKeyFlag.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SkipCheckItemRequest::GetJobId() const
{
    return m_jobId;
}

void SkipCheckItemRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool SkipCheckItemRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

vector<string> SkipCheckItemRequest::GetStepIds() const
{
    return m_stepIds;
}

void SkipCheckItemRequest::SetStepIds(const vector<string>& _stepIds)
{
    m_stepIds = _stepIds;
    m_stepIdsHasBeenSet = true;
}

bool SkipCheckItemRequest::StepIdsHasBeenSet() const
{
    return m_stepIdsHasBeenSet;
}

string SkipCheckItemRequest::GetForeignKeyFlag() const
{
    return m_foreignKeyFlag;
}

void SkipCheckItemRequest::SetForeignKeyFlag(const string& _foreignKeyFlag)
{
    m_foreignKeyFlag = _foreignKeyFlag;
    m_foreignKeyFlagHasBeenSet = true;
}

bool SkipCheckItemRequest::ForeignKeyFlagHasBeenSet() const
{
    return m_foreignKeyFlagHasBeenSet;
}


