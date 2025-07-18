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

#include <tencentcloud/tke/v20180525/model/CUDNN.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tke::V20180525::Model;
using namespace std;

CUDNN::CUDNN() :
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_devNameHasBeenSet(false),
    m_docNameHasBeenSet(false)
{
}

CoreInternalOutcome CUDNN::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CUDNN.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CUDNN.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("DevName") && !value["DevName"].IsNull())
    {
        if (!value["DevName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CUDNN.DevName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_devName = string(value["DevName"].GetString());
        m_devNameHasBeenSet = true;
    }

    if (value.HasMember("DocName") && !value["DocName"].IsNull())
    {
        if (!value["DocName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CUDNN.DocName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_docName = string(value["DocName"].GetString());
        m_docNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CUDNN::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

    if (m_devNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DevName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_devName.c_str(), allocator).Move(), allocator);
    }

    if (m_docNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DocName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_docName.c_str(), allocator).Move(), allocator);
    }

}


string CUDNN::GetName() const
{
    return m_name;
}

void CUDNN::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CUDNN::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CUDNN::GetVersion() const
{
    return m_version;
}

void CUDNN::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool CUDNN::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string CUDNN::GetDevName() const
{
    return m_devName;
}

void CUDNN::SetDevName(const string& _devName)
{
    m_devName = _devName;
    m_devNameHasBeenSet = true;
}

bool CUDNN::DevNameHasBeenSet() const
{
    return m_devNameHasBeenSet;
}

string CUDNN::GetDocName() const
{
    return m_docName;
}

void CUDNN::SetDocName(const string& _docName)
{
    m_docName = _docName;
    m_docNameHasBeenSet = true;
}

bool CUDNN::DocNameHasBeenSet() const
{
    return m_docNameHasBeenSet;
}

