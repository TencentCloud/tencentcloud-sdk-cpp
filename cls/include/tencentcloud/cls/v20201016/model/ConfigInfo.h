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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ExtractRuleInfo.h>
#include <tencentcloud/cls/v20201016/model/ExcludePathInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 采集规则配置信息
                */
                class ConfigInfo : public AbstractModel
                {
                public:
                    ConfigInfo();
                    ~ConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取采集规则配置ID
                     * @return ConfigId 采集规则配置ID
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置采集规则配置ID
                     * @param ConfigId 采集规则配置ID
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取日志格式化方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogFormat 日志格式化方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogFormat() const;

                    /**
                     * 设置日志格式化方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogFormat 日志格式化方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogFormat(const std::string& _logFormat);

                    /**
                     * 判断参数 LogFormat 是否已赋值
                     * @return LogFormat 是否已赋值
                     */
                    bool LogFormatHasBeenSet() const;

                    /**
                     * 获取日志采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 日志采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPath() const;

                    /**
                     * 设置日志采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Path 日志采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取提取规则，如果设置了ExtractRule，则必须设置LogType
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtractRule 提取规则，如果设置了ExtractRule，则必须设置LogType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractRuleInfo GetExtractRule() const;

                    /**
                     * 设置提取规则，如果设置了ExtractRule，则必须设置LogType
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExtractRule 提取规则，如果设置了ExtractRule，则必须设置LogType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtractRule(const ExtractRuleInfo& _extractRule);

                    /**
                     * 判断参数 ExtractRule 是否已赋值
                     * @return ExtractRule 是否已赋值
                     */
                    bool ExtractRuleHasBeenSet() const;

                    /**
                     * 获取采集黑名单路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludePaths 采集黑名单路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExcludePathInfo> GetExcludePaths() const;

                    /**
                     * 设置采集黑名单路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExcludePaths 采集黑名单路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExcludePaths(const std::vector<ExcludePathInfo>& _excludePaths);

                    /**
                     * 判断参数 ExcludePaths 是否已赋值
                     * @return ExcludePaths 是否已赋值
                     */
                    bool ExcludePathsHasBeenSet() const;

                    /**
                     * 获取采集配置所属日志主题ID即TopicId
                     * @return Output 采集配置所属日志主题ID即TopicId
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置采集配置所属日志主题ID即TopicId
                     * @param Output 采集配置所属日志主题ID即TopicId
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 采集规则配置ID
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 日志格式化方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * 日志采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 提取规则，如果设置了ExtractRule，则必须设置LogType
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ExtractRuleInfo m_extractRule;
                    bool m_extractRuleHasBeenSet;

                    /**
                     * 采集黑名单路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExcludePathInfo> m_excludePaths;
                    bool m_excludePathsHasBeenSet;

                    /**
                     * 采集配置所属日志主题ID即TopicId
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGINFO_H_
