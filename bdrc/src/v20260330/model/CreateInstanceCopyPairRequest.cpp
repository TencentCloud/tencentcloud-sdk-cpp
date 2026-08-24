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

#include <tencentcloud/bdrc/v20260330/model/CreateInstanceCopyPairRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateInstanceCopyPairRequest::CreateInstanceCopyPairRequest() :
    m_protectGroupIdHasBeenSet(false),
    m_createTargetInstanceParametersHasBeenSet(false),
    m_instanceCopyPairNameHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_recoveryPointObjectiveHasBeenSet(false)
{
}

string CreateInstanceCopyPairRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_protectGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protectGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_createTargetInstanceParametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTargetInstanceParameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_createTargetInstanceParameters.begin(); itr != m_createTargetInstanceParameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_instanceCopyPairNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceCopyPairName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceCopyPairName.c_str(), allocator).Move(), allocator);
    }

    if (m_clientTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clientToken.c_str(), allocator).Move(), allocator);
    }

    if (m_recoveryPointObjectiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryPointObjective";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_recoveryPointObjective, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceCopyPairRequest::GetProtectGroupId() const
{
    return m_protectGroupId;
}

void CreateInstanceCopyPairRequest::SetProtectGroupId(const string& _protectGroupId)
{
    m_protectGroupId = _protectGroupId;
    m_protectGroupIdHasBeenSet = true;
}

bool CreateInstanceCopyPairRequest::ProtectGroupIdHasBeenSet() const
{
    return m_protectGroupIdHasBeenSet;
}

vector<CreateInstanceModel> CreateInstanceCopyPairRequest::GetCreateTargetInstanceParameters() const
{
    return m_createTargetInstanceParameters;
}

void CreateInstanceCopyPairRequest::SetCreateTargetInstanceParameters(const vector<CreateInstanceModel>& _createTargetInstanceParameters)
{
    m_createTargetInstanceParameters = _createTargetInstanceParameters;
    m_createTargetInstanceParametersHasBeenSet = true;
}

bool CreateInstanceCopyPairRequest::CreateTargetInstanceParametersHasBeenSet() const
{
    return m_createTargetInstanceParametersHasBeenSet;
}

string CreateInstanceCopyPairRequest::GetInstanceCopyPairName() const
{
    return m_instanceCopyPairName;
}

void CreateInstanceCopyPairRequest::SetInstanceCopyPairName(const string& _instanceCopyPairName)
{
    m_instanceCopyPairName = _instanceCopyPairName;
    m_instanceCopyPairNameHasBeenSet = true;
}

bool CreateInstanceCopyPairRequest::InstanceCopyPairNameHasBeenSet() const
{
    return m_instanceCopyPairNameHasBeenSet;
}

string CreateInstanceCopyPairRequest::GetClientToken() const
{
    return m_clientToken;
}

void CreateInstanceCopyPairRequest::SetClientToken(const string& _clientToken)
{
    m_clientToken = _clientToken;
    m_clientTokenHasBeenSet = true;
}

bool CreateInstanceCopyPairRequest::ClientTokenHasBeenSet() const
{
    return m_clientTokenHasBeenSet;
}

int64_t CreateInstanceCopyPairRequest::GetRecoveryPointObjective() const
{
    return m_recoveryPointObjective;
}

void CreateInstanceCopyPairRequest::SetRecoveryPointObjective(const int64_t& _recoveryPointObjective)
{
    m_recoveryPointObjective = _recoveryPointObjective;
    m_recoveryPointObjectiveHasBeenSet = true;
}

bool CreateInstanceCopyPairRequest::RecoveryPointObjectiveHasBeenSet() const
{
    return m_recoveryPointObjectiveHasBeenSet;
}


