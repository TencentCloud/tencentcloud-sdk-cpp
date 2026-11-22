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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFOOPSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFOOPSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/PairDto.h>
#include <tencentcloud/wedata/v20210820/model/LogDiagnosisRules.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实例日志信息详情
                */
                class InstanceLogInfoOpsDto : public AbstractModel
                {
                public:
                    InstanceLogInfoOpsDto();
                    ~InstanceLogInfoOpsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogInfo <p>实例运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogInfo() const;

                    /**
                     * 设置<p>实例运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logInfo <p>实例运行日志</p>
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
                     * 获取<p>实例运行提交的yarn日志地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YarnLogInfo <p>实例运行提交的yarn日志地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetYarnLogInfo() const;

                    /**
                     * 设置<p>实例运行提交的yarn日志地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yarnLogInfo <p>实例运行提交的yarn日志地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYarnLogInfo(const std::vector<std::string>& _yarnLogInfo);

                    /**
                     * 判断参数 YarnLogInfo 是否已赋值
                     * @return YarnLogInfo 是否已赋值
                     * 
                     */
                    bool YarnLogInfoHasBeenSet() const;

                    /**
                     * 获取<p>实例运行产生的datax日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataLogInfo <p>实例运行产生的datax日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataLogInfo() const;

                    /**
                     * 设置<p>实例运行产生的datax日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataLogInfo <p>实例运行产生的datax日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataLogInfo(const std::string& _dataLogInfo);

                    /**
                     * 判断参数 DataLogInfo 是否已赋值
                     * @return DataLogInfo 是否已赋值
                     * 
                     */
                    bool DataLogInfoHasBeenSet() const;

                    /**
                     * 获取<p>第三方任务运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdTaskRunLogInfo <p>第三方任务运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThirdTaskRunLogInfo() const;

                    /**
                     * 设置<p>第三方任务运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thirdTaskRunLogInfo <p>第三方任务运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThirdTaskRunLogInfo(const std::string& _thirdTaskRunLogInfo);

                    /**
                     * 判断参数 ThirdTaskRunLogInfo 是否已赋值
                     * @return ThirdTaskRunLogInfo 是否已赋值
                     * 
                     */
                    bool ThirdTaskRunLogInfoHasBeenSet() const;

                    /**
                     * 获取<p>第三方任务日志链接描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThirdTaskLogUrlDesc <p>第三方任务日志链接描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThirdTaskLogUrlDesc() const;

                    /**
                     * 设置<p>第三方任务日志链接描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thirdTaskLogUrlDesc <p>第三方任务日志链接描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThirdTaskLogUrlDesc(const std::string& _thirdTaskLogUrlDesc);

                    /**
                     * 判断参数 ThirdTaskLogUrlDesc 是否已赋值
                     * @return ThirdTaskLogUrlDesc 是否已赋值
                     * 
                     */
                    bool ThirdTaskLogUrlDescHasBeenSet() const;

                    /**
                     * 获取<p>日志行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LineCount <p>日志行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLineCount() const;

                    /**
                     * 设置<p>日志行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lineCount <p>日志行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLineCount(const int64_t& _lineCount);

                    /**
                     * 判断参数 LineCount 是否已赋值
                     * @return LineCount 是否已赋值
                     * 
                     */
                    bool LineCountHasBeenSet() const;

                    /**
                     * 获取<p>统一执行平台日志分页查询参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtInfo <p>统一执行平台日志分页查询参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>统一执行平台日志分页查询参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extInfo <p>统一执行平台日志分页查询参数</p>
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
                     * 获取<p>日志分页查询，是否最后一页</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsEnd <p>日志分页查询，是否最后一页</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsEnd() const;

                    /**
                     * 设置<p>日志分页查询，是否最后一页</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isEnd <p>日志分页查询，是否最后一页</p>
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

                    /**
                     * 获取<p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize <p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置<p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize <p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取<p>日志匹配节点信息</p>
                     * @return MatchedBrokerIp <p>日志匹配节点信息</p>
                     * 
                     */
                    std::string GetMatchedBrokerIp() const;

                    /**
                     * 设置<p>日志匹配节点信息</p>
                     * @param _matchedBrokerIp <p>日志匹配节点信息</p>
                     * 
                     */
                    void SetMatchedBrokerIp(const std::string& _matchedBrokerIp);

                    /**
                     * 判断参数 MatchedBrokerIp 是否已赋值
                     * @return MatchedBrokerIp 是否已赋值
                     * 
                     */
                    bool MatchedBrokerIpHasBeenSet() const;

                    /**
                     * 获取<p>执行平台通用协议</p>
                     * @return ExecutionExtendedProps <p>执行平台通用协议</p>
                     * 
                     */
                    std::vector<PairDto> GetExecutionExtendedProps() const;

                    /**
                     * 设置<p>执行平台通用协议</p>
                     * @param _executionExtendedProps <p>执行平台通用协议</p>
                     * 
                     */
                    void SetExecutionExtendedProps(const std::vector<PairDto>& _executionExtendedProps);

                    /**
                     * 判断参数 ExecutionExtendedProps 是否已赋值
                     * @return ExecutionExtendedProps 是否已赋值
                     * 
                     */
                    bool ExecutionExtendedPropsHasBeenSet() const;

                    /**
                     * 获取<p>日志诊断规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogDiagnosisRules <p>日志诊断规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    LogDiagnosisRules GetLogDiagnosisRules() const;

                    /**
                     * 设置<p>日志诊断规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logDiagnosisRules <p>日志诊断规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetLogDiagnosisRules(const LogDiagnosisRules& _logDiagnosisRules);

                    /**
                     * 判断参数 LogDiagnosisRules 是否已赋值
                     * @return LogDiagnosisRules 是否已赋值
                     * @deprecated
                     */
                    bool LogDiagnosisRulesHasBeenSet() const;

                private:

                    /**
                     * <p>实例运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logInfo;
                    bool m_logInfoHasBeenSet;

                    /**
                     * <p>实例运行提交的yarn日志地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_yarnLogInfo;
                    bool m_yarnLogInfoHasBeenSet;

                    /**
                     * <p>实例运行产生的datax日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataLogInfo;
                    bool m_dataLogInfoHasBeenSet;

                    /**
                     * <p>第三方任务运行日志</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_thirdTaskRunLogInfo;
                    bool m_thirdTaskRunLogInfoHasBeenSet;

                    /**
                     * <p>第三方任务日志链接描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_thirdTaskLogUrlDesc;
                    bool m_thirdTaskLogUrlDescHasBeenSet;

                    /**
                     * <p>日志行数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lineCount;
                    bool m_lineCountHasBeenSet;

                    /**
                     * <p>统一执行平台日志分页查询参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * <p>日志分页查询，是否最后一页</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isEnd;
                    bool m_isEndHasBeenSet;

                    /**
                     * <p>文件大小</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * <p>日志匹配节点信息</p>
                     */
                    std::string m_matchedBrokerIp;
                    bool m_matchedBrokerIpHasBeenSet;

                    /**
                     * <p>执行平台通用协议</p>
                     */
                    std::vector<PairDto> m_executionExtendedProps;
                    bool m_executionExtendedPropsHasBeenSet;

                    /**
                     * <p>日志诊断规则</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LogDiagnosisRules m_logDiagnosisRules;
                    bool m_logDiagnosisRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELOGINFOOPSDTO_H_
