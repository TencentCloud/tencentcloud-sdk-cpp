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

#include <tencentcloud/ess/v20201111/model/IntegrationDepartment.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

IntegrationDepartment::IntegrationDepartment() :
    m_deptIdHasBeenSet(false),
    m_deptNameHasBeenSet(false),
    m_parentDeptIdHasBeenSet(false),
    m_deptOpenIdHasBeenSet(false),
    m_orderNoHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationDepartment::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeptId") && !value["DeptId"].IsNull())
    {
        if (!value["DeptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationDepartment.DeptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deptId = string(value["DeptId"].GetString());
        m_deptIdHasBeenSet = true;
    }

    if (value.HasMember("DeptName") && !value["DeptName"].IsNull())
    {
        if (!value["DeptName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationDepartment.DeptName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deptName = string(value["DeptName"].GetString());
        m_deptNameHasBeenSet = true;
    }

    if (value.HasMember("ParentDeptId") && !value["ParentDeptId"].IsNull())
    {
        if (!value["ParentDeptId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationDepartment.ParentDeptId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parentDeptId = string(value["ParentDeptId"].GetString());
        m_parentDeptIdHasBeenSet = true;
    }

    if (value.HasMember("DeptOpenId") && !value["DeptOpenId"].IsNull())
    {
        if (!value["DeptOpenId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationDepartment.DeptOpenId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deptOpenId = string(value["DeptOpenId"].GetString());
        m_deptOpenIdHasBeenSet = true;
    }

    if (value.HasMember("OrderNo") && !value["OrderNo"].IsNull())
    {
        if (!value["OrderNo"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationDepartment.OrderNo` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_orderNo = value["OrderNo"].GetUint64();
        m_orderNoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationDepartment::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deptId.c_str(), allocator).Move(), allocator);
    }

    if (m_deptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deptName.c_str(), allocator).Move(), allocator);
    }

    if (m_parentDeptIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParentDeptId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parentDeptId.c_str(), allocator).Move(), allocator);
    }

    if (m_deptOpenIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeptOpenId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deptOpenId.c_str(), allocator).Move(), allocator);
    }

    if (m_orderNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OrderNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_orderNo, allocator);
    }

}


string IntegrationDepartment::GetDeptId() const
{
    return m_deptId;
}

void IntegrationDepartment::SetDeptId(const string& _deptId)
{
    m_deptId = _deptId;
    m_deptIdHasBeenSet = true;
}

bool IntegrationDepartment::DeptIdHasBeenSet() const
{
    return m_deptIdHasBeenSet;
}

string IntegrationDepartment::GetDeptName() const
{
    return m_deptName;
}

void IntegrationDepartment::SetDeptName(const string& _deptName)
{
    m_deptName = _deptName;
    m_deptNameHasBeenSet = true;
}

bool IntegrationDepartment::DeptNameHasBeenSet() const
{
    return m_deptNameHasBeenSet;
}

string IntegrationDepartment::GetParentDeptId() const
{
    return m_parentDeptId;
}

void IntegrationDepartment::SetParentDeptId(const string& _parentDeptId)
{
    m_parentDeptId = _parentDeptId;
    m_parentDeptIdHasBeenSet = true;
}

bool IntegrationDepartment::ParentDeptIdHasBeenSet() const
{
    return m_parentDeptIdHasBeenSet;
}

string IntegrationDepartment::GetDeptOpenId() const
{
    return m_deptOpenId;
}

void IntegrationDepartment::SetDeptOpenId(const string& _deptOpenId)
{
    m_deptOpenId = _deptOpenId;
    m_deptOpenIdHasBeenSet = true;
}

bool IntegrationDepartment::DeptOpenIdHasBeenSet() const
{
    return m_deptOpenIdHasBeenSet;
}

uint64_t IntegrationDepartment::GetOrderNo() const
{
    return m_orderNo;
}

void IntegrationDepartment::SetOrderNo(const uint64_t& _orderNo)
{
    m_orderNo = _orderNo;
    m_orderNoHasBeenSet = true;
}

bool IntegrationDepartment::OrderNoHasBeenSet() const
{
    return m_orderNoHasBeenSet;
}

