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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceLifeDetailDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 调度实例详情
                */
                class InstanceLifeCycleVO : public AbstractModel
                {
                public:
                    InstanceLifeCycleVO();
                    ~InstanceLifeCycleVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceKey 实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceKey 实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取**实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceState **实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceState() const;

                    /**
                     * 设置**实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceState **实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceState(const uint64_t& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取**实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeRoundNum **实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLifeRoundNum() const;

                    /**
                     * 设置**实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeRoundNum **实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeRoundNum(const uint64_t& _lifeRoundNum);

                    /**
                     * 判断参数 LifeRoundNum 是否已赋值
                     * @return LifeRoundNum 是否已赋值
                     * 
                     */
                    bool LifeRoundNumHasBeenSet() const;

                    /**
                     * 获取**实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunType **实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRunType() const;

                    /**
                     * 设置**实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runType **实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunType(const std::string& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     * 
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取失败重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tries 失败重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTries() const;

                    /**
                     * 设置失败重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tries 失败重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTries(const uint64_t& _tries);

                    /**
                     * 判断参数 Tries 是否已赋值
                     * @return Tries 是否已赋值
                     * 
                     */
                    bool TriesHasBeenSet() const;

                    /**
                     * 获取**实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeCycleDetailList **实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceLifeDetailDto> GetLifeCycleDetailList() const;

                    /**
                     * 设置**实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeCycleDetailList **实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeCycleDetailList(const std::vector<InstanceLifeDetailDto>& _lifeCycleDetailList);

                    /**
                     * 判断参数 LifeCycleDetailList 是否已赋值
                     * @return LifeCycleDetailList 是否已赋值
                     * 
                     */
                    bool LifeCycleDetailListHasBeenSet() const;

                    /**
                     * 获取**实例代码文件**
该文件内容为当次执行实例运行使用的代码，仅部分任务支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeFileName **实例代码文件**
该文件内容为当次执行实例运行使用的代码，仅部分任务支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeFileName() const;

                    /**
                     * 设置**实例代码文件**
该文件内容为当次执行实例运行使用的代码，仅部分任务支持
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeFileName **实例代码文件**
该文件内容为当次执行实例运行使用的代码，仅部分任务支持
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeFileName(const std::string& _codeFileName);

                    /**
                     * 判断参数 CodeFileName 是否已赋值
                     * @return CodeFileName 是否已赋值
                     * 
                     */
                    bool CodeFileNameHasBeenSet() const;

                    /**
                     * 获取**下发执行ID**
统一执行平台下发执行到新版执行机标识某次执行的唯一ID，存量老执行机下发执行没有此ID。
如果不知道执行机版本是否支持此ID，可以联系腾讯云运维同学
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutionJobId **下发执行ID**
统一执行平台下发执行到新版执行机标识某次执行的唯一ID，存量老执行机下发执行没有此ID。
如果不知道执行机版本是否支持此ID，可以联系腾讯云运维同学
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutionJobId() const;

                    /**
                     * 设置**下发执行ID**
统一执行平台下发执行到新版执行机标识某次执行的唯一ID，存量老执行机下发执行没有此ID。
如果不知道执行机版本是否支持此ID，可以联系腾讯云运维同学
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executionJobId **下发执行ID**
统一执行平台下发执行到新版执行机标识某次执行的唯一ID，存量老执行机下发执行没有此ID。
如果不知道执行机版本是否支持此ID，可以联系腾讯云运维同学
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutionJobId(const std::string& _executionJobId);

                    /**
                     * 判断参数 ExecutionJobId 是否已赋值
                     * @return ExecutionJobId 是否已赋值
                     * 
                     */
                    bool ExecutionJobIdHasBeenSet() const;

                    /**
                     * 获取日志所在执行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerIp 日志所在执行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置日志所在执行节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerIp 日志所在执行节点
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取日志文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginFileName 日志文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginFileName() const;

                    /**
                     * 设置日志文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originFileName 日志文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginFileName(const std::string& _originFileName);

                    /**
                     * 判断参数 OriginFileName 是否已赋值
                     * @return OriginFileName 是否已赋值
                     * 
                     */
                    bool OriginFileNameHasBeenSet() const;

                    /**
                     * 获取**实例日志类型**

- run: 运行; 
- kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogType **实例日志类型**

- run: 运行; 
- kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置**实例日志类型**

- run: 运行; 
- kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logType **实例日志类型**

- run: 运行; 
- kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostTime 耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCostTime() const;

                    /**
                     * 设置耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costTime 耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCostTime(const std::string& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                private:

                    /**
                     * 实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **实例状态**

- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * **实例生命周期编号，标识实例的某一次执行**

例如：周期实例第一次运行的编号为0，用户后期又重跑了该实例，第二次执行的编号为1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lifeRoundNum;
                    bool m_lifeRoundNumHasBeenSet;

                    /**
                     * **实例运行触发类型**

- RERUN 表示重跑
- ADDITION 表示补录
- PERIODIC 表示周期
- APERIODIC 表示非周期
- RERUN_SKIP_RUN 表示重跑 - 空跑
- ADDITION_SKIP_RUN 表示补录 - 空跑
- PERIODIC_SKIP_RUN 表示周期 - 空跑
- APERIODIC_SKIP_RUN 表示非周期 - 空跑
- MANUAL_TRIGGER 表示手动触发
- RERUN_MANUAL_TRIGGER 表示手动触发 - 重跑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * 失败重试次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tries;
                    bool m_triesHasBeenSet;

                    /**
                     * **实例生命周期列表**
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceLifeDetailDto> m_lifeCycleDetailList;
                    bool m_lifeCycleDetailListHasBeenSet;

                    /**
                     * **实例代码文件**
该文件内容为当次执行实例运行使用的代码，仅部分任务支持
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeFileName;
                    bool m_codeFileNameHasBeenSet;

                    /**
                     * **下发执行ID**
统一执行平台下发执行到新版执行机标识某次执行的唯一ID，存量老执行机下发执行没有此ID。
如果不知道执行机版本是否支持此ID，可以联系腾讯云运维同学
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executionJobId;
                    bool m_executionJobIdHasBeenSet;

                    /**
                     * 日志所在执行节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * 日志文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originFileName;
                    bool m_originFileNameHasBeenSet;

                    /**
                     * **实例日志类型**

- run: 运行; 
- kill: 终止
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 耗费时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_costTime;
                    bool m_costTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFECYCLEVO_H_
