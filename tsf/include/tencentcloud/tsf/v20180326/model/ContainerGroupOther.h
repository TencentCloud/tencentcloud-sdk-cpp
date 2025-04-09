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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPOTHER_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPOTHER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/Env.h>
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
                * 部署组列表-其它字段
                */
                class ContainerGroupOther : public AbstractModel
                {
                public:
                    ContainerGroupOther();
                    ~ContainerGroupOther() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例总数
                     * @return InstanceNum 实例总数
                     * 
                     */
                    int64_t GetInstanceNum() const;

                    /**
                     * 设置实例总数
                     * @param _instanceNum 实例总数
                     * 
                     */
                    void SetInstanceNum(const int64_t& _instanceNum);

                    /**
                     * 判断参数 InstanceNum 是否已赋值
                     * @return InstanceNum 是否已赋值
                     * 
                     */
                    bool InstanceNumHasBeenSet() const;

                    /**
                     * 获取已启动实例总数
                     * @return CurrentNum 已启动实例总数
                     * 
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 设置已启动实例总数
                     * @param _currentNum 已启动实例总数
                     * 
                     */
                    void SetCurrentNum(const int64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     * 
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取负载均衡DNS地址
                     * @return LbDns 负载均衡DNS地址
                     * 
                     */
                    std::string GetLbDns() const;

                    /**
                     * 设置负载均衡DNS地址
                     * @param _lbDns 负载均衡DNS地址
                     * 
                     */
                    void SetLbDns(const std::string& _lbDns);

                    /**
                     * 判断参数 LbDns 是否已赋值
                     * @return LbDns 是否已赋值
                     * 
                     */
                    bool LbDnsHasBeenSet() const;

                    /**
                     * 获取负载均衡ip
                     * @return LbIp 负载均衡ip
                     * 
                     */
                    std::string GetLbIp() const;

                    /**
                     * 设置负载均衡ip
                     * @param _lbIp 负载均衡ip
                     * 
                     */
                    void SetLbIp(const std::string& _lbIp);

                    /**
                     * 判断参数 LbIp 是否已赋值
                     * @return LbIp 是否已赋值
                     * 
                     */
                    bool LbIpHasBeenSet() const;

                    /**
                     * 获取Service ip
                     * @return ClusterIp Service ip
                     * 
                     */
                    std::string GetClusterIp() const;

                    /**
                     * 设置Service ip
                     * @param _clusterIp Service ip
                     * 
                     */
                    void SetClusterIp(const std::string& _clusterIp);

                    /**
                     * 判断参数 ClusterIp 是否已赋值
                     * @return ClusterIp 是否已赋值
                     * 
                     */
                    bool ClusterIpHasBeenSet() const;

                    /**
                     * 获取服务状态，请参考后面的状态定义
                     * @return Status 服务状态，请参考后面的状态定义
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置服务状态，请参考后面的状态定义
                     * @param _status 服务状态，请参考后面的状态定义
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取服务状态，请参考后面的状态定义
                     * @return Message 服务状态，请参考后面的状态定义
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置服务状态，请参考后面的状态定义
                     * @param _message 服务状态，请参考后面的状态定义
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取环境变量
                     * @return Envs 环境变量
                     * 
                     */
                    std::vector<Env> GetEnvs() const;

                    /**
                     * 设置环境变量
                     * @param _envs 环境变量
                     * 
                     */
                    void SetEnvs(const std::vector<Env>& _envs);

                    /**
                     * 判断参数 Envs 是否已赋值
                     * @return Envs 是否已赋值
                     * 
                     */
                    bool EnvsHasBeenSet() const;

                    /**
                     * 获取Service NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePort Service NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNodePort() const;

                    /**
                     * 设置Service NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodePort Service NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodePort(const uint64_t& _nodePort);

                    /**
                     * 判断参数 NodePort 是否已赋值
                     * @return NodePort 是否已赋值
                     * 
                     */
                    bool NodePortHasBeenSet() const;

                    /**
                     * 获取子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取健康检查相关字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HealthCheckSettings 健康检查相关字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HealthCheckSettings GetHealthCheckSettings() const;

                    /**
                     * 设置健康检查相关字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _healthCheckSettings 健康检查相关字段
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务配置信息是否匹配
                     * @return IsNotEqualServiceConfig 服务配置信息是否匹配
                     * 
                     */
                    bool GetIsNotEqualServiceConfig() const;

                    /**
                     * 设置服务配置信息是否匹配
                     * @param _isNotEqualServiceConfig 服务配置信息是否匹配
                     * 
                     */
                    void SetIsNotEqualServiceConfig(const bool& _isNotEqualServiceConfig);

                    /**
                     * 判断参数 IsNotEqualServiceConfig 是否已赋值
                     * @return IsNotEqualServiceConfig 是否已赋值
                     * 
                     */
                    bool IsNotEqualServiceConfigHasBeenSet() const;

                private:

                    /**
                     * 实例总数
                     */
                    int64_t m_instanceNum;
                    bool m_instanceNumHasBeenSet;

                    /**
                     * 已启动实例总数
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * 负载均衡DNS地址
                     */
                    std::string m_lbDns;
                    bool m_lbDnsHasBeenSet;

                    /**
                     * 负载均衡ip
                     */
                    std::string m_lbIp;
                    bool m_lbIpHasBeenSet;

                    /**
                     * Service ip
                     */
                    std::string m_clusterIp;
                    bool m_clusterIpHasBeenSet;

                    /**
                     * 服务状态，请参考后面的状态定义
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务状态，请参考后面的状态定义
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 环境变量
                     */
                    std::vector<Env> m_envs;
                    bool m_envsHasBeenSet;

                    /**
                     * Service NodePort
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nodePort;
                    bool m_nodePortHasBeenSet;

                    /**
                     * 子网ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 健康检查相关字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HealthCheckSettings m_healthCheckSettings;
                    bool m_healthCheckSettingsHasBeenSet;

                    /**
                     * 服务配置信息是否匹配
                     */
                    bool m_isNotEqualServiceConfig;
                    bool m_isNotEqualServiceConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERGROUPOTHER_H_
