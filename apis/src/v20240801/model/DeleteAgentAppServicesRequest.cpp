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

#include <tencentcloud/apis/v20240801/model/DeleteAgentAppServicesRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

DeleteAgentAppServicesRequest::DeleteAgentAppServicesRequest() :
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_serviceIDsHasBeenSet(false)
{
}

string DeleteAgentAppServicesRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceIDsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceIDs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_serviceIDs.begin(); itr != m_serviceIDs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteAgentAppServicesRequest::GetInstanceID() const
{
    return m_instanceID;
}

void DeleteAgentAppServicesRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool DeleteAgentAppServicesRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string DeleteAgentAppServicesRequest::GetID() const
{
    return m_iD;
}

void DeleteAgentAppServicesRequest::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool DeleteAgentAppServicesRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

vector<string> DeleteAgentAppServicesRequest::GetServiceIDs() const
{
    return m_serviceIDs;
}

void DeleteAgentAppServicesRequest::SetServiceIDs(const vector<string>& _serviceIDs)
{
    m_serviceIDs = _serviceIDs;
    m_serviceIDsHasBeenSet = true;
}

bool DeleteAgentAppServicesRequest::ServiceIDsHasBeenSet() const
{
    return m_serviceIDsHasBeenSet;
}


