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

#include <tencentcloud/solar/v20181011/model/ActivityInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Solar::V20181011::Model;
using namespace rapidjson;
using namespace std;

ActivityInfo::ActivityInfo() :
    m_templateIdHasBeenSet(false),
    m_activityTitleHasBeenSet(false),
    m_activityDescHasBeenSet(false),
    m_activityCoverHasBeenSet(false),
    m_activityTypeHasBeenSet(false),
    m_activityIdHasBeenSet(false),
    m_personalConfigHasBeenSet(false)
{
}

CoreInternalOutcome ActivityInfo::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("TemplateId") && !value["TemplateId"].IsNull())
    {
        if (!value["TemplateId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivityInfo.TemplateId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateId = string(value["TemplateId"].GetString());
        m_templateIdHasBeenSet = true;
    }

    if (value.HasMember("ActivityTitle") && !value["ActivityTitle"].IsNull())
    {
        if (!value["ActivityTitle"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivityInfo.ActivityTitle` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityTitle = string(value["ActivityTitle"].GetString());
        m_activityTitleHasBeenSet = true;
    }

    if (value.HasMember("ActivityDesc") && !value["ActivityDesc"].IsNull())
    {
        if (!value["ActivityDesc"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivityInfo.ActivityDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityDesc = string(value["ActivityDesc"].GetString());
        m_activityDescHasBeenSet = true;
    }

    if (value.HasMember("ActivityCover") && !value["ActivityCover"].IsNull())
    {
        if (!value["ActivityCover"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivityInfo.ActivityCover` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityCover = string(value["ActivityCover"].GetString());
        m_activityCoverHasBeenSet = true;
    }

    if (value.HasMember("ActivityType") && !value["ActivityType"].IsNull())
    {
        if (!value["ActivityType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivityInfo.ActivityType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityType = string(value["ActivityType"].GetString());
        m_activityTypeHasBeenSet = true;
    }

    if (value.HasMember("ActivityId") && !value["ActivityId"].IsNull())
    {
        if (!value["ActivityId"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivityInfo.ActivityId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_activityId = string(value["ActivityId"].GetString());
        m_activityIdHasBeenSet = true;
    }

    if (value.HasMember("PersonalConfig") && !value["PersonalConfig"].IsNull())
    {
        if (!value["PersonalConfig"].IsString())
        {
            return CoreInternalOutcome(Error("response `ActivityInfo.PersonalConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_personalConfig = string(value["PersonalConfig"].GetString());
        m_personalConfigHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ActivityInfo::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_templateIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TemplateId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_templateId.c_str(), allocator).Move(), allocator);
    }

    if (m_activityTitleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActivityTitle";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_activityTitle.c_str(), allocator).Move(), allocator);
    }

    if (m_activityDescHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActivityDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_activityDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_activityCoverHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActivityCover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_activityCover.c_str(), allocator).Move(), allocator);
    }

    if (m_activityTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActivityType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_activityType.c_str(), allocator).Move(), allocator);
    }

    if (m_activityIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ActivityId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_activityId.c_str(), allocator).Move(), allocator);
    }

    if (m_personalConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PersonalConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_personalConfig.c_str(), allocator).Move(), allocator);
    }

}


string ActivityInfo::GetTemplateId() const
{
    return m_templateId;
}

void ActivityInfo::SetTemplateId(const string& _templateId)
{
    m_templateId = _templateId;
    m_templateIdHasBeenSet = true;
}

bool ActivityInfo::TemplateIdHasBeenSet() const
{
    return m_templateIdHasBeenSet;
}

string ActivityInfo::GetActivityTitle() const
{
    return m_activityTitle;
}

void ActivityInfo::SetActivityTitle(const string& _activityTitle)
{
    m_activityTitle = _activityTitle;
    m_activityTitleHasBeenSet = true;
}

bool ActivityInfo::ActivityTitleHasBeenSet() const
{
    return m_activityTitleHasBeenSet;
}

string ActivityInfo::GetActivityDesc() const
{
    return m_activityDesc;
}

void ActivityInfo::SetActivityDesc(const string& _activityDesc)
{
    m_activityDesc = _activityDesc;
    m_activityDescHasBeenSet = true;
}

bool ActivityInfo::ActivityDescHasBeenSet() const
{
    return m_activityDescHasBeenSet;
}

string ActivityInfo::GetActivityCover() const
{
    return m_activityCover;
}

void ActivityInfo::SetActivityCover(const string& _activityCover)
{
    m_activityCover = _activityCover;
    m_activityCoverHasBeenSet = true;
}

bool ActivityInfo::ActivityCoverHasBeenSet() const
{
    return m_activityCoverHasBeenSet;
}

string ActivityInfo::GetActivityType() const
{
    return m_activityType;
}

void ActivityInfo::SetActivityType(const string& _activityType)
{
    m_activityType = _activityType;
    m_activityTypeHasBeenSet = true;
}

bool ActivityInfo::ActivityTypeHasBeenSet() const
{
    return m_activityTypeHasBeenSet;
}

string ActivityInfo::GetActivityId() const
{
    return m_activityId;
}

void ActivityInfo::SetActivityId(const string& _activityId)
{
    m_activityId = _activityId;
    m_activityIdHasBeenSet = true;
}

bool ActivityInfo::ActivityIdHasBeenSet() const
{
    return m_activityIdHasBeenSet;
}

string ActivityInfo::GetPersonalConfig() const
{
    return m_personalConfig;
}

void ActivityInfo::SetPersonalConfig(const string& _personalConfig)
{
    m_personalConfig = _personalConfig;
    m_personalConfigHasBeenSet = true;
}

bool ActivityInfo::PersonalConfigHasBeenSet() const
{
    return m_personalConfigHasBeenSet;
}

