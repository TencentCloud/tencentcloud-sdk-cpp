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
#include <tencentcloud/cls/v20201016/model/CollectInfo.h>


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
                     * 
                     */
                    std::string GetConfigExtraId() const;

                    /**
                     * 设置采集规则扩展配置ID
                     * @param _configExtraId 采集规则扩展配置ID
                     * 
                     */
                    void SetConfigExtraId(const std::string& _configExtraId);

                    /**
                     * 判断参数 ConfigExtraId 是否已赋值
                     * @return ConfigExtraId 是否已赋值
                     * 
                     */
                    bool ConfigExtraIdHasBeenSet() const;

                    /**
                     * 获取采集规则名称
                     * @return Name 采集规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置采集规则名称
                     * @param _name 采集规则名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

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
                     * 获取类型：container_stdout、container_file、host_file
                     * @return Type 类型：container_stdout、container_file、host_file
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型：container_stdout、container_file、host_file
                     * @param _type 类型：container_stdout、container_file、host_file
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
                     * 获取节点文件配置信息
                     * @return HostFile 节点文件配置信息
                     * 
                     */
                    HostFileInfo GetHostFile() const;

                    /**
                     * 设置节点文件配置信息
                     * @param _hostFile 节点文件配置信息
                     * 
                     */
                    void SetHostFile(const HostFileInfo& _hostFile);

                    /**
                     * 判断参数 HostFile 是否已赋值
                     * @return HostFile 是否已赋值
                     * 
                     */
                    bool HostFileHasBeenSet() const;

                    /**
                     * 获取容器文件路径信息
                     * @return ContainerFile 容器文件路径信息
                     * 
                     */
                    ContainerFileInfo GetContainerFile() const;

                    /**
                     * 设置容器文件路径信息
                     * @param _containerFile 容器文件路径信息
                     * 
                     */
                    void SetContainerFile(const ContainerFileInfo& _containerFile);

                    /**
                     * 判断参数 ContainerFile 是否已赋值
                     * @return ContainerFile 是否已赋值
                     * 
                     */
                    bool ContainerFileHasBeenSet() const;

                    /**
                     * 获取容器标准输出信息
                     * @return ContainerStdout 容器标准输出信息
                     * 
                     */
                    ContainerStdoutInfo GetContainerStdout() const;

                    /**
                     * 设置容器标准输出信息
                     * @param _containerStdout 容器标准输出信息
                     * 
                     */
                    void SetContainerStdout(const ContainerStdoutInfo& _containerStdout);

                    /**
                     * 判断参数 ContainerStdout 是否已赋值
                     * @return ContainerStdout 是否已赋值
                     * 
                     */
                    bool ContainerStdoutHasBeenSet() const;

                    /**
                     * 获取日志格式化方式
                     * @return LogFormat 日志格式化方式
                     * 
                     */
                    std::string GetLogFormat() const;

                    /**
                     * 设置日志格式化方式
                     * @param _logFormat 日志格式化方式
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
                     * 获取采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
                     * @return LogType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
                     * @param _logType 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
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
                     * 获取提取规则，如果设置了ExtractRule，则必须设置LogType
                     * @return ExtractRule 提取规则，如果设置了ExtractRule，则必须设置LogType
                     * 
                     */
                    ExtractRuleInfo GetExtractRule() const;

                    /**
                     * 设置提取规则，如果设置了ExtractRule，则必须设置LogType
                     * @param _extractRule 提取规则，如果设置了ExtractRule，则必须设置LogType
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
                     * 获取采集黑名单路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludePaths 采集黑名单路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ExcludePathInfo> GetExcludePaths() const;

                    /**
                     * 设置采集黑名单路径列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludePaths 采集黑名单路径列表
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用户自定义解析字符串
                     * @return UserDefineRule 用户自定义解析字符串
                     * 
                     */
                    std::string GetUserDefineRule() const;

                    /**
                     * 设置用户自定义解析字符串
                     * @param _userDefineRule 用户自定义解析字符串
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
                     * 获取机器组ID
                     * @return GroupId 机器组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置机器组ID
                     * @param _groupId 机器组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取自建采集配置标
                     * @return ConfigFlag 自建采集配置标
                     * 
                     */
                    std::string GetConfigFlag() const;

                    /**
                     * 设置自建采集配置标
                     * @param _configFlag 自建采集配置标
                     * 
                     */
                    void SetConfigFlag(const std::string& _configFlag);

                    /**
                     * 判断参数 ConfigFlag 是否已赋值
                     * @return ConfigFlag 是否已赋值
                     * 
                     */
                    bool ConfigFlagHasBeenSet() const;

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
                     * 获取日志集name
                     * @return LogsetName 日志集name
                     * 
                     */
                    std::string GetLogsetName() const;

                    /**
                     * 设置日志集name
                     * @param _logsetName 日志集name
                     * 
                     */
                    void SetLogsetName(const std::string& _logsetName);

                    /**
                     * 判断参数 LogsetName 是否已赋值
                     * @return LogsetName 是否已赋值
                     * 
                     */
                    bool LogsetNameHasBeenSet() const;

                    /**
                     * 获取日志主题name
                     * @return TopicName 日志主题name
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题name
                     * @param _topicName 日志主题name
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

                    /**
                     * 获取采集相关配置信息。详情见 CollectInfo复杂类型配置。
                     * @return CollectInfos 采集相关配置信息。详情见 CollectInfo复杂类型配置。
                     * 
                     */
                    std::vector<CollectInfo> GetCollectInfos() const;

                    /**
                     * 设置采集相关配置信息。详情见 CollectInfo复杂类型配置。
                     * @param _collectInfos 采集相关配置信息。详情见 CollectInfo复杂类型配置。
                     * 
                     */
                    void SetCollectInfos(const std::vector<CollectInfo>& _collectInfos);

                    /**
                     * 判断参数 CollectInfos 是否已赋值
                     * @return CollectInfos 是否已赋值
                     * 
                     */
                    bool CollectInfosHasBeenSet() const;

                    /**
                     * 获取高级采集配置。 Json字符串， Key/Value定义为如下：
- ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时
- ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数
- ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false
样例：{"ClsAgentFileTimeout":0,"ClsAgentMaxDepth":10,"ClsAgentParseFailMerge":true}
                     * @return AdvancedConfig 高级采集配置。 Json字符串， Key/Value定义为如下：
- ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时
- ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数
- ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false
样例：{"ClsAgentFileTimeout":0,"ClsAgentMaxDepth":10,"ClsAgentParseFailMerge":true}
                     * 
                     */
                    std::string GetAdvancedConfig() const;

                    /**
                     * 设置高级采集配置。 Json字符串， Key/Value定义为如下：
- ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时
- ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数
- ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false
样例：{"ClsAgentFileTimeout":0,"ClsAgentMaxDepth":10,"ClsAgentParseFailMerge":true}
                     * @param _advancedConfig 高级采集配置。 Json字符串， Key/Value定义为如下：
- ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时
- ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数
- ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false
样例：{"ClsAgentFileTimeout":0,"ClsAgentMaxDepth":10,"ClsAgentParseFailMerge":true}
                     * 
                     */
                    void SetAdvancedConfig(const std::string& _advancedConfig);

                    /**
                     * 判断参数 AdvancedConfig 是否已赋值
                     * @return AdvancedConfig 是否已赋值
                     * 
                     */
                    bool AdvancedConfigHasBeenSet() const;

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
                     */
                    HostFileInfo m_hostFile;
                    bool m_hostFileHasBeenSet;

                    /**
                     * 容器文件路径信息
                     */
                    ContainerFileInfo m_containerFile;
                    bool m_containerFileHasBeenSet;

                    /**
                     * 容器标准输出信息
                     */
                    ContainerStdoutInfo m_containerStdout;
                    bool m_containerStdoutHasBeenSet;

                    /**
                     * 日志格式化方式
                     */
                    std::string m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * 采集的日志类型，json_log代表json格式日志，delimiter_log代表分隔符格式日志，minimalist_log代表极简日志，multiline_log代表多行日志，fullregex_log代表完整正则，默认为minimalist_log
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 提取规则，如果设置了ExtractRule，则必须设置LogType
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
                     */
                    std::string m_configFlag;
                    bool m_configFlagHasBeenSet;

                    /**
                     * 日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志集name
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 日志主题name
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 采集相关配置信息。详情见 CollectInfo复杂类型配置。
                     */
                    std::vector<CollectInfo> m_collectInfos;
                    bool m_collectInfosHasBeenSet;

                    /**
                     * 高级采集配置。 Json字符串， Key/Value定义为如下：
- ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时
- ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数
- ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false
样例：{"ClsAgentFileTimeout":0,"ClsAgentMaxDepth":10,"ClsAgentParseFailMerge":true}
                     */
                    std::string m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONFIGEXTRAINFO_H_
