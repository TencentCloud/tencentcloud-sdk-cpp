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

#include <tencentcloud/tsf/v20180326/model/ServiceSetting.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ServiceSetting::ServiceSetting() :
    m_accessTypeHasBeenSet(false),
    m_protocolPortsHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_disableServiceHasBeenSet(false),
    m_headlessServiceHasBeenSet(false),
    m_allowDeleteServiceHasBeenSet(false)
{
}

CoreInternalOutcome ServiceSetting::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `ServiceSetting.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("ProtocolPorts") && !value["ProtocolPorts"].IsNull())
    {
        if (!value["ProtocolPorts"].IsArray())
            return CoreInternalOutcome(Error("response `ServiceSetting.ProtocolPorts` is not array type"));

        const rapidjson::Value &tmpValue = value["ProtocolPorts"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProtocolPort item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_protocolPorts.push_back(item);
        }
        m_protocolPortsHasBeenSet = true;
    }

    if (value.HasMember("SubnetId") && !value["SubnetId"].IsNull())
    {
        if (!value["SubnetId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ServiceSetting.SubnetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subnetId = string(value["SubnetId"].GetString());
        m_subnetIdHasBeenSet = true;
    }

    if (value.HasMember("DisableService") && !value["DisableService"].IsNull())
    {
        if (!value["DisableService"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ServiceSetting.DisableService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_disableService = value["DisableService"].GetBool();
        m_disableServiceHasBeenSet = true;
    }

    if (value.HasMember("HeadlessService") && !value["HeadlessService"].IsNull())
    {
        if (!value["HeadlessService"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ServiceSetting.HeadlessService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_headlessService = value["HeadlessService"].GetBool();
        m_headlessServiceHasBeenSet = true;
    }

    if (value.HasMember("AllowDeleteService") && !value["AllowDeleteService"].IsNull())
    {
        if (!value["AllowDeleteService"].IsBool())
        {
            return CoreInternalOutcome(Error("response `ServiceSetting.AllowDeleteService` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowDeleteService = value["AllowDeleteService"].GetBool();
        m_allowDeleteServiceHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceSetting::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_protocolPortsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtocolPorts";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocolPorts.begin(); itr != m_protocolPorts.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_subnetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subnetId.c_str(), allocator).Move(), allocator);
    }

    if (m_disableServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DisableService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_disableService, allocator);
    }

    if (m_headlessServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeadlessService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_headlessService, allocator);
    }

    if (m_allowDeleteServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowDeleteService";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowDeleteService, allocator);
    }

}


int64_t ServiceSetting::GetAccessType() const
{
    return m_accessType;
}

void ServiceSetting::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool ServiceSetting::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<ProtocolPort> ServiceSetting::GetProtocolPorts() const
{
    return m_protocolPorts;
}

void ServiceSetting::SetProtocolPorts(const vector<ProtocolPort>& _protocolPorts)
{
    m_protocolPorts = _protocolPorts;
    m_protocolPortsHasBeenSet = true;
}

bool ServiceSetting::ProtocolPortsHasBeenSet() const
{
    return m_protocolPortsHasBeenSet;
}

string ServiceSetting::GetSubnetId() const
{
    return m_subnetId;
}

void ServiceSetting::SetSubnetId(const string& _subnetId)
{
    m_subnetId = _subnetId;
    m_subnetIdHasBeenSet = true;
}

bool ServiceSetting::SubnetIdHasBeenSet() const
{
    return m_subnetIdHasBeenSet;
}

bool ServiceSetting::GetDisableService() const
{
    return m_disableService;
}

void ServiceSetting::SetDisableService(const bool& _disableService)
{
    m_disableService = _disableService;
    m_disableServiceHasBeenSet = true;
}

bool ServiceSetting::DisableServiceHasBeenSet() const
{
    return m_disableServiceHasBeenSet;
}

bool ServiceSetting::GetHeadlessService() const
{
    return m_headlessService;
}

void ServiceSetting::SetHeadlessService(const bool& _headlessService)
{
    m_headlessService = _headlessService;
    m_headlessServiceHasBeenSet = true;
}

bool ServiceSetting::HeadlessServiceHasBeenSet() const
{
    return m_headlessServiceHasBeenSet;
}

bool ServiceSetting::GetAllowDeleteService() const
{
    return m_allowDeleteService;
}

void ServiceSetting::SetAllowDeleteService(const bool& _allowDeleteService)
{
    m_allowDeleteService = _allowDeleteService;
    m_allowDeleteServiceHasBeenSet = true;
}

bool ServiceSetting::AllowDeleteServiceHasBeenSet() const
{
    return m_allowDeleteServiceHasBeenSet;
}

