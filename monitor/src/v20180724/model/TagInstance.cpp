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

#include <tencentcloud/monitor/v20180724/model/TagInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

TagInstance::TagInstance() :
    m_keyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_instanceSumHasBeenSet(false),
    m_serviceTypeHasBeenSet(false),
    m_regionIdHasBeenSet(false),
    m_bindingStatusHasBeenSet(false),
    m_tagStatusHasBeenSet(false)
{
}

CoreInternalOutcome TagInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Key") && !value["Key"].IsNull())
    {
        if (!value["Key"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInstance.Key` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_key = string(value["Key"].GetString());
        m_keyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInstance.Value` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_value = string(value["Value"].GetString());
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("InstanceSum") && !value["InstanceSum"].IsNull())
    {
        if (!value["InstanceSum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagInstance.InstanceSum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceSum = value["InstanceSum"].GetInt64();
        m_instanceSumHasBeenSet = true;
    }

    if (value.HasMember("ServiceType") && !value["ServiceType"].IsNull())
    {
        if (!value["ServiceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagInstance.ServiceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serviceType = string(value["ServiceType"].GetString());
        m_serviceTypeHasBeenSet = true;
    }

    if (value.HasMember("RegionId") && !value["RegionId"].IsNull())
    {
        if (!value["RegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagInstance.RegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_regionId = value["RegionId"].GetInt64();
        m_regionIdHasBeenSet = true;
    }

    if (value.HasMember("BindingStatus") && !value["BindingStatus"].IsNull())
    {
        if (!value["BindingStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagInstance.BindingStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_bindingStatus = value["BindingStatus"].GetInt64();
        m_bindingStatusHasBeenSet = true;
    }

    if (value.HasMember("TagStatus") && !value["TagStatus"].IsNull())
    {
        if (!value["TagStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagInstance.TagStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tagStatus = value["TagStatus"].GetInt64();
        m_tagStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_keyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Key";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_key.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_value.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceSumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceSum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceSum, allocator);
    }

    if (m_serviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_regionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_regionId, allocator);
    }

    if (m_bindingStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_bindingStatus, allocator);
    }

    if (m_tagStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tagStatus, allocator);
    }

}


string TagInstance::GetKey() const
{
    return m_key;
}

void TagInstance::SetKey(const string& _key)
{
    m_key = _key;
    m_keyHasBeenSet = true;
}

bool TagInstance::KeyHasBeenSet() const
{
    return m_keyHasBeenSet;
}

string TagInstance::GetValue() const
{
    return m_value;
}

void TagInstance::SetValue(const string& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool TagInstance::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

int64_t TagInstance::GetInstanceSum() const
{
    return m_instanceSum;
}

void TagInstance::SetInstanceSum(const int64_t& _instanceSum)
{
    m_instanceSum = _instanceSum;
    m_instanceSumHasBeenSet = true;
}

bool TagInstance::InstanceSumHasBeenSet() const
{
    return m_instanceSumHasBeenSet;
}

string TagInstance::GetServiceType() const
{
    return m_serviceType;
}

void TagInstance::SetServiceType(const string& _serviceType)
{
    m_serviceType = _serviceType;
    m_serviceTypeHasBeenSet = true;
}

bool TagInstance::ServiceTypeHasBeenSet() const
{
    return m_serviceTypeHasBeenSet;
}

int64_t TagInstance::GetRegionId() const
{
    return m_regionId;
}

void TagInstance::SetRegionId(const int64_t& _regionId)
{
    m_regionId = _regionId;
    m_regionIdHasBeenSet = true;
}

bool TagInstance::RegionIdHasBeenSet() const
{
    return m_regionIdHasBeenSet;
}

int64_t TagInstance::GetBindingStatus() const
{
    return m_bindingStatus;
}

void TagInstance::SetBindingStatus(const int64_t& _bindingStatus)
{
    m_bindingStatus = _bindingStatus;
    m_bindingStatusHasBeenSet = true;
}

bool TagInstance::BindingStatusHasBeenSet() const
{
    return m_bindingStatusHasBeenSet;
}

int64_t TagInstance::GetTagStatus() const
{
    return m_tagStatus;
}

void TagInstance::SetTagStatus(const int64_t& _tagStatus)
{
    m_tagStatus = _tagStatus;
    m_tagStatusHasBeenSet = true;
}

bool TagInstance::TagStatusHasBeenSet() const
{
    return m_tagStatusHasBeenSet;
}

