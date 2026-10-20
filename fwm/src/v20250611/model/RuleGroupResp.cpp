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

#include <tencentcloud/fwm/v20250611/model/RuleGroupResp.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Fwm::V20250611::Model;
using namespace std;

RuleGroupResp::RuleGroupResp() :
    m_appIdHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_ruleCountHasBeenSet(false),
    m_productHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_createByHasBeenSet(false),
    m_createNameHasBeenSet(false),
    m_updateByHasBeenSet(false),
    m_updateNameHasBeenSet(false),
    m_receiveAccountHasBeenSet(false),
    m_execAreasHasBeenSet(false),
    m_directionHasBeenSet(false)
{
}

CoreInternalOutcome RuleGroupResp::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.AppId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_appId = string(value["AppId"].GetString());
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("RuleCount") && !value["RuleCount"].IsNull())
    {
        if (!value["RuleCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.RuleCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleCount = value["RuleCount"].GetInt64();
        m_ruleCountHasBeenSet = true;
    }

    if (value.HasMember("Product") && !value["Product"].IsNull())
    {
        if (!value["Product"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.Product` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_product = string(value["Product"].GetString());
        m_productHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateBy") && !value["CreateBy"].IsNull())
    {
        if (!value["CreateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.CreateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createBy = string(value["CreateBy"].GetString());
        m_createByHasBeenSet = true;
    }

    if (value.HasMember("CreateName") && !value["CreateName"].IsNull())
    {
        if (!value["CreateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.CreateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createName = string(value["CreateName"].GetString());
        m_createNameHasBeenSet = true;
    }

    if (value.HasMember("UpdateBy") && !value["UpdateBy"].IsNull())
    {
        if (!value["UpdateBy"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.UpdateBy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateBy = string(value["UpdateBy"].GetString());
        m_updateByHasBeenSet = true;
    }

    if (value.HasMember("UpdateName") && !value["UpdateName"].IsNull())
    {
        if (!value["UpdateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.UpdateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateName = string(value["UpdateName"].GetString());
        m_updateNameHasBeenSet = true;
    }

    if (value.HasMember("ReceiveAccount") && !value["ReceiveAccount"].IsNull())
    {
        if (!value["ReceiveAccount"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.ReceiveAccount` is not array type"));

        const rapidjson::Value &tmpValue = value["ReceiveAccount"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ReceiveAccount item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_receiveAccount.push_back(item);
        }
        m_receiveAccountHasBeenSet = true;
    }

    if (value.HasMember("ExecAreas") && !value["ExecAreas"].IsNull())
    {
        if (!value["ExecAreas"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.ExecAreas` is not array type"));

        const rapidjson::Value &tmpValue = value["ExecAreas"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_execAreas.push_back((*itr).GetString());
        }
        m_execAreasHasBeenSet = true;
    }

    if (value.HasMember("Direction") && !value["Direction"].IsNull())
    {
        if (!value["Direction"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RuleGroupResp.Direction` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_direction = value["Direction"].GetInt64();
        m_directionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RuleGroupResp::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_appId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleCount, allocator);
    }

    if (m_productHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Product";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_product.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createBy.c_str(), allocator).Move(), allocator);
    }

    if (m_createNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createName.c_str(), allocator).Move(), allocator);
    }

    if (m_updateByHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateBy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateBy.c_str(), allocator).Move(), allocator);
    }

    if (m_updateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateName.c_str(), allocator).Move(), allocator);
    }

    if (m_receiveAccountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReceiveAccount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_receiveAccount.begin(); itr != m_receiveAccount.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_execAreasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecAreas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_execAreas.begin(); itr != m_execAreas.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_directionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Direction";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_direction, allocator);
    }

}


string RuleGroupResp::GetAppId() const
{
    return m_appId;
}

void RuleGroupResp::SetAppId(const string& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool RuleGroupResp::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string RuleGroupResp::GetGroupId() const
{
    return m_groupId;
}

void RuleGroupResp::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool RuleGroupResp::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string RuleGroupResp::GetGroupName() const
{
    return m_groupName;
}

void RuleGroupResp::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool RuleGroupResp::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

int64_t RuleGroupResp::GetRuleCount() const
{
    return m_ruleCount;
}

void RuleGroupResp::SetRuleCount(const int64_t& _ruleCount)
{
    m_ruleCount = _ruleCount;
    m_ruleCountHasBeenSet = true;
}

bool RuleGroupResp::RuleCountHasBeenSet() const
{
    return m_ruleCountHasBeenSet;
}

string RuleGroupResp::GetProduct() const
{
    return m_product;
}

void RuleGroupResp::SetProduct(const string& _product)
{
    m_product = _product;
    m_productHasBeenSet = true;
}

bool RuleGroupResp::ProductHasBeenSet() const
{
    return m_productHasBeenSet;
}

string RuleGroupResp::GetCreateTime() const
{
    return m_createTime;
}

void RuleGroupResp::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool RuleGroupResp::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string RuleGroupResp::GetUpdateTime() const
{
    return m_updateTime;
}

void RuleGroupResp::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool RuleGroupResp::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string RuleGroupResp::GetCreateBy() const
{
    return m_createBy;
}

void RuleGroupResp::SetCreateBy(const string& _createBy)
{
    m_createBy = _createBy;
    m_createByHasBeenSet = true;
}

bool RuleGroupResp::CreateByHasBeenSet() const
{
    return m_createByHasBeenSet;
}

string RuleGroupResp::GetCreateName() const
{
    return m_createName;
}

void RuleGroupResp::SetCreateName(const string& _createName)
{
    m_createName = _createName;
    m_createNameHasBeenSet = true;
}

bool RuleGroupResp::CreateNameHasBeenSet() const
{
    return m_createNameHasBeenSet;
}

string RuleGroupResp::GetUpdateBy() const
{
    return m_updateBy;
}

void RuleGroupResp::SetUpdateBy(const string& _updateBy)
{
    m_updateBy = _updateBy;
    m_updateByHasBeenSet = true;
}

bool RuleGroupResp::UpdateByHasBeenSet() const
{
    return m_updateByHasBeenSet;
}

string RuleGroupResp::GetUpdateName() const
{
    return m_updateName;
}

void RuleGroupResp::SetUpdateName(const string& _updateName)
{
    m_updateName = _updateName;
    m_updateNameHasBeenSet = true;
}

bool RuleGroupResp::UpdateNameHasBeenSet() const
{
    return m_updateNameHasBeenSet;
}

vector<ReceiveAccount> RuleGroupResp::GetReceiveAccount() const
{
    return m_receiveAccount;
}

void RuleGroupResp::SetReceiveAccount(const vector<ReceiveAccount>& _receiveAccount)
{
    m_receiveAccount = _receiveAccount;
    m_receiveAccountHasBeenSet = true;
}

bool RuleGroupResp::ReceiveAccountHasBeenSet() const
{
    return m_receiveAccountHasBeenSet;
}

vector<string> RuleGroupResp::GetExecAreas() const
{
    return m_execAreas;
}

void RuleGroupResp::SetExecAreas(const vector<string>& _execAreas)
{
    m_execAreas = _execAreas;
    m_execAreasHasBeenSet = true;
}

bool RuleGroupResp::ExecAreasHasBeenSet() const
{
    return m_execAreasHasBeenSet;
}

int64_t RuleGroupResp::GetDirection() const
{
    return m_direction;
}

void RuleGroupResp::SetDirection(const int64_t& _direction)
{
    m_direction = _direction;
    m_directionHasBeenSet = true;
}

bool RuleGroupResp::DirectionHasBeenSet() const
{
    return m_directionHasBeenSet;
}

