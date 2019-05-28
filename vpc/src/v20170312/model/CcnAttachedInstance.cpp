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

#include <tencentcloud/vpc/v20170312/model/CcnAttachedInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vpc::V20170312::Model;
using namespace rapidjson;
using namespace std;

CcnAttachedInstance::CcnAttachedInstance() :
    m_ccnIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceRegionHasBeenSet(false),
    m_instanceUinHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_attachedTimeHasBeenSet(false),
    m_ccnUinHasBeenSet(false)
{
}

CoreInternalOutcome CcnAttachedInstance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("CcnId") && !value["CcnId"].IsNull())
    {
        if (!value["CcnId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.CcnId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnId = string(value["CcnId"].GetString());
        m_ccnIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceType") && !value["InstanceType"].IsNull())
    {
        if (!value["InstanceType"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.InstanceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceType = string(value["InstanceType"].GetString());
        m_instanceTypeHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceRegion") && !value["InstanceRegion"].IsNull())
    {
        if (!value["InstanceRegion"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.InstanceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRegion = string(value["InstanceRegion"].GetString());
        m_instanceRegionHasBeenSet = true;
    }

    if (value.HasMember("InstanceUin") && !value["InstanceUin"].IsNull())
    {
        if (!value["InstanceUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.InstanceUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceUin = string(value["InstanceUin"].GetString());
        m_instanceUinHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsArray())
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.CidrBlock` is not array type"));

        const Value &tmpValue = value["CidrBlock"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cidrBlock.push_back((*itr).GetString());
        }
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.State` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_state = string(value["State"].GetString());
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("AttachedTime") && !value["AttachedTime"].IsNull())
    {
        if (!value["AttachedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.AttachedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attachedTime = string(value["AttachedTime"].GetString());
        m_attachedTimeHasBeenSet = true;
    }

    if (value.HasMember("CcnUin") && !value["CcnUin"].IsNull())
    {
        if (!value["CcnUin"].IsString())
        {
            return CoreInternalOutcome(Error("response `CcnAttachedInstance.CcnUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ccnUin = string(value["CcnUin"].GetString());
        m_ccnUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnAttachedInstance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_ccnIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ccnId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceType.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceRegionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceUin.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_cidrBlock.begin(); itr != m_cidrBlock.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_state.c_str(), allocator).Move(), allocator);
    }

    if (m_attachedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AttachedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_attachedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_ccnUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CcnUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_ccnUin.c_str(), allocator).Move(), allocator);
    }

}


string CcnAttachedInstance::GetCcnId() const
{
    return m_ccnId;
}

void CcnAttachedInstance::SetCcnId(const string& _ccnId)
{
    m_ccnId = _ccnId;
    m_ccnIdHasBeenSet = true;
}

bool CcnAttachedInstance::CcnIdHasBeenSet() const
{
    return m_ccnIdHasBeenSet;
}

string CcnAttachedInstance::GetInstanceType() const
{
    return m_instanceType;
}

void CcnAttachedInstance::SetInstanceType(const string& _instanceType)
{
    m_instanceType = _instanceType;
    m_instanceTypeHasBeenSet = true;
}

bool CcnAttachedInstance::InstanceTypeHasBeenSet() const
{
    return m_instanceTypeHasBeenSet;
}

string CcnAttachedInstance::GetInstanceId() const
{
    return m_instanceId;
}

void CcnAttachedInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcnAttachedInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcnAttachedInstance::GetInstanceName() const
{
    return m_instanceName;
}

void CcnAttachedInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CcnAttachedInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CcnAttachedInstance::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void CcnAttachedInstance::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool CcnAttachedInstance::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

string CcnAttachedInstance::GetInstanceUin() const
{
    return m_instanceUin;
}

void CcnAttachedInstance::SetInstanceUin(const string& _instanceUin)
{
    m_instanceUin = _instanceUin;
    m_instanceUinHasBeenSet = true;
}

bool CcnAttachedInstance::InstanceUinHasBeenSet() const
{
    return m_instanceUinHasBeenSet;
}

vector<string> CcnAttachedInstance::GetCidrBlock() const
{
    return m_cidrBlock;
}

void CcnAttachedInstance::SetCidrBlock(const vector<string>& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool CcnAttachedInstance::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

string CcnAttachedInstance::GetState() const
{
    return m_state;
}

void CcnAttachedInstance::SetState(const string& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CcnAttachedInstance::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CcnAttachedInstance::GetAttachedTime() const
{
    return m_attachedTime;
}

void CcnAttachedInstance::SetAttachedTime(const string& _attachedTime)
{
    m_attachedTime = _attachedTime;
    m_attachedTimeHasBeenSet = true;
}

bool CcnAttachedInstance::AttachedTimeHasBeenSet() const
{
    return m_attachedTimeHasBeenSet;
}

string CcnAttachedInstance::GetCcnUin() const
{
    return m_ccnUin;
}

void CcnAttachedInstance::SetCcnUin(const string& _ccnUin)
{
    m_ccnUin = _ccnUin;
    m_ccnUinHasBeenSet = true;
}

bool CcnAttachedInstance::CcnUinHasBeenSet() const
{
    return m_ccnUinHasBeenSet;
}

