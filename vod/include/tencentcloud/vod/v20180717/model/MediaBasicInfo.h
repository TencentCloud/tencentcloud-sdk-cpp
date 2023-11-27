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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIABASICINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIABASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaSourceData.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 点播媒体文件基础信息
                */
                class MediaBasicInfo : public AbstractModel
                {
                public:
                    MediaBasicInfo();
                    ~MediaBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体文件名称。
                     * @return Name 媒体文件名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒体文件名称。
                     * @param _name 媒体文件名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取媒体文件描述。
                     * @return Description 媒体文件描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置媒体文件描述。
                     * @param _description 媒体文件描述。
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
                     * 获取媒体文件的创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 媒体文件的创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置媒体文件的创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 媒体文件的创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return UpdateTime 媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _updateTime 媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取媒体文件的过期时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。“9999-12-31T23:59:59Z”表示永不过期。
                     * @return ExpireTime 媒体文件的过期时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。“9999-12-31T23:59:59Z”表示永不过期。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置媒体文件的过期时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。“9999-12-31T23:59:59Z”表示永不过期。
                     * @param _expireTime 媒体文件的过期时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。“9999-12-31T23:59:59Z”表示永不过期。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取媒体文件的分类 ID。
                     * @return ClassId 媒体文件的分类 ID。
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置媒体文件的分类 ID。
                     * @param _classId 媒体文件的分类 ID。
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取媒体文件的分类名称。
                     * @return ClassName 媒体文件的分类名称。
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置媒体文件的分类名称。
                     * @param _className 媒体文件的分类名称。
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取媒体文件的分类路径，分类间以“-”分隔，如“新的一级分类 - 新的二级分类”。
                     * @return ClassPath 媒体文件的分类路径，分类间以“-”分隔，如“新的一级分类 - 新的二级分类”。
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置媒体文件的分类路径，分类间以“-”分隔，如“新的一级分类 - 新的二级分类”。
                     * @param _classPath 媒体文件的分类路径，分类间以“-”分隔，如“新的一级分类 - 新的二级分类”。
                     * 
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     * 
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取媒体文件的封面图片地址。
                     * @return CoverUrl 媒体文件的封面图片地址。
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置媒体文件的封面图片地址。
                     * @param _coverUrl 媒体文件的封面图片地址。
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取媒体文件的封装格式，例如 mp4、flv 等。
                     * @return Type 媒体文件的封装格式，例如 mp4、flv 等。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置媒体文件的封装格式，例如 mp4、flv 等。
                     * @param _type 媒体文件的封装格式，例如 mp4、flv 等。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取原始媒体文件的 URL 地址。
                     * @return MediaUrl 原始媒体文件的 URL 地址。
                     * 
                     */
                    std::string GetMediaUrl() const;

                    /**
                     * 设置原始媒体文件的 URL 地址。
                     * @param _mediaUrl 原始媒体文件的 URL 地址。
                     * 
                     */
                    void SetMediaUrl(const std::string& _mediaUrl);

                    /**
                     * 判断参数 MediaUrl 是否已赋值
                     * @return MediaUrl 是否已赋值
                     * 
                     */
                    bool MediaUrlHasBeenSet() const;

                    /**
                     * 获取该媒体文件的来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceInfo 该媒体文件的来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MediaSourceData GetSourceInfo() const;

                    /**
                     * 设置该媒体文件的来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceInfo 该媒体文件的来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceInfo(const MediaSourceData& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                    /**
                     * 获取媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
                     * @return StorageRegion 媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
                     * @param _storageRegion 媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取媒体文件的标签信息。
                     * @return TagSet 媒体文件的标签信息。
                     * 
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置媒体文件的标签信息。
                     * @param _tagSet 媒体文件的标签信息。
                     * 
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取直播录制文件的唯一标识。
                     * @return Vid 直播录制文件的唯一标识。
                     * 
                     */
                    std::string GetVid() const;

                    /**
                     * 设置直播录制文件的唯一标识。
                     * @param _vid 直播录制文件的唯一标识。
                     * 
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
                     * 
                     */
                    bool VidHasBeenSet() const;

                    /**
                     * 获取文件类型：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
                     * @return Category 文件类型：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置文件类型：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
                     * @param _category 文件类型：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
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
                     * 获取文件状态：Normal：正常，Forbidden：封禁。
                     * @return Status 文件状态：Normal：正常，Forbidden：封禁。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置文件状态：Normal：正常，Forbidden：封禁。
                     * @param _status 文件状态：Normal：正常，Forbidden：封禁。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取媒体文件的存储类别：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * @return StorageClass 媒体文件的存储类别：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * 
                     */
                    std::string GetStorageClass() const;

                    /**
                     * 设置媒体文件的存储类别：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * @param _storageClass 媒体文件的存储类别：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * 
                     */
                    void SetStorageClass(const std::string& _storageClass);

                    /**
                     * 判断参数 StorageClass 是否已赋值
                     * @return StorageClass 是否已赋值
                     * 
                     */
                    bool StorageClassHasBeenSet() const;

                private:

                    /**
                     * 媒体文件名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 媒体文件描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 媒体文件的创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 媒体文件的过期时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。“9999-12-31T23:59:59Z”表示永不过期。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 媒体文件的分类 ID。
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 媒体文件的分类名称。
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * 媒体文件的分类路径，分类间以“-”分隔，如“新的一级分类 - 新的二级分类”。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * 媒体文件的封面图片地址。
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * 媒体文件的封装格式，例如 mp4、flv 等。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 原始媒体文件的 URL 地址。
                     */
                    std::string m_mediaUrl;
                    bool m_mediaUrlHasBeenSet;

                    /**
                     * 该媒体文件的来源信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MediaSourceData m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * 媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 媒体文件的标签信息。
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 直播录制文件的唯一标识。
                     */
                    std::string m_vid;
                    bool m_vidHasBeenSet;

                    /**
                     * 文件类型：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 文件状态：Normal：正常，Forbidden：封禁。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 媒体文件的存储类别：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     */
                    std::string m_storageClass;
                    bool m_storageClassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIABASICINFO_H_
