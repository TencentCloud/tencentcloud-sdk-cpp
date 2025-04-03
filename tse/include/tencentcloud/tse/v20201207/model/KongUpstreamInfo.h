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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMINFO_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/KongTarget.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 服务的后端配置
                */
                class KongUpstreamInfo : public AbstractModel
                {
                public:
                    KongUpstreamInfo();
                    ~KongUpstreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP或域名
                     * @return Host IP或域名
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置IP或域名
                     * @param _host IP或域名
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取服务来源ID
                     * @return SourceID 服务来源ID
                     * 
                     */
                    std::string GetSourceID() const;

                    /**
                     * 设置服务来源ID
                     * @param _sourceID 服务来源ID
                     * 
                     */
                    void SetSourceID(const std::string& _sourceID);

                    /**
                     * 判断参数 SourceID 是否已赋值
                     * @return SourceID 是否已赋值
                     * 
                     */
                    bool SourceIDHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取服务（注册中心或Kubernetes中的服务）名字
                     * @return ServiceName 服务（注册中心或Kubernetes中的服务）名字
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务（注册中心或Kubernetes中的服务）名字
                     * @param _serviceName 服务（注册中心或Kubernetes中的服务）名字
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取服务后端类型是IPList时提供
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Targets 服务后端类型是IPList时提供
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KongTarget> GetTargets() const;

                    /**
                     * 设置服务后端类型是IPList时提供
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targets 服务后端类型是IPList时提供
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargets(const std::vector<KongTarget>& _targets);

                    /**
                     * 判断参数 Targets 是否已赋值
                     * @return Targets 是否已赋值
                     * 
                     */
                    bool TargetsHasBeenSet() const;

                    /**
                     * 获取服务来源类型
                     * @return SourceType 服务来源类型
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置服务来源类型
                     * @param _sourceType 服务来源类型
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取SCF函数类型
                     * @return ScfType SCF函数类型
                     * 
                     */
                    std::string GetScfType() const;

                    /**
                     * 设置SCF函数类型
                     * @param _scfType SCF函数类型
                     * 
                     */
                    void SetScfType(const std::string& _scfType);

                    /**
                     * 判断参数 ScfType 是否已赋值
                     * @return ScfType 是否已赋值
                     * 
                     */
                    bool ScfTypeHasBeenSet() const;

                    /**
                     * 获取SCF函数命名空间
                     * @return ScfNamespace SCF函数命名空间
                     * 
                     */
                    std::string GetScfNamespace() const;

                    /**
                     * 设置SCF函数命名空间
                     * @param _scfNamespace SCF函数命名空间
                     * 
                     */
                    void SetScfNamespace(const std::string& _scfNamespace);

                    /**
                     * 判断参数 ScfNamespace 是否已赋值
                     * @return ScfNamespace 是否已赋值
                     * 
                     */
                    bool ScfNamespaceHasBeenSet() const;

                    /**
                     * 获取SCF函数名
                     * @return ScfLambdaName SCF函数名
                     * 
                     */
                    std::string GetScfLambdaName() const;

                    /**
                     * 设置SCF函数名
                     * @param _scfLambdaName SCF函数名
                     * 
                     */
                    void SetScfLambdaName(const std::string& _scfLambdaName);

                    /**
                     * 判断参数 ScfLambdaName 是否已赋值
                     * @return ScfLambdaName 是否已赋值
                     * 
                     */
                    bool ScfLambdaNameHasBeenSet() const;

                    /**
                     * 获取SCF函数版本
                     * @return ScfLambdaQualifier SCF函数版本
                     * 
                     */
                    std::string GetScfLambdaQualifier() const;

                    /**
                     * 设置SCF函数版本
                     * @param _scfLambdaQualifier SCF函数版本
                     * 
                     */
                    void SetScfLambdaQualifier(const std::string& _scfLambdaQualifier);

                    /**
                     * 判断参数 ScfLambdaQualifier 是否已赋值
                     * @return ScfLambdaQualifier 是否已赋值
                     * 
                     */
                    bool ScfLambdaQualifierHasBeenSet() const;

                    /**
                     * 获取冷启动时间，单位秒
                     * @return SlowStart 冷启动时间，单位秒
                     * 
                     */
                    int64_t GetSlowStart() const;

                    /**
                     * 设置冷启动时间，单位秒
                     * @param _slowStart 冷启动时间，单位秒
                     * 
                     */
                    void SetSlowStart(const int64_t& _slowStart);

                    /**
                     * 判断参数 SlowStart 是否已赋值
                     * @return SlowStart 是否已赋值
                     * 
                     */
                    bool SlowStartHasBeenSet() const;

                    /**
                     * 获取负载均衡算法，默认为 round-robin，还支持 least-connections，consisten_hashing
                     * @return Algorithm 负载均衡算法，默认为 round-robin，还支持 least-connections，consisten_hashing
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置负载均衡算法，默认为 round-robin，还支持 least-connections，consisten_hashing
                     * @param _algorithm 负载均衡算法，默认为 round-robin，还支持 least-connections，consisten_hashing
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                    /**
                     * 获取CVM弹性伸缩组ID
                     * @return AutoScalingGroupID CVM弹性伸缩组ID
                     * 
                     */
                    std::string GetAutoScalingGroupID() const;

                    /**
                     * 设置CVM弹性伸缩组ID
                     * @param _autoScalingGroupID CVM弹性伸缩组ID
                     * 
                     */
                    void SetAutoScalingGroupID(const std::string& _autoScalingGroupID);

                    /**
                     * 判断参数 AutoScalingGroupID 是否已赋值
                     * @return AutoScalingGroupID 是否已赋值
                     * 
                     */
                    bool AutoScalingGroupIDHasBeenSet() const;

                    /**
                     * 获取CVM弹性伸缩组端口
                     * @return AutoScalingCvmPort CVM弹性伸缩组端口
                     * 
                     */
                    uint64_t GetAutoScalingCvmPort() const;

                    /**
                     * 设置CVM弹性伸缩组端口
                     * @param _autoScalingCvmPort CVM弹性伸缩组端口
                     * 
                     */
                    void SetAutoScalingCvmPort(const uint64_t& _autoScalingCvmPort);

                    /**
                     * 判断参数 AutoScalingCvmPort 是否已赋值
                     * @return AutoScalingCvmPort 是否已赋值
                     * 
                     */
                    bool AutoScalingCvmPortHasBeenSet() const;

                    /**
                     * 获取CVM弹性伸缩组使用的CVM TAT命令状态
                     * @return AutoScalingTatCmdStatus CVM弹性伸缩组使用的CVM TAT命令状态
                     * 
                     */
                    std::string GetAutoScalingTatCmdStatus() const;

                    /**
                     * 设置CVM弹性伸缩组使用的CVM TAT命令状态
                     * @param _autoScalingTatCmdStatus CVM弹性伸缩组使用的CVM TAT命令状态
                     * 
                     */
                    void SetAutoScalingTatCmdStatus(const std::string& _autoScalingTatCmdStatus);

                    /**
                     * 判断参数 AutoScalingTatCmdStatus 是否已赋值
                     * @return AutoScalingTatCmdStatus 是否已赋值
                     * 
                     */
                    bool AutoScalingTatCmdStatusHasBeenSet() const;

                    /**
                     * 获取CVM弹性伸缩组生命周期挂钩状态
                     * @return AutoScalingHookStatus CVM弹性伸缩组生命周期挂钩状态
                     * 
                     */
                    std::string GetAutoScalingHookStatus() const;

                    /**
                     * 设置CVM弹性伸缩组生命周期挂钩状态
                     * @param _autoScalingHookStatus CVM弹性伸缩组生命周期挂钩状态
                     * 
                     */
                    void SetAutoScalingHookStatus(const std::string& _autoScalingHookStatus);

                    /**
                     * 判断参数 AutoScalingHookStatus 是否已赋值
                     * @return AutoScalingHookStatus 是否已赋值
                     * 
                     */
                    bool AutoScalingHookStatusHasBeenSet() const;

                    /**
                     * 获取服务来源的名字
                     * @return SourceName 服务来源的名字
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置服务来源的名字
                     * @param _sourceName 服务来源的名字
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取精确的服务来源类型，新建服务来源时候传入的类型
                     * @return RealSourceType 精确的服务来源类型，新建服务来源时候传入的类型
                     * 
                     */
                    std::string GetRealSourceType() const;

                    /**
                     * 设置精确的服务来源类型，新建服务来源时候传入的类型
                     * @param _realSourceType 精确的服务来源类型，新建服务来源时候传入的类型
                     * 
                     */
                    void SetRealSourceType(const std::string& _realSourceType);

                    /**
                     * 判断参数 RealSourceType 是否已赋值
                     * @return RealSourceType 是否已赋值
                     * 
                     */
                    bool RealSourceTypeHasBeenSet() const;

                    /**
                     * 获取upstream健康状态HEALTHY（健康）, UNHEALTHY（异常）, HEALTHCHECKS_OFF（未开启）和NONE（不支持健康检查）
                     * @return HealthStatus upstream健康状态HEALTHY（健康）, UNHEALTHY（异常）, HEALTHCHECKS_OFF（未开启）和NONE（不支持健康检查）
                     * 
                     */
                    std::string GetHealthStatus() const;

                    /**
                     * 设置upstream健康状态HEALTHY（健康）, UNHEALTHY（异常）, HEALTHCHECKS_OFF（未开启）和NONE（不支持健康检查）
                     * @param _healthStatus upstream健康状态HEALTHY（健康）, UNHEALTHY（异常）, HEALTHCHECKS_OFF（未开启）和NONE（不支持健康检查）
                     * 
                     */
                    void SetHealthStatus(const std::string& _healthStatus);

                    /**
                     * 判断参数 HealthStatus 是否已赋值
                     * @return HealthStatus 是否已赋值
                     * 
                     */
                    bool HealthStatusHasBeenSet() const;

                    /**
                     * 获取云函数是否开启CAM鉴权，不填时默认为开启(true)
                     * @return ScfCamAuthEnable 云函数是否开启CAM鉴权，不填时默认为开启(true)
                     * 
                     */
                    bool GetScfCamAuthEnable() const;

                    /**
                     * 设置云函数是否开启CAM鉴权，不填时默认为开启(true)
                     * @param _scfCamAuthEnable 云函数是否开启CAM鉴权，不填时默认为开启(true)
                     * 
                     */
                    void SetScfCamAuthEnable(const bool& _scfCamAuthEnable);

                    /**
                     * 判断参数 ScfCamAuthEnable 是否已赋值
                     * @return ScfCamAuthEnable 是否已赋值
                     * 
                     */
                    bool ScfCamAuthEnableHasBeenSet() const;

                    /**
                     * 获取云函数是否开启Base64编码，默认为false
                     * @return ScfIsBase64Encoded 云函数是否开启Base64编码，默认为false
                     * 
                     */
                    bool GetScfIsBase64Encoded() const;

                    /**
                     * 设置云函数是否开启Base64编码，默认为false
                     * @param _scfIsBase64Encoded 云函数是否开启Base64编码，默认为false
                     * 
                     */
                    void SetScfIsBase64Encoded(const bool& _scfIsBase64Encoded);

                    /**
                     * 判断参数 ScfIsBase64Encoded 是否已赋值
                     * @return ScfIsBase64Encoded 是否已赋值
                     * 
                     */
                    bool ScfIsBase64EncodedHasBeenSet() const;

                    /**
                     * 获取云函数是否开启响应集成，默认为false
                     * @return ScfIsIntegratedResponse 云函数是否开启响应集成，默认为false
                     * 
                     */
                    bool GetScfIsIntegratedResponse() const;

                    /**
                     * 设置云函数是否开启响应集成，默认为false
                     * @param _scfIsIntegratedResponse 云函数是否开启响应集成，默认为false
                     * 
                     */
                    void SetScfIsIntegratedResponse(const bool& _scfIsIntegratedResponse);

                    /**
                     * 判断参数 ScfIsIntegratedResponse 是否已赋值
                     * @return ScfIsIntegratedResponse 是否已赋值
                     * 
                     */
                    bool ScfIsIntegratedResponseHasBeenSet() const;

                private:

                    /**
                     * IP或域名
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * 端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 服务来源ID
                     */
                    std::string m_sourceID;
                    bool m_sourceIDHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 服务（注册中心或Kubernetes中的服务）名字
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 服务后端类型是IPList时提供
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KongTarget> m_targets;
                    bool m_targetsHasBeenSet;

                    /**
                     * 服务来源类型
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * SCF函数类型
                     */
                    std::string m_scfType;
                    bool m_scfTypeHasBeenSet;

                    /**
                     * SCF函数命名空间
                     */
                    std::string m_scfNamespace;
                    bool m_scfNamespaceHasBeenSet;

                    /**
                     * SCF函数名
                     */
                    std::string m_scfLambdaName;
                    bool m_scfLambdaNameHasBeenSet;

                    /**
                     * SCF函数版本
                     */
                    std::string m_scfLambdaQualifier;
                    bool m_scfLambdaQualifierHasBeenSet;

                    /**
                     * 冷启动时间，单位秒
                     */
                    int64_t m_slowStart;
                    bool m_slowStartHasBeenSet;

                    /**
                     * 负载均衡算法，默认为 round-robin，还支持 least-connections，consisten_hashing
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                    /**
                     * CVM弹性伸缩组ID
                     */
                    std::string m_autoScalingGroupID;
                    bool m_autoScalingGroupIDHasBeenSet;

                    /**
                     * CVM弹性伸缩组端口
                     */
                    uint64_t m_autoScalingCvmPort;
                    bool m_autoScalingCvmPortHasBeenSet;

                    /**
                     * CVM弹性伸缩组使用的CVM TAT命令状态
                     */
                    std::string m_autoScalingTatCmdStatus;
                    bool m_autoScalingTatCmdStatusHasBeenSet;

                    /**
                     * CVM弹性伸缩组生命周期挂钩状态
                     */
                    std::string m_autoScalingHookStatus;
                    bool m_autoScalingHookStatusHasBeenSet;

                    /**
                     * 服务来源的名字
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 精确的服务来源类型，新建服务来源时候传入的类型
                     */
                    std::string m_realSourceType;
                    bool m_realSourceTypeHasBeenSet;

                    /**
                     * upstream健康状态HEALTHY（健康）, UNHEALTHY（异常）, HEALTHCHECKS_OFF（未开启）和NONE（不支持健康检查）
                     */
                    std::string m_healthStatus;
                    bool m_healthStatusHasBeenSet;

                    /**
                     * 云函数是否开启CAM鉴权，不填时默认为开启(true)
                     */
                    bool m_scfCamAuthEnable;
                    bool m_scfCamAuthEnableHasBeenSet;

                    /**
                     * 云函数是否开启Base64编码，默认为false
                     */
                    bool m_scfIsBase64Encoded;
                    bool m_scfIsBase64EncodedHasBeenSet;

                    /**
                     * 云函数是否开启响应集成，默认为false
                     */
                    bool m_scfIsIntegratedResponse;
                    bool m_scfIsIntegratedResponseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGUPSTREAMINFO_H_
