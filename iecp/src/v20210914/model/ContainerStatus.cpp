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

#include <tencentcloud/iecp/v20210914/model/ContainerStatus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ContainerStatus::ContainerStatus() :
    m_nameHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_restartCountHasBeenSet(false),
    m_statusHasBeenSet(false)
{
}

CoreInternalOutcome ContainerStatus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.ID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_iD = string(value["ID"].GetString());
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("Image") && !value["Image"].IsNull())
    {
        if (!value["Image"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.Image` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_image = string(value["Image"].GetString());
        m_imageHasBeenSet = true;
    }

    if (value.HasMember("RestartCount") && !value["RestartCount"].IsNull())
    {
        if (!value["RestartCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.RestartCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_restartCount = value["RestartCount"].GetInt64();
        m_restartCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ContainerStatus.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ContainerStatus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
    }

    if (m_imageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_image.c_str(), allocator).Move(), allocator);
    }

    if (m_restartCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RestartCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_restartCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

}


string ContainerStatus::GetName() const
{
    return m_name;
}

void ContainerStatus::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ContainerStatus::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ContainerStatus::GetID() const
{
    return m_iD;
}

void ContainerStatus::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ContainerStatus::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ContainerStatus::GetImage() const
{
    return m_image;
}

void ContainerStatus::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool ContainerStatus::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}

int64_t ContainerStatus::GetRestartCount() const
{
    return m_restartCount;
}

void ContainerStatus::SetRestartCount(const int64_t& _restartCount)
{
    m_restartCount = _restartCount;
    m_restartCountHasBeenSet = true;
}

bool ContainerStatus::RestartCountHasBeenSet() const
{
    return m_restartCountHasBeenSet;
}

string ContainerStatus::GetStatus() const
{
    return m_status;
}

void ContainerStatus::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ContainerStatus::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

