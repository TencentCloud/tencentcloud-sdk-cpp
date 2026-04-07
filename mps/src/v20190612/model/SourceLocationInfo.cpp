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

#include <tencentcloud/mps/v20190612/model/SourceLocationInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SourceLocationInfo::SourceLocationInfo() :
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_baseUrlHasBeenSet(false),
    m_segmentDeliverEnableHasBeenSet(false),
    m_segmentDeliverConfHasBeenSet(false),
    m_attachedLiveSourcesHasBeenSet(false),
    m_attachedVodSourcesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_segmentDeliverUsePackageEnableHasBeenSet(false)
{
}

CoreInternalOutcome SourceLocationInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.Id` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_id = string(value["Id"].GetString());
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("BaseUrl") && !value["BaseUrl"].IsNull())
    {
        if (!value["BaseUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.BaseUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_baseUrl = string(value["BaseUrl"].GetString());
        m_baseUrlHasBeenSet = true;
    }

    if (value.HasMember("SegmentDeliverEnable") && !value["SegmentDeliverEnable"].IsNull())
    {
        if (!value["SegmentDeliverEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.SegmentDeliverEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_segmentDeliverEnable = value["SegmentDeliverEnable"].GetBool();
        m_segmentDeliverEnableHasBeenSet = true;
    }

    if (value.HasMember("SegmentDeliverConf") && !value["SegmentDeliverConf"].IsNull())
    {
        if (!value["SegmentDeliverConf"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.SegmentDeliverConf` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_segmentDeliverConf.Deserialize(value["SegmentDeliverConf"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_segmentDeliverConfHasBeenSet = true;
    }

    if (value.HasMember("AttachedLiveSources") && !value["AttachedLiveSources"].IsNull())
    {
        if (!value["AttachedLiveSources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.AttachedLiveSources` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachedLiveSources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attachedLiveSources.push_back((*itr).GetString());
        }
        m_attachedLiveSourcesHasBeenSet = true;
    }

    if (value.HasMember("AttachedVodSources") && !value["AttachedVodSources"].IsNull())
    {
        if (!value["AttachedVodSources"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.AttachedVodSources` is not array type"));

        const rapidjson::Value &tmpValue = value["AttachedVodSources"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_attachedVodSources.push_back((*itr).GetString());
        }
        m_attachedVodSourcesHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("SegmentDeliverUsePackageEnable") && !value["SegmentDeliverUsePackageEnable"].IsNull())
    {
        if (!value["SegmentDeliverUsePackageEnable"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SourceLocationInfo.SegmentDeliverUsePackageEnable` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_segmentDeliverUsePackageEnable = value["SegmentDeliverUsePackageEnable"].GetBool();
        m_segmentDeliverUsePackageEnableHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceLocationInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_id.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_baseUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BaseUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_baseUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_segmentDeliverEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentDeliverEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentDeliverEnable, allocator);
    }

    if (m_segmentDeliverConfHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentDeliverConf";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_segmentDeliverConf.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_attachedLiveSourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedLiveSources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attachedLiveSources.begin(); itr != m_attachedLiveSources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_attachedVodSourcesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttachedVodSources";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_attachedVodSources.begin(); itr != m_attachedVodSources.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_segmentDeliverUsePackageEnableHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SegmentDeliverUsePackageEnable";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_segmentDeliverUsePackageEnable, allocator);
    }

}


string SourceLocationInfo::GetId() const
{
    return m_id;
}

void SourceLocationInfo::SetId(const string& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool SourceLocationInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string SourceLocationInfo::GetName() const
{
    return m_name;
}

void SourceLocationInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SourceLocationInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SourceLocationInfo::GetRegion() const
{
    return m_region;
}

void SourceLocationInfo::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool SourceLocationInfo::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string SourceLocationInfo::GetBaseUrl() const
{
    return m_baseUrl;
}

void SourceLocationInfo::SetBaseUrl(const string& _baseUrl)
{
    m_baseUrl = _baseUrl;
    m_baseUrlHasBeenSet = true;
}

bool SourceLocationInfo::BaseUrlHasBeenSet() const
{
    return m_baseUrlHasBeenSet;
}

bool SourceLocationInfo::GetSegmentDeliverEnable() const
{
    return m_segmentDeliverEnable;
}

void SourceLocationInfo::SetSegmentDeliverEnable(const bool& _segmentDeliverEnable)
{
    m_segmentDeliverEnable = _segmentDeliverEnable;
    m_segmentDeliverEnableHasBeenSet = true;
}

bool SourceLocationInfo::SegmentDeliverEnableHasBeenSet() const
{
    return m_segmentDeliverEnableHasBeenSet;
}

SegmentDeliverInfo SourceLocationInfo::GetSegmentDeliverConf() const
{
    return m_segmentDeliverConf;
}

void SourceLocationInfo::SetSegmentDeliverConf(const SegmentDeliverInfo& _segmentDeliverConf)
{
    m_segmentDeliverConf = _segmentDeliverConf;
    m_segmentDeliverConfHasBeenSet = true;
}

bool SourceLocationInfo::SegmentDeliverConfHasBeenSet() const
{
    return m_segmentDeliverConfHasBeenSet;
}

vector<string> SourceLocationInfo::GetAttachedLiveSources() const
{
    return m_attachedLiveSources;
}

void SourceLocationInfo::SetAttachedLiveSources(const vector<string>& _attachedLiveSources)
{
    m_attachedLiveSources = _attachedLiveSources;
    m_attachedLiveSourcesHasBeenSet = true;
}

bool SourceLocationInfo::AttachedLiveSourcesHasBeenSet() const
{
    return m_attachedLiveSourcesHasBeenSet;
}

vector<string> SourceLocationInfo::GetAttachedVodSources() const
{
    return m_attachedVodSources;
}

void SourceLocationInfo::SetAttachedVodSources(const vector<string>& _attachedVodSources)
{
    m_attachedVodSources = _attachedVodSources;
    m_attachedVodSourcesHasBeenSet = true;
}

bool SourceLocationInfo::AttachedVodSourcesHasBeenSet() const
{
    return m_attachedVodSourcesHasBeenSet;
}

uint64_t SourceLocationInfo::GetCreateTime() const
{
    return m_createTime;
}

void SourceLocationInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SourceLocationInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t SourceLocationInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void SourceLocationInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool SourceLocationInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

bool SourceLocationInfo::GetSegmentDeliverUsePackageEnable() const
{
    return m_segmentDeliverUsePackageEnable;
}

void SourceLocationInfo::SetSegmentDeliverUsePackageEnable(const bool& _segmentDeliverUsePackageEnable)
{
    m_segmentDeliverUsePackageEnable = _segmentDeliverUsePackageEnable;
    m_segmentDeliverUsePackageEnableHasBeenSet = true;
}

bool SourceLocationInfo::SegmentDeliverUsePackageEnableHasBeenSet() const
{
    return m_segmentDeliverUsePackageEnableHasBeenSet;
}

