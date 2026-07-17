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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERINSTANCESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/UpgradeNodeResetParam.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * UpgradeClusterInstances请求参数结构体
                */
                class UpgradeClusterInstancesRequest : public AbstractModel
                {
                public:
                    UpgradeClusterInstancesRequest();
                    ~UpgradeClusterInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
                     * @return ClusterId <p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
                     * @param _clusterId <p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>create 表示开始一次升级任务<br>pause 表示停止任务<br>resume表示继续任务<br>abort表示终止任务</p>
                     * @return Operation <p>create 表示开始一次升级任务<br>pause 表示停止任务<br>resume表示继续任务<br>abort表示终止任务</p>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置<p>create 表示开始一次升级任务<br>pause 表示停止任务<br>resume表示继续任务<br>abort表示终止任务</p>
                     * @param _operation <p>create 表示开始一次升级任务<br>pause 表示停止任务<br>resume表示继续任务<br>abort表示终止任务</p>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取<p>升级类型，只有Operation是create需要设置<br>reset 大版本重装升级<br>hot 小版本热升级<br>major 大版本原地升级</p>
                     * @return UpgradeType <p>升级类型，只有Operation是create需要设置<br>reset 大版本重装升级<br>hot 小版本热升级<br>major 大版本原地升级</p>
                     * 
                     */
                    std::string GetUpgradeType() const;

                    /**
                     * 设置<p>升级类型，只有Operation是create需要设置<br>reset 大版本重装升级<br>hot 小版本热升级<br>major 大版本原地升级</p>
                     * @param _upgradeType <p>升级类型，只有Operation是create需要设置<br>reset 大版本重装升级<br>hot 小版本热升级<br>major 大版本原地升级</p>
                     * 
                     */
                    void SetUpgradeType(const std::string& _upgradeType);

                    /**
                     * 判断参数 UpgradeType 是否已赋值
                     * @return UpgradeType 是否已赋值
                     * 
                     */
                    bool UpgradeTypeHasBeenSet() const;

                    /**
                     * 获取<p>需要升级的节点列表，可以通过控制台或 <a href="https://cloud.tencent.com/document/api/457/50366">查询待升级节点接口</a> 获取</p>
                     * @return InstanceIds <p>需要升级的节点列表，可以通过控制台或 <a href="https://cloud.tencent.com/document/api/457/50366">查询待升级节点接口</a> 获取</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>需要升级的节点列表，可以通过控制台或 <a href="https://cloud.tencent.com/document/api/457/50366">查询待升级节点接口</a> 获取</p>
                     * @param _instanceIds <p>需要升级的节点列表，可以通过控制台或 <a href="https://cloud.tencent.com/document/api/457/50366">查询待升级节点接口</a> 获取</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>当节点重新加入集群时候所使用的参数，参考添加已有节点接口</p>
                     * @return ResetParam <p>当节点重新加入集群时候所使用的参数，参考添加已有节点接口</p>
                     * 
                     */
                    UpgradeNodeResetParam GetResetParam() const;

                    /**
                     * 设置<p>当节点重新加入集群时候所使用的参数，参考添加已有节点接口</p>
                     * @param _resetParam <p>当节点重新加入集群时候所使用的参数，参考添加已有节点接口</p>
                     * 
                     */
                    void SetResetParam(const UpgradeNodeResetParam& _resetParam);

                    /**
                     * 判断参数 ResetParam 是否已赋值
                     * @return ResetParam 是否已赋值
                     * 
                     */
                    bool ResetParamHasBeenSet() const;

                    /**
                     * 获取<p>是否忽略节点升级前检查，默认值 false</p>
                     * @return SkipPreCheck <p>是否忽略节点升级前检查，默认值 false</p>
                     * 
                     */
                    bool GetSkipPreCheck() const;

                    /**
                     * 设置<p>是否忽略节点升级前检查，默认值 false</p>
                     * @param _skipPreCheck <p>是否忽略节点升级前检查，默认值 false</p>
                     * 
                     */
                    void SetSkipPreCheck(const bool& _skipPreCheck);

                    /**
                     * 判断参数 SkipPreCheck 是否已赋值
                     * @return SkipPreCheck 是否已赋值
                     * 
                     */
                    bool SkipPreCheckHasBeenSet() const;

                    /**
                     * 获取<p>最大可容忍的不可用Pod百分比，如果设置 0 表示不做校验</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * @return MaxNotReadyPercent <p>最大可容忍的不可用Pod百分比，如果设置 0 表示不做校验</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * 
                     */
                    double GetMaxNotReadyPercent() const;

                    /**
                     * 设置<p>最大可容忍的不可用Pod百分比，如果设置 0 表示不做校验</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * @param _maxNotReadyPercent <p>最大可容忍的不可用Pod百分比，如果设置 0 表示不做校验</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     * 
                     */
                    void SetMaxNotReadyPercent(const double& _maxNotReadyPercent);

                    /**
                     * 判断参数 MaxNotReadyPercent 是否已赋值
                     * @return MaxNotReadyPercent 是否已赋值
                     * 
                     */
                    bool MaxNotReadyPercentHasBeenSet() const;

                    /**
                     * 获取<p>是否升级节点运行时，默认false不升级</p>
                     * @return UpgradeRunTime <p>是否升级节点运行时，默认false不升级</p>
                     * 
                     */
                    bool GetUpgradeRunTime() const;

                    /**
                     * 设置<p>是否升级节点运行时，默认false不升级</p>
                     * @param _upgradeRunTime <p>是否升级节点运行时，默认false不升级</p>
                     * 
                     */
                    void SetUpgradeRunTime(const bool& _upgradeRunTime);

                    /**
                     * 判断参数 UpgradeRunTime 是否已赋值
                     * @return UpgradeRunTime 是否已赋值
                     * 
                     */
                    bool UpgradeRunTimeHasBeenSet() const;

                    /**
                     * 获取<p>支持多个节点并行升级，默认值为 1，最大并行数为15</p>
                     * @return Concurrent <p>支持多个节点并行升级，默认值为 1，最大并行数为15</p>
                     * 
                     */
                    int64_t GetConcurrent() const;

                    /**
                     * 设置<p>支持多个节点并行升级，默认值为 1，最大并行数为15</p>
                     * @param _concurrent <p>支持多个节点并行升级，默认值为 1，最大并行数为15</p>
                     * 
                     */
                    void SetConcurrent(const int64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     * 
                     */
                    bool ConcurrentHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID（请登录 <a href="https://console.cloud.tencent.com/tke2">TKE 控制台</a> 获取集群 ID ）</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>create 表示开始一次升级任务<br>pause 表示停止任务<br>resume表示继续任务<br>abort表示终止任务</p>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>升级类型，只有Operation是create需要设置<br>reset 大版本重装升级<br>hot 小版本热升级<br>major 大版本原地升级</p>
                     */
                    std::string m_upgradeType;
                    bool m_upgradeTypeHasBeenSet;

                    /**
                     * <p>需要升级的节点列表，可以通过控制台或 <a href="https://cloud.tencent.com/document/api/457/50366">查询待升级节点接口</a> 获取</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>当节点重新加入集群时候所使用的参数，参考添加已有节点接口</p>
                     */
                    UpgradeNodeResetParam m_resetParam;
                    bool m_resetParamHasBeenSet;

                    /**
                     * <p>是否忽略节点升级前检查，默认值 false</p>
                     */
                    bool m_skipPreCheck;
                    bool m_skipPreCheckHasBeenSet;

                    /**
                     * <p>最大可容忍的不可用Pod百分比，如果设置 0 表示不做校验</p><p>取值范围：[0, 100]</p><p>默认值：20</p>
                     */
                    double m_maxNotReadyPercent;
                    bool m_maxNotReadyPercentHasBeenSet;

                    /**
                     * <p>是否升级节点运行时，默认false不升级</p>
                     */
                    bool m_upgradeRunTime;
                    bool m_upgradeRunTimeHasBeenSet;

                    /**
                     * <p>支持多个节点并行升级，默认值为 1，最大并行数为15</p>
                     */
                    int64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_UPGRADECLUSTERINSTANCESREQUEST_H_
