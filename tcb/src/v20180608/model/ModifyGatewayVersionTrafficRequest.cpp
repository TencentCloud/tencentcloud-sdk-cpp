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

#include <tencentcloud/tcb/v20180608/model/ModifyGatewayVersionTrafficRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

ModifyGatewayVersionTrafficRequest::ModifyGatewayVersionTrafficRequest() :
    m_envIdHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_versionsWeightHasBeenSet(false)
{
}

string ModifyGatewayVersionTrafficRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_versionsWeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionsWeight";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_versionsWeight.begin(); itr != m_versionsWeight.end(); ++itr, ++i)
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


string ModifyGatewayVersionTrafficRequest::GetEnvId() const
{
    return m_envId;
}

void ModifyGatewayVersionTrafficRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool ModifyGatewayVersionTrafficRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string ModifyGatewayVersionTrafficRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyGatewayVersionTrafficRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyGatewayVersionTrafficRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

vector<GatewayVersionItem> ModifyGatewayVersionTrafficRequest::GetVersionsWeight() const
{
    return m_versionsWeight;
}

void ModifyGatewayVersionTrafficRequest::SetVersionsWeight(const vector<GatewayVersionItem>& _versionsWeight)
{
    m_versionsWeight = _versionsWeight;
    m_versionsWeightHasBeenSet = true;
}

bool ModifyGatewayVersionTrafficRequest::VersionsWeightHasBeenSet() const
{
    return m_versionsWeightHasBeenSet;
}


