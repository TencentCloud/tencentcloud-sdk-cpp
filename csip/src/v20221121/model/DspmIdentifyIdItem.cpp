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

#include <tencentcloud/csip/v20221121/model/DspmIdentifyIdItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DspmIdentifyIdItem::DspmIdentifyIdItem() :
    m_identifyIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_identifyTypeHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_personHasBeenSet(false)
{
}

CoreInternalOutcome DspmIdentifyIdItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IdentifyId") && !value["IdentifyId"].IsNull())
    {
        if (!value["IdentifyId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyIdItem.IdentifyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_identifyId = string(value["IdentifyId"].GetString());
        m_identifyIdHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyIdItem.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("IdentifyType") && !value["IdentifyType"].IsNull())
    {
        if (!value["IdentifyType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyIdItem.IdentifyType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_identifyType = value["IdentifyType"].GetInt64();
        m_identifyTypeHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyIdItem.OwnerUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_ownerUin.Deserialize(value["OwnerUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyIdItem.CreatorUin` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_creatorUin.Deserialize(value["CreatorUin"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyIdItem.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyIdItem.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Person") && !value["Person"].IsNull())
    {
        if (!value["Person"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DspmIdentifyIdItem.Person` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_person.Deserialize(value["Person"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_personHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DspmIdentifyIdItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_identifyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_identifyId.c_str(), allocator).Move(), allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_identifyTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdentifyType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_identifyType, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_ownerUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_creatorUin.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_personHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Person";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_person.ToJsonObject(value[key.c_str()], allocator);
    }

}


string DspmIdentifyIdItem::GetIdentifyId() const
{
    return m_identifyId;
}

void DspmIdentifyIdItem::SetIdentifyId(const string& _identifyId)
{
    m_identifyId = _identifyId;
    m_identifyIdHasBeenSet = true;
}

bool DspmIdentifyIdItem::IdentifyIdHasBeenSet() const
{
    return m_identifyIdHasBeenSet;
}

string DspmIdentifyIdItem::GetRemark() const
{
    return m_remark;
}

void DspmIdentifyIdItem::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool DspmIdentifyIdItem::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

int64_t DspmIdentifyIdItem::GetIdentifyType() const
{
    return m_identifyType;
}

void DspmIdentifyIdItem::SetIdentifyType(const int64_t& _identifyType)
{
    m_identifyType = _identifyType;
    m_identifyTypeHasBeenSet = true;
}

bool DspmIdentifyIdItem::IdentifyTypeHasBeenSet() const
{
    return m_identifyTypeHasBeenSet;
}

DspmUinUser DspmIdentifyIdItem::GetOwnerUin() const
{
    return m_ownerUin;
}

void DspmIdentifyIdItem::SetOwnerUin(const DspmUinUser& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DspmIdentifyIdItem::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

DspmUinUser DspmIdentifyIdItem::GetCreatorUin() const
{
    return m_creatorUin;
}

void DspmIdentifyIdItem::SetCreatorUin(const DspmUinUser& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool DspmIdentifyIdItem::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string DspmIdentifyIdItem::GetCreateTime() const
{
    return m_createTime;
}

void DspmIdentifyIdItem::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DspmIdentifyIdItem::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DspmIdentifyIdItem::GetStatus() const
{
    return m_status;
}

void DspmIdentifyIdItem::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DspmIdentifyIdItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

DspmPersonUser DspmIdentifyIdItem::GetPerson() const
{
    return m_person;
}

void DspmIdentifyIdItem::SetPerson(const DspmPersonUser& _person)
{
    m_person = _person;
    m_personHasBeenSet = true;
}

bool DspmIdentifyIdItem::PersonHasBeenSet() const
{
    return m_personHasBeenSet;
}

