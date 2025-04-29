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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实例日志内容
                */
                class InstanceLogVO : public AbstractModel
                {
                public:
                    InstanceLogVO();
                    ~InstanceLogVO() = default;
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
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

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
                     * 获取开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取**运行代码内容**
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeInfo **运行代码内容**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeInfo() const;

                    /**
                     * 设置**运行代码内容**
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeInfo **运行代码内容**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeInfo(const std::string& _codeInfo);

                    /**
                     * 判断参数 CodeInfo 是否已赋值
                     * @return CodeInfo 是否已赋值
                     * 
                     */
                    bool CodeInfoHasBeenSet() const;

                    /**
                     * 获取**运行代码文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CodeFileSize **运行代码文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCodeFileSize() const;

                    /**
                     * 设置**运行代码文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _codeFileSize **运行代码文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCodeFileSize(const std::string& _codeFileSize);

                    /**
                     * 判断参数 CodeFileSize 是否已赋值
                     * @return CodeFileSize 是否已赋值
                     * 
                     */
                    bool CodeFileSizeHasBeenSet() const;

                    /**
                     * 获取日志所在节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrokerIp 日志所在节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrokerIp() const;

                    /**
                     * 设置日志所在节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brokerIp 日志所在节点信息
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
                     * 获取**日志内容**
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogInfo **日志内容**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogInfo() const;

                    /**
                     * 设置**日志内容**
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logInfo **日志内容**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogInfo(const std::string& _logInfo);

                    /**
                     * 判断参数 LogInfo 是否已赋值
                     * @return LogInfo 是否已赋值
                     * 
                     */
                    bool LogInfoHasBeenSet() const;

                    /**
                     * 获取**日志文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogFileSize **日志文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogFileSize() const;

                    /**
                     * 设置**日志文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logFileSize **日志文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogFileSize(const std::string& _logFileSize);

                    /**
                     * 判断参数 LogFileSize 是否已赋值
                     * @return LogFileSize 是否已赋值
                     * 
                     */
                    bool LogFileSizeHasBeenSet() const;

                    /**
                     * 获取**本次查询返回的日志行数**
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LineCount **本次查询返回的日志行数**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLineCount() const;

                    /**
                     * 设置**本次查询返回的日志行数**
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lineCount **本次查询返回的日志行数**
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLineCount(const uint64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                    /**
                     * 获取**分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtInfo **分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置**分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extInfo **分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取日志分页查询，是否最后一页
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEnd 日志分页查询，是否最后一页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsEnd() const;

                    /**
                     * 设置日志分页查询，是否最后一页
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEnd 日志分页查询，是否最后一页
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsEnd(const bool& _isEnd);

                    /**
                     * 判断参数 IsEnd 是否已赋值
                     * @return IsEnd 是否已赋值
                     * 
                     */
                    bool IsEndHasBeenSet() const;

                private:

                    /**
                     * 实例唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

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
                     * 开始运行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 运行完成时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * **运行代码内容**
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeInfo;
                    bool m_codeInfoHasBeenSet;

                    /**
                     * **运行代码文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_codeFileSize;
                    bool m_codeFileSizeHasBeenSet;

                    /**
                     * 日志所在节点信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brokerIp;
                    bool m_brokerIpHasBeenSet;

                    /**
                     * **日志内容**
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logInfo;
                    bool m_logInfoHasBeenSet;

                    /**
                     * **日志文件大小**
单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logFileSize;
                    bool m_logFileSizeHasBeenSet;

                    /**
                     * **本次查询返回的日志行数**
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * **分页查询日志时使用，无具体业务含义**

第一次查询时值为null 
第二次及以后查询时使用上一次查询返回信息中的ExtInfo字段值即可
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * 日志分页查询，是否最后一页
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isEnd;
                    bool m_isEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGVO_H_
