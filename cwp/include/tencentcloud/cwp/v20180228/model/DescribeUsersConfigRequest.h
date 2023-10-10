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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUSERSCONFIGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUSERSCONFIGREQUEST_H_

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
                * DescribeUsersConfig请求参数结构体
                */
                class DescribeUsersConfigRequest : public AbstractModel
                {
                public:
                    DescribeUsersConfigRequest();
                    ~DescribeUsersConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取配置名称
<li>license_monitor 授权监控配置 0 关闭, 1开启</li>
                     * @return ConfigName 配置名称
<li>license_monitor 授权监控配置 0 关闭, 1开启</li>
                     * 
                     */
                    std::string GetConfigName() const;

                    /**
                     * 设置配置名称
<li>license_monitor 授权监控配置 0 关闭, 1开启</li>
                     * @param _configName 配置名称
<li>license_monitor 授权监控配置 0 关闭, 1开启</li>
                     * 
                     */
                    void SetConfigName(const std::string& _configName);

                    /**
                     * 判断参数 ConfigName 是否已赋值
                     * @return ConfigName 是否已赋值
                     * 
                     */
                    bool ConfigNameHasBeenSet() const;

                private:

                    /**
                     * 配置名称
<li>license_monitor 授权监控配置 0 关闭, 1开启</li>
                     */
                    std::string m_configName;
                    bool m_configNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUSERSCONFIGREQUEST_H_
