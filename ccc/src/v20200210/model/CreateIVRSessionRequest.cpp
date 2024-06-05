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

#include <tencentcloud/ccc/v20200210/model/CreateIVRSessionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CreateIVRSessionRequest::CreateIVRSessionRequest() :
    m_sdkAppIdHasBeenSet(false),
    m_calleeHasBeenSet(false),
    m_iVRIdHasBeenSet(false),
    m_callersHasBeenSet(false),
    m_variablesHasBeenSet(false),
    m_uUIHasBeenSet(false)
{
}

string CreateIVRSessionRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_sdkAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SdkAppId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sdkAppId, allocator);
    }

    if (m_calleeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callee";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_callee.c_str(), allocator).Move(), allocator);
    }

    if (m_iVRIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IVRId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_iVRId, allocator);
    }

    if (m_callersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Callers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_callers.begin(); itr != m_callers.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_variablesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Variables";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_variables.begin(); itr != m_variables.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_uUIHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UUI";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_uUI.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


int64_t CreateIVRSessionRequest::GetSdkAppId() const
{
    return m_sdkAppId;
}

void CreateIVRSessionRequest::SetSdkAppId(const int64_t& _sdkAppId)
{
    m_sdkAppId = _sdkAppId;
    m_sdkAppIdHasBeenSet = true;
}

bool CreateIVRSessionRequest::SdkAppIdHasBeenSet() const
{
    return m_sdkAppIdHasBeenSet;
}

string CreateIVRSessionRequest::GetCallee() const
{
    return m_callee;
}

void CreateIVRSessionRequest::SetCallee(const string& _callee)
{
    m_callee = _callee;
    m_calleeHasBeenSet = true;
}

bool CreateIVRSessionRequest::CalleeHasBeenSet() const
{
    return m_calleeHasBeenSet;
}

int64_t CreateIVRSessionRequest::GetIVRId() const
{
    return m_iVRId;
}

void CreateIVRSessionRequest::SetIVRId(const int64_t& _iVRId)
{
    m_iVRId = _iVRId;
    m_iVRIdHasBeenSet = true;
}

bool CreateIVRSessionRequest::IVRIdHasBeenSet() const
{
    return m_iVRIdHasBeenSet;
}

vector<string> CreateIVRSessionRequest::GetCallers() const
{
    return m_callers;
}

void CreateIVRSessionRequest::SetCallers(const vector<string>& _callers)
{
    m_callers = _callers;
    m_callersHasBeenSet = true;
}

bool CreateIVRSessionRequest::CallersHasBeenSet() const
{
    return m_callersHasBeenSet;
}

vector<Variable> CreateIVRSessionRequest::GetVariables() const
{
    return m_variables;
}

void CreateIVRSessionRequest::SetVariables(const vector<Variable>& _variables)
{
    m_variables = _variables;
    m_variablesHasBeenSet = true;
}

bool CreateIVRSessionRequest::VariablesHasBeenSet() const
{
    return m_variablesHasBeenSet;
}

string CreateIVRSessionRequest::GetUUI() const
{
    return m_uUI;
}

void CreateIVRSessionRequest::SetUUI(const string& _uUI)
{
    m_uUI = _uUI;
    m_uUIHasBeenSet = true;
}

bool CreateIVRSessionRequest::UUIHasBeenSet() const
{
    return m_uUIHasBeenSet;
}


