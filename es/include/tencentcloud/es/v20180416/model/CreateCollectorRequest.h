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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CREATECOLLECTORREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CREATECOLLECTORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/CollectorOutputInstance.h>
#include <tencentcloud/es/v20180416/model/CollectorConfigInfo.h>
#include <tencentcloud/es/v20180416/model/CollectorTarget.h>
#include <tencentcloud/es/v20180416/model/TagInfo.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CreateCollector请求参数结构体
                */
                class CreateCollectorRequest : public AbstractModel
                {
                public:
                    CreateCollectorRequest();
                    ~CreateCollectorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取采集器名称（1-50 个英文、汉字、数字、连接线-或下划线_）
                     * @return CollectorName 采集器名称（1-50 个英文、汉字、数字、连接线-或下划线_）
                     * 
                     */
                    std::string GetCollectorName() const;

                    /**
                     * 设置采集器名称（1-50 个英文、汉字、数字、连接线-或下划线_）
                     * @param _collectorName 采集器名称（1-50 个英文、汉字、数字、连接线-或下划线_）
                     * 
                     */
                    void SetCollectorName(const std::string& _collectorName);

                    /**
                     * 判断参数 CollectorName 是否已赋值
                     * @return CollectorName 是否已赋值
                     * 
                     */
                    bool CollectorNameHasBeenSet() const;

                    /**
                     * 获取采集器版本（支持"6.8.15"、"7.10.2"）
                     * @return CollectorVersion 采集器版本（支持"6.8.15"、"7.10.2"）
                     * 
                     */
                    std::string GetCollectorVersion() const;

                    /**
                     * 设置采集器版本（支持"6.8.15"、"7.10.2"）
                     * @param _collectorVersion 采集器版本（支持"6.8.15"、"7.10.2"）
                     * 
                     */
                    void SetCollectorVersion(const std::string& _collectorVersion);

                    /**
                     * 判断参数 CollectorVersion 是否已赋值
                     * @return CollectorVersion 是否已赋值
                     * 
                     */
                    bool CollectorVersionHasBeenSet() const;

                    /**
                     * 获取采集器类型（支持filebeat、metricbeat、heartbeat、auditbeat、packetbeat）
                     * @return CollectorType 采集器类型（支持filebeat、metricbeat、heartbeat、auditbeat、packetbeat）
                     * 
                     */
                    std::string GetCollectorType() const;

                    /**
                     * 设置采集器类型（支持filebeat、metricbeat、heartbeat、auditbeat、packetbeat）
                     * @param _collectorType 采集器类型（支持filebeat、metricbeat、heartbeat、auditbeat、packetbeat）
                     * 
                     */
                    void SetCollectorType(const std::string& _collectorType);

                    /**
                     * 判断参数 CollectorType 是否已赋值
                     * @return CollectorType 是否已赋值
                     * 
                     */
                    bool CollectorTypeHasBeenSet() const;

                    /**
                     * 获取采集器输出的ES实例信息
                     * @return OutputInstance 采集器输出的ES实例信息
                     * 
                     */
                    CollectorOutputInstance GetOutputInstance() const;

                    /**
                     * 设置采集器输出的ES实例信息
                     * @param _outputInstance 采集器输出的ES实例信息
                     * 
                     */
                    void SetOutputInstance(const CollectorOutputInstance& _outputInstance);

                    /**
                     * 判断参数 OutputInstance 是否已赋值
                     * @return OutputInstance 是否已赋值
                     * 
                     */
                    bool OutputInstanceHasBeenSet() const;

                    /**
                     * 获取采集器配置
                     * @return CollectorConfigs 采集器配置
                     * 
                     */
                    std::vector<CollectorConfigInfo> GetCollectorConfigs() const;

                    /**
                     * 设置采集器配置
                     * @param _collectorConfigs 采集器配置
                     * 
                     */
                    void SetCollectorConfigs(const std::vector<CollectorConfigInfo>& _collectorConfigs);

                    /**
                     * 判断参数 CollectorConfigs 是否已赋值
                     * @return CollectorConfigs 是否已赋值
                     * 
                     */
                    bool CollectorConfigsHasBeenSet() const;

                    /**
                     * 获取采集器下发的CVM实例ID列表
                     * @return CVMInstanceIds 采集器下发的CVM实例ID列表
                     * 
                     */
                    std::vector<std::string> GetCVMInstanceIds() const;

                    /**
                     * 设置采集器下发的CVM实例ID列表
                     * @param _cVMInstanceIds 采集器下发的CVM实例ID列表
                     * 
                     */
                    void SetCVMInstanceIds(const std::vector<std::string>& _cVMInstanceIds);

                    /**
                     * 判断参数 CVMInstanceIds 是否已赋值
                     * @return CVMInstanceIds 是否已赋值
                     * 
                     */
                    bool CVMInstanceIdsHasBeenSet() const;

                    /**
                     * 获取采集目标类型，CVM或者TKE
                     * @return TargetType 采集目标类型，CVM或者TKE
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置采集目标类型，CVM或者TKE
                     * @param _targetType 采集目标类型，CVM或者TKE
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取容器集群ID，采集目标为TKE时必填
                     * @return ContainerClusterId 容器集群ID，采集目标为TKE时必填
                     * 
                     */
                    std::string GetContainerClusterId() const;

                    /**
                     * 设置容器集群ID，采集目标为TKE时必填
                     * @param _containerClusterId 容器集群ID，采集目标为TKE时必填
                     * 
                     */
                    void SetContainerClusterId(const std::string& _containerClusterId);

                    /**
                     * 判断参数 ContainerClusterId 是否已赋值
                     * @return ContainerClusterId 是否已赋值
                     * 
                     */
                    bool ContainerClusterIdHasBeenSet() const;

                    /**
                     * 获取采集器配置，采集目标为TKE时必填
                     * @return CollectorTargets 采集器配置，采集目标为TKE时必填
                     * 
                     */
                    std::vector<CollectorTarget> GetCollectorTargets() const;

                    /**
                     * 设置采集器配置，采集目标为TKE时必填
                     * @param _collectorTargets 采集器配置，采集目标为TKE时必填
                     * 
                     */
                    void SetCollectorTargets(const std::vector<CollectorTarget>& _collectorTargets);

                    /**
                     * 判断参数 CollectorTargets 是否已赋值
                     * @return CollectorTargets 是否已赋值
                     * 
                     */
                    bool CollectorTargetsHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return TagList 标签信息
                     * 
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置标签信息
                     * @param _tagList 标签信息
                     * 
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 采集器名称（1-50 个英文、汉字、数字、连接线-或下划线_）
                     */
                    std::string m_collectorName;
                    bool m_collectorNameHasBeenSet;

                    /**
                     * 采集器版本（支持"6.8.15"、"7.10.2"）
                     */
                    std::string m_collectorVersion;
                    bool m_collectorVersionHasBeenSet;

                    /**
                     * 采集器类型（支持filebeat、metricbeat、heartbeat、auditbeat、packetbeat）
                     */
                    std::string m_collectorType;
                    bool m_collectorTypeHasBeenSet;

                    /**
                     * 采集器输出的ES实例信息
                     */
                    CollectorOutputInstance m_outputInstance;
                    bool m_outputInstanceHasBeenSet;

                    /**
                     * 采集器配置
                     */
                    std::vector<CollectorConfigInfo> m_collectorConfigs;
                    bool m_collectorConfigsHasBeenSet;

                    /**
                     * 采集器下发的CVM实例ID列表
                     */
                    std::vector<std::string> m_cVMInstanceIds;
                    bool m_cVMInstanceIdsHasBeenSet;

                    /**
                     * 采集目标类型，CVM或者TKE
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 容器集群ID，采集目标为TKE时必填
                     */
                    std::string m_containerClusterId;
                    bool m_containerClusterIdHasBeenSet;

                    /**
                     * 采集器配置，采集目标为TKE时必填
                     */
                    std::vector<CollectorTarget> m_collectorTargets;
                    bool m_collectorTargetsHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CREATECOLLECTORREQUEST_H_
