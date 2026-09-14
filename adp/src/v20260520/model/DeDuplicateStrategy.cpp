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

#include <tencentcloud/adp/v20260520/model/DeDuplicateStrategy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Adp::V20260520::Model;
using namespace std;

DeDuplicateStrategy::DeDuplicateStrategy() :
    m_checkTypeHasBeenSet(false),
    m_handleTypeHasBeenSet(false)
{
}

CoreInternalOutcome DeDuplicateStrategy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeDuplicateStrategy.CheckType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = value["CheckType"].GetInt64();
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("HandleType") && !value["HandleType"].IsNull())
    {
        if (!value["HandleType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DeDuplicateStrategy.HandleType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_handleType = value["HandleType"].GetInt64();
        m_handleTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeDuplicateStrategy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_checkType, allocator);
    }

    if (m_handleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HandleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_handleType, allocator);
    }

}


int64_t DeDuplicateStrategy::GetCheckType() const
{
    return m_checkType;
}

void DeDuplicateStrategy::SetCheckType(const int64_t& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool DeDuplicateStrategy::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

int64_t DeDuplicateStrategy::GetHandleType() const
{
    return m_handleType;
}

void DeDuplicateStrategy::SetHandleType(const int64_t& _handleType)
{
    m_handleType = _handleType;
    m_handleTypeHasBeenSet = true;
}

bool DeDuplicateStrategy::HandleTypeHasBeenSet() const
{
    return m_handleTypeHasBeenSet;
}

