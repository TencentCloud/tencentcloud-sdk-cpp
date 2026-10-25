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

#include <tencentcloud/databuddy/v20260715/model/LocationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

LocationInfo::LocationInfo() :
    m_locationNameHasBeenSet(false),
    m_locationUriHasBeenSet(false),
    m_commentHasBeenSet(false),
    m_propertiesHasBeenSet(false),
    m_auditHasBeenSet(false)
{
}

CoreInternalOutcome LocationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("LocationName") && !value["LocationName"].IsNull())
    {
        if (!value["LocationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationInfo.LocationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationName = string(value["LocationName"].GetString());
        m_locationNameHasBeenSet = true;
    }

    if (value.HasMember("LocationUri") && !value["LocationUri"].IsNull())
    {
        if (!value["LocationUri"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationInfo.LocationUri` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_locationUri = string(value["LocationUri"].GetString());
        m_locationUriHasBeenSet = true;
    }

    if (value.HasMember("Comment") && !value["Comment"].IsNull())
    {
        if (!value["Comment"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LocationInfo.Comment` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_comment = string(value["Comment"].GetString());
        m_commentHasBeenSet = true;
    }

    if (value.HasMember("Properties") && !value["Properties"].IsNull())
    {
        if (!value["Properties"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LocationInfo.Properties` is not array type"));

        const rapidjson::Value &tmpValue = value["Properties"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            KVPair item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_properties.push_back(item);
        }
        m_propertiesHasBeenSet = true;
    }

    if (value.HasMember("Audit") && !value["Audit"].IsNull())
    {
        if (!value["Audit"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `LocationInfo.Audit` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_audit.Deserialize(value["Audit"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_auditHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LocationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_locationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationName.c_str(), allocator).Move(), allocator);
    }

    if (m_locationUriHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LocationUri";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_locationUri.c_str(), allocator).Move(), allocator);
    }

    if (m_commentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Comment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_comment.c_str(), allocator).Move(), allocator);
    }

    if (m_propertiesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Properties";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_properties.begin(); itr != m_properties.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_auditHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Audit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_audit.ToJsonObject(value[key.c_str()], allocator);
    }

}


string LocationInfo::GetLocationName() const
{
    return m_locationName;
}

void LocationInfo::SetLocationName(const string& _locationName)
{
    m_locationName = _locationName;
    m_locationNameHasBeenSet = true;
}

bool LocationInfo::LocationNameHasBeenSet() const
{
    return m_locationNameHasBeenSet;
}

string LocationInfo::GetLocationUri() const
{
    return m_locationUri;
}

void LocationInfo::SetLocationUri(const string& _locationUri)
{
    m_locationUri = _locationUri;
    m_locationUriHasBeenSet = true;
}

bool LocationInfo::LocationUriHasBeenSet() const
{
    return m_locationUriHasBeenSet;
}

string LocationInfo::GetComment() const
{
    return m_comment;
}

void LocationInfo::SetComment(const string& _comment)
{
    m_comment = _comment;
    m_commentHasBeenSet = true;
}

bool LocationInfo::CommentHasBeenSet() const
{
    return m_commentHasBeenSet;
}

vector<KVPair> LocationInfo::GetProperties() const
{
    return m_properties;
}

void LocationInfo::SetProperties(const vector<KVPair>& _properties)
{
    m_properties = _properties;
    m_propertiesHasBeenSet = true;
}

bool LocationInfo::PropertiesHasBeenSet() const
{
    return m_propertiesHasBeenSet;
}

Audit LocationInfo::GetAudit() const
{
    return m_audit;
}

void LocationInfo::SetAudit(const Audit& _audit)
{
    m_audit = _audit;
    m_auditHasBeenSet = true;
}

bool LocationInfo::AuditHasBeenSet() const
{
    return m_auditHasBeenSet;
}

