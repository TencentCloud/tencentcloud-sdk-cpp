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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGEXTRAINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/HostFileInfo.h>
#include <tencentcloud/cls/v20201016/model/ContainerFileInfo.h>
#include <tencentcloud/cls/v20201016/model/ContainerStdoutInfo.h>
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
                * 特殊采集规则配置信息
                */
                class ConfigExtraInfo : public AbstractModel
                {
                public:
                    ConfigExtraInfo();
                    ~ConfigExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取采集规则扩展配置ID
                     * @return ConfigExtraId 采集规则扩展配置ID
                     */
                    std::string GetConfigExtraId() const;

                    /**
                     * 设置采集规则扩展配置ID
                     * @param ConfigExtraId 采集规则扩展配置ID
                     */
                    void SetConfigExtraId(const std::string& _configExtraId);

                    /**
                     * 判断参数 ConfigExtraId 是否已赋值
                     * @return ConfigExtraId 是否已赋值
                     */
                    bool ConfigExtraIdHasBeenSet() const;

                    /**
                     * 获取采集规则名称
                     * @return Name 采集规则名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置采集规则名称
                     * @param Name 采集规则名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param TopicId 日志主题ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取类型：container_stdout、container_file、host_file
                     * @return Type 类型：container_stdout、container_file、host_file
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型：container_stdout、container_file、host_file
                     * @param Type 类型：container_stdout、container_file、host_file
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取节点文件配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostFile 节点文件配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostFileInfo GetHostFile() const;

                    /**
                     * 设置节点文件配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostFile 节点文件配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostFile(const HostFileInfo& _hostFile);

                    /**
                     * 判断参数 HostFile 是否已赋值
                     * @return HostFile 是否已赋值
                     */
                    bool HostFileHasBeenSet() const;

                    /**
                     * 获取容器文件路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerFile 容器文件路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerFileInfo GetContainerFile() const;

                    /**
                     * 设置容器文件路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainerFile 容器文件路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainerFile(const ContainerFileInfo& _containerFile);

                    /**
                     * 判断参数 ContainerFile 是否已赋值
                     * @return ContainerFile 是否已赋值
                     */
                    bool ContainerFileHasBeenSet() const;

                    /**
                     * 获取容器标准输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerStdout 容器标准输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerStdoutInfo GetContainerStdout() const;

                    /**
                     * 设置容器标准输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ContainerStdout 容器标准输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContainerStdout(const ContainerStdoutInfo& _containerStdout);

                    /**
                     * 判断参数 ContainerStdout 是否已赋值
                     * @return ContainerStdout 是否已赋值
                     */
                    bool ContainerStdoutHasBeenSet() const;

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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
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

                    /**
                     * 获取用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserDefineRule 用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserDefineRule() const;

                    /**
                     * 设置用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserDefineRule 用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserDefineRule(const std::string& _userDefineRule);

                    /**
                     * 判断参数 UserDefineRule 是否已赋值
                     * @return UserDefineRule 是否已赋值
                     */
                    bool UserDefineRuleHasBeenSet() const;

                    /**
                     * 获取机器组ID
                     * @return GroupId 机器组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置机器组ID
                     * @param GroupId 机器组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取自建采集配置标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigFlag 自建采集配置标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfigFlag() const;

                    /**
                     * 设置自建采集配置标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConfigFlag 自建采集配置标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfigFlag(const std::string& _configFlag);

                    /**
                     * 判断参数 ConfigFlag 是否已赋值
                     * @return ConfigFlag 是否已赋值
                     */
                    bool ConfigFlagHasBeenSet() const;

                    /**
                     * 获取日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogsetId 日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogsetId 日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取日志集name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogsetName 日志集name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogsetName 日志集name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取日志主题name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName 日志主题name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopicName 日志主题name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * 采集规则扩展配置ID
                     */
                    std::string m_configExtraId;
                    bool m_configExtraIdHasBeenSet;

                    /**
                     * 采集规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 类型：container_stdout、container_file、host_file
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 节点文件配置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HostFileInfo m_hostFile;
                    bool m_hostFileHasBeenSet;

                    /**
                     * 容器文件路径信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerFileInfo m_containerFile;
                    bool m_containerFileHasBeenSet;

                    /**
                     * 容器标准输出信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ContainerStdoutInfo m_containerStdout;
                    bool m_containerStdoutHasBeenSet;

                    /**
                     * 日志格式化方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logFormat;
                    bool m_logFormatHasBeenSet;

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
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户自定义解析字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userDefineRule;
                    bool m_userDefineRuleHasBeenSet;

                    /**
                     * 机器组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 自建采集配置标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configFlag;
                    bool m_configFlagHasBeenSet;

                    /**
                     * 日志集ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志集name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 日志主题name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGEXTRAINFO_H_
