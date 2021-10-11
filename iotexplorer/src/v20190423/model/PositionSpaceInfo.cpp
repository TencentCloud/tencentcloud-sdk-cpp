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

#include <tencentcloud/iotexplorer/v20190423/model/PositionSpaceInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

PositionSpaceInfo::PositionSpaceInfo() :
    m_projectIdHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_spaceNameHasBeenSet(false),
    m_authorizeTypeHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_productIdListHasBeenSet(false),
    m_iconHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_zoomHasBeenSet(false)
{
}

CoreInternalOutcome PositionSpaceInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProjectId") && !value["ProjectId"].IsNull())
    {
        if (!value["ProjectId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.ProjectId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_projectId = string(value["ProjectId"].GetString());
        m_projectIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceName") && !value["SpaceName"].IsNull())
    {
        if (!value["SpaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.SpaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceName = string(value["SpaceName"].GetString());
        m_spaceNameHasBeenSet = true;
    }

    if (value.HasMember("AuthorizeType") && !value["AuthorizeType"].IsNull())
    {
        if (!value["AuthorizeType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.AuthorizeType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_authorizeType = value["AuthorizeType"].GetInt64();
        m_authorizeTypeHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ProductIdList") && !value["ProductIdList"].IsNull())
    {
        if (!value["ProductIdList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.ProductIdList` is not array type"));

        const rapidjson::Value &tmpValue = value["ProductIdList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_productIdList.push_back((*itr).GetString());
        }
        m_productIdListHasBeenSet = true;
    }

    if (value.HasMember("Icon") && !value["Icon"].IsNull())
    {
        if (!value["Icon"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.Icon` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_icon = string(value["Icon"].GetString());
        m_iconHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Zoom") && !value["Zoom"].IsNull())
    {
        if (!value["Zoom"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionSpaceInfo.Zoom` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_zoom = value["Zoom"].GetUint64();
        m_zoomHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PositionSpaceInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_spaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_authorizeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AuthorizeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_authorizeType, allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_productIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductIdList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_productIdList.begin(); itr != m_productIdList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iconHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Icon";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_icon.c_str(), allocator).Move(), allocator);
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

    if (m_zoomHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Zoom";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_zoom, allocator);
    }

}


string PositionSpaceInfo::GetProjectId() const
{
    return m_projectId;
}

void PositionSpaceInfo::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool PositionSpaceInfo::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string PositionSpaceInfo::GetSpaceId() const
{
    return m_spaceId;
}

void PositionSpaceInfo::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool PositionSpaceInfo::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string PositionSpaceInfo::GetSpaceName() const
{
    return m_spaceName;
}

void PositionSpaceInfo::SetSpaceName(const string& _spaceName)
{
    m_spaceName = _spaceName;
    m_spaceNameHasBeenSet = true;
}

bool PositionSpaceInfo::SpaceNameHasBeenSet() const
{
    return m_spaceNameHasBeenSet;
}

int64_t PositionSpaceInfo::GetAuthorizeType() const
{
    return m_authorizeType;
}

void PositionSpaceInfo::SetAuthorizeType(const int64_t& _authorizeType)
{
    m_authorizeType = _authorizeType;
    m_authorizeTypeHasBeenSet = true;
}

bool PositionSpaceInfo::AuthorizeTypeHasBeenSet() const
{
    return m_authorizeTypeHasBeenSet;
}

string PositionSpaceInfo::GetDescription() const
{
    return m_description;
}

void PositionSpaceInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool PositionSpaceInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<string> PositionSpaceInfo::GetProductIdList() const
{
    return m_productIdList;
}

void PositionSpaceInfo::SetProductIdList(const vector<string>& _productIdList)
{
    m_productIdList = _productIdList;
    m_productIdListHasBeenSet = true;
}

bool PositionSpaceInfo::ProductIdListHasBeenSet() const
{
    return m_productIdListHasBeenSet;
}

string PositionSpaceInfo::GetIcon() const
{
    return m_icon;
}

void PositionSpaceInfo::SetIcon(const string& _icon)
{
    m_icon = _icon;
    m_iconHasBeenSet = true;
}

bool PositionSpaceInfo::IconHasBeenSet() const
{
    return m_iconHasBeenSet;
}

int64_t PositionSpaceInfo::GetCreateTime() const
{
    return m_createTime;
}

void PositionSpaceInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool PositionSpaceInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t PositionSpaceInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void PositionSpaceInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool PositionSpaceInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t PositionSpaceInfo::GetZoom() const
{
    return m_zoom;
}

void PositionSpaceInfo::SetZoom(const uint64_t& _zoom)
{
    m_zoom = _zoom;
    m_zoomHasBeenSet = true;
}

bool PositionSpaceInfo::ZoomHasBeenSet() const
{
    return m_zoomHasBeenSet;
}

