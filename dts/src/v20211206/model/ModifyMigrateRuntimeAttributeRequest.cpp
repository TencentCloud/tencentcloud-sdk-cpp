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

#include <tencentcloud/dts/v20211206/model/ModifyMigrateRuntimeAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

ModifyMigrateRuntimeAttributeRequest::ModifyMigrateRuntimeAttributeRequest() :
    m_jobIdHasBeenSet(false),
    m_otherOptionsHasBeenSet(false)
{
}

string ModifyMigrateRuntimeAttributeRequest::ToJsonString() const
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

    if (m_otherOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherOptions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_otherOptions.begin(); itr != m_otherOptions.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyMigrateRuntimeAttributeRequest::GetJobId() const
{
    return m_jobId;
}

void ModifyMigrateRuntimeAttributeRequest::SetJobId(const string& _jobId)
{
    m_jobId = _jobId;
    m_jobIdHasBeenSet = true;
}

bool ModifyMigrateRuntimeAttributeRequest::JobIdHasBeenSet() const
{
    return m_jobIdHasBeenSet;
}

vector<KeyValuePairOption> ModifyMigrateRuntimeAttributeRequest::GetOtherOptions() const
{
    return m_otherOptions;
}

void ModifyMigrateRuntimeAttributeRequest::SetOtherOptions(const vector<KeyValuePairOption>& _otherOptions)
{
    m_otherOptions = _otherOptions;
    m_otherOptionsHasBeenSet = true;
}

bool ModifyMigrateRuntimeAttributeRequest::OtherOptionsHasBeenSet() const
{
    return m_otherOptionsHasBeenSet;
}


