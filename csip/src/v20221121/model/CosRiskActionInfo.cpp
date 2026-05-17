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

#include <tencentcloud/csip/v20221121/model/CosRiskActionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

CosRiskActionInfo::CosRiskActionInfo() :
    m_actionNameHasBeenSet(false),
    m_actionNameCnHasBeenSet(false),
    m_invokeCountHasBeenSet(false),
    m_actionAccessTimeHasBeenSet(false)
{
}

CoreInternalOutcome CosRiskActionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ActionName") && !value["ActionName"].IsNull())
    {
        if (!value["ActionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskActionInfo.ActionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionName = string(value["ActionName"].GetString());
        m_actionNameHasBeenSet = true;
    }

    if (value.HasMember("ActionNameCn") && !value["ActionNameCn"].IsNull())
    {
        if (!value["ActionNameCn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskActionInfo.ActionNameCn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_actionNameCn = string(value["ActionNameCn"].GetString());
        m_actionNameCnHasBeenSet = true;
    }

    if (value.HasMember("InvokeCount") && !value["InvokeCount"].IsNull())
    {
        if (!value["InvokeCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskActionInfo.InvokeCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_invokeCount = value["InvokeCount"].GetInt64();
        m_invokeCountHasBeenSet = true;
    }

    if (value.HasMember("ActionAccessTime") && !value["ActionAccessTime"].IsNull())
    {
        if (!value["ActionAccessTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CosRiskActionInfo.ActionAccessTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_actionAccessTime = value["ActionAccessTime"].GetInt64();
        m_actionAccessTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CosRiskActionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_invokeCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_invokeCount, allocator);
    }

    if (m_actionAccessTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActionAccessTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_actionAccessTime, allocator);
    }

}


string CosRiskActionInfo::GetActionName() const
{
    return m_actionName;
}

void CosRiskActionInfo::SetActionName(const string& _actionName)
{
    m_actionName = _actionName;
    m_actionNameHasBeenSet = true;
}

bool CosRiskActionInfo::ActionNameHasBeenSet() const
{
    return m_actionNameHasBeenSet;
}

string CosRiskActionInfo::GetActionNameCn() const
{
    return m_actionNameCn;
}

void CosRiskActionInfo::SetActionNameCn(const string& _actionNameCn)
{
    m_actionNameCn = _actionNameCn;
    m_actionNameCnHasBeenSet = true;
}

bool CosRiskActionInfo::ActionNameCnHasBeenSet() const
{
    return m_actionNameCnHasBeenSet;
}

int64_t CosRiskActionInfo::GetInvokeCount() const
{
    return m_invokeCount;
}

void CosRiskActionInfo::SetInvokeCount(const int64_t& _invokeCount)
{
    m_invokeCount = _invokeCount;
    m_invokeCountHasBeenSet = true;
}

bool CosRiskActionInfo::InvokeCountHasBeenSet() const
{
    return m_invokeCountHasBeenSet;
}

int64_t CosRiskActionInfo::GetActionAccessTime() const
{
    return m_actionAccessTime;
}

void CosRiskActionInfo::SetActionAccessTime(const int64_t& _actionAccessTime)
{
    m_actionAccessTime = _actionAccessTime;
    m_actionAccessTimeHasBeenSet = true;
}

bool CosRiskActionInfo::ActionAccessTimeHasBeenSet() const
{
    return m_actionAccessTimeHasBeenSet;
}

