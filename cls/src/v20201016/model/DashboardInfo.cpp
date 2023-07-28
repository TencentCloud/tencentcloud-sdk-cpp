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

#include <tencentcloud/cls/v20201016/model/DashboardInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

DashboardInfo::DashboardInfo() :
    m_dashboardIdHasBeenSet(false),
    m_dashboardNameHasBeenSet(false),
    m_dataHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_assumerUinHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_assumerNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dashboardRegionHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_dashboardTopicInfosHasBeenSet(false)
{
}

CoreInternalOutcome DashboardInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DashboardId") && !value["DashboardId"].IsNull())
    {
        if (!value["DashboardId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.DashboardId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardId = string(value["DashboardId"].GetString());
        m_dashboardIdHasBeenSet = true;
    }

    if (value.HasMember("DashboardName") && !value["DashboardName"].IsNull())
    {
        if (!value["DashboardName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.DashboardName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardName = string(value["DashboardName"].GetString());
        m_dashboardNameHasBeenSet = true;
    }

    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(value["Data"].GetString());
        m_dataHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("AssumerUin") && !value["AssumerUin"].IsNull())
    {
        if (!value["AssumerUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.AssumerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_assumerUin = value["AssumerUin"].GetUint64();
        m_assumerUinHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("AssumerName") && !value["AssumerName"].IsNull())
    {
        if (!value["AssumerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.AssumerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_assumerName = string(value["AssumerName"].GetString());
        m_assumerNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.Tags` is not array type"));

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

    if (value.HasMember("DashboardRegion") && !value["DashboardRegion"].IsNull())
    {
        if (!value["DashboardRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.DashboardRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dashboardRegion = string(value["DashboardRegion"].GetString());
        m_dashboardRegionHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("DashboardTopicInfos") && !value["DashboardTopicInfos"].IsNull())
    {
        if (!value["DashboardTopicInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DashboardInfo.DashboardTopicInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["DashboardTopicInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DashboardTopicInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_dashboardTopicInfos.push_back(item);
        }
        m_dashboardTopicInfosHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DashboardInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dashboardIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashboardId.c_str(), allocator).Move(), allocator);
    }

    if (m_dashboardNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashboardName.c_str(), allocator).Move(), allocator);
    }

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_assumerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssumerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_assumerUin, allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_assumerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssumerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_assumerName.c_str(), allocator).Move(), allocator);
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

    if (m_dashboardRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dashboardRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_dashboardTopicInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DashboardTopicInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_dashboardTopicInfos.begin(); itr != m_dashboardTopicInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string DashboardInfo::GetDashboardId() const
{
    return m_dashboardId;
}

void DashboardInfo::SetDashboardId(const string& _dashboardId)
{
    m_dashboardId = _dashboardId;
    m_dashboardIdHasBeenSet = true;
}

bool DashboardInfo::DashboardIdHasBeenSet() const
{
    return m_dashboardIdHasBeenSet;
}

string DashboardInfo::GetDashboardName() const
{
    return m_dashboardName;
}

void DashboardInfo::SetDashboardName(const string& _dashboardName)
{
    m_dashboardName = _dashboardName;
    m_dashboardNameHasBeenSet = true;
}

bool DashboardInfo::DashboardNameHasBeenSet() const
{
    return m_dashboardNameHasBeenSet;
}

string DashboardInfo::GetData() const
{
    return m_data;
}

void DashboardInfo::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool DashboardInfo::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string DashboardInfo::GetCreateTime() const
{
    return m_createTime;
}

void DashboardInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DashboardInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t DashboardInfo::GetAssumerUin() const
{
    return m_assumerUin;
}

void DashboardInfo::SetAssumerUin(const uint64_t& _assumerUin)
{
    m_assumerUin = _assumerUin;
    m_assumerUinHasBeenSet = true;
}

bool DashboardInfo::AssumerUinHasBeenSet() const
{
    return m_assumerUinHasBeenSet;
}

string DashboardInfo::GetRoleName() const
{
    return m_roleName;
}

void DashboardInfo::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool DashboardInfo::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string DashboardInfo::GetAssumerName() const
{
    return m_assumerName;
}

void DashboardInfo::SetAssumerName(const string& _assumerName)
{
    m_assumerName = _assumerName;
    m_assumerNameHasBeenSet = true;
}

bool DashboardInfo::AssumerNameHasBeenSet() const
{
    return m_assumerNameHasBeenSet;
}

vector<Tag> DashboardInfo::GetTags() const
{
    return m_tags;
}

void DashboardInfo::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DashboardInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string DashboardInfo::GetDashboardRegion() const
{
    return m_dashboardRegion;
}

void DashboardInfo::SetDashboardRegion(const string& _dashboardRegion)
{
    m_dashboardRegion = _dashboardRegion;
    m_dashboardRegionHasBeenSet = true;
}

bool DashboardInfo::DashboardRegionHasBeenSet() const
{
    return m_dashboardRegionHasBeenSet;
}

string DashboardInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DashboardInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DashboardInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

vector<DashboardTopicInfo> DashboardInfo::GetDashboardTopicInfos() const
{
    return m_dashboardTopicInfos;
}

void DashboardInfo::SetDashboardTopicInfos(const vector<DashboardTopicInfo>& _dashboardTopicInfos)
{
    m_dashboardTopicInfos = _dashboardTopicInfos;
    m_dashboardTopicInfosHasBeenSet = true;
}

bool DashboardInfo::DashboardTopicInfosHasBeenSet() const
{
    return m_dashboardTopicInfosHasBeenSet;
}

