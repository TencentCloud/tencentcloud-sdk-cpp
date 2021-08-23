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

#include <tencentcloud/partners/v20180321/model/AgentSalesmanElem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Partners::V20180321::Model;
using namespace std;

AgentSalesmanElem::AgentSalesmanElem() :
    m_uinHasBeenSet(false),
    m_salesUinHasBeenSet(false),
    m_salesNameHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome AgentSalesmanElem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Uin") && !value["Uin"].IsNull())
    {
        if (!value["Uin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSalesmanElem.Uin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uin = string(value["Uin"].GetString());
        m_uinHasBeenSet = true;
    }

    if (value.HasMember("SalesUin") && !value["SalesUin"].IsNull())
    {
        if (!value["SalesUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSalesmanElem.SalesUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesUin = string(value["SalesUin"].GetString());
        m_salesUinHasBeenSet = true;
    }

    if (value.HasMember("SalesName") && !value["SalesName"].IsNull())
    {
        if (!value["SalesName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSalesmanElem.SalesName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_salesName = string(value["SalesName"].GetString());
        m_salesNameHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AgentSalesmanElem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AgentSalesmanElem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_uinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Uin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uin.c_str(), allocator).Move(), allocator);
    }

    if (m_salesUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesUin.c_str(), allocator).Move(), allocator);
    }

    if (m_salesNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SalesName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_salesName.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string AgentSalesmanElem::GetUin() const
{
    return m_uin;
}

void AgentSalesmanElem::SetUin(const string& _uin)
{
    m_uin = _uin;
    m_uinHasBeenSet = true;
}

bool AgentSalesmanElem::UinHasBeenSet() const
{
    return m_uinHasBeenSet;
}

string AgentSalesmanElem::GetSalesUin() const
{
    return m_salesUin;
}

void AgentSalesmanElem::SetSalesUin(const string& _salesUin)
{
    m_salesUin = _salesUin;
    m_salesUinHasBeenSet = true;
}

bool AgentSalesmanElem::SalesUinHasBeenSet() const
{
    return m_salesUinHasBeenSet;
}

string AgentSalesmanElem::GetSalesName() const
{
    return m_salesName;
}

void AgentSalesmanElem::SetSalesName(const string& _salesName)
{
    m_salesName = _salesName;
    m_salesNameHasBeenSet = true;
}

bool AgentSalesmanElem::SalesNameHasBeenSet() const
{
    return m_salesNameHasBeenSet;
}

string AgentSalesmanElem::GetCreateTime() const
{
    return m_createTime;
}

void AgentSalesmanElem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AgentSalesmanElem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

