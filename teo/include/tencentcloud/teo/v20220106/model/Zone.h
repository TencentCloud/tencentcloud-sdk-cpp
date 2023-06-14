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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ZONE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ZONE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/Tag.h>
#include <tencentcloud/teo/v20220106/model/Resource.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 站点信息
                */
                class Zone : public AbstractModel
                {
                public:
                    Zone();
                    ~Zone() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取站点ID。
                     * @return Id 站点ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置站点ID。
                     * @param _id 站点ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取站点名称。
                     * @return Name 站点名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置站点名称。
                     * @param _name 站点名称。
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
                     * 获取站点当前使用的 NS 列表。
                     * @return OriginalNameServers 站点当前使用的 NS 列表。
                     * 
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 设置站点当前使用的 NS 列表。
                     * @param _originalNameServers 站点当前使用的 NS 列表。
                     * 
                     */
                    void SetOriginalNameServers(const std::vector<std::string>& _originalNameServers);

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     * 
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取腾讯云分配的 NS 列表。
                     * @return NameServers 腾讯云分配的 NS 列表。
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置腾讯云分配的 NS 列表。
                     * @param _nameServers 腾讯云分配的 NS 列表。
                     * 
                     */
                    void SetNameServers(const std::vector<std::string>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取站点状态，取值有：
<li> active：NS 已切换； </li>
<li> pending：NS 未切换；</li>
<li> moved：NS 已切走；</li>
<li> deactivated：被封禁。 </li>
                     * @return Status 站点状态，取值有：
<li> active：NS 已切换； </li>
<li> pending：NS 未切换；</li>
<li> moved：NS 已切走；</li>
<li> deactivated：被封禁。 </li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置站点状态，取值有：
<li> active：NS 已切换； </li>
<li> pending：NS 未切换；</li>
<li> moved：NS 已切走；</li>
<li> deactivated：被封禁。 </li>
                     * @param _status 站点状态，取值有：
<li> active：NS 已切换； </li>
<li> pending：NS 未切换；</li>
<li> moved：NS 已切走；</li>
<li> deactivated：被封禁。 </li>
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
                     * 获取站点接入方式，取值有
<li> full：NS 接入； </li>
<li> partial：CNAME 接入。</li>
                     * @return Type 站点接入方式，取值有
<li> full：NS 接入； </li>
<li> partial：CNAME 接入。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置站点接入方式，取值有
<li> full：NS 接入； </li>
<li> partial：CNAME 接入。</li>
                     * @param _type 站点接入方式，取值有
<li> full：NS 接入； </li>
<li> partial：CNAME 接入。</li>
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
                     * 获取站点是否关闭。
                     * @return Paused 站点是否关闭。
                     * 
                     */
                    bool GetPaused() const;

                    /**
                     * 设置站点是否关闭。
                     * @param _paused 站点是否关闭。
                     * 
                     */
                    void SetPaused(const bool& _paused);

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     * 
                     */
                    bool PausedHasBeenSet() const;

                    /**
                     * 获取是否开启cname加速，取值有：
<li> enabled：开启；</li>
<li> disabled：关闭。</li>
                     * @return CnameSpeedUp 是否开启cname加速，取值有：
<li> enabled：开启；</li>
<li> disabled：关闭。</li>
                     * 
                     */
                    std::string GetCnameSpeedUp() const;

                    /**
                     * 设置是否开启cname加速，取值有：
<li> enabled：开启；</li>
<li> disabled：关闭。</li>
                     * @param _cnameSpeedUp 是否开启cname加速，取值有：
<li> enabled：开启；</li>
<li> disabled：关闭。</li>
                     * 
                     */
                    void SetCnameSpeedUp(const std::string& _cnameSpeedUp);

                    /**
                     * 判断参数 CnameSpeedUp 是否已赋值
                     * @return CnameSpeedUp 是否已赋值
                     * 
                     */
                    bool CnameSpeedUpHasBeenSet() const;

                    /**
                     * 获取cname 接入状态，取值有：
<li> finished：站点已验证；</li>
<li> pending：站点验证中。</li>
                     * @return CnameStatus cname 接入状态，取值有：
<li> finished：站点已验证；</li>
<li> pending：站点验证中。</li>
                     * 
                     */
                    std::string GetCnameStatus() const;

                    /**
                     * 设置cname 接入状态，取值有：
<li> finished：站点已验证；</li>
<li> pending：站点验证中。</li>
                     * @param _cnameStatus cname 接入状态，取值有：
<li> finished：站点已验证；</li>
<li> pending：站点验证中。</li>
                     * 
                     */
                    void SetCnameStatus(const std::string& _cnameStatus);

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     * 
                     */
                    bool CnameStatusHasBeenSet() const;

                    /**
                     * 获取资源标签列表。
                     * @return Tags 资源标签列表。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置资源标签列表。
                     * @param _tags 资源标签列表。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取计费资源列表。
                     * @return Resources 计费资源列表。
                     * 
                     */
                    std::vector<Resource> GetResources() const;

                    /**
                     * 设置计费资源列表。
                     * @param _resources 计费资源列表。
                     * 
                     */
                    void SetResources(const std::vector<Resource>& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取站点创建时间。
                     * @return CreatedOn 站点创建时间。
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置站点创建时间。
                     * @param _createdOn 站点创建时间。
                     * 
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取站点修改时间。
                     * @return ModifiedOn 站点修改时间。
                     * 
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置站点修改时间。
                     * @param _modifiedOn 站点修改时间。
                     * 
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     * 
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取站点接入地域，取值为：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
                     * @return Area 站点接入地域，取值为：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置站点接入地域，取值为：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
                     * @param _area 站点接入地域，取值为：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 站点名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 站点当前使用的 NS 列表。
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * 腾讯云分配的 NS 列表。
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * 站点状态，取值有：
<li> active：NS 已切换； </li>
<li> pending：NS 未切换；</li>
<li> moved：NS 已切走；</li>
<li> deactivated：被封禁。 </li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 站点接入方式，取值有
<li> full：NS 接入； </li>
<li> partial：CNAME 接入。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 站点是否关闭。
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                    /**
                     * 是否开启cname加速，取值有：
<li> enabled：开启；</li>
<li> disabled：关闭。</li>
                     */
                    std::string m_cnameSpeedUp;
                    bool m_cnameSpeedUpHasBeenSet;

                    /**
                     * cname 接入状态，取值有：
<li> finished：站点已验证；</li>
<li> pending：站点验证中。</li>
                     */
                    std::string m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                    /**
                     * 资源标签列表。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 计费资源列表。
                     */
                    std::vector<Resource> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 站点创建时间。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 站点修改时间。
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * 站点接入地域，取值为：
<li> global：全球；</li>
<li> mainland：中国大陆；</li>
<li> overseas：境外区域。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ZONE_H_
