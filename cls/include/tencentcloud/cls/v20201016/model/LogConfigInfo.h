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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONFIGINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONFIGINFO_H_

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
                * 采集日志配置信息
                */
                class LogConfigInfo : public AbstractModel
                {
                public:
                    LogConfigInfo();
                    ~LogConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _topicId 日志主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取日志集ID
                     * @return LogsetId 日志集ID
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
                     * @param _logsetId 日志集ID
                     * 
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取采集日志路径列表
                     * @return Path 采集日志路径列表
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置采集日志路径列表
                     * @param _path 采集日志路径列表
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取日志类型
                     * @return LogType 日志类型
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型
                     * @param _logType 日志类型
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
                     * 获取提取规则
                     * @return ExtractRule 提取规则
                     * 
                     */
                    ExtractRuleInfo GetExtractRule() const;

                    /**
                     * 设置提取规则
                     * @param _extractRule 提取规则
                     * 
                     */
                    void SetExtractRule(const ExtractRuleInfo& _extractRule);

                    /**
                     * 判断参数 ExtractRule 是否已赋值
                     * @return ExtractRule 是否已赋值
                     * 
                     */
                    bool ExtractRuleHasBeenSet() const;

                    /**
                     * 获取日志格式化格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogFormat 日志格式化格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogFormat() const;

                    /**
                     * 设置日志格式化格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logFormat 日志格式化格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogFormat(const std::string& _logFormat);

                    /**
                     * 判断参数 LogFormat 是否已赋值
                     * @return LogFormat 是否已赋值
                     * 
                     */
                    bool LogFormatHasBeenSet() const;

                    /**
                     * 获取黑名单path列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludePaths 黑名单path列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExcludePathInfo> GetExcludePaths() const;

                    /**
                     * 设置黑名单path列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludePaths 黑名单path列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcludePaths(const std::vector<ExcludePathInfo>& _excludePaths);

                    /**
                     * 判断参数 ExcludePaths 是否已赋值
                     * @return ExcludePaths 是否已赋值
                     * 
                     */
                    bool ExcludePathsHasBeenSet() const;

                    /**
                     * 获取用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserDefineRule 用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserDefineRule() const;

                    /**
                     * 设置用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userDefineRule 用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserDefineRule(const std::string& _userDefineRule);

                    /**
                     * 判断参数 UserDefineRule 是否已赋值
                     * @return UserDefineRule 是否已赋值
                     * 
                     */
                    bool UserDefineRuleHasBeenSet() const;

                    /**
                     * 获取采集配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigId 采集配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigId() const;

                    /**
                     * 设置采集配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configId 采集配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigId(const std::string& _configId);

                    /**
                     * 判断参数 ConfigId 是否已赋值
                     * @return ConfigId 是否已赋值
                     * 
                     */
                    bool ConfigIdHasBeenSet() const;

                    /**
                     * 获取使用了元数据的机器组ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupIds 使用了元数据的机器组ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置使用了元数据的机器组ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupIds 使用了元数据的机器组ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 采集日志路径列表
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 日志类型
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 提取规则
                     */
                    ExtractRuleInfo m_extractRule;
                    bool m_extractRuleHasBeenSet;

                    /**
                     * 日志格式化格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * 黑名单path列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExcludePathInfo> m_excludePaths;
                    bool m_excludePathsHasBeenSet;

                    /**
                     * 用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userDefineRule;
                    bool m_userDefineRuleHasBeenSet;

                    /**
                     * 采集配置ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configId;
                    bool m_configIdHasBeenSet;

                    /**
                     * 使用了元数据的机器组ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGCONFIGINFO_H_
