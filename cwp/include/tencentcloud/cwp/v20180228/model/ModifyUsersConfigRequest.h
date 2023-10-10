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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYUSERSCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYUSERSCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyUsersConfig请求参数结构体
                */
                class ModifyUsersConfigRequest : public AbstractModel
                {
                public:
                    ModifyUsersConfigRequest();
                    ~ModifyUsersConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置名称
<li>license_monitor 新增授权监控配置 0 关闭, 1开启</li>
                     * @return ConfigName 配置名称
<li>license_monitor 新增授权监控配置 0 关闭, 1开启</li>
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名称
<li>license_monitor 新增授权监控配置 0 关闭, 1开启</li>
                     * @param _configName 配置名称
<li>license_monitor 新增授权监控配置 0 关闭, 1开启</li>
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                    /**
                     * 获取配置值
                     * @return ConfigValue 配置值
                     * 
                     */
                    std::string GetConfigValue() const;

                    /**
                     * 设置配置值
                     * @param _configValue 配置值
                     * 
                     */
                    void SetConfigValue(const std::string& _configValue);

                    /**
                     * 判断参数 ConfigValue 是否已赋值
                     * @return ConfigValue 是否已赋值
                     * 
                     */
                    bool ConfigValueHasBeenSet() const;

                private:

                    /**
                     * 配置名称
<li>license_monitor 新增授权监控配置 0 关闭, 1开启</li>
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                    /**
                     * 配置值
                     */
                    std::string m_configValue;
                    bool m_configValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYUSERSCONFIGREQUEST_H_
