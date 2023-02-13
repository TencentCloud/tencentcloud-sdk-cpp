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

#include <tencentcloud/tcr/v20190924/model/TcrNamespaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcr::V20190924::Model;
using namespace std;

TcrNamespaceInfo::TcrNamespaceInfo() :
    m_nameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_publicHasBeenSet(false),
    m_namespaceIdHasBeenSet(false),
    m_tagSpecificationHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_cVEWhitelistItemsHasBeenSet(false),
    m_autoScanHasBeenSet(false),
    m_preventVULHasBeenSet(false),
    m_severityHasBeenSet(false)
{
}

CoreInternalOutcome TcrNamespaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("CreationTime") && !value["CreationTime"].IsNull())
    {
        if (!value["CreationTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.CreationTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creationTime = string(value["CreationTime"].GetString());
        m_creationTimeHasBeenSet = true;
    }

    if (value.HasMember("Public") && !value["Public"].IsNull())
    {
        if (!value["Public"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.Public` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_public = value["Public"].GetBool();
        m_publicHasBeenSet = true;
    }

    if (value.HasMember("NamespaceId") && !value["NamespaceId"].IsNull())
    {
        if (!value["NamespaceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.NamespaceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceId = value["NamespaceId"].GetInt64();
        m_namespaceIdHasBeenSet = true;
    }

    if (value.HasMember("TagSpecification") && !value["TagSpecification"].IsNull())
    {
        if (!value["TagSpecification"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.TagSpecification` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tagSpecification.Deserialize(value["TagSpecification"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tagSpecificationHasBeenSet = true;
    }

    if (value.HasMember("Metadata") && !value["Metadata"].IsNull())
    {
        if (!value["Metadata"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.Metadata` is not array type"));

        const rapidjson::Value &tmpValue = value["Metadata"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KeyValueString item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metadata.push_back(item);
        }
        m_metadataHasBeenSet = true;
    }

    if (value.HasMember("CVEWhitelistItems") && !value["CVEWhitelistItems"].IsNull())
    {
        if (!value["CVEWhitelistItems"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.CVEWhitelistItems` is not array type"));

        const rapidjson::Value &tmpValue = value["CVEWhitelistItems"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CVEWhitelistItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_cVEWhitelistItems.push_back(item);
        }
        m_cVEWhitelistItemsHasBeenSet = true;
    }

    if (value.HasMember("AutoScan") && !value["AutoScan"].IsNull())
    {
        if (!value["AutoScan"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.AutoScan` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoScan = value["AutoScan"].GetBool();
        m_autoScanHasBeenSet = true;
    }

    if (value.HasMember("PreventVUL") && !value["PreventVUL"].IsNull())
    {
        if (!value["PreventVUL"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.PreventVUL` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_preventVUL = value["PreventVUL"].GetBool();
        m_preventVULHasBeenSet = true;
    }

    if (value.HasMember("Severity") && !value["Severity"].IsNull())
    {
        if (!value["Severity"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TcrNamespaceInfo.Severity` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_severity = string(value["Severity"].GetString());
        m_severityHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TcrNamespaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_creationTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreationTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creationTime.c_str(), allocator).Move(), allocator);
    }

    if (m_publicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Public";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_public, allocator);
    }

    if (m_namespaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_namespaceId, allocator);
    }

    if (m_tagSpecificationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSpecification";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tagSpecification.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metadataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metadata";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metadata.begin(); itr != m_metadata.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_cVEWhitelistItemsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CVEWhitelistItems";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_cVEWhitelistItems.begin(); itr != m_cVEWhitelistItems.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_autoScanHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoScan";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoScan, allocator);
    }

    if (m_preventVULHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PreventVUL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_preventVUL, allocator);
    }

    if (m_severityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Severity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_severity.c_str(), allocator).Move(), allocator);
    }

}


string TcrNamespaceInfo::GetName() const
{
    return m_name;
}

void TcrNamespaceInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TcrNamespaceInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TcrNamespaceInfo::GetCreationTime() const
{
    return m_creationTime;
}

void TcrNamespaceInfo::SetCreationTime(const string& _creationTime)
{
    m_creationTime = _creationTime;
    m_creationTimeHasBeenSet = true;
}

bool TcrNamespaceInfo::CreationTimeHasBeenSet() const
{
    return m_creationTimeHasBeenSet;
}

bool TcrNamespaceInfo::GetPublic() const
{
    return m_public;
}

void TcrNamespaceInfo::SetPublic(const bool& _public)
{
    m_public = _public;
    m_publicHasBeenSet = true;
}

bool TcrNamespaceInfo::PublicHasBeenSet() const
{
    return m_publicHasBeenSet;
}

int64_t TcrNamespaceInfo::GetNamespaceId() const
{
    return m_namespaceId;
}

void TcrNamespaceInfo::SetNamespaceId(const int64_t& _namespaceId)
{
    m_namespaceId = _namespaceId;
    m_namespaceIdHasBeenSet = true;
}

bool TcrNamespaceInfo::NamespaceIdHasBeenSet() const
{
    return m_namespaceIdHasBeenSet;
}

TagSpecification TcrNamespaceInfo::GetTagSpecification() const
{
    return m_tagSpecification;
}

void TcrNamespaceInfo::SetTagSpecification(const TagSpecification& _tagSpecification)
{
    m_tagSpecification = _tagSpecification;
    m_tagSpecificationHasBeenSet = true;
}

bool TcrNamespaceInfo::TagSpecificationHasBeenSet() const
{
    return m_tagSpecificationHasBeenSet;
}

vector<KeyValueString> TcrNamespaceInfo::GetMetadata() const
{
    return m_metadata;
}

void TcrNamespaceInfo::SetMetadata(const vector<KeyValueString>& _metadata)
{
    m_metadata = _metadata;
    m_metadataHasBeenSet = true;
}

bool TcrNamespaceInfo::MetadataHasBeenSet() const
{
    return m_metadataHasBeenSet;
}

vector<CVEWhitelistItem> TcrNamespaceInfo::GetCVEWhitelistItems() const
{
    return m_cVEWhitelistItems;
}

void TcrNamespaceInfo::SetCVEWhitelistItems(const vector<CVEWhitelistItem>& _cVEWhitelistItems)
{
    m_cVEWhitelistItems = _cVEWhitelistItems;
    m_cVEWhitelistItemsHasBeenSet = true;
}

bool TcrNamespaceInfo::CVEWhitelistItemsHasBeenSet() const
{
    return m_cVEWhitelistItemsHasBeenSet;
}

bool TcrNamespaceInfo::GetAutoScan() const
{
    return m_autoScan;
}

void TcrNamespaceInfo::SetAutoScan(const bool& _autoScan)
{
    m_autoScan = _autoScan;
    m_autoScanHasBeenSet = true;
}

bool TcrNamespaceInfo::AutoScanHasBeenSet() const
{
    return m_autoScanHasBeenSet;
}

bool TcrNamespaceInfo::GetPreventVUL() const
{
    return m_preventVUL;
}

void TcrNamespaceInfo::SetPreventVUL(const bool& _preventVUL)
{
    m_preventVUL = _preventVUL;
    m_preventVULHasBeenSet = true;
}

bool TcrNamespaceInfo::PreventVULHasBeenSet() const
{
    return m_preventVULHasBeenSet;
}

string TcrNamespaceInfo::GetSeverity() const
{
    return m_severity;
}

void TcrNamespaceInfo::SetSeverity(const string& _severity)
{
    m_severity = _severity;
    m_severityHasBeenSet = true;
}

bool TcrNamespaceInfo::SeverityHasBeenSet() const
{
    return m_severityHasBeenSet;
}

