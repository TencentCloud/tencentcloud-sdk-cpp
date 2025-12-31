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

#include <tencentcloud/cfw/v20190904/model/CcnAssociatedInstance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

CcnAssociatedInstance::CcnAssociatedInstance() :
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_insTypeHasBeenSet(false),
    m_cidrLstHasBeenSet(false),
    m_instanceRegionHasBeenSet(false)
{
}

CoreInternalOutcome CcnAssociatedInstance::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnAssociatedInstance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnAssociatedInstance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InsType") && !value["InsType"].IsNull())
    {
        if (!value["InsType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnAssociatedInstance.InsType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insType = string(value["InsType"].GetString());
        m_insTypeHasBeenSet = true;
    }

    if (value.HasMember("CidrLst") && !value["CidrLst"].IsNull())
    {
        if (!value["CidrLst"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CcnAssociatedInstance.CidrLst` is not array type"));

        const rapidjson::Value &tmpValue = value["CidrLst"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_cidrLst.push_back((*itr).GetString());
        }
        m_cidrLstHasBeenSet = true;
    }

    if (value.HasMember("InstanceRegion") && !value["InstanceRegion"].IsNull())
    {
        if (!value["InstanceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CcnAssociatedInstance.InstanceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceRegion = string(value["InstanceRegion"].GetString());
        m_instanceRegionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CcnAssociatedInstance::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_insTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insType.c_str(), allocator).Move(), allocator);
    }

    if (m_cidrLstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrLst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_cidrLst.begin(); itr != m_cidrLst.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_instanceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceRegion.c_str(), allocator).Move(), allocator);
    }

}


string CcnAssociatedInstance::GetInstanceId() const
{
    return m_instanceId;
}

void CcnAssociatedInstance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool CcnAssociatedInstance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string CcnAssociatedInstance::GetInstanceName() const
{
    return m_instanceName;
}

void CcnAssociatedInstance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool CcnAssociatedInstance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string CcnAssociatedInstance::GetInsType() const
{
    return m_insType;
}

void CcnAssociatedInstance::SetInsType(const string& _insType)
{
    m_insType = _insType;
    m_insTypeHasBeenSet = true;
}

bool CcnAssociatedInstance::InsTypeHasBeenSet() const
{
    return m_insTypeHasBeenSet;
}

vector<string> CcnAssociatedInstance::GetCidrLst() const
{
    return m_cidrLst;
}

void CcnAssociatedInstance::SetCidrLst(const vector<string>& _cidrLst)
{
    m_cidrLst = _cidrLst;
    m_cidrLstHasBeenSet = true;
}

bool CcnAssociatedInstance::CidrLstHasBeenSet() const
{
    return m_cidrLstHasBeenSet;
}

string CcnAssociatedInstance::GetInstanceRegion() const
{
    return m_instanceRegion;
}

void CcnAssociatedInstance::SetInstanceRegion(const string& _instanceRegion)
{
    m_instanceRegion = _instanceRegion;
    m_instanceRegionHasBeenSet = true;
}

bool CcnAssociatedInstance::InstanceRegionHasBeenSet() const
{
    return m_instanceRegionHasBeenSet;
}

