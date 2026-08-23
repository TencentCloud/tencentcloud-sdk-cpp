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

#include <tencentcloud/csip/v20221121/model/ImageSensitiveInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageSensitiveInfo::ImageSensitiveInfo() :
    m_behaviorHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_describeHasBeenSet(false),
    m_instructionContentHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_affectImageCountHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_firstFoundTimeHasBeenSet(false),
    m_latestFoundTimeHasBeenSet(false),
    m_layerIndexHasBeenSet(false)
{
}

CoreInternalOutcome ImageSensitiveInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Behavior") && !value["Behavior"].IsNull())
    {
        if (!value["Behavior"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.Behavior` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_behavior = value["Behavior"].GetUint64();
        m_behaviorHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("Describe") && !value["Describe"].IsNull())
    {
        if (!value["Describe"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.Describe` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_describe = string(value["Describe"].GetString());
        m_describeHasBeenSet = true;
    }

    if (value.HasMember("InstructionContent") && !value["InstructionContent"].IsNull())
    {
        if (!value["InstructionContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.InstructionContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instructionContent = string(value["InstructionContent"].GetString());
        m_instructionContentHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("AffectImageCount") && !value["AffectImageCount"].IsNull())
    {
        if (!value["AffectImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.AffectImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectImageCount = value["AffectImageCount"].GetUint64();
        m_affectImageCountHasBeenSet = true;
    }

    if (value.HasMember("LayerId") && !value["LayerId"].IsNull())
    {
        if (!value["LayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.LayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerId = string(value["LayerId"].GetString());
        m_layerIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("FirstFoundTime") && !value["FirstFoundTime"].IsNull())
    {
        if (!value["FirstFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.FirstFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstFoundTime = string(value["FirstFoundTime"].GetString());
        m_firstFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestFoundTime") && !value["LatestFoundTime"].IsNull())
    {
        if (!value["LatestFoundTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.LatestFoundTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestFoundTime = string(value["LatestFoundTime"].GetString());
        m_latestFoundTimeHasBeenSet = true;
    }

    if (value.HasMember("LayerIndex") && !value["LayerIndex"].IsNull())
    {
        if (!value["LayerIndex"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageSensitiveInfo.LayerIndex` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_layerIndex = value["LayerIndex"].GetUint64();
        m_layerIndexHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageSensitiveInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_behaviorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Behavior";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_behavior, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_describeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Describe";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_describe.c_str(), allocator).Move(), allocator);
    }

    if (m_instructionContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstructionContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instructionContent.c_str(), allocator).Move(), allocator);
    }

    if (m_imageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_affectImageCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AffectImageCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_affectImageCount, allocator);
    }

    if (m_layerIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_layerId.c_str(), allocator).Move(), allocator);
    }

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
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

    if (m_layerIndexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LayerIndex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_layerIndex, allocator);
    }

}


uint64_t ImageSensitiveInfo::GetBehavior() const
{
    return m_behavior;
}

void ImageSensitiveInfo::SetBehavior(const uint64_t& _behavior)
{
    m_behavior = _behavior;
    m_behaviorHasBeenSet = true;
}

bool ImageSensitiveInfo::BehaviorHasBeenSet() const
{
    return m_behaviorHasBeenSet;
}

uint64_t ImageSensitiveInfo::GetType() const
{
    return m_type;
}

void ImageSensitiveInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ImageSensitiveInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string ImageSensitiveInfo::GetLevel() const
{
    return m_level;
}

void ImageSensitiveInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool ImageSensitiveInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string ImageSensitiveInfo::GetDescribe() const
{
    return m_describe;
}

void ImageSensitiveInfo::SetDescribe(const string& _describe)
{
    m_describe = _describe;
    m_describeHasBeenSet = true;
}

bool ImageSensitiveInfo::DescribeHasBeenSet() const
{
    return m_describeHasBeenSet;
}

string ImageSensitiveInfo::GetInstructionContent() const
{
    return m_instructionContent;
}

void ImageSensitiveInfo::SetInstructionContent(const string& _instructionContent)
{
    m_instructionContent = _instructionContent;
    m_instructionContentHasBeenSet = true;
}

bool ImageSensitiveInfo::InstructionContentHasBeenSet() const
{
    return m_instructionContentHasBeenSet;
}

string ImageSensitiveInfo::GetImageId() const
{
    return m_imageId;
}

void ImageSensitiveInfo::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageSensitiveInfo::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ImageSensitiveInfo::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageSensitiveInfo::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageSensitiveInfo::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string ImageSensitiveInfo::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageSensitiveInfo::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageSensitiveInfo::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t ImageSensitiveInfo::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageSensitiveInfo::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageSensitiveInfo::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

uint64_t ImageSensitiveInfo::GetAffectImageCount() const
{
    return m_affectImageCount;
}

void ImageSensitiveInfo::SetAffectImageCount(const uint64_t& _affectImageCount)
{
    m_affectImageCount = _affectImageCount;
    m_affectImageCountHasBeenSet = true;
}

bool ImageSensitiveInfo::AffectImageCountHasBeenSet() const
{
    return m_affectImageCountHasBeenSet;
}

string ImageSensitiveInfo::GetLayerId() const
{
    return m_layerId;
}

void ImageSensitiveInfo::SetLayerId(const string& _layerId)
{
    m_layerId = _layerId;
    m_layerIdHasBeenSet = true;
}

bool ImageSensitiveInfo::LayerIdHasBeenSet() const
{
    return m_layerIdHasBeenSet;
}

uint64_t ImageSensitiveInfo::GetId() const
{
    return m_id;
}

void ImageSensitiveInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImageSensitiveInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ImageSensitiveInfo::GetFirstFoundTime() const
{
    return m_firstFoundTime;
}

void ImageSensitiveInfo::SetFirstFoundTime(const string& _firstFoundTime)
{
    m_firstFoundTime = _firstFoundTime;
    m_firstFoundTimeHasBeenSet = true;
}

bool ImageSensitiveInfo::FirstFoundTimeHasBeenSet() const
{
    return m_firstFoundTimeHasBeenSet;
}

string ImageSensitiveInfo::GetLatestFoundTime() const
{
    return m_latestFoundTime;
}

void ImageSensitiveInfo::SetLatestFoundTime(const string& _latestFoundTime)
{
    m_latestFoundTime = _latestFoundTime;
    m_latestFoundTimeHasBeenSet = true;
}

bool ImageSensitiveInfo::LatestFoundTimeHasBeenSet() const
{
    return m_latestFoundTimeHasBeenSet;
}

uint64_t ImageSensitiveInfo::GetLayerIndex() const
{
    return m_layerIndex;
}

void ImageSensitiveInfo::SetLayerIndex(const uint64_t& _layerIndex)
{
    m_layerIndex = _layerIndex;
    m_layerIndexHasBeenSet = true;
}

bool ImageSensitiveInfo::LayerIndexHasBeenSet() const
{
    return m_layerIndexHasBeenSet;
}

