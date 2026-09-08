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

#include <tencentcloud/postgres/v20170312/model/OpenPostgRESTServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Postgres::V20170312::Model;
using namespace std;

OpenPostgRESTServiceRequest::OpenPostgRESTServiceRequest() :
    m_dBInstanceIdHasBeenSet(false),
    m_enableWanNetHasBeenSet(false),
    m_restConfigHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

string OpenPostgRESTServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_dBInstanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DBInstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_dBInstanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_enableWanNetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableWanNet";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableWanNet, allocator);
    }

    if (m_restConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_restConfig.begin(); itr != m_restConfig.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_vpcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpcId.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string OpenPostgRESTServiceRequest::GetDBInstanceId() const
{
    return m_dBInstanceId;
}

void OpenPostgRESTServiceRequest::SetDBInstanceId(const string& _dBInstanceId)
{
    m_dBInstanceId = _dBInstanceId;
    m_dBInstanceIdHasBeenSet = true;
}

bool OpenPostgRESTServiceRequest::DBInstanceIdHasBeenSet() const
{
    return m_dBInstanceIdHasBeenSet;
}

bool OpenPostgRESTServiceRequest::GetEnableWanNet() const
{
    return m_enableWanNet;
}

void OpenPostgRESTServiceRequest::SetEnableWanNet(const bool& _enableWanNet)
{
    m_enableWanNet = _enableWanNet;
    m_enableWanNetHasBeenSet = true;
}

bool OpenPostgRESTServiceRequest::EnableWanNetHasBeenSet() const
{
    return m_enableWanNetHasBeenSet;
}

vector<ParamEntry> OpenPostgRESTServiceRequest::GetRestConfig() const
{
    return m_restConfig;
}

void OpenPostgRESTServiceRequest::SetRestConfig(const vector<ParamEntry>& _restConfig)
{
    m_restConfig = _restConfig;
    m_restConfigHasBeenSet = true;
}

bool OpenPostgRESTServiceRequest::RestConfigHasBeenSet() const
{
    return m_restConfigHasBeenSet;
}

string OpenPostgRESTServiceRequest::GetVpcId() const
{
    return m_vpcId;
}

void OpenPostgRESTServiceRequest::SetVpcId(const string& _vpcId)
{
    m_vpcId = _vpcId;
    m_vpcIdHasBeenSet = true;
}

bool OpenPostgRESTServiceRequest::VpcIdHasBeenSet() const
{
    return m_vpcIdHasBeenSet;
}

string OpenPostgRESTServiceRequest::GetSubnetId() const
{
    return m_subnetId;
}

void OpenPostgRESTServiceRequest::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool OpenPostgRESTServiceRequest::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}


