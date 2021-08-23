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

#include <tencentcloud/tiems/v20190416/model/Runtime.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace std;

Runtime::Runtime() :
    m_nameHasBeenSet(false),
    m_frameworkHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_publicHasBeenSet(false),
    m_healthCheckOnHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_createTimeHasBeenSet(false)
{
}

CoreInternalOutcome Runtime::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Runtime.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Framework") && !value["Framework"].IsNull())
    {
        if (!value["Framework"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Runtime.Framework` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_framework = string(value["Framework"].GetString());
        m_frameworkHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Runtime.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("Public") && !value["Public"].IsNull())
    {
        if (!value["Public"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Runtime.Public` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_public = value["Public"].GetBool();
        m_publicHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckOn") && !value["HealthCheckOn"].IsNull())
    {
        if (!value["HealthCheckOn"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `Runtime.HealthCheckOn` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckOn = value["HealthCheckOn"].GetBool();
        m_healthCheckOnHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Runtime.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Runtime.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Runtime::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_frameworkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Framework";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_framework.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_publicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Public";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_public, allocator);
    }

    if (m_healthCheckOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckOn, allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

}


string Runtime::GetName() const
{
    return m_name;
}

void Runtime::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Runtime::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Runtime::GetFramework() const
{
    return m_framework;
}

void Runtime::SetFramework(const string& _framework)
{
    m_framework = _framework;
    m_frameworkHasBeenSet = true;
}

bool Runtime::FrameworkHasBeenSet() const
{
    return m_frameworkHasBeenSet;
}

string Runtime::GetDescription() const
{
    return m_description;
}

void Runtime::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool Runtime::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

bool Runtime::GetPublic() const
{
    return m_public;
}

void Runtime::SetPublic(const bool& _public)
{
    m_public = _public;
    m_publicHasBeenSet = true;
}

bool Runtime::PublicHasBeenSet() const
{
    return m_publicHasBeenSet;
}

bool Runtime::GetHealthCheckOn() const
{
    return m_healthCheckOn;
}

void Runtime::SetHealthCheckOn(const bool& _healthCheckOn)
{
    m_healthCheckOn = _healthCheckOn;
    m_healthCheckOnHasBeenSet = true;
}

bool Runtime::HealthCheckOnHasBeenSet() const
{
    return m_healthCheckOnHasBeenSet;
}

string Runtime::GetImage() const
{
    return m_image;
}

void Runtime::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool Runtime::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

string Runtime::GetCreateTime() const
{
    return m_createTime;
}

void Runtime::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool Runtime::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

