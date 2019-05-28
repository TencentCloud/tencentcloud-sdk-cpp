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

#include <tencentcloud/vpc/v20170312/model/CcnInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CcnInstance::CcnInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceRegionHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

CoreInternalOutcome CcnInstance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceRegion") && !value["InstanceRegion"].IsNull())
    {
        if (!value["InstanceRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnInstance.InstanceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRegion = string(value["InstanceRegion"].GetString());
        m_instanceRegionHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnInstance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

}


string CcnInstance::GetInstanceId() const
{
    return m_instanceId;
}

void CcnInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcnInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcnInstance::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void CcnInstance::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool CcnInstance::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

string CcnInstance::GetInstanceType() const
{
    return m_instanceType;
}

void CcnInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CcnInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

