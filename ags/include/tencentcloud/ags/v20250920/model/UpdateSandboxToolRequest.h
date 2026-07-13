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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_UPDATESANDBOXTOOLREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_UPDATESANDBOXTOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/NetworkConfiguration.h>
#include <tencentcloud/ags/v20250920/model/Tag.h>
#include <tencentcloud/ags/v20250920/model/CustomConfiguration.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * UpdateSandboxTool请求参数结构体
                */
                class UpdateSandboxToolRequest : public AbstractModel
                {
                public:
                    UpdateSandboxToolRequest();
                    ~UpdateSandboxToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>沙箱工具ID</p>
                     * @return ToolId <p>沙箱工具ID</p>
                     * 
                     */
                    std::string GetToolId() const;

                    /**
                     * 设置<p>沙箱工具ID</p>
                     * @param _toolId <p>沙箱工具ID</p>
                     * 
                     */
                    void SetToolId(const std::string& _toolId);

                    /**
                     * 判断参数 ToolId 是否已赋值
                     * @return ToolId 是否已赋值
                     * 
                     */
                    bool ToolIdHasBeenSet() const;

                    /**
                     * 获取<p>沙箱工具描述，最大长度200字符</p>
                     * @return Description <p>沙箱工具描述，最大长度200字符</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>沙箱工具描述，最大长度200字符</p>
                     * @param _description <p>沙箱工具描述，最大长度200字符</p>
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
                     * 获取<p>网络配置</p>
                     * @return NetworkConfiguration <p>网络配置</p>
                     * 
                     */
                    NetworkConfiguration GetNetworkConfiguration() const;

                    /**
                     * 设置<p>网络配置</p>
                     * @param _networkConfiguration <p>网络配置</p>
                     * 
                     */
                    void SetNetworkConfiguration(const NetworkConfiguration& _networkConfiguration);

                    /**
                     * 判断参数 NetworkConfiguration 是否已赋值
                     * @return NetworkConfiguration 是否已赋值
                     * 
                     */
                    bool NetworkConfigurationHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
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
                     * 获取<p>沙箱工具自定义配置</p>
                     * @return CustomConfiguration <p>沙箱工具自定义配置</p>
                     * 
                     */
                    CustomConfiguration GetCustomConfiguration() const;

                    /**
                     * 设置<p>沙箱工具自定义配置</p>
                     * @param _customConfiguration <p>沙箱工具自定义配置</p>
                     * 
                     */
                    void SetCustomConfiguration(const CustomConfiguration& _customConfiguration);

                    /**
                     * 判断参数 CustomConfiguration 是否已赋值
                     * @return CustomConfiguration 是否已赋值
                     * 
                     */
                    bool CustomConfigurationHasBeenSet() const;

                private:

                    /**
                     * <p>沙箱工具ID</p>
                     */
                    std::string m_toolId;
                    bool m_toolIdHasBeenSet;

                    /**
                     * <p>沙箱工具描述，最大长度200字符</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>网络配置</p>
                     */
                    NetworkConfiguration m_networkConfiguration;
                    bool m_networkConfigurationHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>沙箱工具自定义配置</p>
                     */
                    CustomConfiguration m_customConfiguration;
                    bool m_customConfigurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_UPDATESANDBOXTOOLREQUEST_H_
