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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MATERIALBASICINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MATERIALBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 素材基本信息。
                */
                class MaterialBasicInfo : public AbstractModel
                {
                public:
                    MaterialBasicInfo();
                    ~MaterialBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取素材 Id。
                     * @return MaterialId 素材 Id。
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置素材 Id。
                     * @param MaterialId 素材 Id。
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取素材类型，取值为：音频（AUDIO）、视频（VIDEO）、图片（IMAGE）、链接（LINK）、字幕 （SUBTITLE）、转场（TRANSITION）、滤镜（FILTER）、文本文字（TEXT）、图文动效（TEXT_IMAGE）。
                     * @return MaterialType 素材类型，取值为：音频（AUDIO）、视频（VIDEO）、图片（IMAGE）、链接（LINK）、字幕 （SUBTITLE）、转场（TRANSITION）、滤镜（FILTER）、文本文字（TEXT）、图文动效（TEXT_IMAGE）。
                     */
                    std::string GetMaterialType() const;

                    /**
                     * 设置素材类型，取值为：音频（AUDIO）、视频（VIDEO）、图片（IMAGE）、链接（LINK）、字幕 （SUBTITLE）、转场（TRANSITION）、滤镜（FILTER）、文本文字（TEXT）、图文动效（TEXT_IMAGE）。
                     * @param MaterialType 素材类型，取值为：音频（AUDIO）、视频（VIDEO）、图片（IMAGE）、链接（LINK）、字幕 （SUBTITLE）、转场（TRANSITION）、滤镜（FILTER）、文本文字（TEXT）、图文动效（TEXT_IMAGE）。
                     */
                    void SetMaterialType(const std::string& _materialType);

                    /**
                     * 判断参数 MaterialType 是否已赋值
                     * @return MaterialType 是否已赋值
                     */
                    bool MaterialTypeHasBeenSet() const;

                    /**
                     * 获取素材归属实体。
                     * @return Owner 素材归属实体。
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置素材归属实体。
                     * @param Owner 素材归属实体。
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取素材名称。
                     * @return Name 素材名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置素材名称。
                     * @param Name 素材名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取素材文件的创建时间，使用 ISO 日期格式。
                     * @return CreateTime 素材文件的创建时间，使用 ISO 日期格式。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置素材文件的创建时间，使用 ISO 日期格式。
                     * @param CreateTime 素材文件的创建时间，使用 ISO 日期格式。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取素材文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
                     * @return UpdateTime 素材文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置素材文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
                     * @param UpdateTime 素材文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取素材的分类目录路径。
                     * @return ClassPath 素材的分类目录路径。
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置素材的分类目录路径。
                     * @param ClassPath 素材的分类目录路径。
                     */
                    void SetClassPath(const std::string& _classPath);

                    /**
                     * 判断参数 ClassPath 是否已赋值
                     * @return ClassPath 是否已赋值
                     */
                    bool ClassPathHasBeenSet() const;

                    /**
                     * 获取素材标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagSet 素材标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置素材标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagSet 素材标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagSet(const std::vector<std::string>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取素材媒体文件的预览图。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewUrl 素材媒体文件的预览图。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置素材媒体文件的预览图。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PreviewUrl 素材媒体文件的预览图。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     */
                    bool PreviewUrlHasBeenSet() const;

                private:

                    /**
                     * 素材 Id。
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 素材类型，取值为：音频（AUDIO）、视频（VIDEO）、图片（IMAGE）、链接（LINK）、字幕 （SUBTITLE）、转场（TRANSITION）、滤镜（FILTER）、文本文字（TEXT）、图文动效（TEXT_IMAGE）。
                     */
                    std::string m_materialType;
                    bool m_materialTypeHasBeenSet;

                    /**
                     * 素材归属实体。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 素材名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 素材文件的创建时间，使用 ISO 日期格式。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 素材文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 素材的分类目录路径。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * 素材标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 素材媒体文件的预览图。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MATERIALBASICINFO_H_
