/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/essbasic/v20210526/model/CreateEmployeeQualificationSealQrCodeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CreateEmployeeQualificationSealQrCodeRequest::CreateEmployeeQualificationSealQrCodeRequest() :
    m_agentHasBeenSet(false),
    m_hintTextHasBeenSet(false)
{
}

string CreateEmployeeQualificationSealQrCodeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_agentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Agent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_agent.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_hintTextHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HintText";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_hintText.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


Agent CreateEmployeeQualificationSealQrCodeRequest::GetAgent() const
{
    return m_agent;
}

void CreateEmployeeQualificationSealQrCodeRequest::SetAgent(const Agent& _agent)
{
    m_agent = _agent;
    m_agentHasBeenSet = true;
}

bool CreateEmployeeQualificationSealQrCodeRequest::AgentHasBeenSet() const
{
    return m_agentHasBeenSet;
}

string CreateEmployeeQualificationSealQrCodeRequest::GetHintText() const
{
    return m_hintText;
}

void CreateEmployeeQualificationSealQrCodeRequest::SetHintText(const string& _hintText)
{
    m_hintText = _hintText;
    m_hintTextHasBeenSet = true;
}

bool CreateEmployeeQualificationSealQrCodeRequest::HintTextHasBeenSet() const
{
    return m_hintTextHasBeenSet;
}


