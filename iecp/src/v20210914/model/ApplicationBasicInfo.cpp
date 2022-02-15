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

#include <tencentcloud/iecp/v20210914/model/ApplicationBasicInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ApplicationBasicInfo::ApplicationBasicInfo() :
    m_nameHasBeenSet(false),
    m_manageUrlHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_allowVisualModifyHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationBasicInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ManageUrl") && !value["ManageUrl"].IsNull())
    {
        if (!value["ManageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicInfo.ManageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_manageUrl = string(value["ManageUrl"].GetString());
        m_manageUrlHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AllowVisualModify") && !value["AllowVisualModify"].IsNull())
    {
        if (!value["AllowVisualModify"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationBasicInfo.AllowVisualModify` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_allowVisualModify = value["AllowVisualModify"].GetBool();
        m_allowVisualModifyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationBasicInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_manageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ManageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_manageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_allowVisualModifyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AllowVisualModify";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_allowVisualModify, allocator);
    }

}


string ApplicationBasicInfo::GetName() const
{
    return m_name;
}

void ApplicationBasicInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ApplicationBasicInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ApplicationBasicInfo::GetManageUrl() const
{
    return m_manageUrl;
}

void ApplicationBasicInfo::SetManageUrl(const string& _manageUrl)
{
    m_manageUrl = _manageUrl;
    m_manageUrlHasBeenSet = true;
}

bool ApplicationBasicInfo::ManageUrlHasBeenSet() const
{
    return m_manageUrlHasBeenSet;
}

string ApplicationBasicInfo::GetDescription() const
{
    return m_description;
}

void ApplicationBasicInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ApplicationBasicInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ApplicationBasicInfo::GetCreateTime() const
{
    return m_createTime;
}

void ApplicationBasicInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ApplicationBasicInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

bool ApplicationBasicInfo::GetAllowVisualModify() const
{
    return m_allowVisualModify;
}

void ApplicationBasicInfo::SetAllowVisualModify(const bool& _allowVisualModify)
{
    m_allowVisualModify = _allowVisualModify;
    m_allowVisualModifyHasBeenSet = true;
}

bool ApplicationBasicInfo::AllowVisualModifyHasBeenSet() const
{
    return m_allowVisualModifyHasBeenSet;
}

