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

#include <tencentcloud/apm/v20210622/model/ServiceDetail.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Apm::V20210622::Model;
using namespace std;

ServiceDetail::ServiceDetail() :
    m_serviceIDHasBeenSet(false),
    m_instanceKeyHasBeenSet(false),
    m_appIDHasBeenSet(false),
    m_createUINHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceDescriptionHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_instanceNameHasBeenSet(false)
{
}

CoreInternalOutcome ServiceDetail::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ServiceID") && !value["ServiceID"].IsNull())
    {
        if (!value["ServiceID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.ServiceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceID = string(value["ServiceID"].GetString());
        m_serviceIDHasBeenSet = true;
    }

    if (value.HasMember("InstanceKey") && !value["InstanceKey"].IsNull())
    {
        if (!value["InstanceKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.InstanceKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceKey = string(value["InstanceKey"].GetString());
        m_instanceKeyHasBeenSet = true;
    }

    if (value.HasMember("AppID") && !value["AppID"].IsNull())
    {
        if (!value["AppID"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.AppID` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appID = value["AppID"].GetInt64();
        m_appIDHasBeenSet = true;
    }

    if (value.HasMember("CreateUIN") && !value["CreateUIN"].IsNull())
    {
        if (!value["CreateUIN"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.CreateUIN` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createUIN = string(value["CreateUIN"].GetString());
        m_createUINHasBeenSet = true;
    }

    if (value.HasMember("ServiceName") && !value["ServiceName"].IsNull())
    {
        if (!value["ServiceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.ServiceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceName = string(value["ServiceName"].GetString());
        m_serviceNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceDescription") && !value["ServiceDescription"].IsNull())
    {
        if (!value["ServiceDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.ServiceDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceDescription = string(value["ServiceDescription"].GetString());
        m_serviceDescriptionHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmTag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceDetail.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceDetail::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_serviceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceID.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceKey.c_str(), allocator).Move(), allocator);
    }

    if (m_appIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appID, allocator);
    }

    if (m_createUINHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUIN";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createUIN.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

}


string ServiceDetail::GetServiceID() const
{
    return m_serviceID;
}

void ServiceDetail::SetServiceID(const string& _serviceID)
{
    m_serviceID = _serviceID;
    m_serviceIDHasBeenSet = true;
}

bool ServiceDetail::ServiceIDHasBeenSet() const
{
    return m_serviceIDHasBeenSet;
}

string ServiceDetail::GetInstanceKey() const
{
    return m_instanceKey;
}

void ServiceDetail::SetInstanceKey(const string& _instanceKey)
{
    m_instanceKey = _instanceKey;
    m_instanceKeyHasBeenSet = true;
}

bool ServiceDetail::InstanceKeyHasBeenSet() const
{
    return m_instanceKeyHasBeenSet;
}

int64_t ServiceDetail::GetAppID() const
{
    return m_appID;
}

void ServiceDetail::SetAppID(const int64_t& _appID)
{
    m_appID = _appID;
    m_appIDHasBeenSet = true;
}

bool ServiceDetail::AppIDHasBeenSet() const
{
    return m_appIDHasBeenSet;
}

string ServiceDetail::GetCreateUIN() const
{
    return m_createUIN;
}

void ServiceDetail::SetCreateUIN(const string& _createUIN)
{
    m_createUIN = _createUIN;
    m_createUINHasBeenSet = true;
}

bool ServiceDetail::CreateUINHasBeenSet() const
{
    return m_createUINHasBeenSet;
}

string ServiceDetail::GetServiceName() const
{
    return m_serviceName;
}

void ServiceDetail::SetServiceName(const string& _serviceName)
{
    m_serviceName = _serviceName;
    m_serviceNameHasBeenSet = true;
}

bool ServiceDetail::ServiceNameHasBeenSet() const
{
    return m_serviceNameHasBeenSet;
}

string ServiceDetail::GetServiceDescription() const
{
    return m_serviceDescription;
}

void ServiceDetail::SetServiceDescription(const string& _serviceDescription)
{
    m_serviceDescription = _serviceDescription;
    m_serviceDescriptionHasBeenSet = true;
}

bool ServiceDetail::ServiceDescriptionHasBeenSet() const
{
    return m_serviceDescriptionHasBeenSet;
}

string ServiceDetail::GetRegion() const
{
    return m_region;
}

void ServiceDetail::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool ServiceDetail::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

vector<ApmTag> ServiceDetail::GetTags() const
{
    return m_tags;
}

void ServiceDetail::SetTags(const vector<ApmTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ServiceDetail::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ServiceDetail::GetInstanceName() const
{
    return m_instanceName;
}

void ServiceDetail::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ServiceDetail::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

