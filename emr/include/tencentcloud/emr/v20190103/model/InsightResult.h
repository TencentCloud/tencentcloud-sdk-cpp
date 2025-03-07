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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_INSIGHTRESULT_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_INSIGHTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 洞察结果项
                */
                class InsightResult : public AbstractModel
                {
                public:
                    InsightResult();
                    ~InsightResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当Type为HIVE时，是Hive查询ID，当Type为MAPREDUCE，SPARK，TEZ时则是YarnAppID
                     * @return ID 当Type为HIVE时，是Hive查询ID，当Type为MAPREDUCE，SPARK，TEZ时则是YarnAppID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置当Type为HIVE时，是Hive查询ID，当Type为MAPREDUCE，SPARK，TEZ时则是YarnAppID
                     * @param _iD 当Type为HIVE时，是Hive查询ID，当Type为MAPREDUCE，SPARK，TEZ时则是YarnAppID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取洞察应用的类型，HIVE,SPARK,MAPREDUCE,TEZ
                     * @return Type 洞察应用的类型，HIVE,SPARK,MAPREDUCE,TEZ
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置洞察应用的类型，HIVE,SPARK,MAPREDUCE,TEZ
                     * @param _type 洞察应用的类型，HIVE,SPARK,MAPREDUCE,TEZ
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取洞察规则ID
HIVE-ScanManyMeta:元数据扫描过多
HIVE-ScanManyPartition:大表扫描
HIVE-SlowCompile:编译耗时过长
HIVE-UnSuitableConfig:不合理参数
MAPREDUCE-MapperDataSkew:Map数据倾斜
MAPREDUCE-MapperMemWaste:MapMemory资源浪费
MAPREDUCE-MapperSlowTask:Map慢Task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded:峰值内存超限
MAPREDUCE-ReducerDataSkew:Reduce数据倾斜
MAPREDUCE-ReducerMemWaste:ReduceMemory资源浪费
MAPREDUCE-ReducerSlowTask:Reduce慢Task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay:调度延迟
SPARK-CpuWaste:CPU资源浪费
SPARK-DataSkew:数据倾斜
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded:峰值内存超限
SPARK-MemWaste:Memory资源浪费
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew:调度倾斜
SPARK-SlowTask:慢Task
TEZ-DataSkew:数据倾斜
TEZ-MapperDataSkew:Map数据倾斜
TEZ-ReducerDataSkew:Reduce数据倾斜
TEZ-TezMemWaste:Memory资源浪费
TEZ-TezSlowTask:慢Task
TEZ-TezTaskGC:TasksGC
                     * @return RuleID 洞察规则ID
HIVE-ScanManyMeta:元数据扫描过多
HIVE-ScanManyPartition:大表扫描
HIVE-SlowCompile:编译耗时过长
HIVE-UnSuitableConfig:不合理参数
MAPREDUCE-MapperDataSkew:Map数据倾斜
MAPREDUCE-MapperMemWaste:MapMemory资源浪费
MAPREDUCE-MapperSlowTask:Map慢Task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded:峰值内存超限
MAPREDUCE-ReducerDataSkew:Reduce数据倾斜
MAPREDUCE-ReducerMemWaste:ReduceMemory资源浪费
MAPREDUCE-ReducerSlowTask:Reduce慢Task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay:调度延迟
SPARK-CpuWaste:CPU资源浪费
SPARK-DataSkew:数据倾斜
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded:峰值内存超限
SPARK-MemWaste:Memory资源浪费
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew:调度倾斜
SPARK-SlowTask:慢Task
TEZ-DataSkew:数据倾斜
TEZ-MapperDataSkew:Map数据倾斜
TEZ-ReducerDataSkew:Reduce数据倾斜
TEZ-TezMemWaste:Memory资源浪费
TEZ-TezSlowTask:慢Task
TEZ-TezTaskGC:TasksGC
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置洞察规则ID
HIVE-ScanManyMeta:元数据扫描过多
HIVE-ScanManyPartition:大表扫描
HIVE-SlowCompile:编译耗时过长
HIVE-UnSuitableConfig:不合理参数
MAPREDUCE-MapperDataSkew:Map数据倾斜
MAPREDUCE-MapperMemWaste:MapMemory资源浪费
MAPREDUCE-MapperSlowTask:Map慢Task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded:峰值内存超限
MAPREDUCE-ReducerDataSkew:Reduce数据倾斜
MAPREDUCE-ReducerMemWaste:ReduceMemory资源浪费
MAPREDUCE-ReducerSlowTask:Reduce慢Task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay:调度延迟
SPARK-CpuWaste:CPU资源浪费
SPARK-DataSkew:数据倾斜
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded:峰值内存超限
SPARK-MemWaste:Memory资源浪费
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew:调度倾斜
SPARK-SlowTask:慢Task
TEZ-DataSkew:数据倾斜
TEZ-MapperDataSkew:Map数据倾斜
TEZ-ReducerDataSkew:Reduce数据倾斜
TEZ-TezMemWaste:Memory资源浪费
TEZ-TezSlowTask:慢Task
TEZ-TezTaskGC:TasksGC
                     * @param _ruleID 洞察规则ID
HIVE-ScanManyMeta:元数据扫描过多
HIVE-ScanManyPartition:大表扫描
HIVE-SlowCompile:编译耗时过长
HIVE-UnSuitableConfig:不合理参数
MAPREDUCE-MapperDataSkew:Map数据倾斜
MAPREDUCE-MapperMemWaste:MapMemory资源浪费
MAPREDUCE-MapperSlowTask:Map慢Task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded:峰值内存超限
MAPREDUCE-ReducerDataSkew:Reduce数据倾斜
MAPREDUCE-ReducerMemWaste:ReduceMemory资源浪费
MAPREDUCE-ReducerSlowTask:Reduce慢Task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay:调度延迟
SPARK-CpuWaste:CPU资源浪费
SPARK-DataSkew:数据倾斜
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded:峰值内存超限
SPARK-MemWaste:Memory资源浪费
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew:调度倾斜
SPARK-SlowTask:慢Task
TEZ-DataSkew:数据倾斜
TEZ-MapperDataSkew:Map数据倾斜
TEZ-ReducerDataSkew:Reduce数据倾斜
TEZ-TezMemWaste:Memory资源浪费
TEZ-TezSlowTask:慢Task
TEZ-TezTaskGC:TasksGC
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取洞察规则名字，可参考RuleID的说明
                     * @return RuleName 洞察规则名字，可参考RuleID的说明
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置洞察规则名字，可参考RuleID的说明
                     * @param _ruleName 洞察规则名字，可参考RuleID的说明
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取洞察规则解释
                     * @return RuleExplain 洞察规则解释
                     * 
                     */
                    std::string GetRuleExplain() const;

                    /**
                     * 设置洞察规则解释
                     * @param _ruleExplain 洞察规则解释
                     * 
                     */
                    void SetRuleExplain(const std::string& _ruleExplain);

                    /**
                     * 判断参数 RuleExplain 是否已赋值
                     * @return RuleExplain 是否已赋值
                     * 
                     */
                    bool RuleExplainHasBeenSet() const;

                    /**
                     * 获取详情
                     * @return Detail 详情
                     * 
                     */
                    std::string GetDetail() const;

                    /**
                     * 设置详情
                     * @param _detail 详情
                     * 
                     */
                    void SetDetail(const std::string& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取建议信息
                     * @return Suggestion 建议信息
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置建议信息
                     * @param _suggestion 建议信息
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取洞察异常衡量值，同类型的洞察项越大越严重，不同类型的洞察项无对比意义
                     * @return Value 洞察异常衡量值，同类型的洞察项越大越严重，不同类型的洞察项无对比意义
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置洞察异常衡量值，同类型的洞察项越大越严重，不同类型的洞察项无对比意义
                     * @param _value 洞察异常衡量值，同类型的洞察项越大越严重，不同类型的洞察项无对比意义
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取调度任务执行ID
                     * @return ScheduleTaskExecID 调度任务执行ID
                     * 
                     */
                    std::string GetScheduleTaskExecID() const;

                    /**
                     * 设置调度任务执行ID
                     * @param _scheduleTaskExecID 调度任务执行ID
                     * 
                     */
                    void SetScheduleTaskExecID(const std::string& _scheduleTaskExecID);

                    /**
                     * 判断参数 ScheduleTaskExecID 是否已赋值
                     * @return ScheduleTaskExecID 是否已赋值
                     * 
                     */
                    bool ScheduleTaskExecIDHasBeenSet() const;

                    /**
                     * 获取调度流，DAG
                     * @return ScheduleFlowName 调度流，DAG
                     * 
                     */
                    std::string GetScheduleFlowName() const;

                    /**
                     * 设置调度流，DAG
                     * @param _scheduleFlowName 调度流，DAG
                     * 
                     */
                    void SetScheduleFlowName(const std::string& _scheduleFlowName);

                    /**
                     * 判断参数 ScheduleFlowName 是否已赋值
                     * @return ScheduleFlowName 是否已赋值
                     * 
                     */
                    bool ScheduleFlowNameHasBeenSet() const;

                    /**
                     * 获取调度flow中的某个task节点
                     * @return ScheduleTaskName 调度flow中的某个task节点
                     * 
                     */
                    std::string GetScheduleTaskName() const;

                    /**
                     * 设置调度flow中的某个task节点
                     * @param _scheduleTaskName 调度flow中的某个task节点
                     * 
                     */
                    void SetScheduleTaskName(const std::string& _scheduleTaskName);

                    /**
                     * 判断参数 ScheduleTaskName 是否已赋值
                     * @return ScheduleTaskName 是否已赋值
                     * 
                     */
                    bool ScheduleTaskNameHasBeenSet() const;

                    /**
                     * 获取Yarn任务的部分核心配置
                     * @return JobConf Yarn任务的部分核心配置
                     * 
                     */
                    std::string GetJobConf() const;

                    /**
                     * 设置Yarn任务的部分核心配置
                     * @param _jobConf Yarn任务的部分核心配置
                     * 
                     */
                    void SetJobConf(const std::string& _jobConf);

                    /**
                     * 判断参数 JobConf 是否已赋值
                     * @return JobConf 是否已赋值
                     * 
                     */
                    bool JobConfHasBeenSet() const;

                    /**
                     * 获取洞察结构化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Context 洞察结构化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置洞察结构化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _context 洞察结构化信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                private:

                    /**
                     * 当Type为HIVE时，是Hive查询ID，当Type为MAPREDUCE，SPARK，TEZ时则是YarnAppID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 洞察应用的类型，HIVE,SPARK,MAPREDUCE,TEZ
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 洞察规则ID
HIVE-ScanManyMeta:元数据扫描过多
HIVE-ScanManyPartition:大表扫描
HIVE-SlowCompile:编译耗时过长
HIVE-UnSuitableConfig:不合理参数
MAPREDUCE-MapperDataSkew:Map数据倾斜
MAPREDUCE-MapperMemWaste:MapMemory资源浪费
MAPREDUCE-MapperSlowTask:Map慢Task
MAPREDUCE-MapperTaskGC:MapperTaskGC
MAPREDUCE-MemExceeded:峰值内存超限
MAPREDUCE-ReducerDataSkew:Reduce数据倾斜
MAPREDUCE-ReducerMemWaste:ReduceMemory资源浪费
MAPREDUCE-ReducerSlowTask:Reduce慢Task
MAPREDUCE-ReducerTaskGC:ReducerTaskGC
MAPREDUCE-SchedulingDelay:调度延迟
SPARK-CpuWaste:CPU资源浪费
SPARK-DataSkew:数据倾斜
SPARK-ExecutorGC:ExecutorGC
SPARK-MemExceeded:峰值内存超限
SPARK-MemWaste:Memory资源浪费
SPARK-ScheduleOverhead:ScheduleOverhead
SPARK-ScheduleSkew:调度倾斜
SPARK-SlowTask:慢Task
TEZ-DataSkew:数据倾斜
TEZ-MapperDataSkew:Map数据倾斜
TEZ-ReducerDataSkew:Reduce数据倾斜
TEZ-TezMemWaste:Memory资源浪费
TEZ-TezSlowTask:慢Task
TEZ-TezTaskGC:TasksGC
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 洞察规则名字，可参考RuleID的说明
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 洞察规则解释
                     */
                    std::string m_ruleExplain;
                    bool m_ruleExplainHasBeenSet;

                    /**
                     * 详情
                     */
                    std::string m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 建议信息
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 洞察异常衡量值，同类型的洞察项越大越严重，不同类型的洞察项无对比意义
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 调度任务执行ID
                     */
                    std::string m_scheduleTaskExecID;
                    bool m_scheduleTaskExecIDHasBeenSet;

                    /**
                     * 调度流，DAG
                     */
                    std::string m_scheduleFlowName;
                    bool m_scheduleFlowNameHasBeenSet;

                    /**
                     * 调度flow中的某个task节点
                     */
                    std::string m_scheduleTaskName;
                    bool m_scheduleTaskNameHasBeenSet;

                    /**
                     * Yarn任务的部分核心配置
                     */
                    std::string m_jobConf;
                    bool m_jobConfHasBeenSet;

                    /**
                     * 洞察结构化信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_INSIGHTRESULT_H_
