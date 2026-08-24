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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_LOGDELIVERYCKAFKACONFIG_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_LOGDELIVERYCKAFKACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 日志投递信息配置
                */
                class LogDeliveryCkafkaConfig : public AbstractModel
                {
                public:
                    LogDeliveryCkafkaConfig();
                    ~LogDeliveryCkafkaConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>接入类型</p>
                     * @return VipType <p>接入类型</p>
                     * 
                     */
                    int64_t GetVipType() const;

                    /**
                     * 设置<p>接入类型</p>
                     * @param _vipType <p>接入类型</p>
                     * 
                     */
                    void SetVipType(const int64_t& _vipType);

                    /**
                     * 判断参数 VipType 是否已赋值
                     * @return VipType 是否已赋值
                     * 
                     */
                    bool VipTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>虚拟ip  VipType 为7 有效</p>
                     * @return Vip <p>虚拟ip  VipType 为7 有效</p>
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置<p>虚拟ip  VipType 为7 有效</p>
                     * @param _vip <p>虚拟ip  VipType 为7 有效</p>
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取<p>虚拟端口 VipType 为7有效</p>
                     * @return Vport <p>虚拟端口 VipType 为7有效</p>
                     * 
                     */
                    std::string GetVport() const;

                    /**
                     * 设置<p>虚拟端口 VipType 为7有效</p>
                     * @param _vport <p>虚拟端口 VipType 为7有效</p>
                     * 
                     */
                    void SetVport(const std::string& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取<p>域名  VipType 为1有效</p>
                     * @return Domain <p>域名  VipType 为1有效</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名  VipType 为1有效</p>
                     * @param _domain <p>域名  VipType 为1有效</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>域名端口 VipType 为1有效</p>
                     * @return DomainPort <p>域名端口 VipType 为1有效</p>
                     * 
                     */
                    std::string GetDomainPort() const;

                    /**
                     * 设置<p>域名端口 VipType 为1有效</p>
                     * @param _domainPort <p>域名端口 VipType 为1有效</p>
                     * 
                     */
                    void SetDomainPort(const std::string& _domainPort);

                    /**
                     * 判断参数 DomainPort 是否已赋值
                     * @return DomainPort 是否已赋值
                     * 
                     */
                    bool DomainPortHasBeenSet() const;

                    /**
                     * 获取<p>实例地域</p>
                     * @return RegionId <p>实例地域</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>实例地域</p>
                     * @param _regionId <p>实例地域</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>实例vpc</p>
                     * @return VpcId <p>实例vpc</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>实例vpc</p>
                     * @param _vpcId <p>实例vpc</p>
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
                     * 获取<p>实例子网</p>
                     * @return SubnetId <p>实例子网</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>实例子网</p>
                     * @param _subnetId <p>实例子网</p>
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
                     * 获取<p>实例健康状态， 1：健康，2：告警，3：异常&#39;, 4: 实例不存在</p>
                     * @return Healthy <p>实例健康状态， 1：健康，2：告警，3：异常&#39;, 4: 实例不存在</p>
                     * 
                     */
                    int64_t GetHealthy() const;

                    /**
                     * 设置<p>实例健康状态， 1：健康，2：告警，3：异常&#39;, 4: 实例不存在</p>
                     * @param _healthy <p>实例健康状态， 1：健康，2：告警，3：异常&#39;, 4: 实例不存在</p>
                     * 
                     */
                    void SetHealthy(const int64_t& _healthy);

                    /**
                     * 判断参数 Healthy 是否已赋值
                     * @return Healthy 是否已赋值
                     * 
                     */
                    bool HealthyHasBeenSet() const;

                    /**
                     * 获取<p>日志类型</p>
                     * @return LogType <p>日志类型</p>
                     * 
                     */
                    int64_t GetLogType() const;

                    /**
                     * 设置<p>日志类型</p>
                     * @param _logType <p>日志类型</p>
                     * 
                     */
                    void SetLogType(const int64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>投递的topicid</p>
                     * @return TopicId <p>投递的topicid</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>投递的topicid</p>
                     * @param _topicId <p>投递的topicid</p>
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取<p>投递的topicname</p>
                     * @return TopicName <p>投递的topicname</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>投递的topicname</p>
                     * @param _topicName <p>投递的topicname</p>
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取<p>投递状态</p>
                     * @return Status <p>投递状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>投递状态</p>
                     * @param _status <p>投递状态</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>状态信息</p>
                     * @return StatusMessages <p>状态信息</p>
                     * 
                     */
                    std::string GetStatusMessages() const;

                    /**
                     * 设置<p>状态信息</p>
                     * @param _statusMessages <p>状态信息</p>
                     * 
                     */
                    void SetStatusMessages(const std::string& _statusMessages);

                    /**
                     * 判断参数 StatusMessages 是否已赋值
                     * @return StatusMessages 是否已赋值
                     * 
                     */
                    bool StatusMessagesHasBeenSet() const;

                    /**
                     * 获取<p>开启or关闭，投递状态1为开启，0 关闭，默认开启，但是如果没有topic 则关闭</p>
                     * @return IsOpen <p>开启or关闭，投递状态1为开启，0 关闭，默认开启，但是如果没有topic 则关闭</p>
                     * 
                     */
                    int64_t GetIsOpen() const;

                    /**
                     * 设置<p>开启or关闭，投递状态1为开启，0 关闭，默认开启，但是如果没有topic 则关闭</p>
                     * @param _isOpen <p>开启or关闭，投递状态1为开启，0 关闭，默认开启，但是如果没有topic 则关闭</p>
                     * 
                     */
                    void SetIsOpen(const int64_t& _isOpen);

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     * 
                     */
                    bool IsOpenHasBeenSet() const;

                private:

                    /**
                     * <p>接入类型</p>
                     */
                    int64_t m_vipType;
                    bool m_vipTypeHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>虚拟ip  VipType 为7 有效</p>
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * <p>虚拟端口 VipType 为7有效</p>
                     */
                    std::string m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * <p>域名  VipType 为1有效</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名端口 VipType 为1有效</p>
                     */
                    std::string m_domainPort;
                    bool m_domainPortHasBeenSet;

                    /**
                     * <p>实例地域</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>实例vpc</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>实例子网</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例健康状态， 1：健康，2：告警，3：异常&#39;, 4: 实例不存在</p>
                     */
                    int64_t m_healthy;
                    bool m_healthyHasBeenSet;

                    /**
                     * <p>日志类型</p>
                     */
                    int64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>投递的topicid</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>投递的topicname</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>投递状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>状态信息</p>
                     */
                    std::string m_statusMessages;
                    bool m_statusMessagesHasBeenSet;

                    /**
                     * <p>开启or关闭，投递状态1为开启，0 关闭，默认开启，但是如果没有topic 则关闭</p>
                     */
                    int64_t m_isOpen;
                    bool m_isOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_LOGDELIVERYCKAFKACONFIG_H_
