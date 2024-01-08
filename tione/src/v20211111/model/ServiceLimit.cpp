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

#include <tencentcloud/tione/v20211111/model/ServiceLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

ServiceLimit::ServiceLimit() :
    m_enableInstanceRpsLimitHasBeenSet(false),
    m_instanceRpsLimitHasBeenSet(false),
    m_enableInstanceReqLimitHasBeenSet(false),
    m_instanceReqLimitHasBeenSet(false)
{
}

CoreInternalOutcome ServiceLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnableInstanceRpsLimit") && !value["EnableInstanceRpsLimit"].IsNull())
    {
        if (!value["EnableInstanceRpsLimit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceLimit.EnableInstanceRpsLimit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableInstanceRpsLimit = value["EnableInstanceRpsLimit"].GetBool();
        m_enableInstanceRpsLimitHasBeenSet = true;
    }

    if (value.HasMember("InstanceRpsLimit") && !value["InstanceRpsLimit"].IsNull())
    {
        if (!value["InstanceRpsLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceLimit.InstanceRpsLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRpsLimit = value["InstanceRpsLimit"].GetInt64();
        m_instanceRpsLimitHasBeenSet = true;
    }

    if (value.HasMember("EnableInstanceReqLimit") && !value["EnableInstanceReqLimit"].IsNull())
    {
        if (!value["EnableInstanceReqLimit"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceLimit.EnableInstanceReqLimit` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableInstanceReqLimit = value["EnableInstanceReqLimit"].GetBool();
        m_enableInstanceReqLimitHasBeenSet = true;
    }

    if (value.HasMember("InstanceReqLimit") && !value["InstanceReqLimit"].IsNull())
    {
        if (!value["InstanceReqLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceLimit.InstanceReqLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceReqLimit = value["InstanceReqLimit"].GetInt64();
        m_instanceReqLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_enableInstanceRpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableInstanceRpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableInstanceRpsLimit, allocator);
    }

    if (m_instanceRpsLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRpsLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceRpsLimit, allocator);
    }

    if (m_enableInstanceReqLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableInstanceReqLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableInstanceReqLimit, allocator);
    }

    if (m_instanceReqLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceReqLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceReqLimit, allocator);
    }

}


bool ServiceLimit::GetEnableInstanceRpsLimit() const
{
    return m_enableInstanceRpsLimit;
}

void ServiceLimit::SetEnableInstanceRpsLimit(const bool& _enableInstanceRpsLimit)
{
    m_enableInstanceRpsLimit = _enableInstanceRpsLimit;
    m_enableInstanceRpsLimitHasBeenSet = true;
}

bool ServiceLimit::EnableInstanceRpsLimitHasBeenSet() const
{
    return m_enableInstanceRpsLimitHasBeenSet;
}

int64_t ServiceLimit::GetInstanceRpsLimit() const
{
    return m_instanceRpsLimit;
}

void ServiceLimit::SetInstanceRpsLimit(const int64_t& _instanceRpsLimit)
{
    m_instanceRpsLimit = _instanceRpsLimit;
    m_instanceRpsLimitHasBeenSet = true;
}

bool ServiceLimit::InstanceRpsLimitHasBeenSet() const
{
    return m_instanceRpsLimitHasBeenSet;
}

bool ServiceLimit::GetEnableInstanceReqLimit() const
{
    return m_enableInstanceReqLimit;
}

void ServiceLimit::SetEnableInstanceReqLimit(const bool& _enableInstanceReqLimit)
{
    m_enableInstanceReqLimit = _enableInstanceReqLimit;
    m_enableInstanceReqLimitHasBeenSet = true;
}

bool ServiceLimit::EnableInstanceReqLimitHasBeenSet() const
{
    return m_enableInstanceReqLimitHasBeenSet;
}

int64_t ServiceLimit::GetInstanceReqLimit() const
{
    return m_instanceReqLimit;
}

void ServiceLimit::SetInstanceReqLimit(const int64_t& _instanceReqLimit)
{
    m_instanceReqLimit = _instanceReqLimit;
    m_instanceReqLimitHasBeenSet = true;
}

bool ServiceLimit::InstanceReqLimitHasBeenSet() const
{
    return m_instanceReqLimitHasBeenSet;
}

