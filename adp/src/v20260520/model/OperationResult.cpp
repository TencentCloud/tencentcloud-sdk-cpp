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

#include <tencentcloud/adp/v20260520/model/OperationResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

OperationResult::OperationResult() :
    m_idHasBeenSet(false),
    m_reasonHasBeenSet(false),
    m_succeededHasBeenSet(false)
{
}

CoreInternalOutcome OperationResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationResult.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Reason") && !value["Reason"].IsNull())
    {
        if (!value["Reason"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationResult.Reason` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reason = string(value["Reason"].GetString());
        m_reasonHasBeenSet = true;
    }

    if (value.HasMember("Succeeded") && !value["Succeeded"].IsNull())
    {
        if (!value["Succeeded"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OperationResult.Succeeded` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_succeeded = value["Succeeded"].GetBool();
        m_succeededHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_reasonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Reason";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reason.c_str(), allocator).Move(), allocator);
    }

    if (m_succeededHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Succeeded";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_succeeded, allocator);
    }

}


string OperationResult::GetId() const
{
    return m_id;
}

void OperationResult::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool OperationResult::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string OperationResult::GetReason() const
{
    return m_reason;
}

void OperationResult::SetReason(const string& _reason)
{
    m_reason = _reason;
    m_reasonHasBeenSet = true;
}

bool OperationResult::ReasonHasBeenSet() const
{
    return m_reasonHasBeenSet;
}

bool OperationResult::GetSucceeded() const
{
    return m_succeeded;
}

void OperationResult::SetSucceeded(const bool& _succeeded)
{
    m_succeeded = _succeeded;
    m_succeededHasBeenSet = true;
}

bool OperationResult::SucceededHasBeenSet() const
{
    return m_succeededHasBeenSet;
}

