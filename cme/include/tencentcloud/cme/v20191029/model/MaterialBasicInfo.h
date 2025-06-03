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
#include <tencentcloud/cme/v20191029/model/PresetTagInfo.h>
#include <tencentcloud/cme/v20191029/model/MaterialTagInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒体基本信息。
                */
                class MaterialBasicInfo : public AbstractModel
                {
                public:
                    MaterialBasicInfo();
                    ~MaterialBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体 Id。
                     * @return MaterialId 媒体 Id。
                     * 
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置媒体 Id。
                     * @param _materialId 媒体 Id。
                     * 
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取媒体类型，取值为：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片;</li>
<li> LINK  :链接.</li>
<li> OTHER : 其他.</li>
                     * @return MaterialType 媒体类型，取值为：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片;</li>
<li> LINK  :链接.</li>
<li> OTHER : 其他.</li>
                     * 
                     */
                    std::string GetMaterialType() const;

                    /**
                     * 设置媒体类型，取值为：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片;</li>
<li> LINK  :链接.</li>
<li> OTHER : 其他.</li>
                     * @param _materialType 媒体类型，取值为：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片;</li>
<li> LINK  :链接.</li>
<li> OTHER : 其他.</li>
                     * 
                     */
                    void SetMaterialType(const std::string& _materialType);

                    /**
                     * 判断参数 MaterialType 是否已赋值
                     * @return MaterialType 是否已赋值
                     * 
                     */
                    bool MaterialTypeHasBeenSet() const;

                    /**
                     * 获取媒体归属实体。
                     * @return Owner 媒体归属实体。
                     * 
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置媒体归属实体。
                     * @param _owner 媒体归属实体。
                     * 
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取媒体名称。
                     * @return Name 媒体名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒体名称。
                     * @param _name 媒体名称。
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
                     * 获取媒体文件的创建时间，使用 ISO 日期格式。
                     * @return CreateTime 媒体文件的创建时间，使用 ISO 日期格式。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置媒体文件的创建时间，使用 ISO 日期格式。
                     * @param _createTime 媒体文件的创建时间，使用 ISO 日期格式。
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
                     * 获取媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
                     * @return UpdateTime 媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
                     * @param _updateTime 媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
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
                     * 获取媒体的分类路径。
                     * @return ClassPath 媒体的分类路径。
                     * 
                     */
                    std::string GetClassPath() const;

                    /**
                     * 设置媒体的分类路径。
                     * @param _classPath 媒体的分类路径。
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
                     * 获取预置标签列表。
                     * @return PresetTagSet 预置标签列表。
                     * 
                     */
                    std::vector<PresetTagInfo> GetPresetTagSet() const;

                    /**
                     * 设置预置标签列表。
                     * @param _presetTagSet 预置标签列表。
                     * 
                     */
                    void SetPresetTagSet(const std::vector<PresetTagInfo>& _presetTagSet);

                    /**
                     * 判断参数 PresetTagSet 是否已赋值
                     * @return PresetTagSet 是否已赋值
                     * 
                     */
                    bool PresetTagSetHasBeenSet() const;

                    /**
                     * 获取人工标签列表。
                     * @return TagSet 人工标签列表。
                     * 
                     */
                    std::vector<std::string> GetTagSet() const;

                    /**
                     * 设置人工标签列表。
                     * @param _tagSet 人工标签列表。
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
                     * 获取媒体文件的预览图。
                     * @return PreviewUrl 媒体文件的预览图。
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置媒体文件的预览图。
                     * @param _previewUrl 媒体文件的预览图。
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取媒体绑定的标签信息列表 。
该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagInfoSet 媒体绑定的标签信息列表 。
该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<MaterialTagInfo> GetTagInfoSet() const;

                    /**
                     * 设置媒体绑定的标签信息列表 。
该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagInfoSet 媒体绑定的标签信息列表 。
该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetTagInfoSet(const std::vector<MaterialTagInfo>& _tagInfoSet);

                    /**
                     * 判断参数 TagInfoSet 是否已赋值
                     * @return TagInfoSet 是否已赋值
                     * @deprecated
                     */
                    bool TagInfoSetHasBeenSet() const;

                private:

                    /**
                     * 媒体 Id。
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 媒体类型，取值为：
<li> AUDIO :音频;</li>
<li> VIDEO :视频;</li>
<li> IMAGE :图片;</li>
<li> LINK  :链接.</li>
<li> OTHER : 其他.</li>
                     */
                    std::string m_materialType;
                    bool m_materialTypeHasBeenSet;

                    /**
                     * 媒体归属实体。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 媒体名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 媒体文件的创建时间，使用 ISO 日期格式。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 媒体文件的最近更新时间（如修改视频属性、发起视频处理等会触发更新媒体文件信息的操作），使用 ISO 日期格式。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 媒体的分类路径。
                     */
                    std::string m_classPath;
                    bool m_classPathHasBeenSet;

                    /**
                     * 预置标签列表。
                     */
                    std::vector<PresetTagInfo> m_presetTagSet;
                    bool m_presetTagSetHasBeenSet;

                    /**
                     * 人工标签列表。
                     */
                    std::vector<std::string> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 媒体文件的预览图。
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * 媒体绑定的标签信息列表 。
该字段已废弃。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MaterialTagInfo> m_tagInfoSet;
                    bool m_tagInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MATERIALBASICINFO_H_
