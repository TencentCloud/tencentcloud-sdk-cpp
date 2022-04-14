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

#include <tencentcloud/cpdp/v20190820/model/CloudExternalPromptInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

CloudExternalPromptInfo::CloudExternalPromptInfo() :
    m_externalPromptTypeHasBeenSet(false),
    m_externalPromptValueHasBeenSet(false),
    m_externalPromptNameHasBeenSet(false)
{
}

CoreInternalOutcome CloudExternalPromptInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ExternalPromptType") && !value["ExternalPromptType"].IsNull())
    {
        if (!value["ExternalPromptType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudExternalPromptInfo.ExternalPromptType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalPromptType = string(value["ExternalPromptType"].GetString());
        m_externalPromptTypeHasBeenSet = true;
    }

    if (value.HasMember("ExternalPromptValue") && !value["ExternalPromptValue"].IsNull())
    {
        if (!value["ExternalPromptValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudExternalPromptInfo.ExternalPromptValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalPromptValue = string(value["ExternalPromptValue"].GetString());
        m_externalPromptValueHasBeenSet = true;
    }

    if (value.HasMember("ExternalPromptName") && !value["ExternalPromptName"].IsNull())
    {
        if (!value["ExternalPromptName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudExternalPromptInfo.ExternalPromptName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_externalPromptName = string(value["ExternalPromptName"].GetString());
        m_externalPromptNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudExternalPromptInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_externalPromptTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalPromptType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalPromptType.c_str(), allocator).Move(), allocator);
    }

    if (m_externalPromptValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalPromptValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalPromptValue.c_str(), allocator).Move(), allocator);
    }

    if (m_externalPromptNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExternalPromptName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_externalPromptName.c_str(), allocator).Move(), allocator);
    }

}


string CloudExternalPromptInfo::GetExternalPromptType() const
{
    return m_externalPromptType;
}

void CloudExternalPromptInfo::SetExternalPromptType(const string& _externalPromptType)
{
    m_externalPromptType = _externalPromptType;
    m_externalPromptTypeHasBeenSet = true;
}

bool CloudExternalPromptInfo::ExternalPromptTypeHasBeenSet() const
{
    return m_externalPromptTypeHasBeenSet;
}

string CloudExternalPromptInfo::GetExternalPromptValue() const
{
    return m_externalPromptValue;
}

void CloudExternalPromptInfo::SetExternalPromptValue(const string& _externalPromptValue)
{
    m_externalPromptValue = _externalPromptValue;
    m_externalPromptValueHasBeenSet = true;
}

bool CloudExternalPromptInfo::ExternalPromptValueHasBeenSet() const
{
    return m_externalPromptValueHasBeenSet;
}

string CloudExternalPromptInfo::GetExternalPromptName() const
{
    return m_externalPromptName;
}

void CloudExternalPromptInfo::SetExternalPromptName(const string& _externalPromptName)
{
    m_externalPromptName = _externalPromptName;
    m_externalPromptNameHasBeenSet = true;
}

bool CloudExternalPromptInfo::ExternalPromptNameHasBeenSet() const
{
    return m_externalPromptNameHasBeenSet;
}

