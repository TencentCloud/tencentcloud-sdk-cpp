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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKCONFIGURATION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TaskExtParameter.h>
#include <tencentcloud/wedata/v20250806/model/TaskSchedulingParameter.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 创建任务配置信息
                */
                class CreateTriggerTaskConfiguration : public AbstractModel
                {
                public:
                    CreateTriggerTaskConfiguration();
                    ~CreateTriggerTaskConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源组ID： 需要通过 DescribeNormalSchedulerExecutorGroups 获取 ExecutorGroupId
                     * @return ResourceGroup 资源组ID： 需要通过 DescribeNormalSchedulerExecutorGroups 获取 ExecutorGroupId
                     * 
                     */
                    std::string GetResourceGroup() const;

                    /**
                     * 设置资源组ID： 需要通过 DescribeNormalSchedulerExecutorGroups 获取 ExecutorGroupId
                     * @param _resourceGroup 资源组ID： 需要通过 DescribeNormalSchedulerExecutorGroups 获取 ExecutorGroupId
                     * 
                     */
                    void SetResourceGroup(const std::string& _resourceGroup);

                    /**
                     * 判断参数 ResourceGroup 是否已赋值
                     * @return ResourceGroup 是否已赋值
                     * 
                     */
                    bool ResourceGroupHasBeenSet() const;

                    /**
                     * 获取代码内容的Base64编码
                     * @return CodeContent 代码内容的Base64编码
                     * 
                     */
                    std::string GetCodeContent() const;

                    /**
                     * 设置代码内容的Base64编码
                     * @param _codeContent 代码内容的Base64编码
                     * 
                     */
                    void SetCodeContent(const std::string& _codeContent);

                    /**
                     * 判断参数 CodeContent 是否已赋值
                     * @return CodeContent 是否已赋值
                     * 
                     */
                    bool CodeContentHasBeenSet() const;

                    /**
                     * 获取任务扩展属性配置列表
                     * @return TaskExtConfigurationList 任务扩展属性配置列表
                     * 
                     */
                    std::vector<TaskExtParameter> GetTaskExtConfigurationList() const;

                    /**
                     * 设置任务扩展属性配置列表
                     * @param _taskExtConfigurationList 任务扩展属性配置列表
                     * 
                     */
                    void SetTaskExtConfigurationList(const std::vector<TaskExtParameter>& _taskExtConfigurationList);

                    /**
                     * 判断参数 TaskExtConfigurationList 是否已赋值
                     * @return TaskExtConfigurationList 是否已赋值
                     * 
                     */
                    bool TaskExtConfigurationListHasBeenSet() const;

                    /**
                     * 获取集群ID
                     * @return DataCluster 集群ID
                     * 
                     */
                    std::string GetDataCluster() const;

                    /**
                     * 设置集群ID
                     * @param _dataCluster 集群ID
                     * 
                     */
                    void SetDataCluster(const std::string& _dataCluster);

                    /**
                     * 判断参数 DataCluster 是否已赋值
                     * @return DataCluster 是否已赋值
                     * 
                     */
                    bool DataClusterHasBeenSet() const;

                    /**
                     * 获取指定的运行节点
                     * @return BrokerIp 指定的运行节点
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置指定的运行节点
                     * @param _brokerIp 指定的运行节点
                     * 
                     */
                    void SetBrokerIp(const std::string& _brokerIp);

                    /**
                     * 判断参数 BrokerIp 是否已赋值
                     * @return BrokerIp 是否已赋值
                     * 
                     */
                    bool BrokerIpHasBeenSet() const;

                    /**
                     * 获取资源池队列名称，需要通过 DescribeProjectClusterQueues 获取
                     * @return YarnQueue 资源池队列名称，需要通过 DescribeProjectClusterQueues 获取
                     * 
                     */
                    std::string GetYarnQueue() const;

                    /**
                     * 设置资源池队列名称，需要通过 DescribeProjectClusterQueues 获取
                     * @param _yarnQueue 资源池队列名称，需要通过 DescribeProjectClusterQueues 获取
                     * 
                     */
                    void SetYarnQueue(const std::string& _yarnQueue);

                    /**
                     * 判断参数 YarnQueue 是否已赋值
                     * @return YarnQueue 是否已赋值
                     * 
                     */
                    bool YarnQueueHasBeenSet() const;

                    /**
                     * 获取来源数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     * @return SourceServiceId 来源数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     * 
                     */
                    std::string GetSourceServiceId() const;

                    /**
                     * 设置来源数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     * @param _sourceServiceId 来源数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     * 
                     */
                    void SetSourceServiceId(const std::string& _sourceServiceId);

                    /**
                     * 判断参数 SourceServiceId 是否已赋值
                     * @return SourceServiceId 是否已赋值
                     * 
                     */
                    bool SourceServiceIdHasBeenSet() const;

                    /**
                     * 获取目标数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     * @return TargetServiceId 目标数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     * 
                     */
                    std::string GetTargetServiceId() const;

                    /**
                     * 设置目标数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     * @param _targetServiceId 目标数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     * 
                     */
                    void SetTargetServiceId(const std::string& _targetServiceId);

                    /**
                     * 判断参数 TargetServiceId 是否已赋值
                     * @return TargetServiceId 是否已赋值
                     * 
                     */
                    bool TargetServiceIdHasBeenSet() const;

                    /**
                     * 获取调度参数
                     * @return TaskSchedulingParameterList 调度参数
                     * 
                     */
                    std::vector<TaskSchedulingParameter> GetTaskSchedulingParameterList() const;

                    /**
                     * 设置调度参数
                     * @param _taskSchedulingParameterList 调度参数
                     * 
                     */
                    void SetTaskSchedulingParameterList(const std::vector<TaskSchedulingParameter>& _taskSchedulingParameterList);

                    /**
                     * 判断参数 TaskSchedulingParameterList 是否已赋值
                     * @return TaskSchedulingParameterList 是否已赋值
                     * 
                     */
                    bool TaskSchedulingParameterListHasBeenSet() const;

                    /**
                     * 获取Bundle使用的ID
                     * @return BundleId Bundle使用的ID
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置Bundle使用的ID
                     * @param _bundleId Bundle使用的ID
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                    /**
                     * 获取Bundle信息
                     * @return BundleInfo Bundle信息
                     * 
                     */
                    std::string GetBundleInfo() const;

                    /**
                     * 设置Bundle信息
                     * @param _bundleInfo Bundle信息
                     * 
                     */
                    void SetBundleInfo(const std::string& _bundleInfo);

                    /**
                     * 判断参数 BundleInfo 是否已赋值
                     * @return BundleInfo 是否已赋值
                     * 
                     */
                    bool BundleInfoHasBeenSet() const;

                private:

                    /**
                     * 资源组ID： 需要通过 DescribeNormalSchedulerExecutorGroups 获取 ExecutorGroupId
                     */
                    std::string m_resourceGroup;
                    bool m_resourceGroupHasBeenSet;

                    /**
                     * 代码内容的Base64编码
                     */
                    std::string m_codeContent;
                    bool m_codeContentHasBeenSet;

                    /**
                     * 任务扩展属性配置列表
                     */
                    std::vector<TaskExtParameter> m_taskExtConfigurationList;
                    bool m_taskExtConfigurationListHasBeenSet;

                    /**
                     * 集群ID
                     */
                    std::string m_dataCluster;
                    bool m_dataClusterHasBeenSet;

                    /**
                     * 指定的运行节点
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 资源池队列名称，需要通过 DescribeProjectClusterQueues 获取
                     */
                    std::string m_yarnQueue;
                    bool m_yarnQueueHasBeenSet;

                    /**
                     * 来源数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     */
                    std::string m_sourceServiceId;
                    bool m_sourceServiceIdHasBeenSet;

                    /**
                     * 目标数据源ID, 使用 ; 分隔, 需要通过 DescribeDataSourceWithoutInfo 获取
                     */
                    std::string m_targetServiceId;
                    bool m_targetServiceIdHasBeenSet;

                    /**
                     * 调度参数
                     */
                    std::vector<TaskSchedulingParameter> m_taskSchedulingParameterList;
                    bool m_taskSchedulingParameterListHasBeenSet;

                    /**
                     * Bundle使用的ID
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                    /**
                     * Bundle信息
                     */
                    std::string m_bundleInfo;
                    bool m_bundleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATETRIGGERTASKCONFIGURATION_H_
