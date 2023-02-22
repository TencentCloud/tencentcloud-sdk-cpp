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

#include <tencentcloud/tione/v20211111/model/Container.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

Container::Container() :
    m_nameHasBeenSet(false),
    m_containerIdHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome Container::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ContainerId") && !value["ContainerId"].IsNull())
    {
        if (!value["ContainerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.ContainerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerId = string(value["ContainerId"].GetString());
        m_containerIdHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `Container.Status` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_status.Deserialize(value["Status"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Container::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_containerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_status.ToJsonObject(value[key.c_str()], allocator);
    }

}


string Container::GetName() const
{
    return m_name;
}

void Container::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Container::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Container::GetContainerId() const
{
    return m_containerId;
}

void Container::SetContainerId(const string& _containerId)
{
    m_containerId = _containerId;
    m_containerIdHasBeenSet = true;
}

bool Container::ContainerIdHasBeenSet() const
{
    return m_containerIdHasBeenSet;
}

string Container::GetImage() const
{
    return m_image;
}

void Container::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool Container::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

ContainerStatus Container::GetStatus() const
{
    return m_status;
}

void Container::SetStatus(const ContainerStatus& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool Container::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

