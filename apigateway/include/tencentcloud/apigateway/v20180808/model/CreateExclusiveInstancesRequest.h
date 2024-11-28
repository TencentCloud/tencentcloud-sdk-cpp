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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEEXCLUSIVEINSTANCESREQUEST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEEXCLUSIVEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/InstanceNetworkConfig.h>
#include <tencentcloud/apigateway/v20180808/model/VpcConfig.h>
#include <tencentcloud/apigateway/v20180808/model/Tag.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * CreateExclusiveInstances请求参数结构体
                */
                class CreateExclusiveInstancesRequest : public AbstractModel
                {
                public:
                    CreateExclusiveInstancesRequest();
                    ~CreateExclusiveInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区
                     * @return Zones 可用区
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置可用区
                     * @param _zones 可用区
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取实例类型：     
basic：            基础版
professional： 专业版
enterprise：     企业版
platium：         铂金版
diamond：       钻石版
                     * @return InstanceType 实例类型：     
basic：            基础版
professional： 专业版
enterprise：     企业版
platium：         铂金版
diamond：       钻石版
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型：     
basic：            基础版
professional： 专业版
enterprise：     企业版
platium：         铂金版
diamond：       钻石版
                     * @param _instanceType 实例类型：     
basic：            基础版
professional： 专业版
enterprise：     企业版
platium：         铂金版
diamond：       钻石版
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取网络配置
                     * @return NetworkConfig 网络配置
                     * 
                     */
                    InstanceNetworkConfig GetNetworkConfig() const;

                    /**
                     * 设置网络配置
                     * @param _networkConfig 网络配置
                     * 
                     */
                    void SetNetworkConfig(const InstanceNetworkConfig& _networkConfig);

                    /**
                     * 判断参数 NetworkConfig 是否已赋值
                     * @return NetworkConfig 是否已赋值
                     * 
                     */
                    bool NetworkConfigHasBeenSet() const;

                    /**
                     * 获取VPC配置
                     * @return VpcConfig VPC配置
                     * 
                     */
                    VpcConfig GetVpcConfig() const;

                    /**
                     * 设置VPC配置
                     * @param _vpcConfig VPC配置
                     * 
                     */
                    void SetVpcConfig(const VpcConfig& _vpcConfig);

                    /**
                     * 判断参数 VpcConfig 是否已赋值
                     * @return VpcConfig 是否已赋值
                     * 
                     */
                    bool VpcConfigHasBeenSet() const;

                    /**
                     * 获取付费类型：
POSTPAID：后付费
PREPAID： 预付费
                     * @return PayMode 付费类型：
POSTPAID：后付费
PREPAID： 预付费
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置付费类型：
POSTPAID：后付费
PREPAID： 预付费
                     * @param _payMode 付费类型：
POSTPAID：后付费
PREPAID： 预付费
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例描述
                     * @return InstanceDescription 实例描述
                     * 
                     */
                    std::string GetInstanceDescription() const;

                    /**
                     * 设置实例描述
                     * @param _instanceDescription 实例描述
                     * 
                     */
                    void SetInstanceDescription(const std::string& _instanceDescription);

                    /**
                     * 判断参数 InstanceDescription 是否已赋值
                     * @return InstanceDescription 是否已赋值
                     * 
                     */
                    bool InstanceDescriptionHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Tags 标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签
                     * @param _tags 标签
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
                     * 获取预付费付费时长：单位是月
                     * @return Period 预付费付费时长：单位是月
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置预付费付费时长：单位是月
                     * @param _period 预付费付费时长：单位是月
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取预付费续费标志：
NOTIFY_AND_MANUAL_RENEW 手动续费
NOTIFY_AND_AUTO_RENEW 自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW 不续费
                     * @return AutoRenewFlag 预付费续费标志：
NOTIFY_AND_MANUAL_RENEW 手动续费
NOTIFY_AND_AUTO_RENEW 自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW 不续费
                     * 
                     */
                    std::string GetAutoRenewFlag() const;

                    /**
                     * 设置预付费续费标志：
NOTIFY_AND_MANUAL_RENEW 手动续费
NOTIFY_AND_AUTO_RENEW 自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW 不续费
                     * @param _autoRenewFlag 预付费续费标志：
NOTIFY_AND_MANUAL_RENEW 手动续费
NOTIFY_AND_AUTO_RENEW 自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW 不续费
                     * 
                     */
                    void SetAutoRenewFlag(const std::string& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                private:

                    /**
                     * 可用区
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 实例类型：     
basic：            基础版
professional： 专业版
enterprise：     企业版
platium：         铂金版
diamond：       钻石版
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 网络配置
                     */
                    InstanceNetworkConfig m_networkConfig;
                    bool m_networkConfigHasBeenSet;

                    /**
                     * VPC配置
                     */
                    VpcConfig m_vpcConfig;
                    bool m_vpcConfigHasBeenSet;

                    /**
                     * 付费类型：
POSTPAID：后付费
PREPAID： 预付费
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例描述
                     */
                    std::string m_instanceDescription;
                    bool m_instanceDescriptionHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 预付费付费时长：单位是月
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 预付费续费标志：
NOTIFY_AND_MANUAL_RENEW 手动续费
NOTIFY_AND_AUTO_RENEW 自动续费
DISABLE_NOTIFY_AND_MANUAL_RENEW 不续费
                     */
                    std::string m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_CREATEEXCLUSIVEINSTANCESREQUEST_H_
