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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_APPLYROLECONFIGURATION_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_APPLYROLECONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 申请的权限配置，包含用户申请权限配置的配置 ID、配置名称、描述信息
                */
                class ApplyRoleConfiguration : public AbstractModel
                {
                public:
                    ApplyRoleConfiguration();
                    ~ApplyRoleConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>权限配置 ID</p>
                     * @return RoleConfigurationId <p>权限配置 ID</p>
                     * 
                     */
                    std::string GetRoleConfigurationId() const;

                    /**
                     * 设置<p>权限配置 ID</p>
                     * @param _roleConfigurationId <p>权限配置 ID</p>
                     * 
                     */
                    void SetRoleConfigurationId(const std::string& _roleConfigurationId);

                    /**
                     * 判断参数 RoleConfigurationId 是否已赋值
                     * @return RoleConfigurationId 是否已赋值
                     * 
                     */
                    bool RoleConfigurationIdHasBeenSet() const;

                    /**
                     * 获取<p>权限配置名称</p>
                     * @return RoleConfigurationName <p>权限配置名称</p>
                     * 
                     */
                    std::string GetRoleConfigurationName() const;

                    /**
                     * 设置<p>权限配置名称</p>
                     * @param _roleConfigurationName <p>权限配置名称</p>
                     * 
                     */
                    void SetRoleConfigurationName(const std::string& _roleConfigurationName);

                    /**
                     * 判断参数 RoleConfigurationName 是否已赋值
                     * @return RoleConfigurationName 是否已赋值
                     * 
                     */
                    bool RoleConfigurationNameHasBeenSet() const;

                    /**
                     * 获取<p>说明</p>
                     * @return Description <p>说明</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>说明</p>
                     * @param _description <p>说明</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>权限配置 ID</p>
                     */
                    std::string m_roleConfigurationId;
                    bool m_roleConfigurationIdHasBeenSet;

                    /**
                     * <p>权限配置名称</p>
                     */
                    std::string m_roleConfigurationName;
                    bool m_roleConfigurationNameHasBeenSet;

                    /**
                     * <p>说明</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_APPLYROLECONFIGURATION_H_
