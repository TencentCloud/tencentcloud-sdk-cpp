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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateSkill请求参数结构体
                */
                class CreateSkillRequest : public AbstractModel
                {
                public:
                    CreateSkillRequest();
                    ~CreateSkillRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Skill 创建方式，必填；仅允许</p><p>枚举值：</p><ul><li>1： FILE_UPLOAD（文件上传）</li><li>3： AIGC（AIGC生成）</li></ul>
                     * @return CreateType <p>Skill 创建方式，必填；仅允许</p><p>枚举值：</p><ul><li>1： FILE_UPLOAD（文件上传）</li><li>3： AIGC（AIGC生成）</li></ul>
                     * 
                     */
                    int64_t GetCreateType() const;

                    /**
                     * 设置<p>Skill 创建方式，必填；仅允许</p><p>枚举值：</p><ul><li>1： FILE_UPLOAD（文件上传）</li><li>3： AIGC（AIGC生成）</li></ul>
                     * @param _createType <p>Skill 创建方式，必填；仅允许</p><p>枚举值：</p><ul><li>1： FILE_UPLOAD（文件上传）</li><li>3： AIGC（AIGC生成）</li></ul>
                     * 
                     */
                    void SetCreateType(const int64_t& _createType);

                    /**
                     * 判断参数 CreateType 是否已赋值
                     * @return CreateType 是否已赋值
                     * 
                     */
                    bool CreateTypeHasBeenSet() const;

                    /**
                     * 获取<p>skill包文件地址（zip）；FILE_UPLOAD / AIGC 均必填</p>
                     * @return FileUrl <p>skill包文件地址（zip）；FILE_UPLOAD / AIGC 均必填</p>
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置<p>skill包文件地址（zip）；FILE_UPLOAD / AIGC 均必填</p>
                     * @param _fileUrl <p>skill包文件地址（zip）；FILE_UPLOAD / AIGC 均必填</p>
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取<p>空间ID</p>
                     * @return SpaceId <p>空间ID</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>空间ID</p>
                     * @param _spaceId <p>空间ID</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>skill展示描述</p>
                     * @return DisplayDescription <p>skill展示描述</p>
                     * 
                     */
                    std::string GetDisplayDescription() const;

                    /**
                     * 设置<p>skill展示描述</p>
                     * @param _displayDescription <p>skill展示描述</p>
                     * 
                     */
                    void SetDisplayDescription(const std::string& _displayDescription);

                    /**
                     * 判断参数 DisplayDescription 是否已赋值
                     * @return DisplayDescription 是否已赋值
                     * 
                     */
                    bool DisplayDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>skill展示名称</p>
                     * @return DisplayName <p>skill展示名称</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>skill展示名称</p>
                     * @param _displayName <p>skill展示名称</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>图标地址</p>
                     * @return IconUrl <p>图标地址</p>
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置<p>图标地址</p>
                     * @param _iconUrl <p>图标地址</p>
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取<p>skill业务唯一标识名（同企业下唯一）；未传时从skill包解析</p>
                     * @return Name <p>skill业务唯一标识名（同企业下唯一）；未传时从skill包解析</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>skill业务唯一标识名（同企业下唯一）；未传时从skill包解析</p>
                     * @param _name <p>skill业务唯一标识名（同企业下唯一）；未传时从skill包解析</p>
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
                     * 获取<p>版本号</p>
                     * @return SkillVersion <p>版本号</p>
                     * 
                     */
                    std::string GetSkillVersion() const;

                    /**
                     * 设置<p>版本号</p>
                     * @param _skillVersion <p>版本号</p>
                     * 
                     */
                    void SetSkillVersion(const std::string& _skillVersion);

                    /**
                     * 判断参数 SkillVersion 是否已赋值
                     * @return SkillVersion 是否已赋值
                     * 
                     */
                    bool SkillVersionHasBeenSet() const;

                    /**
                     * 获取<p>版本变更说明</p>
                     * @return UpdateDescription <p>版本变更说明</p>
                     * 
                     */
                    std::string GetUpdateDescription() const;

                    /**
                     * 设置<p>版本变更说明</p>
                     * @param _updateDescription <p>版本变更说明</p>
                     * 
                     */
                    void SetUpdateDescription(const std::string& _updateDescription);

                    /**
                     * 判断参数 UpdateDescription 是否已赋值
                     * @return UpdateDescription 是否已赋值
                     * 
                     */
                    bool UpdateDescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>Skill 创建方式，必填；仅允许</p><p>枚举值：</p><ul><li>1： FILE_UPLOAD（文件上传）</li><li>3： AIGC（AIGC生成）</li></ul>
                     */
                    int64_t m_createType;
                    bool m_createTypeHasBeenSet;

                    /**
                     * <p>skill包文件地址（zip）；FILE_UPLOAD / AIGC 均必填</p>
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * <p>空间ID</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>skill展示描述</p>
                     */
                    std::string m_displayDescription;
                    bool m_displayDescriptionHasBeenSet;

                    /**
                     * <p>skill展示名称</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>图标地址</p>
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * <p>skill业务唯一标识名（同企业下唯一）；未传时从skill包解析</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>版本号</p>
                     */
                    std::string m_skillVersion;
                    bool m_skillVersionHasBeenSet;

                    /**
                     * <p>版本变更说明</p>
                     */
                    std::string m_updateDescription;
                    bool m_updateDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATESKILLREQUEST_H_
