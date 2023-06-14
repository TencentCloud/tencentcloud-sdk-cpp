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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * ClearLaunchConfigurationAttributes请求参数结构体
                */
                class ClearLaunchConfigurationAttributesRequest : public AbstractModel
                {
                public:
                    ClearLaunchConfigurationAttributesRequest();
                    ~ClearLaunchConfigurationAttributesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取启动配置ID。
                     * @return LaunchConfigurationId 启动配置ID。
                     * 
                     */
                    std::string GetLaunchConfigurationId() const;

                    /**
                     * 设置启动配置ID。
                     * @param _launchConfigurationId 启动配置ID。
                     * 
                     */
                    void SetLaunchConfigurationId(const std::string& _launchConfigurationId);

                    /**
                     * 判断参数 LaunchConfigurationId 是否已赋值
                     * @return LaunchConfigurationId 是否已赋值
                     * 
                     */
                    bool LaunchConfigurationIdHasBeenSet() const;

                    /**
                     * 获取是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     * @return ClearDataDisks 是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     * 
                     */
                    bool GetClearDataDisks() const;

                    /**
                     * 设置是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     * @param _clearDataDisks 是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     * 
                     */
                    void SetClearDataDisks(const bool& _clearDataDisks);

                    /**
                     * 判断参数 ClearDataDisks 是否已赋值
                     * @return ClearDataDisks 是否已赋值
                     * 
                     */
                    bool ClearDataDisksHasBeenSet() const;

                    /**
                     * 获取是否清空云服务器主机名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将不设置主机名。
                     * @return ClearHostNameSettings 是否清空云服务器主机名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将不设置主机名。
                     * 
                     */
                    bool GetClearHostNameSettings() const;

                    /**
                     * 设置是否清空云服务器主机名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将不设置主机名。
                     * @param _clearHostNameSettings 是否清空云服务器主机名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将不设置主机名。
                     * 
                     */
                    void SetClearHostNameSettings(const bool& _clearHostNameSettings);

                    /**
                     * 判断参数 ClearHostNameSettings 是否已赋值
                     * @return ClearHostNameSettings 是否已赋值
                     * 
                     */
                    bool ClearHostNameSettingsHasBeenSet() const;

                    /**
                     * 获取是否清空云服务器实例名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置。
                     * @return ClearInstanceNameSettings 是否清空云服务器实例名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置。
                     * 
                     */
                    bool GetClearInstanceNameSettings() const;

                    /**
                     * 设置是否清空云服务器实例名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置。
                     * @param _clearInstanceNameSettings 是否清空云服务器实例名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置。
                     * 
                     */
                    void SetClearInstanceNameSettings(const bool& _clearInstanceNameSettings);

                    /**
                     * 判断参数 ClearInstanceNameSettings 是否已赋值
                     * @return ClearInstanceNameSettings 是否已赋值
                     * 
                     */
                    bool ClearInstanceNameSettingsHasBeenSet() const;

                    /**
                     * 获取是否清空置放群组信息，非必填，默认为 false。
填 true 代表清空置放群组信息，清空后基于此新创建的云主机将不指定任何置放群组。
                     * @return ClearDisasterRecoverGroupIds 是否清空置放群组信息，非必填，默认为 false。
填 true 代表清空置放群组信息，清空后基于此新创建的云主机将不指定任何置放群组。
                     * 
                     */
                    bool GetClearDisasterRecoverGroupIds() const;

                    /**
                     * 设置是否清空置放群组信息，非必填，默认为 false。
填 true 代表清空置放群组信息，清空后基于此新创建的云主机将不指定任何置放群组。
                     * @param _clearDisasterRecoverGroupIds 是否清空置放群组信息，非必填，默认为 false。
填 true 代表清空置放群组信息，清空后基于此新创建的云主机将不指定任何置放群组。
                     * 
                     */
                    void SetClearDisasterRecoverGroupIds(const bool& _clearDisasterRecoverGroupIds);

                    /**
                     * 判断参数 ClearDisasterRecoverGroupIds 是否已赋值
                     * @return ClearDisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool ClearDisasterRecoverGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 启动配置ID。
                     */
                    std::string m_launchConfigurationId;
                    bool m_launchConfigurationIdHasBeenSet;

                    /**
                     * 是否清空数据盘信息，非必填，默认为 false。
填 true 代表清空“数据盘”信息，清空后基于此新创建的云主机将不含有任何数据盘。
                     */
                    bool m_clearDataDisks;
                    bool m_clearDataDisksHasBeenSet;

                    /**
                     * 是否清空云服务器主机名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将不设置主机名。
                     */
                    bool m_clearHostNameSettings;
                    bool m_clearHostNameSettingsHasBeenSet;

                    /**
                     * 是否清空云服务器实例名相关设置信息，非必填，默认为 false。
填 true 代表清空主机名设置信息，清空后基于此新创建的云主机将按照“as-{{ 伸缩组AutoScalingGroupName }}”进行设置。
                     */
                    bool m_clearInstanceNameSettings;
                    bool m_clearInstanceNameSettingsHasBeenSet;

                    /**
                     * 是否清空置放群组信息，非必填，默认为 false。
填 true 代表清空置放群组信息，清空后基于此新创建的云主机将不指定任何置放群组。
                     */
                    bool m_clearDisasterRecoverGroupIds;
                    bool m_clearDisasterRecoverGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_CLEARLAUNCHCONFIGURATIONATTRIBUTESREQUEST_H_
