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

#include <tencentcloud/bdrc/v20260330/model/CreateInstanceDrillPairsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bdrc::V20260330::Model;
using namespace std;

CreateInstanceDrillPairsRequest::CreateInstanceDrillPairsRequest() :
    m_protectGroupIdHasBeenSet(false),
    m_drillPairGroupVpcHasBeenSet(false),
    m_drillPairGroupNameHasBeenSet(false),
    m_creationTokenHasBeenSet(false),
    m_drillPairGroupIdHasBeenSet(false),
    m_createTargetInstanceParametersHasBeenSet(false)
{
}

string CreateInstanceDrillPairsRequest::ToJsonString() const
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

    if (m_drillPairGroupVpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairGroupVpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillPairGroupVpc.c_str(), allocator).Move(), allocator);
    }

    if (m_drillPairGroupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairGroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillPairGroupName.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationToken";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_creationToken.c_str(), allocator).Move(), allocator);
    }

    if (m_drillPairGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DrillPairGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_drillPairGroupId.c_str(), allocator).Move(), allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateInstanceDrillPairsRequest::GetProtectGroupId() const
{
    return m_protectGroupId;
}

void CreateInstanceDrillPairsRequest::SetProtectGroupId(const string& _protectGroupId)
{
    m_protectGroupId = _protectGroupId;
    m_protectGroupIdHasBeenSet = true;
}

bool CreateInstanceDrillPairsRequest::ProtectGroupIdHasBeenSet() const
{
    return m_protectGroupIdHasBeenSet;
}

string CreateInstanceDrillPairsRequest::GetDrillPairGroupVpc() const
{
    return m_drillPairGroupVpc;
}

void CreateInstanceDrillPairsRequest::SetDrillPairGroupVpc(const string& _drillPairGroupVpc)
{
    m_drillPairGroupVpc = _drillPairGroupVpc;
    m_drillPairGroupVpcHasBeenSet = true;
}

bool CreateInstanceDrillPairsRequest::DrillPairGroupVpcHasBeenSet() const
{
    return m_drillPairGroupVpcHasBeenSet;
}

string CreateInstanceDrillPairsRequest::GetDrillPairGroupName() const
{
    return m_drillPairGroupName;
}

void CreateInstanceDrillPairsRequest::SetDrillPairGroupName(const string& _drillPairGroupName)
{
    m_drillPairGroupName = _drillPairGroupName;
    m_drillPairGroupNameHasBeenSet = true;
}

bool CreateInstanceDrillPairsRequest::DrillPairGroupNameHasBeenSet() const
{
    return m_drillPairGroupNameHasBeenSet;
}

string CreateInstanceDrillPairsRequest::GetCreationToken() const
{
    return m_creationToken;
}

void CreateInstanceDrillPairsRequest::SetCreationToken(const string& _creationToken)
{
    m_creationToken = _creationToken;
    m_creationTokenHasBeenSet = true;
}

bool CreateInstanceDrillPairsRequest::CreationTokenHasBeenSet() const
{
    return m_creationTokenHasBeenSet;
}

string CreateInstanceDrillPairsRequest::GetDrillPairGroupId() const
{
    return m_drillPairGroupId;
}

void CreateInstanceDrillPairsRequest::SetDrillPairGroupId(const string& _drillPairGroupId)
{
    m_drillPairGroupId = _drillPairGroupId;
    m_drillPairGroupIdHasBeenSet = true;
}

bool CreateInstanceDrillPairsRequest::DrillPairGroupIdHasBeenSet() const
{
    return m_drillPairGroupIdHasBeenSet;
}

vector<CreateInstanceModel> CreateInstanceDrillPairsRequest::GetCreateTargetInstanceParameters() const
{
    return m_createTargetInstanceParameters;
}

void CreateInstanceDrillPairsRequest::SetCreateTargetInstanceParameters(const vector<CreateInstanceModel>& _createTargetInstanceParameters)
{
    m_createTargetInstanceParameters = _createTargetInstanceParameters;
    m_createTargetInstanceParametersHasBeenSet = true;
}

bool CreateInstanceDrillPairsRequest::CreateTargetInstanceParametersHasBeenSet() const
{
    return m_createTargetInstanceParametersHasBeenSet;
}


