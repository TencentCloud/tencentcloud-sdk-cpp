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

#include <tencentcloud/cls/v20201016/model/NoticeContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

NoticeContent::NoticeContent() :
    m_typeHasBeenSet(false),
    m_triggerContentHasBeenSet(false),
    m_recoveryContentHasBeenSet(false)
{
}

CoreInternalOutcome NoticeContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContent.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("TriggerContent") && !value["TriggerContent"].IsNull())
    {
        if (!value["TriggerContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContent.TriggerContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_triggerContent.Deserialize(value["TriggerContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_triggerContentHasBeenSet = true;
    }

    if (value.HasMember("RecoveryContent") && !value["RecoveryContent"].IsNull())
    {
        if (!value["RecoveryContent"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `NoticeContent.RecoveryContent` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_recoveryContent.Deserialize(value["RecoveryContent"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_recoveryContentHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NoticeContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_triggerContent.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_recoveryContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecoveryContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_recoveryContent.ToJsonObject(value[key.c_str()], allocator);
    }

}


string NoticeContent::GetType() const
{
    return m_type;
}

void NoticeContent::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool NoticeContent::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

NoticeContentInfo NoticeContent::GetTriggerContent() const
{
    return m_triggerContent;
}

void NoticeContent::SetTriggerContent(const NoticeContentInfo& _triggerContent)
{
    m_triggerContent = _triggerContent;
    m_triggerContentHasBeenSet = true;
}

bool NoticeContent::TriggerContentHasBeenSet() const
{
    return m_triggerContentHasBeenSet;
}

NoticeContentInfo NoticeContent::GetRecoveryContent() const
{
    return m_recoveryContent;
}

void NoticeContent::SetRecoveryContent(const NoticeContentInfo& _recoveryContent)
{
    m_recoveryContent = _recoveryContent;
    m_recoveryContentHasBeenSet = true;
}

bool NoticeContent::RecoveryContentHasBeenSet() const
{
    return m_recoveryContentHasBeenSet;
}

