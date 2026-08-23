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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVIRUS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVIRUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像病毒信息
                */
                class ImageVirus : public AbstractModel
                {
                public:
                    ImageVirus();
                    ~ImageVirus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>木马路径</p>
                     * @return Path <p>木马路径</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>木马路径</p>
                     * @param _path <p>木马路径</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>风险级别</p>
                     * @return RiskLevel <p>风险级别</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>风险级别</p>
                     * @param _riskLevel <p>风险级别</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>类别</p>
                     * @return Category <p>类别</p>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置<p>类别</p>
                     * @param _category <p>类别</p>
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取<p>木马名</p>
                     * @return VirusName <p>木马名</p>
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置<p>木马名</p>
                     * @param _virusName <p>木马名</p>
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取<p>木马Tag</p>
                     * @return Tags <p>木马Tag</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>木马Tag</p>
                     * @param _tags <p>木马Tag</p>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>文件类型</p>
                     * @return FileType <p>文件类型</p>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>文件类型</p>
                     * @param _fileType <p>文件类型</p>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>文件名</p>
                     * @return FileName <p>文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>文件名</p>
                     * @param _fileName <p>文件名</p>
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>文件md5</p>
                     * @return FileMd5 <p>文件md5</p>
                     * 
                     */
                    std::string GetFileMd5() const;

                    /**
                     * 设置<p>文件md5</p>
                     * @param _fileMd5 <p>文件md5</p>
                     * 
                     */
                    void SetFileMd5(const std::string& _fileMd5);

                    /**
                     * 判断参数 FileMd5 是否已赋值
                     * @return FileMd5 是否已赋值
                     * 
                     */
                    bool FileMd5HasBeenSet() const;

                    /**
                     * 获取<p>文件大小</p>
                     * @return FileSize <p>文件大小</p>
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置<p>文件大小</p>
                     * @param _fileSize <p>文件大小</p>
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>首次检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return FirstDetectedTime <p>首次检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetFirstDetectedTime() const;

                    /**
                     * 设置<p>首次检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _firstDetectedTime <p>首次检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetFirstDetectedTime(const std::string& _firstDetectedTime);

                    /**
                     * 判断参数 FirstDetectedTime 是否已赋值
                     * @return FirstDetectedTime 是否已赋值
                     * 
                     */
                    bool FirstDetectedTimeHasBeenSet() const;

                    /**
                     * 获取<p>最后检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestDetectedTime <p>最后检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestDetectedTime() const;

                    /**
                     * 设置<p>最后检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestDetectedTime <p>最后检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestDetectedTime(const std::string& _latestDetectedTime);

                    /**
                     * 判断参数 LatestDetectedTime 是否已赋值
                     * @return LatestDetectedTime 是否已赋值
                     * 
                     */
                    bool LatestDetectedTimeHasBeenSet() const;

                    /**
                     * 获取<p>镜像id</p>
                     * @return ImageId <p>镜像id</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像id</p>
                     * @param _imageId <p>镜像id</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>所属账号名</p>
                     * @return OwnerAccountName <p>所属账号名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>所属账号名</p>
                     * @param _ownerAccountName <p>所属账号名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>所属账号uin</p>
                     * @return OwnerUin <p>所属账号uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>所属账号uin</p>
                     * @param _ownerUin <p>所属账号uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>所属账号appid</p>
                     * @return OwnerAppId <p>所属账号appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>所属账号appid</p>
                     * @param _ownerAppId <p>所属账号appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>检出平台</p>
                     * @return CheckPlatform <p>检出平台</p>
                     * 
                     */
                    std::string GetCheckPlatform() const;

                    /**
                     * 设置<p>检出平台</p>
                     * @param _checkPlatform <p>检出平台</p>
                     * 
                     */
                    void SetCheckPlatform(const std::string& _checkPlatform);

                    /**
                     * 判断参数 CheckPlatform 是否已赋值
                     * @return CheckPlatform 是否已赋值
                     * 
                     */
                    bool CheckPlatformHasBeenSet() const;

                    /**
                     * 获取<p>影响镜像数</p>
                     * @return AffectImageCount <p>影响镜像数</p>
                     * 
                     */
                    uint64_t GetAffectImageCount() const;

                    /**
                     * 设置<p>影响镜像数</p>
                     * @param _affectImageCount <p>影响镜像数</p>
                     * 
                     */
                    void SetAffectImageCount(const uint64_t& _affectImageCount);

                    /**
                     * 判断参数 AffectImageCount 是否已赋值
                     * @return AffectImageCount 是否已赋值
                     * 
                     */
                    bool AffectImageCountHasBeenSet() const;

                    /**
                     * 获取<p>镜像层id</p>
                     * @return LayerId <p>镜像层id</p>
                     * 
                     */
                    std::string GetLayerId() const;

                    /**
                     * 设置<p>镜像层id</p>
                     * @param _layerId <p>镜像层id</p>
                     * 
                     */
                    void SetLayerId(const std::string& _layerId);

                    /**
                     * 判断参数 LayerId 是否已赋值
                     * @return LayerId 是否已赋值
                     * 
                     */
                    bool LayerIdHasBeenSet() const;

                    /**
                     * 获取<p>木马记录id</p>
                     * @return Id <p>木马记录id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>木马记录id</p>
                     * @param _id <p>木马记录id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>木马处置建议</p>
                     * @return Suggestion <p>木马处置建议</p>
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置<p>木马处置建议</p>
                     * @param _suggestion <p>木马处置建议</p>
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取<p>木马描述</p>
                     * @return Description <p>木马描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>木马描述</p>
                     * @param _description <p>木马描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>木马类型</p>
                     * @return VirusType <p>木马类型</p>
                     * 
                     */
                    std::string GetVirusType() const;

                    /**
                     * 设置<p>木马类型</p>
                     * @param _virusType <p>木马类型</p>
                     * 
                     */
                    void SetVirusType(const std::string& _virusType);

                    /**
                     * 判断参数 VirusType 是否已赋值
                     * @return VirusType 是否已赋值
                     * 
                     */
                    bool VirusTypeHasBeenSet() const;

                private:

                    /**
                     * <p>木马路径</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>风险级别</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>类别</p>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * <p>木马名</p>
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * <p>木马Tag</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>文件类型</p>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件md5</p>
                     */
                    std::string m_fileMd5;
                    bool m_fileMd5HasBeenSet;

                    /**
                     * <p>文件大小</p>
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>首次检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_firstDetectedTime;
                    bool m_firstDetectedTimeHasBeenSet;

                    /**
                     * <p>最后检测时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestDetectedTime;
                    bool m_latestDetectedTimeHasBeenSet;

                    /**
                     * <p>镜像id</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>所属账号名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>所属账号uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>所属账号appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>检出平台</p>
                     */
                    std::string m_checkPlatform;
                    bool m_checkPlatformHasBeenSet;

                    /**
                     * <p>影响镜像数</p>
                     */
                    uint64_t m_affectImageCount;
                    bool m_affectImageCountHasBeenSet;

                    /**
                     * <p>镜像层id</p>
                     */
                    std::string m_layerId;
                    bool m_layerIdHasBeenSet;

                    /**
                     * <p>木马记录id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>木马处置建议</p>
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * <p>木马描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>木马类型</p>
                     */
                    std::string m_virusType;
                    bool m_virusTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEVIRUS_H_
