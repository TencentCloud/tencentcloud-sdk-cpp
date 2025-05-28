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

#ifndef TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSINSTANCE_H_
#define TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trabbit/v20230418/model/RabbitMQServerlessEndpoint.h>


namespace TencentCloud
{
    namespace Trabbit
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * rabbitmq serverless 实例
                */
                class RabbitMQServerlessInstance : public AbstractModel
                {
                public:
                    RabbitMQServerlessInstance();
                    ~RabbitMQServerlessInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取实例版本号
                     * @return InstanceVersion 实例版本号
                     * 
                     */
                    std::string GetInstanceVersion() const;

                    /**
                     * 设置实例版本号
                     * @param _instanceVersion 实例版本号
                     * 
                     */
                    void SetInstanceVersion(const std::string& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
                     * @return Status 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
                     * @param _status 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
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
                     * 获取TPS
                     * @return MaxTps TPS
                     * 
                     */
                    int64_t GetMaxTps() const;

                    /**
                     * 设置TPS
                     * @param _maxTps TPS
                     * 
                     */
                    void SetMaxTps(const int64_t& _maxTps);

                    /**
                     * 判断参数 MaxTps 是否已赋值
                     * @return MaxTps 是否已赋值
                     * 
                     */
                    bool MaxTpsHasBeenSet() const;

                    /**
                     * 获取带宽
                     * @return MaxBandWidth 带宽
                     * 
                     */
                    int64_t GetMaxBandWidth() const;

                    /**
                     * 设置带宽
                     * @param _maxBandWidth 带宽
                     * 
                     */
                    void SetMaxBandWidth(const int64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取集群过期时间
                     * @return ExpireTime 集群过期时间
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置集群过期时间
                     * @param _expireTime 集群过期时间
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * @return AutoRenewFlag 自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * @param _autoRenewFlag 自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取0-后付费，1-预付费
                     * @return PayMode 0-后付费，1-预付费
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置0-后付费，1-预付费
                     * @param _payMode 0-后付费，1-预付费
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取集群规格
                     * @return SpecName 集群规格
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置集群规格
                     * @param _specName 集群规格
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取异常信息
                     * @return ExceptionInformation 异常信息
                     * 
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置异常信息
                     * @param _exceptionInformation 异常信息
                     * 
                     */
                    void SetExceptionInformation(const std::string& _exceptionInformation);

                    /**
                     * 判断参数 ExceptionInformation 是否已赋值
                     * @return ExceptionInformation 是否已赋值
                     * 
                     */
                    bool ExceptionInformationHasBeenSet() const;

                    /**
                     * 获取公网接入点
                     * @return PublicAccessEndpoint 公网接入点
                     * 
                     */
                    std::string GetPublicAccessEndpoint() const;

                    /**
                     * 设置公网接入点
                     * @param _publicAccessEndpoint 公网接入点
                     * 
                     */
                    void SetPublicAccessEndpoint(const std::string& _publicAccessEndpoint);

                    /**
                     * 判断参数 PublicAccessEndpoint 是否已赋值
                     * @return PublicAccessEndpoint 是否已赋值
                     * 
                     */
                    bool PublicAccessEndpointHasBeenSet() const;

                    /**
                     * 获取私有网络接入点
                     * @return Vpcs 私有网络接入点
                     * 
                     */
                    std::vector<RabbitMQServerlessEndpoint> GetVpcs() const;

                    /**
                     * 设置私有网络接入点
                     * @param _vpcs 私有网络接入点
                     * 
                     */
                    void SetVpcs(const std::vector<RabbitMQServerlessEndpoint>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     * 
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败

                     * @return ClusterStatus 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败

                     * 
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败

                     * @param _clusterStatus 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败

                     * 
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取集群类型：1
                     * @return InstanceType 集群类型：1
                     * 
                     */
                    uint64_t GetInstanceType() const;

                    /**
                     * 设置集群类型：1
                     * @param _instanceType 集群类型：1
                     * 
                     */
                    void SetInstanceType(const uint64_t& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return CreateTime 过期时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置过期时间
                     * @param _createTime 过期时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取为了兼容托管版，固定值 0
                     * @return NodeCount 为了兼容托管版，固定值 0
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置为了兼容托管版，固定值 0
                     * @param _nodeCount 为了兼容托管版，固定值 0
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取为了兼容托管版，固定值 0
                     * @return MaxStorage 为了兼容托管版，固定值 0
                     * 
                     */
                    int64_t GetMaxStorage() const;

                    /**
                     * 设置为了兼容托管版，固定值 0
                     * @param _maxStorage 为了兼容托管版，固定值 0
                     * 
                     */
                    void SetMaxStorage(const int64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取隔离时间
                     * @return IsolatedTime 隔离时间
                     * 
                     */
                    uint64_t GetIsolatedTime() const;

                    /**
                     * 设置隔离时间
                     * @param _isolatedTime 隔离时间
                     * 
                     */
                    void SetIsolatedTime(const uint64_t& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     * 
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取Serverless 扩展字段
                     * @return ServerlessExt Serverless 扩展字段
                     * 
                     */
                    std::string GetServerlessExt() const;

                    /**
                     * 设置Serverless 扩展字段
                     * @param _serverlessExt Serverless 扩展字段
                     * 
                     */
                    void SetServerlessExt(const std::string& _serverlessExt);

                    /**
                     * 判断参数 ServerlessExt 是否已赋值
                     * @return ServerlessExt 是否已赋值
                     * 
                     */
                    bool ServerlessExtHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例版本号
                     */
                    std::string m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * TPS
                     */
                    int64_t m_maxTps;
                    bool m_maxTpsHasBeenSet;

                    /**
                     * 带宽
                     */
                    int64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * 集群过期时间
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 自动续费标记，0表示默认状态(用户未设置，即初始状态即手动续费)， 1表示自动续费，2表示明确不自动续费(用户设置)
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 0-后付费，1-预付费
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 集群规格
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 异常信息
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * 公网接入点
                     */
                    std::string m_publicAccessEndpoint;
                    bool m_publicAccessEndpointHasBeenSet;

                    /**
                     * 私有网络接入点
                     */
                    std::vector<RabbitMQServerlessEndpoint> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败

                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 集群类型：1
                     */
                    uint64_t m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 为了兼容托管版，固定值 0
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 为了兼容托管版，固定值 0
                     */
                    int64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 隔离时间
                     */
                    uint64_t m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * Serverless 扩展字段
                     */
                    std::string m_serverlessExt;
                    bool m_serverlessExtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRABBIT_V20230418_MODEL_RABBITMQSERVERLESSINSTANCE_H_
