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

#include <tencentcloud/teo/v20220901/model/SecurityPolicyTemplateInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecurityPolicyTemplateInfo::SecurityPolicyTemplateInfo() :
    m_zoneIdHasBeenSet(false),
    m_templateIdHasBeenSet(false),
    m_templateNameHasBeenSet(false),
    m_bindDomainsHasBeenSet(false)
{
}

CoreInternalOutcome SecurityPolicyTemplateInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ZoneId") && !value["ZoneId"].IsNull())
    {
        if (!value["ZoneId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyTemplateInfo.ZoneId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_zoneId = string(value["ZoneId"].GetString());
        m_zoneIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyTemplateInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateName") && !value["TemplateName"].IsNull())
    {
        if (!value["TemplateName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyTemplateInfo.TemplateName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateName = string(value["TemplateName"].GetString());
        m_templateNameHasBeenSet = true;
    }

    if (value.HasMember("BindDomains") && !value["BindDomains"].IsNull())
    {
        if (!value["BindDomains"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SecurityPolicyTemplateInfo.BindDomains` is not array type"));

        const rapidjson::Value &tmpValue = value["BindDomains"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BindDomainInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_bindDomains.push_back(item);
        }
        m_bindDomainsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecurityPolicyTemplateInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateName.c_str(), allocator).Move(), allocator);
    }

    if (m_bindDomainsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindDomains";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_bindDomains.begin(); itr != m_bindDomains.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string SecurityPolicyTemplateInfo::GetZoneId() const
{
    return m_zoneId;
}

void SecurityPolicyTemplateInfo::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool SecurityPolicyTemplateInfo::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string SecurityPolicyTemplateInfo::GetTemplateId() const
{
    return m_templateId;
}

void SecurityPolicyTemplateInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool SecurityPolicyTemplateInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string SecurityPolicyTemplateInfo::GetTemplateName() const
{
    return m_templateName;
}

void SecurityPolicyTemplateInfo::SetTemplateName(const string& _templateName)
{
    m_templateName = _templateName;
    m_templateNameHasBeenSet = true;
}

bool SecurityPolicyTemplateInfo::TemplateNameHasBeenSet() const
{
    return m_templateNameHasBeenSet;
}

vector<BindDomainInfo> SecurityPolicyTemplateInfo::GetBindDomains() const
{
    return m_bindDomains;
}

void SecurityPolicyTemplateInfo::SetBindDomains(const vector<BindDomainInfo>& _bindDomains)
{
    m_bindDomains = _bindDomains;
    m_bindDomainsHasBeenSet = true;
}

bool SecurityPolicyTemplateInfo::BindDomainsHasBeenSet() const
{
    return m_bindDomainsHasBeenSet;
}

