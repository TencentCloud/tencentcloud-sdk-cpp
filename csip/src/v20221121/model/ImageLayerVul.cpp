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

#include <tencentcloud/csip/v20221121/model/ImageLayerVul.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageLayerVul::ImageLayerVul() :
    m_ownerAccountNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_firstFoundTimeHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_vulInfoHasBeenSet(false),
    m_imageIdHasBeenSet(false)
{
}

CoreInternalOutcome ImageLayerVul::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayerVul.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayerVul.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayerVul.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("ID") && !value["ID"].IsNull())
    {
        if (!value["ID"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayerVul.ID` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_iD = value["ID"].GetUint64();
        m_iDHasBeenSet = true;
    }

    if (value.HasMember("LayerId") && !value["LayerId"].IsNull())
    {
        if (!value["LayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayerVul.LayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerId = string(value["LayerId"].GetString());
        m_layerIdHasBeenSet = true;
    }

    if (value.HasMember("FirstFoundTime") && !value["FirstFoundTime"].IsNull())
    {
        if (!value["FirstFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayerVul.FirstFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstFoundTime = string(value["FirstFoundTime"].GetString());
        m_firstFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayerVul.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("VulInfo") && !value["VulInfo"].IsNull())
    {
        if (!value["VulInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayerVul.VulInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vulInfo.Deserialize(value["VulInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vulInfoHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageLayerVul.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageLayerVul::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ownerAccountNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAccountName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerAccountName.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ownerUin.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OwnerAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ownerAppId, allocator);
    }

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_iD, allocator);
    }

    if (m_layerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerId.c_str(), allocator).Move(), allocator);
    }

    if (m_firstFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestFoundTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestFoundTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestFoundTime.c_str(), allocator).Move(), allocator);
    }

    if (m_vulInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VulInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vulInfo.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

}


string ImageLayerVul::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageLayerVul::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageLayerVul::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string ImageLayerVul::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageLayerVul::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageLayerVul::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t ImageLayerVul::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageLayerVul::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageLayerVul::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

uint64_t ImageLayerVul::GetID() const
{
    return m_iD;
}

void ImageLayerVul::SetID(const uint64_t& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ImageLayerVul::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ImageLayerVul::GetLayerId() const
{
    return m_layerId;
}

void ImageLayerVul::SetLayerId(const string& _layerId)
{
    m_layerId = _layerId;
    m_layerIdHasBeenSet = true;
}

bool ImageLayerVul::LayerIdHasBeenSet() const
{
    return m_layerIdHasBeenSet;
}

string ImageLayerVul::GetFirstFoundTime() const
{
    return m_firstFoundTime;
}

void ImageLayerVul::SetFirstFoundTime(const string& _firstFoundTime)
{
    m_firstFoundTime = _firstFoundTime;
    m_firstFoundTimeHasBeenSet = true;
}

bool ImageLayerVul::FirstFoundTimeHasBeenSet() const
{
    return m_firstFoundTimeHasBeenSet;
}

string ImageLayerVul::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void ImageLayerVul::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool ImageLayerVul::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

ImageVulBaseInfo ImageLayerVul::GetVulInfo() const
{
    return m_vulInfo;
}

void ImageLayerVul::SetVulInfo(const ImageVulBaseInfo& _vulInfo)
{
    m_vulInfo = _vulInfo;
    m_vulInfoHasBeenSet = true;
}

bool ImageLayerVul::VulInfoHasBeenSet() const
{
    return m_vulInfoHasBeenSet;
}

string ImageLayerVul::GetImageId() const
{
    return m_imageId;
}

void ImageLayerVul::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageLayerVul::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

