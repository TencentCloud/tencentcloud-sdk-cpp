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

#include <tencentcloud/clb/v20180317/model/LBOperateProtectInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Clb::V20180317::Model;
using namespace std;

LBOperateProtectInfo::LBOperateProtectInfo() :
    m_loadBalancerIdHasBeenSet(false),
    m_protectStateHasBeenSet(false),
    m_operatorUinHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modifyTimeHasBeenSet(false)
{
}

CoreInternalOutcome LBOperateProtectInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LoadBalancerId") && !value["LoadBalancerId"].IsNull())
    {
        if (!value["LoadBalancerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LBOperateProtectInfo.LoadBalancerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalancerId = string(value["LoadBalancerId"].GetString());
        m_loadBalancerIdHasBeenSet = true;
    }

    if (value.HasMember("ProtectState") && !value["ProtectState"].IsNull())
    {
        if (!value["ProtectState"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `LBOperateProtectInfo.ProtectState` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_protectState = value["ProtectState"].GetBool();
        m_protectStateHasBeenSet = true;
    }

    if (value.HasMember("OperatorUin") && !value["OperatorUin"].IsNull())
    {
        if (!value["OperatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LBOperateProtectInfo.OperatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUin = string(value["OperatorUin"].GetString());
        m_operatorUinHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LBOperateProtectInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LBOperateProtectInfo.ModifyTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = string(value["ModifyTime"].GetString());
        m_modifyTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LBOperateProtectInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_loadBalancerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalancerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_loadBalancerId.c_str(), allocator).Move(), allocator);
    }

    if (m_protectStateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_protectState, allocator);
    }

    if (m_operatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifyTime.c_str(), allocator).Move(), allocator);
    }

}


string LBOperateProtectInfo::GetLoadBalancerId() const
{
    return m_loadBalancerId;
}

void LBOperateProtectInfo::SetLoadBalancerId(const string& _loadBalancerId)
{
    m_loadBalancerId = _loadBalancerId;
    m_loadBalancerIdHasBeenSet = true;
}

bool LBOperateProtectInfo::LoadBalancerIdHasBeenSet() const
{
    return m_loadBalancerIdHasBeenSet;
}

bool LBOperateProtectInfo::GetProtectState() const
{
    return m_protectState;
}

void LBOperateProtectInfo::SetProtectState(const bool& _protectState)
{
    m_protectState = _protectState;
    m_protectStateHasBeenSet = true;
}

bool LBOperateProtectInfo::ProtectStateHasBeenSet() const
{
    return m_protectStateHasBeenSet;
}

string LBOperateProtectInfo::GetOperatorUin() const
{
    return m_operatorUin;
}

void LBOperateProtectInfo::SetOperatorUin(const string& _operatorUin)
{
    m_operatorUin = _operatorUin;
    m_operatorUinHasBeenSet = true;
}

bool LBOperateProtectInfo::OperatorUinHasBeenSet() const
{
    return m_operatorUinHasBeenSet;
}

string LBOperateProtectInfo::GetDescription() const
{
    return m_description;
}

void LBOperateProtectInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LBOperateProtectInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LBOperateProtectInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void LBOperateProtectInfo::SetModifyTime(const string& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool LBOperateProtectInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

