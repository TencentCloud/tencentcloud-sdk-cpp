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

#include <tencentcloud/csip/v20221121/model/CosActionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosActionInfo::CosActionInfo() :
    m_actionNameHasBeenSet(false),
    m_actionNameCnHasBeenSet(false),
    m_actionDescriptionHasBeenSet(false)
{
}

CoreInternalOutcome CosActionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionName") && !value["ActionName"].IsNull())
    {
        if (!value["ActionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosActionInfo.ActionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionName = string(value["ActionName"].GetString());
        m_actionNameHasBeenSet = true;
    }

    if (value.HasMember("ActionNameCn") && !value["ActionNameCn"].IsNull())
    {
        if (!value["ActionNameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosActionInfo.ActionNameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionNameCn = string(value["ActionNameCn"].GetString());
        m_actionNameCnHasBeenSet = true;
    }

    if (value.HasMember("ActionDescription") && !value["ActionDescription"].IsNull())
    {
        if (!value["ActionDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosActionInfo.ActionDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionDescription = string(value["ActionDescription"].GetString());
        m_actionDescriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosActionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_actionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionName.c_str(), allocator).Move(), allocator);
    }

    if (m_actionNameCnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionNameCn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionNameCn.c_str(), allocator).Move(), allocator);
    }

    if (m_actionDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_actionDescription.c_str(), allocator).Move(), allocator);
    }

}


string CosActionInfo::GetActionName() const
{
    return m_actionName;
}

void CosActionInfo::SetActionName(const string& _actionName)
{
    m_actionName = _actionName;
    m_actionNameHasBeenSet = true;
}

bool CosActionInfo::ActionNameHasBeenSet() const
{
    return m_actionNameHasBeenSet;
}

string CosActionInfo::GetActionNameCn() const
{
    return m_actionNameCn;
}

void CosActionInfo::SetActionNameCn(const string& _actionNameCn)
{
    m_actionNameCn = _actionNameCn;
    m_actionNameCnHasBeenSet = true;
}

bool CosActionInfo::ActionNameCnHasBeenSet() const
{
    return m_actionNameCnHasBeenSet;
}

string CosActionInfo::GetActionDescription() const
{
    return m_actionDescription;
}

void CosActionInfo::SetActionDescription(const string& _actionDescription)
{
    m_actionDescription = _actionDescription;
    m_actionDescriptionHasBeenSet = true;
}

bool CosActionInfo::ActionDescriptionHasBeenSet() const
{
    return m_actionDescriptionHasBeenSet;
}

