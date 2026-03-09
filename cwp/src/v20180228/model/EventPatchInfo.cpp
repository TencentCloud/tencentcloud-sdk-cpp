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

#include <tencentcloud/cwp/v20180228/model/EventPatchInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

EventPatchInfo::EventPatchInfo() :
    m_nameHasBeenSet(false),
    m_kbNoHasBeenSet(false),
    m_publishTimeHasBeenSet(false),
    m_effectHostCountHasBeenSet(false),
    m_relateVulCountHasBeenSet(false),
    m_relateVulListHasBeenSet(false),
    m_isNewHasBeenSet(false),
    m_lastScanTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_kbPreConditionHasBeenSet(false),
    m_relatedProductHasBeenSet(false),
    m_kbIdHasBeenSet(false),
    m_idsHasBeenSet(false)
{
}

CoreInternalOutcome EventPatchInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("KbNo") && !value["KbNo"].IsNull())
    {
        if (!value["KbNo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.KbNo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbNo = string(value["KbNo"].GetString());
        m_kbNoHasBeenSet = true;
    }

    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("EffectHostCount") && !value["EffectHostCount"].IsNull())
    {
        if (!value["EffectHostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.EffectHostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_effectHostCount = value["EffectHostCount"].GetUint64();
        m_effectHostCountHasBeenSet = true;
    }

    if (value.HasMember("RelateVulCount") && !value["RelateVulCount"].IsNull())
    {
        if (!value["RelateVulCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.RelateVulCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_relateVulCount = value["RelateVulCount"].GetUint64();
        m_relateVulCountHasBeenSet = true;
    }

    if (value.HasMember("RelateVulList") && !value["RelateVulList"].IsNull())
    {
        if (!value["RelateVulList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.RelateVulList` is not array type"));

        const rapidjson::Value &tmpValue = value["RelateVulList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_relateVulList.push_back((*itr).GetString());
        }
        m_relateVulListHasBeenSet = true;
    }

    if (value.HasMember("IsNew") && !value["IsNew"].IsNull())
    {
        if (!value["IsNew"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.IsNew` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_isNew = value["IsNew"].GetInt64();
        m_isNewHasBeenSet = true;
    }

    if (value.HasMember("LastScanTime") && !value["LastScanTime"].IsNull())
    {
        if (!value["LastScanTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.LastScanTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lastScanTime = string(value["LastScanTime"].GetString());
        m_lastScanTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("KbPreCondition") && !value["KbPreCondition"].IsNull())
    {
        if (!value["KbPreCondition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.KbPreCondition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kbPreCondition = string(value["KbPreCondition"].GetString());
        m_kbPreConditionHasBeenSet = true;
    }

    if (value.HasMember("RelatedProduct") && !value["RelatedProduct"].IsNull())
    {
        if (!value["RelatedProduct"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.RelatedProduct` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_relatedProduct = string(value["RelatedProduct"].GetString());
        m_relatedProductHasBeenSet = true;
    }

    if (value.HasMember("KbId") && !value["KbId"].IsNull())
    {
        if (!value["KbId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.KbId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_kbId = value["KbId"].GetUint64();
        m_kbIdHasBeenSet = true;
    }

    if (value.HasMember("Ids") && !value["Ids"].IsNull())
    {
        if (!value["Ids"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EventPatchInfo.Ids` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ids = string(value["Ids"].GetString());
        m_idsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EventPatchInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_kbNoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbNo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbNo.c_str(), allocator).Move(), allocator);
    }

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_effectHostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EffectHostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_effectHostCount, allocator);
    }

    if (m_relateVulCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateVulCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_relateVulCount, allocator);
    }

    if (m_relateVulListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelateVulList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_relateVulList.begin(); itr != m_relateVulList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_isNewHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsNew";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isNew, allocator);
    }

    if (m_lastScanTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastScanTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lastScanTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_kbPreConditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbPreCondition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kbPreCondition.c_str(), allocator).Move(), allocator);
    }

    if (m_relatedProductHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RelatedProduct";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_relatedProduct.c_str(), allocator).Move(), allocator);
    }

    if (m_kbIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KbId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_kbId, allocator);
    }

    if (m_idsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ids";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ids.c_str(), allocator).Move(), allocator);
    }

}


string EventPatchInfo::GetName() const
{
    return m_name;
}

void EventPatchInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool EventPatchInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string EventPatchInfo::GetKbNo() const
{
    return m_kbNo;
}

void EventPatchInfo::SetKbNo(const string& _kbNo)
{
    m_kbNo = _kbNo;
    m_kbNoHasBeenSet = true;
}

bool EventPatchInfo::KbNoHasBeenSet() const
{
    return m_kbNoHasBeenSet;
}

string EventPatchInfo::GetPublishTime() const
{
    return m_publishTime;
}

void EventPatchInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool EventPatchInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

uint64_t EventPatchInfo::GetEffectHostCount() const
{
    return m_effectHostCount;
}

void EventPatchInfo::SetEffectHostCount(const uint64_t& _effectHostCount)
{
    m_effectHostCount = _effectHostCount;
    m_effectHostCountHasBeenSet = true;
}

bool EventPatchInfo::EffectHostCountHasBeenSet() const
{
    return m_effectHostCountHasBeenSet;
}

uint64_t EventPatchInfo::GetRelateVulCount() const
{
    return m_relateVulCount;
}

void EventPatchInfo::SetRelateVulCount(const uint64_t& _relateVulCount)
{
    m_relateVulCount = _relateVulCount;
    m_relateVulCountHasBeenSet = true;
}

bool EventPatchInfo::RelateVulCountHasBeenSet() const
{
    return m_relateVulCountHasBeenSet;
}

vector<string> EventPatchInfo::GetRelateVulList() const
{
    return m_relateVulList;
}

void EventPatchInfo::SetRelateVulList(const vector<string>& _relateVulList)
{
    m_relateVulList = _relateVulList;
    m_relateVulListHasBeenSet = true;
}

bool EventPatchInfo::RelateVulListHasBeenSet() const
{
    return m_relateVulListHasBeenSet;
}

int64_t EventPatchInfo::GetIsNew() const
{
    return m_isNew;
}

void EventPatchInfo::SetIsNew(const int64_t& _isNew)
{
    m_isNew = _isNew;
    m_isNewHasBeenSet = true;
}

bool EventPatchInfo::IsNewHasBeenSet() const
{
    return m_isNewHasBeenSet;
}

string EventPatchInfo::GetLastScanTime() const
{
    return m_lastScanTime;
}

void EventPatchInfo::SetLastScanTime(const string& _lastScanTime)
{
    m_lastScanTime = _lastScanTime;
    m_lastScanTimeHasBeenSet = true;
}

bool EventPatchInfo::LastScanTimeHasBeenSet() const
{
    return m_lastScanTimeHasBeenSet;
}

uint64_t EventPatchInfo::GetStatus() const
{
    return m_status;
}

void EventPatchInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EventPatchInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EventPatchInfo::GetKbPreCondition() const
{
    return m_kbPreCondition;
}

void EventPatchInfo::SetKbPreCondition(const string& _kbPreCondition)
{
    m_kbPreCondition = _kbPreCondition;
    m_kbPreConditionHasBeenSet = true;
}

bool EventPatchInfo::KbPreConditionHasBeenSet() const
{
    return m_kbPreConditionHasBeenSet;
}

string EventPatchInfo::GetRelatedProduct() const
{
    return m_relatedProduct;
}

void EventPatchInfo::SetRelatedProduct(const string& _relatedProduct)
{
    m_relatedProduct = _relatedProduct;
    m_relatedProductHasBeenSet = true;
}

bool EventPatchInfo::RelatedProductHasBeenSet() const
{
    return m_relatedProductHasBeenSet;
}

uint64_t EventPatchInfo::GetKbId() const
{
    return m_kbId;
}

void EventPatchInfo::SetKbId(const uint64_t& _kbId)
{
    m_kbId = _kbId;
    m_kbIdHasBeenSet = true;
}

bool EventPatchInfo::KbIdHasBeenSet() const
{
    return m_kbIdHasBeenSet;
}

string EventPatchInfo::GetIds() const
{
    return m_ids;
}

void EventPatchInfo::SetIds(const string& _ids)
{
    m_ids = _ids;
    m_idsHasBeenSet = true;
}

bool EventPatchInfo::IdsHasBeenSet() const
{
    return m_idsHasBeenSet;
}

