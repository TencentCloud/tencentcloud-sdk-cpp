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

#include <tencentcloud/csip/v20221121/model/ImageAssociatedAssetCount.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageAssociatedAssetCount::ImageAssociatedAssetCount() :
    m_idHasBeenSet(false),
    m_hostCountHasBeenSet(false),
    m_containerCountHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

CoreInternalOutcome ImageAssociatedAssetCount::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedAssetCount.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("HostCount") && !value["HostCount"].IsNull())
    {
        if (!value["HostCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedAssetCount.HostCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_hostCount = value["HostCount"].GetUint64();
        m_hostCountHasBeenSet = true;
    }

    if (value.HasMember("ContainerCount") && !value["ContainerCount"].IsNull())
    {
        if (!value["ContainerCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedAssetCount.ContainerCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_containerCount = value["ContainerCount"].GetUint64();
        m_containerCountHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedAssetCount.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedAssetCount.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageAssociatedAssetCount.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageAssociatedAssetCount::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_hostCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HostCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_hostCount, allocator);
    }

    if (m_containerCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_containerCount, allocator);
    }

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

}


uint64_t ImageAssociatedAssetCount::GetId() const
{
    return m_id;
}

void ImageAssociatedAssetCount::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImageAssociatedAssetCount::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ImageAssociatedAssetCount::GetHostCount() const
{
    return m_hostCount;
}

void ImageAssociatedAssetCount::SetHostCount(const uint64_t& _hostCount)
{
    m_hostCount = _hostCount;
    m_hostCountHasBeenSet = true;
}

bool ImageAssociatedAssetCount::HostCountHasBeenSet() const
{
    return m_hostCountHasBeenSet;
}

uint64_t ImageAssociatedAssetCount::GetContainerCount() const
{
    return m_containerCount;
}

void ImageAssociatedAssetCount::SetContainerCount(const uint64_t& _containerCount)
{
    m_containerCount = _containerCount;
    m_containerCountHasBeenSet = true;
}

bool ImageAssociatedAssetCount::ContainerCountHasBeenSet() const
{
    return m_containerCountHasBeenSet;
}

string ImageAssociatedAssetCount::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageAssociatedAssetCount::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageAssociatedAssetCount::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

uint64_t ImageAssociatedAssetCount::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageAssociatedAssetCount::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageAssociatedAssetCount::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string ImageAssociatedAssetCount::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageAssociatedAssetCount::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageAssociatedAssetCount::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

