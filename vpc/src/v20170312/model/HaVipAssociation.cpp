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

#include <tencentcloud/vpc/v20170312/model/HaVipAssociation.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace std;

HaVipAssociation::HaVipAssociation() :
    m_instanceIdHasBeenSet(false),
    m_haVipIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome HaVipAssociation::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVipAssociation.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("HaVipId") && !value["HaVipId"].IsNull())
    {
        if (!value["HaVipId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVipAssociation.HaVipId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_haVipId = string(value["HaVipId"].GetString());
        m_haVipIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HaVipAssociation.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HaVipAssociation::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_haVipIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HaVipId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_haVipId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

}


string HaVipAssociation::GetInstanceId() const
{
    return m_instanceId;
}

void HaVipAssociation::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool HaVipAssociation::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string HaVipAssociation::GetHaVipId() const
{
    return m_haVipId;
}

void HaVipAssociation::SetHaVipId(const string& _haVipId)
{
    m_haVipId = _haVipId;
    m_haVipIdHasBeenSet = true;
}

bool HaVipAssociation::HaVipIdHasBeenSet() const
{
    return m_haVipIdHasBeenSet;
}

string HaVipAssociation::GetInstanceType() const
{
    return m_instanceType;
}

void HaVipAssociation::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool HaVipAssociation::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

