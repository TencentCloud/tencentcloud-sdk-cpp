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

#include <tencentcloud/csip/v20221121/model/KBFixSummaryItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

KBFixSummaryItem::KBFixSummaryItem() :
    m_kBIdHasBeenSet(false),
    m_kBNameHasBeenSet(false),
    m_kBNoHasBeenSet(false),
    m_relatedVulCountHasBeenSet(false),
    m_affectedCountHasBeenSet(false),
    m_needRebootHasBeenSet(false),
    m_kBPreConditionHasBeenSet(false)
{
}

CoreInternalOutcome KBFixSummaryItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("KBId") && !value["KBId"].IsNull())
    {
        if (!value["KBId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KBFixSummaryItem.KBId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_kBId = value["KBId"].GetInt64();
        m_kBIdHasBeenSet = true;
    }

    if (value.HasMember("KBName") && !value["KBName"].IsNull())
    {
        if (!value["KBName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBFixSummaryItem.KBName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kBName = string(value["KBName"].GetString());
        m_kBNameHasBeenSet = true;
    }

    if (value.HasMember("KBNo") && !value["KBNo"].IsNull())
    {
        if (!value["KBNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBFixSummaryItem.KBNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kBNo = string(value["KBNo"].GetString());
        m_kBNoHasBeenSet = true;
    }

    if (value.HasMember("RelatedVulCount") && !value["RelatedVulCount"].IsNull())
    {
        if (!value["RelatedVulCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KBFixSummaryItem.RelatedVulCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_relatedVulCount = value["RelatedVulCount"].GetInt64();
        m_relatedVulCountHasBeenSet = true;
    }

    if (value.HasMember("AffectedCount") && !value["AffectedCount"].IsNull())
    {
        if (!value["AffectedCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `KBFixSummaryItem.AffectedCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_affectedCount = value["AffectedCount"].GetInt64();
        m_affectedCountHasBeenSet = true;
    }

    if (value.HasMember("NeedReboot") && !value["NeedReboot"].IsNull())
    {
        if (!value["NeedReboot"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `KBFixSummaryItem.NeedReboot` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_needReboot = value["NeedReboot"].GetBool();
        m_needRebootHasBeenSet = true;
    }

    if (value.HasMember("KBPreCondition") && !value["KBPreCondition"].IsNull())
    {
        if (!value["KBPreCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `KBFixSummaryItem.KBPreCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kBPreCondition = string(value["KBPreCondition"].GetString());
        m_kBPreConditionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void KBFixSummaryItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_kBIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kBId, allocator);
    }

    if (m_kBNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kBName.c_str(), allocator).Move(), allocator);
    }

    if (m_kBNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kBNo.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relatedVulCount, allocator);
    }

    if (m_affectedCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectedCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectedCount, allocator);
    }

    if (m_needRebootHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedReboot";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_needReboot, allocator);
    }

    if (m_kBPreConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KBPreCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kBPreCondition.c_str(), allocator).Move(), allocator);
    }

}


int64_t KBFixSummaryItem::GetKBId() const
{
    return m_kBId;
}

void KBFixSummaryItem::SetKBId(const int64_t& _kBId)
{
    m_kBId = _kBId;
    m_kBIdHasBeenSet = true;
}

bool KBFixSummaryItem::KBIdHasBeenSet() const
{
    return m_kBIdHasBeenSet;
}

string KBFixSummaryItem::GetKBName() const
{
    return m_kBName;
}

void KBFixSummaryItem::SetKBName(const string& _kBName)
{
    m_kBName = _kBName;
    m_kBNameHasBeenSet = true;
}

bool KBFixSummaryItem::KBNameHasBeenSet() const
{
    return m_kBNameHasBeenSet;
}

string KBFixSummaryItem::GetKBNo() const
{
    return m_kBNo;
}

void KBFixSummaryItem::SetKBNo(const string& _kBNo)
{
    m_kBNo = _kBNo;
    m_kBNoHasBeenSet = true;
}

bool KBFixSummaryItem::KBNoHasBeenSet() const
{
    return m_kBNoHasBeenSet;
}

int64_t KBFixSummaryItem::GetRelatedVulCount() const
{
    return m_relatedVulCount;
}

void KBFixSummaryItem::SetRelatedVulCount(const int64_t& _relatedVulCount)
{
    m_relatedVulCount = _relatedVulCount;
    m_relatedVulCountHasBeenSet = true;
}

bool KBFixSummaryItem::RelatedVulCountHasBeenSet() const
{
    return m_relatedVulCountHasBeenSet;
}

int64_t KBFixSummaryItem::GetAffectedCount() const
{
    return m_affectedCount;
}

void KBFixSummaryItem::SetAffectedCount(const int64_t& _affectedCount)
{
    m_affectedCount = _affectedCount;
    m_affectedCountHasBeenSet = true;
}

bool KBFixSummaryItem::AffectedCountHasBeenSet() const
{
    return m_affectedCountHasBeenSet;
}

bool KBFixSummaryItem::GetNeedReboot() const
{
    return m_needReboot;
}

void KBFixSummaryItem::SetNeedReboot(const bool& _needReboot)
{
    m_needReboot = _needReboot;
    m_needRebootHasBeenSet = true;
}

bool KBFixSummaryItem::NeedRebootHasBeenSet() const
{
    return m_needRebootHasBeenSet;
}

string KBFixSummaryItem::GetKBPreCondition() const
{
    return m_kBPreCondition;
}

void KBFixSummaryItem::SetKBPreCondition(const string& _kBPreCondition)
{
    m_kBPreCondition = _kBPreCondition;
    m_kBPreConditionHasBeenSet = true;
}

bool KBFixSummaryItem::KBPreConditionHasBeenSet() const
{
    return m_kBPreConditionHasBeenSet;
}

