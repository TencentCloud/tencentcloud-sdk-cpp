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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEPLUGINREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEPLUGINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/PluginProfile.h>
#include <tencentcloud/adp/v20260520/model/PluginConfig.h>
#include <tencentcloud/adp/v20260520/model/Tool.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreatePlugin请求参数结构体
                */
                class CreatePluginRequest : public AbstractModel
                {
                public:
                    CreatePluginRequest();
                    ~CreatePluginRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>插件基础资料</p>
                     * @return Profile <p>插件基础资料</p>
                     * 
                     */
                    PluginProfile GetProfile() const;

                    /**
                     * 设置<p>插件基础资料</p>
                     * @param _profile <p>插件基础资料</p>
                     * 
                     */
                    void SetProfile(const PluginProfile& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                    /**
                     * 获取<p>插件类型配置</p>
                     * @return Config <p>插件类型配置</p>
                     * 
                     */
                    PluginConfig GetConfig() const;

                    /**
                     * 设置<p>插件类型配置</p>
                     * @param _config <p>插件类型配置</p>
                     * 
                     */
                    void SetConfig(const PluginConfig& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>当前空间id</p>
                     * @return SpaceId <p>当前空间id</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>当前空间id</p>
                     * @param _spaceId <p>当前空间id</p>
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
                     * 获取<p>插件的工具列表</p>
                     * @return ToolList <p>插件的工具列表</p>
                     * 
                     */
                    std::vector<Tool> GetToolList() const;

                    /**
                     * 设置<p>插件的工具列表</p>
                     * @param _toolList <p>插件的工具列表</p>
                     * 
                     */
                    void SetToolList(const std::vector<Tool>& _toolList);

                    /**
                     * 判断参数 ToolList 是否已赋值
                     * @return ToolList 是否已赋值
                     * 
                     */
                    bool ToolListHasBeenSet() const;

                    /**
                     * 获取<p>登录用户主账号(集成商模式必填)</p>
                     * @return LoginUin <p>登录用户主账号(集成商模式必填)</p>
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置<p>登录用户主账号(集成商模式必填)</p>
                     * @param _loginUin <p>登录用户主账号(集成商模式必填)</p>
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取<p>登录用户子账号(集成商模式必填)</p>
                     * @return LoginSubAccountUin <p>登录用户子账号(集成商模式必填)</p>
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置<p>登录用户子账号(集成商模式必填)</p>
                     * @param _loginSubAccountUin <p>登录用户子账号(集成商模式必填)</p>
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * <p>插件基础资料</p>
                     */
                    PluginProfile m_profile;
                    bool m_profileHasBeenSet;

                    /**
                     * <p>插件类型配置</p>
                     */
                    PluginConfig m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>当前空间id</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>插件的工具列表</p>
                     */
                    std::vector<Tool> m_toolList;
                    bool m_toolListHasBeenSet;

                    /**
                     * <p>登录用户主账号(集成商模式必填)</p>
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * <p>登录用户子账号(集成商模式必填)</p>
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEPLUGINREQUEST_H_
