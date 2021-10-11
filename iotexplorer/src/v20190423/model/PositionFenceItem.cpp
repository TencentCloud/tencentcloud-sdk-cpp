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

#include <tencentcloud/iotexplorer/v20190423/model/PositionFenceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace std;

PositionFenceItem::PositionFenceItem() :
    m_fenceIdHasBeenSet(false),
    m_spaceIdHasBeenSet(false),
    m_fenceNameHasBeenSet(false),
    m_fenceDescHasBeenSet(false),
    m_fenceAreaHasBeenSet(false)
{
}

CoreInternalOutcome PositionFenceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FenceId") && !value["FenceId"].IsNull())
    {
        if (!value["FenceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `PositionFenceItem.FenceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_fenceId = value["FenceId"].GetInt64();
        m_fenceIdHasBeenSet = true;
    }

    if (value.HasMember("SpaceId") && !value["SpaceId"].IsNull())
    {
        if (!value["SpaceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionFenceItem.SpaceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_spaceId = string(value["SpaceId"].GetString());
        m_spaceIdHasBeenSet = true;
    }

    if (value.HasMember("FenceName") && !value["FenceName"].IsNull())
    {
        if (!value["FenceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionFenceItem.FenceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fenceName = string(value["FenceName"].GetString());
        m_fenceNameHasBeenSet = true;
    }

    if (value.HasMember("FenceDesc") && !value["FenceDesc"].IsNull())
    {
        if (!value["FenceDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionFenceItem.FenceDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fenceDesc = string(value["FenceDesc"].GetString());
        m_fenceDescHasBeenSet = true;
    }

    if (value.HasMember("FenceArea") && !value["FenceArea"].IsNull())
    {
        if (!value["FenceArea"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PositionFenceItem.FenceArea` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fenceArea = string(value["FenceArea"].GetString());
        m_fenceAreaHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PositionFenceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_fenceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fenceId, allocator);
    }

    if (m_spaceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpaceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_spaceId.c_str(), allocator).Move(), allocator);
    }

    if (m_fenceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fenceName.c_str(), allocator).Move(), allocator);
    }

    if (m_fenceDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fenceDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_fenceAreaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FenceArea";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fenceArea.c_str(), allocator).Move(), allocator);
    }

}


int64_t PositionFenceItem::GetFenceId() const
{
    return m_fenceId;
}

void PositionFenceItem::SetFenceId(const int64_t& _fenceId)
{
    m_fenceId = _fenceId;
    m_fenceIdHasBeenSet = true;
}

bool PositionFenceItem::FenceIdHasBeenSet() const
{
    return m_fenceIdHasBeenSet;
}

string PositionFenceItem::GetSpaceId() const
{
    return m_spaceId;
}

void PositionFenceItem::SetSpaceId(const string& _spaceId)
{
    m_spaceId = _spaceId;
    m_spaceIdHasBeenSet = true;
}

bool PositionFenceItem::SpaceIdHasBeenSet() const
{
    return m_spaceIdHasBeenSet;
}

string PositionFenceItem::GetFenceName() const
{
    return m_fenceName;
}

void PositionFenceItem::SetFenceName(const string& _fenceName)
{
    m_fenceName = _fenceName;
    m_fenceNameHasBeenSet = true;
}

bool PositionFenceItem::FenceNameHasBeenSet() const
{
    return m_fenceNameHasBeenSet;
}

string PositionFenceItem::GetFenceDesc() const
{
    return m_fenceDesc;
}

void PositionFenceItem::SetFenceDesc(const string& _fenceDesc)
{
    m_fenceDesc = _fenceDesc;
    m_fenceDescHasBeenSet = true;
}

bool PositionFenceItem::FenceDescHasBeenSet() const
{
    return m_fenceDescHasBeenSet;
}

string PositionFenceItem::GetFenceArea() const
{
    return m_fenceArea;
}

void PositionFenceItem::SetFenceArea(const string& _fenceArea)
{
    m_fenceArea = _fenceArea;
    m_fenceAreaHasBeenSet = true;
}

bool PositionFenceItem::FenceAreaHasBeenSet() const
{
    return m_fenceAreaHasBeenSet;
}

