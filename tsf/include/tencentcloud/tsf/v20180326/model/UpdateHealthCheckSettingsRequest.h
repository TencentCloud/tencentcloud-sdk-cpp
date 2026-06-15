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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEHEALTHCHECKSETTINGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEHEALTHCHECKSETTINGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/HealthCheckSettings.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * UpdateHealthCheckSettings请求参数结构体
                */
                class UpdateHealthCheckSettingsRequest : public AbstractModel
                {
                public:
                    UpdateHealthCheckSettingsRequest();
                    ~UpdateHealthCheckSettingsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>部署组ID，可通过调用<a href="https://cloud.tencent.com/document/api/649/36068">DescribeContainerGroups</a>查询已创建的部署组列表或登录控制台进行查看；也可以调用<a href="https://cloud.tencent.com/document/api/649/36075">CreateContainGroup</a>创建新的部署组。</p>
                     * @return GroupId <p>部署组ID，可通过调用<a href="https://cloud.tencent.com/document/api/649/36068">DescribeContainerGroups</a>查询已创建的部署组列表或登录控制台进行查看；也可以调用<a href="https://cloud.tencent.com/document/api/649/36075">CreateContainGroup</a>创建新的部署组。</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>部署组ID，可通过调用<a href="https://cloud.tencent.com/document/api/649/36068">DescribeContainerGroups</a>查询已创建的部署组列表或登录控制台进行查看；也可以调用<a href="https://cloud.tencent.com/document/api/649/36075">CreateContainGroup</a>创建新的部署组。</p>
                     * @param _groupId <p>部署组ID，可通过调用<a href="https://cloud.tencent.com/document/api/649/36068">DescribeContainerGroups</a>查询已创建的部署组列表或登录控制台进行查看；也可以调用<a href="https://cloud.tencent.com/document/api/649/36075">CreateContainGroup</a>创建新的部署组。</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启健康检查</p>
                     * @return EnableHealthCheck <p>是否开启健康检查</p>
                     * 
                     */
                    bool GetEnableHealthCheck() const;

                    /**
                     * 设置<p>是否开启健康检查</p>
                     * @param _enableHealthCheck <p>是否开启健康检查</p>
                     * 
                     */
                    void SetEnableHealthCheck(const bool& _enableHealthCheck);

                    /**
                     * 判断参数 EnableHealthCheck 是否已赋值
                     * @return EnableHealthCheck 是否已赋值
                     * 
                     */
                    bool EnableHealthCheckHasBeenSet() const;

                    /**
                     * 获取<p>健康检查配置</p>
                     * @return HealthCheckSettings <p>健康检查配置</p>
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置<p>健康检查配置</p>
                     * @param _healthCheckSettings <p>健康检查配置</p>
                     * 
                     */
                    void SetHealthCheckSettings(const HealthCheckSettings& _healthCheckSettings);

                    /**
                     * 判断参数 HealthCheckSettings 是否已赋值
                     * @return HealthCheckSettings 是否已赋值
                     * 
                     */
                    bool HealthCheckSettingsHasBeenSet() const;

                    /**
                     * 获取<p>是否自动重启</p>
                     * @return LivenessAutoRestart <p>是否自动重启</p>
                     * 
                     */
                    bool GetLivenessAutoRestart() const;

                    /**
                     * 设置<p>是否自动重启</p>
                     * @param _livenessAutoRestart <p>是否自动重启</p>
                     * 
                     */
                    void SetLivenessAutoRestart(const bool& _livenessAutoRestart);

                    /**
                     * 判断参数 LivenessAutoRestart 是否已赋值
                     * @return LivenessAutoRestart 是否已赋值
                     * 
                     */
                    bool LivenessAutoRestartHasBeenSet() const;

                private:

                    /**
                     * <p>部署组ID，可通过调用<a href="https://cloud.tencent.com/document/api/649/36068">DescribeContainerGroups</a>查询已创建的部署组列表或登录控制台进行查看；也可以调用<a href="https://cloud.tencent.com/document/api/649/36075">CreateContainGroup</a>创建新的部署组。</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>是否开启健康检查</p>
                     */
                    bool m_enableHealthCheck;
                    bool m_enableHealthCheckHasBeenSet;

                    /**
                     * <p>健康检查配置</p>
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * <p>是否自动重启</p>
                     */
                    bool m_livenessAutoRestart;
                    bool m_livenessAutoRestartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_UPDATEHEALTHCHECKSETTINGSREQUEST_H_
