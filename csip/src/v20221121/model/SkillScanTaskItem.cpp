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

#include <tencentcloud/csip/v20221121/model/SkillScanTaskItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

SkillScanTaskItem::SkillScanTaskItem() :
    m_insertTimeHasBeenSet(false),
    m_skillNameHasBeenSet(false),
    m_deductCountHasBeenSet(false)
{
}

CoreInternalOutcome SkillScanTaskItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InsertTime") && !value["InsertTime"].IsNull())
    {
        if (!value["InsertTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanTaskItem.InsertTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_insertTime = string(value["InsertTime"].GetString());
        m_insertTimeHasBeenSet = true;
    }

    if (value.HasMember("SkillName") && !value["SkillName"].IsNull())
    {
        if (!value["SkillName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanTaskItem.SkillName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_skillName = string(value["SkillName"].GetString());
        m_skillNameHasBeenSet = true;
    }

    if (value.HasMember("DeductCount") && !value["DeductCount"].IsNull())
    {
        if (!value["DeductCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SkillScanTaskItem.DeductCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_deductCount = value["DeductCount"].GetInt64();
        m_deductCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SkillScanTaskItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_insertTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InsertTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_insertTime.c_str(), allocator).Move(), allocator);
    }

    if (m_skillNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SkillName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_skillName.c_str(), allocator).Move(), allocator);
    }

    if (m_deductCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeductCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deductCount, allocator);
    }

}


string SkillScanTaskItem::GetInsertTime() const
{
    return m_insertTime;
}

void SkillScanTaskItem::SetInsertTime(const string& _insertTime)
{
    m_insertTime = _insertTime;
    m_insertTimeHasBeenSet = true;
}

bool SkillScanTaskItem::InsertTimeHasBeenSet() const
{
    return m_insertTimeHasBeenSet;
}

string SkillScanTaskItem::GetSkillName() const
{
    return m_skillName;
}

void SkillScanTaskItem::SetSkillName(const string& _skillName)
{
    m_skillName = _skillName;
    m_skillNameHasBeenSet = true;
}

bool SkillScanTaskItem::SkillNameHasBeenSet() const
{
    return m_skillNameHasBeenSet;
}

int64_t SkillScanTaskItem::GetDeductCount() const
{
    return m_deductCount;
}

void SkillScanTaskItem::SetDeductCount(const int64_t& _deductCount)
{
    m_deductCount = _deductCount;
    m_deductCountHasBeenSet = true;
}

bool SkillScanTaskItem::DeductCountHasBeenSet() const
{
    return m_deductCountHasBeenSet;
}

