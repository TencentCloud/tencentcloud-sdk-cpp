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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGKAFKASTATEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGKAFKASTATEREQUEST_H_

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
                * ModifyLogKafkaState请求参数结构体
                */
                class ModifyLogKafkaStateRequest : public AbstractModel
                {
                public:
                    ModifyLogKafkaStateRequest();
                    ~ModifyLogKafkaStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例名称 如 主机安全测试环境
                     * @return KafkaEnvName 实例名称 如 主机安全测试环境
                     * 
                     */
                    std::string GetKafkaEnvName() const;

                    /**
                     * 设置实例名称 如 主机安全测试环境
                     * @param _kafkaEnvName 实例名称 如 主机安全测试环境
                     * 
                     */
                    void SetKafkaEnvName(const std::string& _kafkaEnvName);

                    /**
                     * 判断参数 KafkaEnvName 是否已赋值
                     * @return KafkaEnvName 是否已赋值
                     * 
                     */
                    bool KafkaEnvNameHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return KafkaId 实例ID
                     * 
                     */
                    std::string GetKafkaId() const;

                    /**
                     * 设置实例ID
                     * @param _kafkaId 实例ID
                     * 
                     */
                    void SetKafkaId(const std::string& _kafkaId);

                    /**
                     * 判断参数 KafkaId 是否已赋值
                     * @return KafkaId 是否已赋值
                     * 
                     */
                    bool KafkaIdHasBeenSet() const;

                    /**
                     * 获取接入方式，1公网域名接入，2支撑环境接入
                     * @return AccessType 接入方式，1公网域名接入，2支撑环境接入
                     * 
                     */
                    uint64_t GetAccessType() const;

                    /**
                     * 设置接入方式，1公网域名接入，2支撑环境接入
                     * @param _accessType 接入方式，1公网域名接入，2支撑环境接入
                     * 
                     */
                    void SetAccessType(const uint64_t& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取接入地址
                     * @return AccessAddr 接入地址
                     * 
                     */
                    std::string GetAccessAddr() const;

                    /**
                     * 设置接入地址
                     * @param _accessAddr 接入地址
                     * 
                     */
                    void SetAccessAddr(const std::string& _accessAddr);

                    /**
                     * 判断参数 AccessAddr 是否已赋值
                     * @return AccessAddr 是否已赋值
                     * 
                     */
                    bool AccessAddrHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return Username 用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
                     * @param _username 用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Zone 区域
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置区域
                     * @param _zone 区域
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Az 可用区
                     * 
                     */
                    std::string GetAz() const;

                    /**
                     * 设置可用区
                     * @param _az 可用区
                     * 
                     */
                    void SetAz(const std::string& _az);

                    /**
                     * 判断参数 Az 是否已赋值
                     * @return Az 是否已赋值
                     * 
                     */
                    bool AzHasBeenSet() const;

                    /**
                     * 获取所属网络
                     * @return VpcId 所属网络
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置所属网络
                     * @param _vpcId 所属网络
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取所在子网
                     * @return SubnetId 所在子网
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置所在子网
                     * @param _subnetId 所在子网
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取投递状态，1：健康，2：告警，3：异常
                     * @return DeliverStatus 投递状态，1：健康，2：告警，3：异常
                     * 
                     */
                    uint64_t GetDeliverStatus() const;

                    /**
                     * 设置投递状态，1：健康，2：告警，3：异常
                     * @param _deliverStatus 投递状态，1：健康，2：告警，3：异常
                     * 
                     */
                    void SetDeliverStatus(const uint64_t& _deliverStatus);

                    /**
                     * 判断参数 DeliverStatus 是否已赋值
                     * @return DeliverStatus 是否已赋值
                     * 
                     */
                    bool DeliverStatusHasBeenSet() const;

                    /**
                     * 获取kafka版本
                     * @return InsVersion kafka版本
                     * 
                     */
                    std::string GetInsVersion() const;

                    /**
                     * 设置kafka版本
                     * @param _insVersion kafka版本
                     * 
                     */
                    void SetInsVersion(const std::string& _insVersion);

                    /**
                     * 判断参数 InsVersion 是否已赋值
                     * @return InsVersion 是否已赋值
                     * 
                     */
                    bool InsVersionHasBeenSet() const;

                    /**
                     * 获取峰值带宽
                     * @return BandWidth 峰值带宽
                     * 
                     */
                    int64_t GetBandWidth() const;

                    /**
                     * 设置峰值带宽
                     * @param _bandWidth 峰值带宽
                     * 
                     */
                    void SetBandWidth(const int64_t& _bandWidth);

                    /**
                     * 判断参数 BandWidth 是否已赋值
                     * @return BandWidth 是否已赋值
                     * 
                     */
                    bool BandWidthHasBeenSet() const;

                    /**
                     * 获取磁盘容量
                     * @return DiskSize 磁盘容量
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置磁盘容量
                     * @param _diskSize 磁盘容量
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                private:

                    /**
                     * 实例名称 如 主机安全测试环境
                     */
                    std::string m_kafkaEnvName;
                    bool m_kafkaEnvNameHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_kafkaId;
                    bool m_kafkaIdHasBeenSet;

                    /**
                     * 接入方式，1公网域名接入，2支撑环境接入
                     */
                    uint64_t m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 接入地址
                     */
                    std::string m_accessAddr;
                    bool m_accessAddrHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::string m_az;
                    bool m_azHasBeenSet;

                    /**
                     * 所属网络
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 所在子网
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 投递状态，1：健康，2：告警，3：异常
                     */
                    uint64_t m_deliverStatus;
                    bool m_deliverStatusHasBeenSet;

                    /**
                     * kafka版本
                     */
                    std::string m_insVersion;
                    bool m_insVersionHasBeenSet;

                    /**
                     * 峰值带宽
                     */
                    int64_t m_bandWidth;
                    bool m_bandWidthHasBeenSet;

                    /**
                     * 磁盘容量
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYLOGKAFKASTATEREQUEST_H_
