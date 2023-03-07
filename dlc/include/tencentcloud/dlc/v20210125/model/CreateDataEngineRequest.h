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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATAENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TagInfo.h>
#include <tencentcloud/dlc/v20210125/model/CrontabResumeSuspendStrategy.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineConfigPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateDataEngine请求参数结构体
                */
                class CreateDataEngineRequest : public AbstractModel
                {
                public:
                    CreateDataEngineRequest();
                    ~CreateDataEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎类型spark/presto
                     * @return EngineType 引擎类型spark/presto
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型spark/presto
                     * @param EngineType 引擎类型spark/presto
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取虚拟集群名称
                     * @return DataEngineName 虚拟集群名称
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置虚拟集群名称
                     * @param DataEngineName 虚拟集群名称
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取集群类型 spark_private/presto_private/presto_cu/spark_cu
                     * @return ClusterType 集群类型 spark_private/presto_private/presto_cu/spark_cu
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型 spark_private/presto_private/presto_cu/spark_cu
                     * @param ClusterType 集群类型 spark_private/presto_private/presto_cu/spark_cu
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取计费模式 0=共享模式 1=按量计费 2=包年包月
                     * @return Mode 计费模式 0=共享模式 1=按量计费 2=包年包月
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置计费模式 0=共享模式 1=按量计费 2=包年包月
                     * @param Mode 计费模式 0=共享模式 1=按量计费 2=包年包月
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取是否自动启动集群
                     * @return AutoResume 是否自动启动集群
                     */
                    bool GetAutoResume() const;

                    /**
                     * 设置是否自动启动集群
                     * @param AutoResume 是否自动启动集群
                     */
                    void SetAutoResume(const bool& _autoResume);

                    /**
                     * 判断参数 AutoResume 是否已赋值
                     * @return AutoResume 是否已赋值
                     */
                    bool AutoResumeHasBeenSet() const;

                    /**
                     * 获取最小资源
                     * @return MinClusters 最小资源
                     */
                    int64_t GetMinClusters() const;

                    /**
                     * 设置最小资源
                     * @param MinClusters 最小资源
                     */
                    void SetMinClusters(const int64_t& _minClusters);

                    /**
                     * 判断参数 MinClusters 是否已赋值
                     * @return MinClusters 是否已赋值
                     */
                    bool MinClustersHasBeenSet() const;

                    /**
                     * 获取最大资源
                     * @return MaxClusters 最大资源
                     */
                    int64_t GetMaxClusters() const;

                    /**
                     * 设置最大资源
                     * @param MaxClusters 最大资源
                     */
                    void SetMaxClusters(const int64_t& _maxClusters);

                    /**
                     * 判断参数 MaxClusters 是否已赋值
                     * @return MaxClusters 是否已赋值
                     */
                    bool MaxClustersHasBeenSet() const;

                    /**
                     * 获取是否为默虚拟集群
                     * @return DefaultDataEngine 是否为默虚拟集群
                     */
                    bool GetDefaultDataEngine() const;

                    /**
                     * 设置是否为默虚拟集群
                     * @param DefaultDataEngine 是否为默虚拟集群
                     */
                    void SetDefaultDataEngine(const bool& _defaultDataEngine);

                    /**
                     * 判断参数 DefaultDataEngine 是否已赋值
                     * @return DefaultDataEngine 是否已赋值
                     */
                    bool DefaultDataEngineHasBeenSet() const;

                    /**
                     * 获取VPC网段
                     * @return CidrBlock VPC网段
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置VPC网段
                     * @param CidrBlock VPC网段
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Message 描述信息
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置描述信息
                     * @param Message 描述信息
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取集群规模
                     * @return Size 集群规模
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置集群规模
                     * @param Size 集群规模
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取计费类型，后付费：0，预付费：1。当前只支持后付费，不填默认为后付费。
                     * @return PayMode 计费类型，后付费：0，预付费：1。当前只支持后付费，不填默认为后付费。
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费类型，后付费：0，预付费：1。当前只支持后付费，不填默认为后付费。
                     * @param PayMode 计费类型，后付费：0，预付费：1。当前只支持后付费，不填默认为后付费。
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取资源使用时长，后付费：固定填3600，预付费：最少填1，代表购买资源一个月，最长不超过120。默认3600
                     * @return TimeSpan 资源使用时长，后付费：固定填3600，预付费：最少填1，代表购买资源一个月，最长不超过120。默认3600
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置资源使用时长，后付费：固定填3600，预付费：最少填1，代表购买资源一个月，最长不超过120。默认3600
                     * @param TimeSpan 资源使用时长，后付费：固定填3600，预付费：最少填1，代表购买资源一个月，最长不超过120。默认3600
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取资源使用时长的单位，后付费：s，预付费：m。默认为s
                     * @return TimeUnit 资源使用时长的单位，后付费：s，预付费：m。默认为s
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置资源使用时长的单位，后付费：s，预付费：m。默认为s
                     * @param TimeUnit 资源使用时长的单位，后付费：s，预付费：m。默认为s
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取资源的自动续费标志。后付费无需续费，固定填0；预付费下：0表示手动续费、1代表自动续费、2代表不续费，在0下如果是大客户，会自动帮大客户续费。默认为0
                     * @return AutoRenew 资源的自动续费标志。后付费无需续费，固定填0；预付费下：0表示手动续费、1代表自动续费、2代表不续费，在0下如果是大客户，会自动帮大客户续费。默认为0
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置资源的自动续费标志。后付费无需续费，固定填0；预付费下：0表示手动续费、1代表自动续费、2代表不续费，在0下如果是大客户，会自动帮大客户续费。默认为0
                     * @param AutoRenew 资源的自动续费标志。后付费无需续费，固定填0；预付费下：0表示手动续费、1代表自动续费、2代表不续费，在0下如果是大客户，会自动帮大客户续费。默认为0
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     */
                    bool AutoRenewHasBeenSet() const;

                    /**
                     * 获取创建资源的时候需要绑定的标签信息
                     * @return Tags 创建资源的时候需要绑定的标签信息
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置创建资源的时候需要绑定的标签信息
                     * @param Tags 创建资源的时候需要绑定的标签信息
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
                     * @return AutoSuspend 是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
                     */
                    bool GetAutoSuspend() const;

                    /**
                     * 设置是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
                     * @param AutoSuspend 是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
                     */
                    void SetAutoSuspend(const bool& _autoSuspend);

                    /**
                     * 判断参数 AutoSuspend 是否已赋值
                     * @return AutoSuspend 是否已赋值
                     */
                    bool AutoSuspendHasBeenSet() const;

                    /**
                     * 获取定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
                     * @return CrontabResumeSuspend 定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
                     */
                    int64_t GetCrontabResumeSuspend() const;

                    /**
                     * 设置定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
                     * @param CrontabResumeSuspend 定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
                     */
                    void SetCrontabResumeSuspend(const int64_t& _crontabResumeSuspend);

                    /**
                     * 判断参数 CrontabResumeSuspend 是否已赋值
                     * @return CrontabResumeSuspend 是否已赋值
                     */
                    bool CrontabResumeSuspendHasBeenSet() const;

                    /**
                     * 获取定时启停策略，复杂类型：包含启停时间、挂起集群策略
                     * @return CrontabResumeSuspendStrategy 定时启停策略，复杂类型：包含启停时间、挂起集群策略
                     */
                    CrontabResumeSuspendStrategy GetCrontabResumeSuspendStrategy() const;

                    /**
                     * 设置定时启停策略，复杂类型：包含启停时间、挂起集群策略
                     * @param CrontabResumeSuspendStrategy 定时启停策略，复杂类型：包含启停时间、挂起集群策略
                     */
                    void SetCrontabResumeSuspendStrategy(const CrontabResumeSuspendStrategy& _crontabResumeSuspendStrategy);

                    /**
                     * 判断参数 CrontabResumeSuspendStrategy 是否已赋值
                     * @return CrontabResumeSuspendStrategy 是否已赋值
                     */
                    bool CrontabResumeSuspendStrategyHasBeenSet() const;

                    /**
                     * 获取引擎执行任务类型，默认为SQL
                     * @return EngineExecType 引擎执行任务类型，默认为SQL
                     */
                    std::string GetEngineExecType() const;

                    /**
                     * 设置引擎执行任务类型，默认为SQL
                     * @param EngineExecType 引擎执行任务类型，默认为SQL
                     */
                    void SetEngineExecType(const std::string& _engineExecType);

                    /**
                     * 判断参数 EngineExecType 是否已赋值
                     * @return EngineExecType 是否已赋值
                     */
                    bool EngineExecTypeHasBeenSet() const;

                    /**
                     * 获取单个集群最大并发任务数，默认5
                     * @return MaxConcurrency 单个集群最大并发任务数，默认5
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置单个集群最大并发任务数，默认5
                     * @param MaxConcurrency 单个集群最大并发任务数，默认5
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取可容忍的排队时间，默认0。当任务排队的时间超过可容忍的时间时可能会触发扩容。如果该参数为0，则表示一旦有任务排队就可能立即触发扩容。
                     * @return TolerableQueueTime 可容忍的排队时间，默认0。当任务排队的时间超过可容忍的时间时可能会触发扩容。如果该参数为0，则表示一旦有任务排队就可能立即触发扩容。
                     */
                    int64_t GetTolerableQueueTime() const;

                    /**
                     * 设置可容忍的排队时间，默认0。当任务排队的时间超过可容忍的时间时可能会触发扩容。如果该参数为0，则表示一旦有任务排队就可能立即触发扩容。
                     * @param TolerableQueueTime 可容忍的排队时间，默认0。当任务排队的时间超过可容忍的时间时可能会触发扩容。如果该参数为0，则表示一旦有任务排队就可能立即触发扩容。
                     */
                    void SetTolerableQueueTime(const int64_t& _tolerableQueueTime);

                    /**
                     * 判断参数 TolerableQueueTime 是否已赋值
                     * @return TolerableQueueTime 是否已赋值
                     */
                    bool TolerableQueueTimeHasBeenSet() const;

                    /**
                     * 获取集群自动挂起时间，默认10分钟
                     * @return AutoSuspendTime 集群自动挂起时间，默认10分钟
                     */
                    int64_t GetAutoSuspendTime() const;

                    /**
                     * 设置集群自动挂起时间，默认10分钟
                     * @param AutoSuspendTime 集群自动挂起时间，默认10分钟
                     */
                    void SetAutoSuspendTime(const int64_t& _autoSuspendTime);

                    /**
                     * 判断参数 AutoSuspendTime 是否已赋值
                     * @return AutoSuspendTime 是否已赋值
                     */
                    bool AutoSuspendTimeHasBeenSet() const;

                    /**
                     * 获取资源类型。Standard_CU：标准型；Memory_CU：内存型
                     * @return ResourceType 资源类型。Standard_CU：标准型；Memory_CU：内存型
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型。Standard_CU：标准型；Memory_CU：内存型
                     * @param ResourceType 资源类型。Standard_CU：标准型；Memory_CU：内存型
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取集群高级配置
                     * @return DataEngineConfigPairs 集群高级配置
                     */
                    std::vector<DataEngineConfigPair> GetDataEngineConfigPairs() const;

                    /**
                     * 设置集群高级配置
                     * @param DataEngineConfigPairs 集群高级配置
                     */
                    void SetDataEngineConfigPairs(const std::vector<DataEngineConfigPair>& _dataEngineConfigPairs);

                    /**
                     * 判断参数 DataEngineConfigPairs 是否已赋值
                     * @return DataEngineConfigPairs 是否已赋值
                     */
                    bool DataEngineConfigPairsHasBeenSet() const;

                    /**
                     * 获取集群镜像版本名字。如SuperSQL-P 1.1;SuperSQL-S 3.2等,不传，默认创建最新镜像版本的集群
                     * @return ImageVersionName 集群镜像版本名字。如SuperSQL-P 1.1;SuperSQL-S 3.2等,不传，默认创建最新镜像版本的集群
                     */
                    std::string GetImageVersionName() const;

                    /**
                     * 设置集群镜像版本名字。如SuperSQL-P 1.1;SuperSQL-S 3.2等,不传，默认创建最新镜像版本的集群
                     * @param ImageVersionName 集群镜像版本名字。如SuperSQL-P 1.1;SuperSQL-S 3.2等,不传，默认创建最新镜像版本的集群
                     */
                    void SetImageVersionName(const std::string& _imageVersionName);

                    /**
                     * 判断参数 ImageVersionName 是否已赋值
                     * @return ImageVersionName 是否已赋值
                     */
                    bool ImageVersionNameHasBeenSet() const;

                    /**
                     * 获取主集群名称
                     * @return MainClusterName 主集群名称
                     */
                    std::string GetMainClusterName() const;

                    /**
                     * 设置主集群名称
                     * @param MainClusterName 主集群名称
                     */
                    void SetMainClusterName(const std::string& _mainClusterName);

                    /**
                     * 判断参数 MainClusterName 是否已赋值
                     * @return MainClusterName 是否已赋值
                     */
                    bool MainClusterNameHasBeenSet() const;

                private:

                    /**
                     * 引擎类型spark/presto
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 虚拟集群名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 集群类型 spark_private/presto_private/presto_cu/spark_cu
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 计费模式 0=共享模式 1=按量计费 2=包年包月
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 是否自动启动集群
                     */
                    bool m_autoResume;
                    bool m_autoResumeHasBeenSet;

                    /**
                     * 最小资源
                     */
                    int64_t m_minClusters;
                    bool m_minClustersHasBeenSet;

                    /**
                     * 最大资源
                     */
                    int64_t m_maxClusters;
                    bool m_maxClustersHasBeenSet;

                    /**
                     * 是否为默虚拟集群
                     */
                    bool m_defaultDataEngine;
                    bool m_defaultDataEngineHasBeenSet;

                    /**
                     * VPC网段
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 集群规模
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 计费类型，后付费：0，预付费：1。当前只支持后付费，不填默认为后付费。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 资源使用时长，后付费：固定填3600，预付费：最少填1，代表购买资源一个月，最长不超过120。默认3600
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 资源使用时长的单位，后付费：s，预付费：m。默认为s
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 资源的自动续费标志。后付费无需续费，固定填0；预付费下：0表示手动续费、1代表自动续费、2代表不续费，在0下如果是大客户，会自动帮大客户续费。默认为0
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                    /**
                     * 创建资源的时候需要绑定的标签信息
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
                     */
                    bool m_autoSuspend;
                    bool m_autoSuspendHasBeenSet;

                    /**
                     * 定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
                     */
                    int64_t m_crontabResumeSuspend;
                    bool m_crontabResumeSuspendHasBeenSet;

                    /**
                     * 定时启停策略，复杂类型：包含启停时间、挂起集群策略
                     */
                    CrontabResumeSuspendStrategy m_crontabResumeSuspendStrategy;
                    bool m_crontabResumeSuspendStrategyHasBeenSet;

                    /**
                     * 引擎执行任务类型，默认为SQL
                     */
                    std::string m_engineExecType;
                    bool m_engineExecTypeHasBeenSet;

                    /**
                     * 单个集群最大并发任务数，默认5
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * 可容忍的排队时间，默认0。当任务排队的时间超过可容忍的时间时可能会触发扩容。如果该参数为0，则表示一旦有任务排队就可能立即触发扩容。
                     */
                    int64_t m_tolerableQueueTime;
                    bool m_tolerableQueueTimeHasBeenSet;

                    /**
                     * 集群自动挂起时间，默认10分钟
                     */
                    int64_t m_autoSuspendTime;
                    bool m_autoSuspendTimeHasBeenSet;

                    /**
                     * 资源类型。Standard_CU：标准型；Memory_CU：内存型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 集群高级配置
                     */
                    std::vector<DataEngineConfigPair> m_dataEngineConfigPairs;
                    bool m_dataEngineConfigPairsHasBeenSet;

                    /**
                     * 集群镜像版本名字。如SuperSQL-P 1.1;SuperSQL-S 3.2等,不传，默认创建最新镜像版本的集群
                     */
                    std::string m_imageVersionName;
                    bool m_imageVersionNameHasBeenSet;

                    /**
                     * 主集群名称
                     */
                    std::string m_mainClusterName;
                    bool m_mainClusterNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATAENGINEREQUEST_H_
