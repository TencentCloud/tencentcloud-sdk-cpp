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

#include <tencentcloud/ess/v20201111/model/TemplateUserFlowType.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

TemplateUserFlowType::TemplateUserFlowType() :
    m_userFlowTypeIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_templateNumHasBeenSet(false)
{
}

CoreInternalOutcome TemplateUserFlowType::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("UserFlowTypeId") && !value["UserFlowTypeId"].IsNull())
    {
        if (!value["UserFlowTypeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateUserFlowType.UserFlowTypeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userFlowTypeId = string(value["UserFlowTypeId"].GetString());
        m_userFlowTypeIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateUserFlowType.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateUserFlowType.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("TemplateNum") && !value["TemplateNum"].IsNull())
    {
        if (!value["TemplateNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TemplateUserFlowType.TemplateNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_templateNum = value["TemplateNum"].GetInt64();
        m_templateNumHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TemplateUserFlowType::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_userFlowTypeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserFlowTypeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userFlowTypeId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_templateNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_templateNum, allocator);
    }

}


string TemplateUserFlowType::GetUserFlowTypeId() const
{
    return m_userFlowTypeId;
}

void TemplateUserFlowType::SetUserFlowTypeId(const string& _userFlowTypeId)
{
    m_userFlowTypeId = _userFlowTypeId;
    m_userFlowTypeIdHasBeenSet = true;
}

bool TemplateUserFlowType::UserFlowTypeIdHasBeenSet() const
{
    return m_userFlowTypeIdHasBeenSet;
}

string TemplateUserFlowType::GetName() const
{
    return m_name;
}

void TemplateUserFlowType::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool TemplateUserFlowType::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string TemplateUserFlowType::GetDescription() const
{
    return m_description;
}

void TemplateUserFlowType::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool TemplateUserFlowType::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

int64_t TemplateUserFlowType::GetTemplateNum() const
{
    return m_templateNum;
}

void TemplateUserFlowType::SetTemplateNum(const int64_t& _templateNum)
{
    m_templateNum = _templateNum;
    m_templateNumHasBeenSet = true;
}

bool TemplateUserFlowType::TemplateNumHasBeenSet() const
{
    return m_templateNumHasBeenSet;
}

