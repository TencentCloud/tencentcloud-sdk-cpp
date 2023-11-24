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

#include <tencentcloud/cfg/v20210820/model/Template.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfg::V20210820::Model;
using namespace std;

Template::Template() :
    m_templateIdHasBeenSet(false),
    m_templateTitleHasBeenSet(false),
    m_templateDescriptionHasBeenSet(false),
    m_templateTagHasBeenSet(false),
    m_templateIsUsedHasBeenSet(false),
    m_templateCreateTimeHasBeenSet(false),
    m_templateUpdateTimeHasBeenSet(false),
    m_templateModeHasBeenSet(false),
    m_templatePauseDurationHasBeenSet(false),
    m_templateOwnerUinHasBeenSet(false),
    m_templateRegionIdHasBeenSet(false),
    m_templateGroupsHasBeenSet(false),
    m_templateMonitorsHasBeenSet(false),
    m_templatePolicyHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_templateSourceHasBeenSet(false),
    m_apmServiceListHasBeenSet(false),
    m_alarmPolicyHasBeenSet(false),
    m_policyDealTypeHasBeenSet(false)
{
}

CoreInternalOutcome Template::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = value["TemplateId"].GetInt64();
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateTitle") && !value["TemplateTitle"].IsNull())
    {
        if (!value["TemplateTitle"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateTitle = string(value["TemplateTitle"].GetString());
        m_templateTitleHasBeenSet = true;
    }

    if (value.HasMember("TemplateDescription") && !value["TemplateDescription"].IsNull())
    {
        if (!value["TemplateDescription"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateDescription` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateDescription = string(value["TemplateDescription"].GetString());
        m_templateDescriptionHasBeenSet = true;
    }

    if (value.HasMember("TemplateTag") && !value["TemplateTag"].IsNull())
    {
        if (!value["TemplateTag"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateTag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateTag = string(value["TemplateTag"].GetString());
        m_templateTagHasBeenSet = true;
    }

    if (value.HasMember("TemplateIsUsed") && !value["TemplateIsUsed"].IsNull())
    {
        if (!value["TemplateIsUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateIsUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateIsUsed = value["TemplateIsUsed"].GetInt64();
        m_templateIsUsedHasBeenSet = true;
    }

    if (value.HasMember("TemplateCreateTime") && !value["TemplateCreateTime"].IsNull())
    {
        if (!value["TemplateCreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateCreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateCreateTime = string(value["TemplateCreateTime"].GetString());
        m_templateCreateTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateUpdateTime") && !value["TemplateUpdateTime"].IsNull())
    {
        if (!value["TemplateUpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateUpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateUpdateTime = string(value["TemplateUpdateTime"].GetString());
        m_templateUpdateTimeHasBeenSet = true;
    }

    if (value.HasMember("TemplateMode") && !value["TemplateMode"].IsNull())
    {
        if (!value["TemplateMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateMode = value["TemplateMode"].GetInt64();
        m_templateModeHasBeenSet = true;
    }

    if (value.HasMember("TemplatePauseDuration") && !value["TemplatePauseDuration"].IsNull())
    {
        if (!value["TemplatePauseDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplatePauseDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templatePauseDuration = value["TemplatePauseDuration"].GetInt64();
        m_templatePauseDurationHasBeenSet = true;
    }

    if (value.HasMember("TemplateOwnerUin") && !value["TemplateOwnerUin"].IsNull())
    {
        if (!value["TemplateOwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateOwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateOwnerUin = string(value["TemplateOwnerUin"].GetString());
        m_templateOwnerUinHasBeenSet = true;
    }

    if (value.HasMember("TemplateRegionId") && !value["TemplateRegionId"].IsNull())
    {
        if (!value["TemplateRegionId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateRegionId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateRegionId = value["TemplateRegionId"].GetInt64();
        m_templateRegionIdHasBeenSet = true;
    }

    if (value.HasMember("TemplateGroups") && !value["TemplateGroups"].IsNull())
    {
        if (!value["TemplateGroups"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Template.TemplateGroups` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateGroups"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TemplateGroup item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateGroups.push_back(item);
        }
        m_templateGroupsHasBeenSet = true;
    }

    if (value.HasMember("TemplateMonitors") && !value["TemplateMonitors"].IsNull())
    {
        if (!value["TemplateMonitors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Template.TemplateMonitors` is not array type"));

        const rapidjson::Value &tmpValue = value["TemplateMonitors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TemplateMonitor item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_templateMonitors.push_back(item);
        }
        m_templateMonitorsHasBeenSet = true;
    }

    if (value.HasMember("TemplatePolicy") && !value["TemplatePolicy"].IsNull())
    {
        if (!value["TemplatePolicy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplatePolicy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_templatePolicy.Deserialize(value["TemplatePolicy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_templatePolicyHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Template.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagWithDescribe item;
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

    if (value.HasMember("TemplateSource") && !value["TemplateSource"].IsNull())
    {
        if (!value["TemplateSource"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Template.TemplateSource` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateSource = value["TemplateSource"].GetInt64();
        m_templateSourceHasBeenSet = true;
    }

    if (value.HasMember("ApmServiceList") && !value["ApmServiceList"].IsNull())
    {
        if (!value["ApmServiceList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Template.ApmServiceList` is not array type"));

        const rapidjson::Value &tmpValue = value["ApmServiceList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ApmServiceInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_apmServiceList.push_back(item);
        }
        m_apmServiceListHasBeenSet = true;
    }

    if (value.HasMember("AlarmPolicy") && !value["AlarmPolicy"].IsNull())
    {
        if (!value["AlarmPolicy"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Template.AlarmPolicy` is not array type"));

        const rapidjson::Value &tmpValue = value["AlarmPolicy"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_alarmPolicy.push_back((*itr).GetString());
        }
        m_alarmPolicyHasBeenSet = true;
    }

    if (value.HasMember("PolicyDealType") && !value["PolicyDealType"].IsNull())
    {
        if (!value["PolicyDealType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `Template.PolicyDealType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_policyDealType = value["PolicyDealType"].GetInt64();
        m_policyDealTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Template::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateId, allocator);
    }

    if (m_templateTitleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_templateDescriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateDescription";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateDescription.c_str(), allocator).Move(), allocator);
    }

    if (m_templateTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateTag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateTag.c_str(), allocator).Move(), allocator);
    }

    if (m_templateIsUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateIsUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateIsUsed, allocator);
    }

    if (m_templateCreateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateCreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateCreateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_templateUpdateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateUpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateUpdateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_templateModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateMode, allocator);
    }

    if (m_templatePauseDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplatePauseDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templatePauseDuration, allocator);
    }

    if (m_templateOwnerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateOwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateOwnerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_templateRegionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateRegionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateRegionId, allocator);
    }

    if (m_templateGroupsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateGroups";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateGroups.begin(); itr != m_templateGroups.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_templateMonitorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateMonitors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_templateMonitors.begin(); itr != m_templateMonitors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_templatePolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplatePolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_templatePolicy.ToJsonObject(value[key.c_str()], allocator);
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

    if (m_templateSourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateSource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateSource, allocator);
    }

    if (m_apmServiceListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApmServiceList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_apmServiceList.begin(); itr != m_apmServiceList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_alarmPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmPolicy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_alarmPolicy.begin(); itr != m_alarmPolicy.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_policyDealTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PolicyDealType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policyDealType, allocator);
    }

}


int64_t Template::GetTemplateId() const
{
    return m_templateId;
}

void Template::SetTemplateId(const int64_t& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool Template::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string Template::GetTemplateTitle() const
{
    return m_templateTitle;
}

void Template::SetTemplateTitle(const string& _templateTitle)
{
    m_templateTitle = _templateTitle;
    m_templateTitleHasBeenSet = true;
}

bool Template::TemplateTitleHasBeenSet() const
{
    return m_templateTitleHasBeenSet;
}

string Template::GetTemplateDescription() const
{
    return m_templateDescription;
}

void Template::SetTemplateDescription(const string& _templateDescription)
{
    m_templateDescription = _templateDescription;
    m_templateDescriptionHasBeenSet = true;
}

bool Template::TemplateDescriptionHasBeenSet() const
{
    return m_templateDescriptionHasBeenSet;
}

string Template::GetTemplateTag() const
{
    return m_templateTag;
}

void Template::SetTemplateTag(const string& _templateTag)
{
    m_templateTag = _templateTag;
    m_templateTagHasBeenSet = true;
}

bool Template::TemplateTagHasBeenSet() const
{
    return m_templateTagHasBeenSet;
}

int64_t Template::GetTemplateIsUsed() const
{
    return m_templateIsUsed;
}

void Template::SetTemplateIsUsed(const int64_t& _templateIsUsed)
{
    m_templateIsUsed = _templateIsUsed;
    m_templateIsUsedHasBeenSet = true;
}

bool Template::TemplateIsUsedHasBeenSet() const
{
    return m_templateIsUsedHasBeenSet;
}

string Template::GetTemplateCreateTime() const
{
    return m_templateCreateTime;
}

void Template::SetTemplateCreateTime(const string& _templateCreateTime)
{
    m_templateCreateTime = _templateCreateTime;
    m_templateCreateTimeHasBeenSet = true;
}

bool Template::TemplateCreateTimeHasBeenSet() const
{
    return m_templateCreateTimeHasBeenSet;
}

string Template::GetTemplateUpdateTime() const
{
    return m_templateUpdateTime;
}

void Template::SetTemplateUpdateTime(const string& _templateUpdateTime)
{
    m_templateUpdateTime = _templateUpdateTime;
    m_templateUpdateTimeHasBeenSet = true;
}

bool Template::TemplateUpdateTimeHasBeenSet() const
{
    return m_templateUpdateTimeHasBeenSet;
}

int64_t Template::GetTemplateMode() const
{
    return m_templateMode;
}

void Template::SetTemplateMode(const int64_t& _templateMode)
{
    m_templateMode = _templateMode;
    m_templateModeHasBeenSet = true;
}

bool Template::TemplateModeHasBeenSet() const
{
    return m_templateModeHasBeenSet;
}

int64_t Template::GetTemplatePauseDuration() const
{
    return m_templatePauseDuration;
}

void Template::SetTemplatePauseDuration(const int64_t& _templatePauseDuration)
{
    m_templatePauseDuration = _templatePauseDuration;
    m_templatePauseDurationHasBeenSet = true;
}

bool Template::TemplatePauseDurationHasBeenSet() const
{
    return m_templatePauseDurationHasBeenSet;
}

string Template::GetTemplateOwnerUin() const
{
    return m_templateOwnerUin;
}

void Template::SetTemplateOwnerUin(const string& _templateOwnerUin)
{
    m_templateOwnerUin = _templateOwnerUin;
    m_templateOwnerUinHasBeenSet = true;
}

bool Template::TemplateOwnerUinHasBeenSet() const
{
    return m_templateOwnerUinHasBeenSet;
}

int64_t Template::GetTemplateRegionId() const
{
    return m_templateRegionId;
}

void Template::SetTemplateRegionId(const int64_t& _templateRegionId)
{
    m_templateRegionId = _templateRegionId;
    m_templateRegionIdHasBeenSet = true;
}

bool Template::TemplateRegionIdHasBeenSet() const
{
    return m_templateRegionIdHasBeenSet;
}

vector<TemplateGroup> Template::GetTemplateGroups() const
{
    return m_templateGroups;
}

void Template::SetTemplateGroups(const vector<TemplateGroup>& _templateGroups)
{
    m_templateGroups = _templateGroups;
    m_templateGroupsHasBeenSet = true;
}

bool Template::TemplateGroupsHasBeenSet() const
{
    return m_templateGroupsHasBeenSet;
}

vector<TemplateMonitor> Template::GetTemplateMonitors() const
{
    return m_templateMonitors;
}

void Template::SetTemplateMonitors(const vector<TemplateMonitor>& _templateMonitors)
{
    m_templateMonitors = _templateMonitors;
    m_templateMonitorsHasBeenSet = true;
}

bool Template::TemplateMonitorsHasBeenSet() const
{
    return m_templateMonitorsHasBeenSet;
}

TemplatePolicy Template::GetTemplatePolicy() const
{
    return m_templatePolicy;
}

void Template::SetTemplatePolicy(const TemplatePolicy& _templatePolicy)
{
    m_templatePolicy = _templatePolicy;
    m_templatePolicyHasBeenSet = true;
}

bool Template::TemplatePolicyHasBeenSet() const
{
    return m_templatePolicyHasBeenSet;
}

vector<TagWithDescribe> Template::GetTags() const
{
    return m_tags;
}

void Template::SetTags(const vector<TagWithDescribe>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool Template::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t Template::GetTemplateSource() const
{
    return m_templateSource;
}

void Template::SetTemplateSource(const int64_t& _templateSource)
{
    m_templateSource = _templateSource;
    m_templateSourceHasBeenSet = true;
}

bool Template::TemplateSourceHasBeenSet() const
{
    return m_templateSourceHasBeenSet;
}

vector<ApmServiceInfo> Template::GetApmServiceList() const
{
    return m_apmServiceList;
}

void Template::SetApmServiceList(const vector<ApmServiceInfo>& _apmServiceList)
{
    m_apmServiceList = _apmServiceList;
    m_apmServiceListHasBeenSet = true;
}

bool Template::ApmServiceListHasBeenSet() const
{
    return m_apmServiceListHasBeenSet;
}

vector<string> Template::GetAlarmPolicy() const
{
    return m_alarmPolicy;
}

void Template::SetAlarmPolicy(const vector<string>& _alarmPolicy)
{
    m_alarmPolicy = _alarmPolicy;
    m_alarmPolicyHasBeenSet = true;
}

bool Template::AlarmPolicyHasBeenSet() const
{
    return m_alarmPolicyHasBeenSet;
}

int64_t Template::GetPolicyDealType() const
{
    return m_policyDealType;
}

void Template::SetPolicyDealType(const int64_t& _policyDealType)
{
    m_policyDealType = _policyDealType;
    m_policyDealTypeHasBeenSet = true;
}

bool Template::PolicyDealTypeHasBeenSet() const
{
    return m_policyDealTypeHasBeenSet;
}

