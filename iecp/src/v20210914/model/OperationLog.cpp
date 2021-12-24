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

#include <tencentcloud/iecp/v20210914/model/OperationLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

OperationLog::OperationLog() :
    m_operateTimeHasBeenSet(false),
    m_moduleHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_operatorUserIDHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

CoreInternalOutcome OperationLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OperateTime") && !value["OperateTime"].IsNull())
    {
        if (!value["OperateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.OperateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operateTime = string(value["OperateTime"].GetString());
        m_operateTimeHasBeenSet = true;
    }

    if (value.HasMember("Module") && !value["Module"].IsNull())
    {
        if (!value["Module"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Module` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_module = string(value["Module"].GetString());
        m_moduleHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("UserId") && !value["UserId"].IsNull())
    {
        if (!value["UserId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.UserId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userId = string(value["UserId"].GetString());
        m_userIdHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("OperatorUserID") && !value["OperatorUserID"].IsNull())
    {
        if (!value["OperatorUserID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.OperatorUserID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operatorUserID = string(value["OperatorUserID"].GetString());
        m_operatorUserIDHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_moduleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Module";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_module.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_operatorUserIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperatorUserID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operatorUserID.c_str(), allocator).Move(), allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

}


string OperationLog::GetOperateTime() const
{
    return m_operateTime;
}

void OperationLog::SetOperateTime(const string& _operateTime)
{
    m_operateTime = _operateTime;
    m_operateTimeHasBeenSet = true;
}

bool OperationLog::OperateTimeHasBeenSet() const
{
    return m_operateTimeHasBeenSet;
}

string OperationLog::GetModule() const
{
    return m_module;
}

void OperationLog::SetModule(const string& _module)
{
    m_module = _module;
    m_moduleHasBeenSet = true;
}

bool OperationLog::ModuleHasBeenSet() const
{
    return m_moduleHasBeenSet;
}

string OperationLog::GetDescription() const
{
    return m_description;
}

void OperationLog::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool OperationLog::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string OperationLog::GetUserId() const
{
    return m_userId;
}

void OperationLog::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool OperationLog::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

int64_t OperationLog::GetStatus() const
{
    return m_status;
}

void OperationLog::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool OperationLog::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string OperationLog::GetOperatorUserID() const
{
    return m_operatorUserID;
}

void OperationLog::SetOperatorUserID(const string& _operatorUserID)
{
    m_operatorUserID = _operatorUserID;
    m_operatorUserIDHasBeenSet = true;
}

bool OperationLog::OperatorUserIDHasBeenSet() const
{
    return m_operatorUserIDHasBeenSet;
}

string OperationLog::GetAction() const
{
    return m_action;
}

void OperationLog::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool OperationLog::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

