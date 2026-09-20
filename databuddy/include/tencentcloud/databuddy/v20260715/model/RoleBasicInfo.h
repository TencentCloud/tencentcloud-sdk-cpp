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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ROLEBASICINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ROLEBASICINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 角色基础信息
                */
                class RoleBasicInfo : public AbstractModel
                {
                public:
                    RoleBasicInfo();
                    ~RoleBasicInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>角色ID</p>
                     * @return Id <p>角色ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>角色ID</p>
                     * @param _id <p>角色ID</p>
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
                     * 获取<p>角色名称</p>
                     * @return Name <p>角色名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>角色名称</p>
                     * @param _name <p>角色名称</p>
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
                     * 获取<p>角色描述</p>
                     * @return Description <p>角色描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>角色描述</p>
                     * @param _description <p>角色描述</p>
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
                     * 获取<p>显示名称</p>
                     * @return DisplayName <p>显示名称</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>显示名称</p>
                     * @param _displayName <p>显示名称</p>
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
                     * 获取<p>角色类型</p>
                     * @return RoleType <p>角色类型</p>
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置<p>角色类型</p>
                     * @param _roleType <p>角色类型</p>
                     * 
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取<p>角色来源，参考 web_enum_standard.proto -&gt; RoleSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有</p>
                     * @return Source <p>角色来源，参考 web_enum_standard.proto -&gt; RoleSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有</p>
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置<p>角色来源，参考 web_enum_standard.proto -&gt; RoleSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有</p>
                     * @param _source <p>角色来源，参考 web_enum_standard.proto -&gt; RoleSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有</p>
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>继承来源的用户组名称列表，Source=1 时为空</p>
                     * @return GroupNames <p>继承来源的用户组名称列表，Source=1 时为空</p>
                     * 
                     */
                    std::vector<std::string> GetGroupNames() const;

                    /**
                     * 设置<p>继承来源的用户组名称列表，Source=1 时为空</p>
                     * @param _groupNames <p>继承来源的用户组名称列表，Source=1 时为空</p>
                     * 
                     */
                    void SetGroupNames(const std::vector<std::string>& _groupNames);

                    /**
                     * 判断参数 GroupNames 是否已赋值
                     * @return GroupNames 是否已赋值
                     * 
                     */
                    bool GroupNamesHasBeenSet() const;

                private:

                    /**
                     * <p>角色ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>角色名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>角色描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>显示名称</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>角色类型</p>
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * <p>角色来源，参考 web_enum_standard.proto -&gt; RoleSource：0=未指定 1=用户直绑 2=用户组继承 3=两者都有</p>
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>继承来源的用户组名称列表，Source=1 时为空</p>
                     */
                    std::vector<std::string> m_groupNames;
                    bool m_groupNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_ROLEBASICINFO_H_
