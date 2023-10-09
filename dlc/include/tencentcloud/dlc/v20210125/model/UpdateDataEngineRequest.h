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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAENGINEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAENGINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CrontabResumeSuspendStrategy.h>
#include <tencentcloud/dlc/v20210125/model/SessionResourceTemplate.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateDataEngine请求参数结构体
                */
                class UpdateDataEngineRequest : public AbstractModel
                {
                public:
                    UpdateDataEngineRequest();
                    ~UpdateDataEngineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源大小
                     * @return Size 资源大小
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置资源大小
                     * @param _size 资源大小
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取最小资源
                     * @return MinClusters 最小资源
                     * 
                     */
                    int64_t GetMinClusters() const;

                    /**
                     * 设置最小资源
                     * @param _minClusters 最小资源
                     * 
                     */
                    void SetMinClusters(const int64_t& _minClusters);

                    /**
                     * 判断参数 MinClusters 是否已赋值
                     * @return MinClusters 是否已赋值
                     * 
                     */
                    bool MinClustersHasBeenSet() const;

                    /**
                     * 获取最大资源
                     * @return MaxClusters 最大资源
                     * 
                     */
                    int64_t GetMaxClusters() const;

                    /**
                     * 设置最大资源
                     * @param _maxClusters 最大资源
                     * 
                     */
                    void SetMaxClusters(const int64_t& _maxClusters);

                    /**
                     * 判断参数 MaxClusters 是否已赋值
                     * @return MaxClusters 是否已赋值
                     * 
                     */
                    bool MaxClustersHasBeenSet() const;

                    /**
                     * 获取开启自动刷新：true：开启、false（默认）：关闭
                     * @return AutoResume 开启自动刷新：true：开启、false（默认）：关闭
                     * 
                     */
                    bool GetAutoResume() const;

                    /**
                     * 设置开启自动刷新：true：开启、false（默认）：关闭
                     * @param _autoResume 开启自动刷新：true：开启、false（默认）：关闭
                     * 
                     */
                    void SetAutoResume(const bool& _autoResume);

                    /**
                     * 判断参数 AutoResume 是否已赋值
                     * @return AutoResume 是否已赋值
                     * 
                     */
                    bool AutoResumeHasBeenSet() const;

                    /**
                     * 获取数据引擎名称
                     * @return DataEngineName 数据引擎名称
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置数据引擎名称
                     * @param _dataEngineName 数据引擎名称
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取相关信息
                     * @return Message 相关信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置相关信息
                     * @param _message 相关信息
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
                     * 获取是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
                     * @return AutoSuspend 是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
                     * 
                     */
                    bool GetAutoSuspend() const;

                    /**
                     * 设置是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
                     * @param _autoSuspend 是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
                     * 
                     */
                    void SetAutoSuspend(const bool& _autoSuspend);

                    /**
                     * 判断参数 AutoSuspend 是否已赋值
                     * @return AutoSuspend 是否已赋值
                     * 
                     */
                    bool AutoSuspendHasBeenSet() const;

                    /**
                     * 获取定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
                     * @return CrontabResumeSuspend 定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
                     * 
                     */
                    int64_t GetCrontabResumeSuspend() const;

                    /**
                     * 设置定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
                     * @param _crontabResumeSuspend 定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
                     * 
                     */
                    void SetCrontabResumeSuspend(const int64_t& _crontabResumeSuspend);

                    /**
                     * 判断参数 CrontabResumeSuspend 是否已赋值
                     * @return CrontabResumeSuspend 是否已赋值
                     * 
                     */
                    bool CrontabResumeSuspendHasBeenSet() const;

                    /**
                     * 获取定时启停策略，复杂类型：包含启停时间、挂起集群策略
                     * @return CrontabResumeSuspendStrategy 定时启停策略，复杂类型：包含启停时间、挂起集群策略
                     * 
                     */
                    CrontabResumeSuspendStrategy GetCrontabResumeSuspendStrategy() const;

                    /**
                     * 设置定时启停策略，复杂类型：包含启停时间、挂起集群策略
                     * @param _crontabResumeSuspendStrategy 定时启停策略，复杂类型：包含启停时间、挂起集群策略
                     * 
                     */
                    void SetCrontabResumeSuspendStrategy(const CrontabResumeSuspendStrategy& _crontabResumeSuspendStrategy);

                    /**
                     * 判断参数 CrontabResumeSuspendStrategy 是否已赋值
                     * @return CrontabResumeSuspendStrategy 是否已赋值
                     * 
                     */
                    bool CrontabResumeSuspendStrategyHasBeenSet() const;

                    /**
                     * 获取单个集群最大并发任务数，默认5
                     * @return MaxConcurrency 单个集群最大并发任务数，默认5
                     * 
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置单个集群最大并发任务数，默认5
                     * @param _maxConcurrency 单个集群最大并发任务数，默认5
                     * 
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     * 
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取可容忍的排队时间，默认0。当任务排队的时间超过可容忍的时间时可能会触发扩容。如果该参数为0，则表示一旦有任务排队就可能立即触发扩容。
                     * @return TolerableQueueTime 可容忍的排队时间，默认0。当任务排队的时间超过可容忍的时间时可能会触发扩容。如果该参数为0，则表示一旦有任务排队就可能立即触发扩容。
                     * 
                     */
                    int64_t GetTolerableQueueTime() const;

                    /**
                     * 设置可容忍的排队时间，默认0。当任务排队的时间超过可容忍的时间时可能会触发扩容。如果该参数为0，则表示一旦有任务排队就可能立即触发扩容。
                     * @param _tolerableQueueTime 可容忍的排队时间，默认0。当任务排队的时间超过可容忍的时间时可能会触发扩容。如果该参数为0，则表示一旦有任务排队就可能立即触发扩容。
                     * 
                     */
                    void SetTolerableQueueTime(const int64_t& _tolerableQueueTime);

                    /**
                     * 判断参数 TolerableQueueTime 是否已赋值
                     * @return TolerableQueueTime 是否已赋值
                     * 
                     */
                    bool TolerableQueueTimeHasBeenSet() const;

                    /**
                     * 获取集群自动挂起时间
                     * @return AutoSuspendTime 集群自动挂起时间
                     * 
                     */
                    int64_t GetAutoSuspendTime() const;

                    /**
                     * 设置集群自动挂起时间
                     * @param _autoSuspendTime 集群自动挂起时间
                     * 
                     */
                    void SetAutoSuspendTime(const int64_t& _autoSuspendTime);

                    /**
                     * 判断参数 AutoSuspendTime 是否已赋值
                     * @return AutoSuspendTime 是否已赋值
                     * 
                     */
                    bool AutoSuspendTimeHasBeenSet() const;

                    /**
                     * 获取spark jar 包年包月集群是否开启弹性
                     * @return ElasticSwitch spark jar 包年包月集群是否开启弹性
                     * 
                     */
                    bool GetElasticSwitch() const;

                    /**
                     * 设置spark jar 包年包月集群是否开启弹性
                     * @param _elasticSwitch spark jar 包年包月集群是否开启弹性
                     * 
                     */
                    void SetElasticSwitch(const bool& _elasticSwitch);

                    /**
                     * 判断参数 ElasticSwitch 是否已赋值
                     * @return ElasticSwitch 是否已赋值
                     * 
                     */
                    bool ElasticSwitchHasBeenSet() const;

                    /**
                     * 获取spark jar 包年包月集群弹性上限
                     * @return ElasticLimit spark jar 包年包月集群弹性上限
                     * 
                     */
                    int64_t GetElasticLimit() const;

                    /**
                     * 设置spark jar 包年包月集群弹性上限
                     * @param _elasticLimit spark jar 包年包月集群弹性上限
                     * 
                     */
                    void SetElasticLimit(const int64_t& _elasticLimit);

                    /**
                     * 判断参数 ElasticLimit 是否已赋值
                     * @return ElasticLimit 是否已赋值
                     * 
                     */
                    bool ElasticLimitHasBeenSet() const;

                    /**
                     * 获取Spark批作业集群Session资源配置模板
                     * @return SessionResourceTemplate Spark批作业集群Session资源配置模板
                     * 
                     */
                    SessionResourceTemplate GetSessionResourceTemplate() const;

                    /**
                     * 设置Spark批作业集群Session资源配置模板
                     * @param _sessionResourceTemplate Spark批作业集群Session资源配置模板
                     * 
                     */
                    void SetSessionResourceTemplate(const SessionResourceTemplate& _sessionResourceTemplate);

                    /**
                     * 判断参数 SessionResourceTemplate 是否已赋值
                     * @return SessionResourceTemplate 是否已赋值
                     * 
                     */
                    bool SessionResourceTemplateHasBeenSet() const;

                private:

                    /**
                     * 资源大小
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

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
                     * 开启自动刷新：true：开启、false（默认）：关闭
                     */
                    bool m_autoResume;
                    bool m_autoResumeHasBeenSet;

                    /**
                     * 数据引擎名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 相关信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

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
                     * 集群自动挂起时间
                     */
                    int64_t m_autoSuspendTime;
                    bool m_autoSuspendTimeHasBeenSet;

                    /**
                     * spark jar 包年包月集群是否开启弹性
                     */
                    bool m_elasticSwitch;
                    bool m_elasticSwitchHasBeenSet;

                    /**
                     * spark jar 包年包月集群弹性上限
                     */
                    int64_t m_elasticLimit;
                    bool m_elasticLimitHasBeenSet;

                    /**
                     * Spark批作业集群Session资源配置模板
                     */
                    SessionResourceTemplate m_sessionResourceTemplate;
                    bool m_sessionResourceTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEDATAENGINEREQUEST_H_
