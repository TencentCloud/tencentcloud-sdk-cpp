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

#include <tencentcloud/wedata/v20250806/model/ExecutionActionBrief.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20250806::Model;
using namespace std;

ExecutionActionBrief::ExecutionActionBrief() :
    m_itemIdHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_executionActionIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_opStatusHasBeenSet(false)
{
}

CoreInternalOutcome ExecutionActionBrief::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ItemId") && !value["ItemId"].IsNull())
    {
        if (!value["ItemId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionActionBrief.ItemId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemId = string(value["ItemId"].GetString());
        m_itemIdHasBeenSet = true;
    }

    if (value.HasMember("ItemName") && !value["ItemName"].IsNull())
    {
        if (!value["ItemName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionActionBrief.ItemName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_itemName = string(value["ItemName"].GetString());
        m_itemNameHasBeenSet = true;
    }

    if (value.HasMember("ExecutionActionId") && !value["ExecutionActionId"].IsNull())
    {
        if (!value["ExecutionActionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionActionBrief.ExecutionActionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executionActionId = string(value["ExecutionActionId"].GetString());
        m_executionActionIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionActionBrief.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("OpStatus") && !value["OpStatus"].IsNull())
    {
        if (!value["OpStatus"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ExecutionActionBrief.OpStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_opStatus = value["OpStatus"].GetBool();
        m_opStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ExecutionActionBrief::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemId.c_str(), allocator).Move(), allocator);
    }

    if (m_itemNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ItemName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_itemName.c_str(), allocator).Move(), allocator);
    }

    if (m_executionActionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutionActionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executionActionId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
    }

    if (m_opStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OpStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_opStatus, allocator);
    }

}


string ExecutionActionBrief::GetItemId() const
{
    return m_itemId;
}

void ExecutionActionBrief::SetItemId(const string& _itemId)
{
    m_itemId = _itemId;
    m_itemIdHasBeenSet = true;
}

bool ExecutionActionBrief::ItemIdHasBeenSet() const
{
    return m_itemIdHasBeenSet;
}

string ExecutionActionBrief::GetItemName() const
{
    return m_itemName;
}

void ExecutionActionBrief::SetItemName(const string& _itemName)
{
    m_itemName = _itemName;
    m_itemNameHasBeenSet = true;
}

bool ExecutionActionBrief::ItemNameHasBeenSet() const
{
    return m_itemNameHasBeenSet;
}

string ExecutionActionBrief::GetExecutionActionId() const
{
    return m_executionActionId;
}

void ExecutionActionBrief::SetExecutionActionId(const string& _executionActionId)
{
    m_executionActionId = _executionActionId;
    m_executionActionIdHasBeenSet = true;
}

bool ExecutionActionBrief::ExecutionActionIdHasBeenSet() const
{
    return m_executionActionIdHasBeenSet;
}

string ExecutionActionBrief::GetErrorMessage() const
{
    return m_errorMessage;
}

void ExecutionActionBrief::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool ExecutionActionBrief::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

bool ExecutionActionBrief::GetOpStatus() const
{
    return m_opStatus;
}

void ExecutionActionBrief::SetOpStatus(const bool& _opStatus)
{
    m_opStatus = _opStatus;
    m_opStatusHasBeenSet = true;
}

bool ExecutionActionBrief::OpStatusHasBeenSet() const
{
    return m_opStatusHasBeenSet;
}

