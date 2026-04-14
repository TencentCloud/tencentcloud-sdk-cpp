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

#include <tencentcloud/tke/v20220501/model/RegularNodeInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20220501::Model;
using namespace std;

RegularNodeInfo::RegularNodeInfo() :
    m_instanceAdvancedSettingsHasBeenSet(false),
    m_autoscalingGroupIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome RegularNodeInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceAdvancedSettings") && !value["InstanceAdvancedSettings"].IsNull())
    {
        if (!value["InstanceAdvancedSettings"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodeInfo.InstanceAdvancedSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_instanceAdvancedSettings.Deserialize(value["InstanceAdvancedSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_instanceAdvancedSettingsHasBeenSet = true;
    }

    if (value.HasMember("AutoscalingGroupId") && !value["AutoscalingGroupId"].IsNull())
    {
        if (!value["AutoscalingGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RegularNodeInfo.AutoscalingGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_autoscalingGroupId = string(value["AutoscalingGroupId"].GetString());
        m_autoscalingGroupIdHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `RegularNodeInfo.Tags` is not array type"));

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


    return CoreInternalOutcome(true);
}

void RegularNodeInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceAdvancedSettingsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceAdvancedSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_instanceAdvancedSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_autoscalingGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoscalingGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_autoscalingGroupId.c_str(), allocator).Move(), allocator);
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

}


InstanceAdvancedSettings RegularNodeInfo::GetInstanceAdvancedSettings() const
{
    return m_instanceAdvancedSettings;
}

void RegularNodeInfo::SetInstanceAdvancedSettings(const InstanceAdvancedSettings& _instanceAdvancedSettings)
{
    m_instanceAdvancedSettings = _instanceAdvancedSettings;
    m_instanceAdvancedSettingsHasBeenSet = true;
}

bool RegularNodeInfo::InstanceAdvancedSettingsHasBeenSet() const
{
    return m_instanceAdvancedSettingsHasBeenSet;
}

string RegularNodeInfo::GetAutoscalingGroupId() const
{
    return m_autoscalingGroupId;
}

void RegularNodeInfo::SetAutoscalingGroupId(const string& _autoscalingGroupId)
{
    m_autoscalingGroupId = _autoscalingGroupId;
    m_autoscalingGroupIdHasBeenSet = true;
}

bool RegularNodeInfo::AutoscalingGroupIdHasBeenSet() const
{
    return m_autoscalingGroupIdHasBeenSet;
}

vector<Tag> RegularNodeInfo::GetTags() const
{
    return m_tags;
}

void RegularNodeInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool RegularNodeInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

