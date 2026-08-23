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

#include <tencentcloud/csip/v20221121/model/ImageVirus.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

ImageVirus::ImageVirus() :
    m_pathHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_categoryHasBeenSet(false),
    m_virusNameHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_fileTypeHasBeenSet(false),
    m_fileNameHasBeenSet(false),
    m_fileMd5HasBeenSet(false),
    m_fileSizeHasBeenSet(false),
    m_firstDetectedTimeHasBeenSet(false),
    m_latestDetectedTimeHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_ownerAccountNameHasBeenSet(false),
    m_ownerUinHasBeenSet(false),
    m_ownerAppIdHasBeenSet(false),
    m_checkPlatformHasBeenSet(false),
    m_affectImageCountHasBeenSet(false),
    m_layerIdHasBeenSet(false),
    m_idHasBeenSet(false),
    m_suggestionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_virusTypeHasBeenSet(false)
{
}

CoreInternalOutcome ImageVirus::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("Category") && !value["Category"].IsNull())
    {
        if (!value["Category"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.Category` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_category = string(value["Category"].GetString());
        m_categoryHasBeenSet = true;
    }

    if (value.HasMember("VirusName") && !value["VirusName"].IsNull())
    {
        if (!value["VirusName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.VirusName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusName = string(value["VirusName"].GetString());
        m_virusNameHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.Tags` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tags = string(value["Tags"].GetString());
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("FileType") && !value["FileType"].IsNull())
    {
        if (!value["FileType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.FileType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileType = string(value["FileType"].GetString());
        m_fileTypeHasBeenSet = true;
    }

    if (value.HasMember("FileName") && !value["FileName"].IsNull())
    {
        if (!value["FileName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.FileName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileName = string(value["FileName"].GetString());
        m_fileNameHasBeenSet = true;
    }

    if (value.HasMember("FileMd5") && !value["FileMd5"].IsNull())
    {
        if (!value["FileMd5"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.FileMd5` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fileMd5 = string(value["FileMd5"].GetString());
        m_fileMd5HasBeenSet = true;
    }

    if (value.HasMember("FileSize") && !value["FileSize"].IsNull())
    {
        if (!value["FileSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.FileSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_fileSize = value["FileSize"].GetUint64();
        m_fileSizeHasBeenSet = true;
    }

    if (value.HasMember("FirstDetectedTime") && !value["FirstDetectedTime"].IsNull())
    {
        if (!value["FirstDetectedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.FirstDetectedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_firstDetectedTime = string(value["FirstDetectedTime"].GetString());
        m_firstDetectedTimeHasBeenSet = true;
    }

    if (value.HasMember("LatestDetectedTime") && !value["LatestDetectedTime"].IsNull())
    {
        if (!value["LatestDetectedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.LatestDetectedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestDetectedTime = string(value["LatestDetectedTime"].GetString());
        m_latestDetectedTimeHasBeenSet = true;
    }

    if (value.HasMember("ImageId") && !value["ImageId"].IsNull())
    {
        if (!value["ImageId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.ImageId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageId = string(value["ImageId"].GetString());
        m_imageIdHasBeenSet = true;
    }

    if (value.HasMember("OwnerAccountName") && !value["OwnerAccountName"].IsNull())
    {
        if (!value["OwnerAccountName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.OwnerAccountName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAccountName = string(value["OwnerAccountName"].GetString());
        m_ownerAccountNameHasBeenSet = true;
    }

    if (value.HasMember("OwnerUin") && !value["OwnerUin"].IsNull())
    {
        if (!value["OwnerUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.OwnerUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ownerUin = string(value["OwnerUin"].GetString());
        m_ownerUinHasBeenSet = true;
    }

    if (value.HasMember("OwnerAppId") && !value["OwnerAppId"].IsNull())
    {
        if (!value["OwnerAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.OwnerAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_ownerAppId = value["OwnerAppId"].GetUint64();
        m_ownerAppIdHasBeenSet = true;
    }

    if (value.HasMember("CheckPlatform") && !value["CheckPlatform"].IsNull())
    {
        if (!value["CheckPlatform"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.CheckPlatform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_checkPlatform = string(value["CheckPlatform"].GetString());
        m_checkPlatformHasBeenSet = true;
    }

    if (value.HasMember("AffectImageCount") && !value["AffectImageCount"].IsNull())
    {
        if (!value["AffectImageCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.AffectImageCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_affectImageCount = value["AffectImageCount"].GetUint64();
        m_affectImageCountHasBeenSet = true;
    }

    if (value.HasMember("LayerId") && !value["LayerId"].IsNull())
    {
        if (!value["LayerId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.LayerId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_layerId = string(value["LayerId"].GetString());
        m_layerIdHasBeenSet = true;
    }

    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Suggestion") && !value["Suggestion"].IsNull())
    {
        if (!value["Suggestion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.Suggestion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_suggestion = string(value["Suggestion"].GetString());
        m_suggestionHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("VirusType") && !value["VirusType"].IsNull())
    {
        if (!value["VirusType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ImageVirus.VirusType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_virusType = string(value["VirusType"].GetString());
        m_virusTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ImageVirus::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_categoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Category";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_category.c_str(), allocator).Move(), allocator);
    }

    if (m_virusNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusName.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tags.c_str(), allocator).Move(), allocator);
    }

    if (m_fileTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileType.c_str(), allocator).Move(), allocator);
    }

    if (m_fileNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileName.c_str(), allocator).Move(), allocator);
    }

    if (m_fileMd5HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileMd5";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fileMd5.c_str(), allocator).Move(), allocator);
    }

    if (m_fileSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FileSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_fileSize, allocator);
    }

    if (m_firstDetectedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FirstDetectedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_firstDetectedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_latestDetectedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LatestDetectedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_latestDetectedTime.c_str(), allocator).Move(), allocator);
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

    if (m_checkPlatformHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckPlatform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_checkPlatform.c_str(), allocator).Move(), allocator);
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

    if (m_suggestionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Suggestion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_suggestion.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_virusTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VirusType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_virusType.c_str(), allocator).Move(), allocator);
    }

}


string ImageVirus::GetPath() const
{
    return m_path;
}

void ImageVirus::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ImageVirus::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ImageVirus::GetRiskLevel() const
{
    return m_riskLevel;
}

void ImageVirus::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool ImageVirus::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string ImageVirus::GetCategory() const
{
    return m_category;
}

void ImageVirus::SetCategory(const string& _category)
{
    m_category = _category;
    m_categoryHasBeenSet = true;
}

bool ImageVirus::CategoryHasBeenSet() const
{
    return m_categoryHasBeenSet;
}

string ImageVirus::GetVirusName() const
{
    return m_virusName;
}

void ImageVirus::SetVirusName(const string& _virusName)
{
    m_virusName = _virusName;
    m_virusNameHasBeenSet = true;
}

bool ImageVirus::VirusNameHasBeenSet() const
{
    return m_virusNameHasBeenSet;
}

string ImageVirus::GetTags() const
{
    return m_tags;
}

void ImageVirus::SetTags(const string& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ImageVirus::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string ImageVirus::GetFileType() const
{
    return m_fileType;
}

void ImageVirus::SetFileType(const string& _fileType)
{
    m_fileType = _fileType;
    m_fileTypeHasBeenSet = true;
}

bool ImageVirus::FileTypeHasBeenSet() const
{
    return m_fileTypeHasBeenSet;
}

string ImageVirus::GetFileName() const
{
    return m_fileName;
}

void ImageVirus::SetFileName(const string& _fileName)
{
    m_fileName = _fileName;
    m_fileNameHasBeenSet = true;
}

bool ImageVirus::FileNameHasBeenSet() const
{
    return m_fileNameHasBeenSet;
}

string ImageVirus::GetFileMd5() const
{
    return m_fileMd5;
}

void ImageVirus::SetFileMd5(const string& _fileMd5)
{
    m_fileMd5 = _fileMd5;
    m_fileMd5HasBeenSet = true;
}

bool ImageVirus::FileMd5HasBeenSet() const
{
    return m_fileMd5HasBeenSet;
}

uint64_t ImageVirus::GetFileSize() const
{
    return m_fileSize;
}

void ImageVirus::SetFileSize(const uint64_t& _fileSize)
{
    m_fileSize = _fileSize;
    m_fileSizeHasBeenSet = true;
}

bool ImageVirus::FileSizeHasBeenSet() const
{
    return m_fileSizeHasBeenSet;
}

string ImageVirus::GetFirstDetectedTime() const
{
    return m_firstDetectedTime;
}

void ImageVirus::SetFirstDetectedTime(const string& _firstDetectedTime)
{
    m_firstDetectedTime = _firstDetectedTime;
    m_firstDetectedTimeHasBeenSet = true;
}

bool ImageVirus::FirstDetectedTimeHasBeenSet() const
{
    return m_firstDetectedTimeHasBeenSet;
}

string ImageVirus::GetLatestDetectedTime() const
{
    return m_latestDetectedTime;
}

void ImageVirus::SetLatestDetectedTime(const string& _latestDetectedTime)
{
    m_latestDetectedTime = _latestDetectedTime;
    m_latestDetectedTimeHasBeenSet = true;
}

bool ImageVirus::LatestDetectedTimeHasBeenSet() const
{
    return m_latestDetectedTimeHasBeenSet;
}

string ImageVirus::GetImageId() const
{
    return m_imageId;
}

void ImageVirus::SetImageId(const string& _imageId)
{
    m_imageId = _imageId;
    m_imageIdHasBeenSet = true;
}

bool ImageVirus::ImageIdHasBeenSet() const
{
    return m_imageIdHasBeenSet;
}

string ImageVirus::GetOwnerAccountName() const
{
    return m_ownerAccountName;
}

void ImageVirus::SetOwnerAccountName(const string& _ownerAccountName)
{
    m_ownerAccountName = _ownerAccountName;
    m_ownerAccountNameHasBeenSet = true;
}

bool ImageVirus::OwnerAccountNameHasBeenSet() const
{
    return m_ownerAccountNameHasBeenSet;
}

string ImageVirus::GetOwnerUin() const
{
    return m_ownerUin;
}

void ImageVirus::SetOwnerUin(const string& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool ImageVirus::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}

uint64_t ImageVirus::GetOwnerAppId() const
{
    return m_ownerAppId;
}

void ImageVirus::SetOwnerAppId(const uint64_t& _ownerAppId)
{
    m_ownerAppId = _ownerAppId;
    m_ownerAppIdHasBeenSet = true;
}

bool ImageVirus::OwnerAppIdHasBeenSet() const
{
    return m_ownerAppIdHasBeenSet;
}

string ImageVirus::GetCheckPlatform() const
{
    return m_checkPlatform;
}

void ImageVirus::SetCheckPlatform(const string& _checkPlatform)
{
    m_checkPlatform = _checkPlatform;
    m_checkPlatformHasBeenSet = true;
}

bool ImageVirus::CheckPlatformHasBeenSet() const
{
    return m_checkPlatformHasBeenSet;
}

uint64_t ImageVirus::GetAffectImageCount() const
{
    return m_affectImageCount;
}

void ImageVirus::SetAffectImageCount(const uint64_t& _affectImageCount)
{
    m_affectImageCount = _affectImageCount;
    m_affectImageCountHasBeenSet = true;
}

bool ImageVirus::AffectImageCountHasBeenSet() const
{
    return m_affectImageCountHasBeenSet;
}

string ImageVirus::GetLayerId() const
{
    return m_layerId;
}

void ImageVirus::SetLayerId(const string& _layerId)
{
    m_layerId = _layerId;
    m_layerIdHasBeenSet = true;
}

bool ImageVirus::LayerIdHasBeenSet() const
{
    return m_layerIdHasBeenSet;
}

uint64_t ImageVirus::GetId() const
{
    return m_id;
}

void ImageVirus::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ImageVirus::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string ImageVirus::GetSuggestion() const
{
    return m_suggestion;
}

void ImageVirus::SetSuggestion(const string& _suggestion)
{
    m_suggestion = _suggestion;
    m_suggestionHasBeenSet = true;
}

bool ImageVirus::SuggestionHasBeenSet() const
{
    return m_suggestionHasBeenSet;
}

string ImageVirus::GetDescription() const
{
    return m_description;
}

void ImageVirus::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ImageVirus::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ImageVirus::GetVirusType() const
{
    return m_virusType;
}

void ImageVirus::SetVirusType(const string& _virusType)
{
    m_virusType = _virusType;
    m_virusTypeHasBeenSet = true;
}

bool ImageVirus::VirusTypeHasBeenSet() const
{
    return m_virusTypeHasBeenSet;
}

