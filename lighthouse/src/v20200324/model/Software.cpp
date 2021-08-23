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

#include <tencentcloud/lighthouse/v20200324/model/Software.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace std;

Software::Software() :
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_imageUrlHasBeenSet(false),
    m_installDirHasBeenSet(false),
    m_detailSetHasBeenSet(false)
{
}

CoreInternalOutcome Software::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Software.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Software.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }

    if (value.HasMember("ImageUrl") && !value["ImageUrl"].IsNull())
    {
        if (!value["ImageUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Software.ImageUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageUrl = string(value["ImageUrl"].GetString());
        m_imageUrlHasBeenSet = true;
    }

    if (value.HasMember("InstallDir") && !value["InstallDir"].IsNull())
    {
        if (!value["InstallDir"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Software.InstallDir` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_installDir = string(value["InstallDir"].GetString());
        m_installDirHasBeenSet = true;
    }

    if (value.HasMember("DetailSet") && !value["DetailSet"].IsNull())
    {
        if (!value["DetailSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `Software.DetailSet` is not array type"));

        const rapidjson::Value &tmpValue = value["DetailSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            SoftwareDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_detailSet.push_back(item);
        }
        m_detailSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Software::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_imageUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_installDirHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstallDir";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_installDir.c_str(), allocator).Move(), allocator);
    }

    if (m_detailSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DetailSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_detailSet.begin(); itr != m_detailSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string Software::GetName() const
{
    return m_name;
}

void Software::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool Software::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string Software::GetVersion() const
{
    return m_version;
}

void Software::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool Software::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

string Software::GetImageUrl() const
{
    return m_imageUrl;
}

void Software::SetImageUrl(const string& _imageUrl)
{
    m_imageUrl = _imageUrl;
    m_imageUrlHasBeenSet = true;
}

bool Software::ImageUrlHasBeenSet() const
{
    return m_imageUrlHasBeenSet;
}

string Software::GetInstallDir() const
{
    return m_installDir;
}

void Software::SetInstallDir(const string& _installDir)
{
    m_installDir = _installDir;
    m_installDirHasBeenSet = true;
}

bool Software::InstallDirHasBeenSet() const
{
    return m_installDirHasBeenSet;
}

vector<SoftwareDetail> Software::GetDetailSet() const
{
    return m_detailSet;
}

void Software::SetDetailSet(const vector<SoftwareDetail>& _detailSet)
{
    m_detailSet = _detailSet;
    m_detailSetHasBeenSet = true;
}

bool Software::DetailSetHasBeenSet() const
{
    return m_detailSetHasBeenSet;
}

