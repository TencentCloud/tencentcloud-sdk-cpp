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

#include <tencentcloud/scf/v20180416/model/LayerVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Scf::V20180416::Model;
using namespace std;

LayerVersionInfo::LayerVersionInfo() :
    m_compatibleRuntimesHasBeenSet(false),
    m_addTimeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_licenseInfoHasBeenSet(false),
    m_layerVersionHasBeenSet(false),
    m_layerNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_stampHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome LayerVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CompatibleRuntimes") && !value["CompatibleRuntimes"].IsNull())
    {
        if (!value["CompatibleRuntimes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LayerVersionInfo.CompatibleRuntimes` is not array type"));

        const rapidjson::Value &tmpValue = value["CompatibleRuntimes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_compatibleRuntimes.push_back((*itr).GetString());
        }
        m_compatibleRuntimesHasBeenSet = true;
    }

    if (value.HasMember("AddTime") && !value["AddTime"].IsNull())
    {
        if (!value["AddTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersionInfo.AddTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_addTime = string(value["AddTime"].GetString());
        m_addTimeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersionInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("LicenseInfo") && !value["LicenseInfo"].IsNull())
    {
        if (!value["LicenseInfo"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersionInfo.LicenseInfo` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_licenseInfo = string(value["LicenseInfo"].GetString());
        m_licenseInfoHasBeenSet = true;
    }

    if (value.HasMember("LayerVersion") && !value["LayerVersion"].IsNull())
    {
        if (!value["LayerVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersionInfo.LayerVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_layerVersion = value["LayerVersion"].GetInt64();
        m_layerVersionHasBeenSet = true;
    }

    if (value.HasMember("LayerName") && !value["LayerName"].IsNull())
    {
        if (!value["LayerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersionInfo.LayerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerName = string(value["LayerName"].GetString());
        m_layerNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Stamp") && !value["Stamp"].IsNull())
    {
        if (!value["Stamp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `LayerVersionInfo.Stamp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_stamp = string(value["Stamp"].GetString());
        m_stampHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `LayerVersionInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LayerVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_compatibleRuntimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompatibleRuntimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_compatibleRuntimes.begin(); itr != m_compatibleRuntimes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_addTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AddTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_addTime.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_licenseInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LicenseInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_licenseInfo.c_str(), allocator).Move(), allocator);
    }

    if (m_layerVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerVersion, allocator);
    }

    if (m_layerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_stampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Stamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_stamp.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<string> LayerVersionInfo::GetCompatibleRuntimes() const
{
    return m_compatibleRuntimes;
}

void LayerVersionInfo::SetCompatibleRuntimes(const vector<string>& _compatibleRuntimes)
{
    m_compatibleRuntimes = _compatibleRuntimes;
    m_compatibleRuntimesHasBeenSet = true;
}

bool LayerVersionInfo::CompatibleRuntimesHasBeenSet() const
{
    return m_compatibleRuntimesHasBeenSet;
}

string LayerVersionInfo::GetAddTime() const
{
    return m_addTime;
}

void LayerVersionInfo::SetAddTime(const string& _addTime)
{
    m_addTime = _addTime;
    m_addTimeHasBeenSet = true;
}

bool LayerVersionInfo::AddTimeHasBeenSet() const
{
    return m_addTimeHasBeenSet;
}

string LayerVersionInfo::GetDescription() const
{
    return m_description;
}

void LayerVersionInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool LayerVersionInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string LayerVersionInfo::GetLicenseInfo() const
{
    return m_licenseInfo;
}

void LayerVersionInfo::SetLicenseInfo(const string& _licenseInfo)
{
    m_licenseInfo = _licenseInfo;
    m_licenseInfoHasBeenSet = true;
}

bool LayerVersionInfo::LicenseInfoHasBeenSet() const
{
    return m_licenseInfoHasBeenSet;
}

int64_t LayerVersionInfo::GetLayerVersion() const
{
    return m_layerVersion;
}

void LayerVersionInfo::SetLayerVersion(const int64_t& _layerVersion)
{
    m_layerVersion = _layerVersion;
    m_layerVersionHasBeenSet = true;
}

bool LayerVersionInfo::LayerVersionHasBeenSet() const
{
    return m_layerVersionHasBeenSet;
}

string LayerVersionInfo::GetLayerName() const
{
    return m_layerName;
}

void LayerVersionInfo::SetLayerName(const string& _layerName)
{
    m_layerName = _layerName;
    m_layerNameHasBeenSet = true;
}

bool LayerVersionInfo::LayerNameHasBeenSet() const
{
    return m_layerNameHasBeenSet;
}

string LayerVersionInfo::GetStatus() const
{
    return m_status;
}

void LayerVersionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool LayerVersionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string LayerVersionInfo::GetStamp() const
{
    return m_stamp;
}

void LayerVersionInfo::SetStamp(const string& _stamp)
{
    m_stamp = _stamp;
    m_stampHasBeenSet = true;
}

bool LayerVersionInfo::StampHasBeenSet() const
{
    return m_stampHasBeenSet;
}

vector<Tag> LayerVersionInfo::GetTags() const
{
    return m_tags;
}

void LayerVersionInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool LayerVersionInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

