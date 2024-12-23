/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/teo/v20220901/model/ContentIdentifier.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ContentIdentifier::ContentIdentifier() :
    m_contentIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_referenceCountHasBeenSet(false),
    m_planIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_modifiedOnHasBeenSet(false),
    m_deletedOnHasBeenSet(false)
{
}

CoreInternalOutcome ContentIdentifier::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ContentId") && !value["ContentId"].IsNull())
    {
        if (!value["ContentId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentIdentifier.ContentId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_contentId = string(value["ContentId"].GetString());
        m_contentIdHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentIdentifier.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ReferenceCount") && !value["ReferenceCount"].IsNull())
    {
        if (!value["ReferenceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContentIdentifier.ReferenceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_referenceCount = value["ReferenceCount"].GetInt64();
        m_referenceCountHasBeenSet = true;
    }

    if (value.HasMember("PlanId") && !value["PlanId"].IsNull())
    {
        if (!value["PlanId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentIdentifier.PlanId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planId = string(value["PlanId"].GetString());
        m_planIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ContentIdentifier.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentIdentifier.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreatedOn") && !value["CreatedOn"].IsNull())
    {
        if (!value["CreatedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentIdentifier.CreatedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdOn = string(value["CreatedOn"].GetString());
        m_createdOnHasBeenSet = true;
    }

    if (value.HasMember("ModifiedOn") && !value["ModifiedOn"].IsNull())
    {
        if (!value["ModifiedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentIdentifier.ModifiedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_modifiedOn = string(value["ModifiedOn"].GetString());
        m_modifiedOnHasBeenSet = true;
    }

    if (value.HasMember("DeletedOn") && !value["DeletedOn"].IsNull())
    {
        if (!value["DeletedOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContentIdentifier.DeletedOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deletedOn = string(value["DeletedOn"].GetString());
        m_deletedOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContentIdentifier::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_contentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContentId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_contentId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReferenceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_referenceCount, allocator);
    }

    if (m_planIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createdOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createdOn.c_str(), allocator).Move(), allocator);
    }

    if (m_modifiedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ModifiedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_modifiedOn.c_str(), allocator).Move(), allocator);
    }

    if (m_deletedOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeletedOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deletedOn.c_str(), allocator).Move(), allocator);
    }

}


string ContentIdentifier::GetContentId() const
{
    return m_contentId;
}

void ContentIdentifier::SetContentId(const string& _contentId)
{
    m_contentId = _contentId;
    m_contentIdHasBeenSet = true;
}

bool ContentIdentifier::ContentIdHasBeenSet() const
{
    return m_contentIdHasBeenSet;
}

string ContentIdentifier::GetDescription() const
{
    return m_description;
}

void ContentIdentifier::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ContentIdentifier::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t ContentIdentifier::GetReferenceCount() const
{
    return m_referenceCount;
}

void ContentIdentifier::SetReferenceCount(const int64_t& _referenceCount)
{
    m_referenceCount = _referenceCount;
    m_referenceCountHasBeenSet = true;
}

bool ContentIdentifier::ReferenceCountHasBeenSet() const
{
    return m_referenceCountHasBeenSet;
}

string ContentIdentifier::GetPlanId() const
{
    return m_planId;
}

void ContentIdentifier::SetPlanId(const string& _planId)
{
    m_planId = _planId;
    m_planIdHasBeenSet = true;
}

bool ContentIdentifier::PlanIdHasBeenSet() const
{
    return m_planIdHasBeenSet;
}

vector<Tag> ContentIdentifier::GetTags() const
{
    return m_tags;
}

void ContentIdentifier::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ContentIdentifier::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ContentIdentifier::GetStatus() const
{
    return m_status;
}

void ContentIdentifier::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ContentIdentifier::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ContentIdentifier::GetCreatedOn() const
{
    return m_createdOn;
}

void ContentIdentifier::SetCreatedOn(const string& _createdOn)
{
    m_createdOn = _createdOn;
    m_createdOnHasBeenSet = true;
}

bool ContentIdentifier::CreatedOnHasBeenSet() const
{
    return m_createdOnHasBeenSet;
}

string ContentIdentifier::GetModifiedOn() const
{
    return m_modifiedOn;
}

void ContentIdentifier::SetModifiedOn(const string& _modifiedOn)
{
    m_modifiedOn = _modifiedOn;
    m_modifiedOnHasBeenSet = true;
}

bool ContentIdentifier::ModifiedOnHasBeenSet() const
{
    return m_modifiedOnHasBeenSet;
}

string ContentIdentifier::GetDeletedOn() const
{
    return m_deletedOn;
}

void ContentIdentifier::SetDeletedOn(const string& _deletedOn)
{
    m_deletedOn = _deletedOn;
    m_deletedOnHasBeenSet = true;
}

bool ContentIdentifier::DeletedOnHasBeenSet() const
{
    return m_deletedOnHasBeenSet;
}

