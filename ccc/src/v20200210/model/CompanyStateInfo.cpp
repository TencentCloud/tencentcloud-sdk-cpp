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

#include <tencentcloud/ccc/v20200210/model/CompanyStateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CompanyStateInfo::CompanyStateInfo() :
    m_idHasBeenSet(false),
    m_companyNameHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_checkTimeHasBeenSet(false),
    m_checkMsgHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_businessIdHasBeenSet(false),
    m_modifyTimeHasBeenSet(false),
    m_contractNoHasBeenSet(false)
{
}

CoreInternalOutcome CompanyStateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyStateInfo.Id` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetInt64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("CompanyName") && !value["CompanyName"].IsNull())
    {
        if (!value["CompanyName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyStateInfo.CompanyName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_companyName = string(value["CompanyName"].GetString());
        m_companyNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyStateInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckTime") && !value["CheckTime"].IsNull())
    {
        if (!value["CheckTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyStateInfo.CheckTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkTime = value["CheckTime"].GetInt64();
        m_checkTimeHasBeenSet = true;
    }

    if (value.HasMember("CheckMsg") && !value["CheckMsg"].IsNull())
    {
        if (!value["CheckMsg"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyStateInfo.CheckMsg` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkMsg = string(value["CheckMsg"].GetString());
        m_checkMsgHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyStateInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("BusinessId") && !value["BusinessId"].IsNull())
    {
        if (!value["BusinessId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyStateInfo.BusinessId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_businessId = string(value["BusinessId"].GetString());
        m_businessIdHasBeenSet = true;
    }

    if (value.HasMember("ModifyTime") && !value["ModifyTime"].IsNull())
    {
        if (!value["ModifyTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyStateInfo.ModifyTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_modifyTime = value["ModifyTime"].GetInt64();
        m_modifyTimeHasBeenSet = true;
    }

    if (value.HasMember("ContractNo") && !value["ContractNo"].IsNull())
    {
        if (!value["ContractNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CompanyStateInfo.ContractNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contractNo = string(value["ContractNo"].GetString());
        m_contractNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CompanyStateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_companyNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompanyName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_companyName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_checkTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkTime, allocator);
    }

    if (m_checkMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckMsg";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkMsg.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_businessIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusinessId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_businessId.c_str(), allocator).Move(), allocator);
    }

    if (m_modifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_modifyTime, allocator);
    }

    if (m_contractNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContractNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contractNo.c_str(), allocator).Move(), allocator);
    }

}


int64_t CompanyStateInfo::GetId() const
{
    return m_id;
}

void CompanyStateInfo::SetId(const int64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool CompanyStateInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string CompanyStateInfo::GetCompanyName() const
{
    return m_companyName;
}

void CompanyStateInfo::SetCompanyName(const string& _companyName)
{
    m_companyName = _companyName;
    m_companyNameHasBeenSet = true;
}

bool CompanyStateInfo::CompanyNameHasBeenSet() const
{
    return m_companyNameHasBeenSet;
}

int64_t CompanyStateInfo::GetCreateTime() const
{
    return m_createTime;
}

void CompanyStateInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CompanyStateInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t CompanyStateInfo::GetCheckTime() const
{
    return m_checkTime;
}

void CompanyStateInfo::SetCheckTime(const int64_t& _checkTime)
{
    m_checkTime = _checkTime;
    m_checkTimeHasBeenSet = true;
}

bool CompanyStateInfo::CheckTimeHasBeenSet() const
{
    return m_checkTimeHasBeenSet;
}

string CompanyStateInfo::GetCheckMsg() const
{
    return m_checkMsg;
}

void CompanyStateInfo::SetCheckMsg(const string& _checkMsg)
{
    m_checkMsg = _checkMsg;
    m_checkMsgHasBeenSet = true;
}

bool CompanyStateInfo::CheckMsgHasBeenSet() const
{
    return m_checkMsgHasBeenSet;
}

int64_t CompanyStateInfo::GetState() const
{
    return m_state;
}

void CompanyStateInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CompanyStateInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CompanyStateInfo::GetBusinessId() const
{
    return m_businessId;
}

void CompanyStateInfo::SetBusinessId(const string& _businessId)
{
    m_businessId = _businessId;
    m_businessIdHasBeenSet = true;
}

bool CompanyStateInfo::BusinessIdHasBeenSet() const
{
    return m_businessIdHasBeenSet;
}

int64_t CompanyStateInfo::GetModifyTime() const
{
    return m_modifyTime;
}

void CompanyStateInfo::SetModifyTime(const int64_t& _modifyTime)
{
    m_modifyTime = _modifyTime;
    m_modifyTimeHasBeenSet = true;
}

bool CompanyStateInfo::ModifyTimeHasBeenSet() const
{
    return m_modifyTimeHasBeenSet;
}

string CompanyStateInfo::GetContractNo() const
{
    return m_contractNo;
}

void CompanyStateInfo::SetContractNo(const string& _contractNo)
{
    m_contractNo = _contractNo;
    m_contractNoHasBeenSet = true;
}

bool CompanyStateInfo::ContractNoHasBeenSet() const
{
    return m_contractNoHasBeenSet;
}

