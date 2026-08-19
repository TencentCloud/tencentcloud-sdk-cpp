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

#include <tencentcloud/csip/v20221121/model/ComplianceCheckTypeItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ComplianceCheckTypeItem::ComplianceCheckTypeItem() :
    m_checkTypeHasBeenSet(false),
    m_countHasBeenSet(false)
{
}

CoreInternalOutcome ComplianceCheckTypeItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CheckType") && !value["CheckType"].IsNull())
    {
        if (!value["CheckType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckTypeItem.CheckType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkType = string(value["CheckType"].GetString());
        m_checkTypeHasBeenSet = true;
    }

    if (value.HasMember("Count") && !value["Count"].IsNull())
    {
        if (!value["Count"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ComplianceCheckTypeItem.Count` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_count = value["Count"].GetUint64();
        m_countHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComplianceCheckTypeItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_checkTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkType.c_str(), allocator).Move(), allocator);
    }

    if (m_countHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Count";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_count, allocator);
    }

}


string ComplianceCheckTypeItem::GetCheckType() const
{
    return m_checkType;
}

void ComplianceCheckTypeItem::SetCheckType(const string& _checkType)
{
    m_checkType = _checkType;
    m_checkTypeHasBeenSet = true;
}

bool ComplianceCheckTypeItem::CheckTypeHasBeenSet() const
{
    return m_checkTypeHasBeenSet;
}

uint64_t ComplianceCheckTypeItem::GetCount() const
{
    return m_count;
}

void ComplianceCheckTypeItem::SetCount(const uint64_t& _count)
{
    m_count = _count;
    m_countHasBeenSet = true;
}

bool ComplianceCheckTypeItem::CountHasBeenSet() const
{
    return m_countHasBeenSet;
}

