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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGEXTRAREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGEXTRAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateConfigExtra请求参数结构体
                */
                class CreateConfigExtraRequest : public AbstractModel
                {
                public:
                    CreateConfigExtraRequest();
                    ~CreateConfigExtraRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取采集配置规程名称，最长63个字符，只能包含小写字符、数字及分隔符（“-”），且必须以小写字符开头，数字或小写字符结尾
                     * @return Name 采集配置规程名称，最长63个字符，只能包含小写字符、数字及分隔符（“-”），且必须以小写字符开头，数字或小写字符结尾
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置采集配置规程名称，最长63个字符，只能包含小写字符、数字及分隔符（“-”），且必须以小写字符开头，数字或小写字符结尾
                     * @param _name 采集配置规程名称，最长63个字符，只能包含小写字符、数字及分隔符（“-”），且必须以小写字符开头，数字或小写字符结尾
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
                     * 获取日志主题id
                     * @return TopicId 日志主题id
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id
                     * @param _topicId 日志主题id
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
                     * 获取日志源类型。支持 container_stdout：容器标准输出；container_file：容器文件路径；host_file：节点文件路径。
                     * @return Type 日志源类型。支持 container_stdout：容器标准输出；container_file：容器文件路径；host_file：节点文件路径。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置日志源类型。支持 container_stdout：容器标准输出；container_file：容器文件路径；host_file：节点文件路径。
                     * @param _type 日志源类型。支持 container_stdout：容器标准输出；container_file：容器文件路径；host_file：节点文件路径。
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
                     * 获取采集的日志类型，默认为minimalist_log。支持以下类型：
- json_log代表：JSON-文件日志（详见[使用 JSON 提取模式采集日志](https://cloud.tencent.com/document/product/614/17419)）；
- delimiter_log代表：分隔符-文件日志（详见[使用分隔符提取模式采集日志](https://cloud.tencent.com/document/product/614/17420)）；
- minimalist_log代表：单行全文-文件日志（详见[使用单行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17421)）；
- fullregex_log代表：单行完全正则-文件日志（详见[使用单行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52365)）；
- multiline_log代表：多行全文-文件日志（详见[使用多行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17422)）；
- multiline_fullregex_log代表：多行完全正则-文件日志（详见[使用多行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52366)）；
- user_define_log代表：组合解析（适用于多格式嵌套的日志，详见[使用组合解析提取模式采集日志](https://cloud.tencent.com/document/product/614/61310)）。
                     * @return LogType 采集的日志类型，默认为minimalist_log。支持以下类型：
- json_log代表：JSON-文件日志（详见[使用 JSON 提取模式采集日志](https://cloud.tencent.com/document/product/614/17419)）；
- delimiter_log代表：分隔符-文件日志（详见[使用分隔符提取模式采集日志](https://cloud.tencent.com/document/product/614/17420)）；
- minimalist_log代表：单行全文-文件日志（详见[使用单行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17421)）；
- fullregex_log代表：单行完全正则-文件日志（详见[使用单行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52365)）；
- multiline_log代表：多行全文-文件日志（详见[使用多行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17422)）；
- multiline_fullregex_log代表：多行完全正则-文件日志（详见[使用多行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52366)）；
- user_define_log代表：组合解析（适用于多格式嵌套的日志，详见[使用组合解析提取模式采集日志](https://cloud.tencent.com/document/product/614/61310)）。
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置采集的日志类型，默认为minimalist_log。支持以下类型：
- json_log代表：JSON-文件日志（详见[使用 JSON 提取模式采集日志](https://cloud.tencent.com/document/product/614/17419)）；
- delimiter_log代表：分隔符-文件日志（详见[使用分隔符提取模式采集日志](https://cloud.tencent.com/document/product/614/17420)）；
- minimalist_log代表：单行全文-文件日志（详见[使用单行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17421)）；
- fullregex_log代表：单行完全正则-文件日志（详见[使用单行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52365)）；
- multiline_log代表：多行全文-文件日志（详见[使用多行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17422)）；
- multiline_fullregex_log代表：多行完全正则-文件日志（详见[使用多行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52366)）；
- user_define_log代表：组合解析（适用于多格式嵌套的日志，详见[使用组合解析提取模式采集日志](https://cloud.tencent.com/document/product/614/61310)）。
                     * @param _logType 采集的日志类型，默认为minimalist_log。支持以下类型：
- json_log代表：JSON-文件日志（详见[使用 JSON 提取模式采集日志](https://cloud.tencent.com/document/product/614/17419)）；
- delimiter_log代表：分隔符-文件日志（详见[使用分隔符提取模式采集日志](https://cloud.tencent.com/document/product/614/17420)）；
- minimalist_log代表：单行全文-文件日志（详见[使用单行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17421)）；
- fullregex_log代表：单行完全正则-文件日志（详见[使用单行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52365)）；
- multiline_log代表：多行全文-文件日志（详见[使用多行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17422)）；
- multiline_fullregex_log代表：多行完全正则-文件日志（详见[使用多行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52366)）；
- user_define_log代表：组合解析（适用于多格式嵌套的日志，详见[使用组合解析提取模式采集日志](https://cloud.tencent.com/document/product/614/61310)）。
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
                     * 获取采集配置标记。
- 目前只支持label_k8s，用于标记自建k8s集群使用的采集配置

                     * @return ConfigFlag 采集配置标记。
- 目前只支持label_k8s，用于标记自建k8s集群使用的采集配置

                     * 
                     */
                    std::string GetConfigFlag() const;

                    /**
                     * 设置采集配置标记。
- 目前只支持label_k8s，用于标记自建k8s集群使用的采集配置

                     * @param _configFlag 采集配置标记。
- 目前只支持label_k8s，用于标记自建k8s集群使用的采集配置

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
                     * 获取日志集id
                     * @return LogsetId 日志集id
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置日志集id
                     * @param _logsetId 日志集id
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
                     * 获取日志主题名称
                     * @return TopicName 日志主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题名称
                     * @param _topicName 日志主题名称
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
                     * 获取节点文件路径类型配置。
                     * @return HostFile 节点文件路径类型配置。
                     * 
                     */
                    HostFileInfo GetHostFile() const;

                    /**
                     * 设置节点文件路径类型配置。
                     * @param _hostFile 节点文件路径类型配置。
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
                     * 获取容器文件路径类型配置。
                     * @return ContainerFile 容器文件路径类型配置。
                     * 
                     */
                    ContainerFileInfo GetContainerFile() const;

                    /**
                     * 设置容器文件路径类型配置。
                     * @param _containerFile 容器文件路径类型配置。
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
                     * 获取容器标准输出类型配置。
                     * @return ContainerStdout 容器标准输出类型配置。
                     * 
                     */
                    ContainerStdoutInfo GetContainerStdout() const;

                    /**
                     * 设置容器标准输出类型配置。
                     * @param _containerStdout 容器标准输出类型配置。
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
                     * 获取日志格式化方式，用于容器采集场景。
- stdout-docker-json：用于docker容器采集场景
- stdout-containerd：用于containerd容器采集场景
                     * @return LogFormat 日志格式化方式，用于容器采集场景。
- stdout-docker-json：用于docker容器采集场景
- stdout-containerd：用于containerd容器采集场景
                     * @deprecated
                     */
                    std::string GetLogFormat() const;

                    /**
                     * 设置日志格式化方式，用于容器采集场景。
- stdout-docker-json：用于docker容器采集场景
- stdout-containerd：用于containerd容器采集场景
                     * @param _logFormat 日志格式化方式，用于容器采集场景。
- stdout-docker-json：用于docker容器采集场景
- stdout-containerd：用于containerd容器采集场景
                     * @deprecated
                     */
                    void SetLogFormat(const std::string& _logFormat);

                    /**
                     * 判断参数 LogFormat 是否已赋值
                     * @return LogFormat 是否已赋值
                     * @deprecated
                     */
                    bool LogFormatHasBeenSet() const;

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
                     * @return ExcludePaths 采集黑名单路径列表
                     * 
                     */
                    std::vector<ExcludePathInfo> GetExcludePaths() const;

                    /**
                     * 设置采集黑名单路径列表
                     * @param _excludePaths 采集黑名单路径列表
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
                     * 获取组合解析采集规则，用于复杂场景下的日志采集。
- 取值参考：[使用组合解析提取模式采集日志
](https://cloud.tencent.com/document/product/614/61310)
                     * @return UserDefineRule 组合解析采集规则，用于复杂场景下的日志采集。
- 取值参考：[使用组合解析提取模式采集日志
](https://cloud.tencent.com/document/product/614/61310)
                     * 
                     */
                    std::string GetUserDefineRule() const;

                    /**
                     * 设置组合解析采集规则，用于复杂场景下的日志采集。
- 取值参考：[使用组合解析提取模式采集日志
](https://cloud.tencent.com/document/product/614/61310)
                     * @param _userDefineRule 组合解析采集规则，用于复杂场景下的日志采集。
- 取值参考：[使用组合解析提取模式采集日志
](https://cloud.tencent.com/document/product/614/61310)
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
                     * 获取绑定的机器组id
                     * @return GroupId 绑定的机器组id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置绑定的机器组id
                     * @param _groupId 绑定的机器组id
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
                     * 获取绑定的机器组id列表
                     * @return GroupIds 绑定的机器组id列表
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置绑定的机器组id列表
                     * @param _groupIds 绑定的机器组id列表
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取采集相关配置信息。详情见CollectInfo复杂类型配置。
                     * @return CollectInfos 采集相关配置信息。详情见CollectInfo复杂类型配置。
                     * 
                     */
                    std::vector<CollectInfo> GetCollectInfos() const;

                    /**
                     * 设置采集相关配置信息。详情见CollectInfo复杂类型配置。
                     * @param _collectInfos 采集相关配置信息。详情见CollectInfo复杂类型配置。
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
- ClsAgentDefault(自定义默认值，无特殊含义，用于清空其他选项)，建议取值0

                     * @return AdvancedConfig 高级采集配置。 Json字符串， Key/Value定义为如下：
- ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时
- ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数
- ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false
- ClsAgentDefault(自定义默认值，无特殊含义，用于清空其他选项)，建议取值0

                     * 
                     */
                    std::string GetAdvancedConfig() const;

                    /**
                     * 设置高级采集配置。 Json字符串， Key/Value定义为如下：
- ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时
- ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数
- ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false
- ClsAgentDefault(自定义默认值，无特殊含义，用于清空其他选项)，建议取值0

                     * @param _advancedConfig 高级采集配置。 Json字符串， Key/Value定义为如下：
- ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时
- ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数
- ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false
- ClsAgentDefault(自定义默认值，无特殊含义，用于清空其他选项)，建议取值0

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
                     * 采集配置规程名称，最长63个字符，只能包含小写字符、数字及分隔符（“-”），且必须以小写字符开头，数字或小写字符结尾
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 日志主题id
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志源类型。支持 container_stdout：容器标准输出；container_file：容器文件路径；host_file：节点文件路径。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 采集的日志类型，默认为minimalist_log。支持以下类型：
- json_log代表：JSON-文件日志（详见[使用 JSON 提取模式采集日志](https://cloud.tencent.com/document/product/614/17419)）；
- delimiter_log代表：分隔符-文件日志（详见[使用分隔符提取模式采集日志](https://cloud.tencent.com/document/product/614/17420)）；
- minimalist_log代表：单行全文-文件日志（详见[使用单行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17421)）；
- fullregex_log代表：单行完全正则-文件日志（详见[使用单行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52365)）；
- multiline_log代表：多行全文-文件日志（详见[使用多行全文提取模式采集日志](https://cloud.tencent.com/document/product/614/17422)）；
- multiline_fullregex_log代表：多行完全正则-文件日志（详见[使用多行-完全正则提取模式采集日志](https://cloud.tencent.com/document/product/614/52366)）；
- user_define_log代表：组合解析（适用于多格式嵌套的日志，详见[使用组合解析提取模式采集日志](https://cloud.tencent.com/document/product/614/61310)）。
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 采集配置标记。
- 目前只支持label_k8s，用于标记自建k8s集群使用的采集配置

                     */
                    std::string m_configFlag;
                    bool m_configFlagHasBeenSet;

                    /**
                     * 日志集id
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * 日志集name
                     */
                    std::string m_logsetName;
                    bool m_logsetNameHasBeenSet;

                    /**
                     * 日志主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 节点文件路径类型配置。
                     */
                    HostFileInfo m_hostFile;
                    bool m_hostFileHasBeenSet;

                    /**
                     * 容器文件路径类型配置。
                     */
                    ContainerFileInfo m_containerFile;
                    bool m_containerFileHasBeenSet;

                    /**
                     * 容器标准输出类型配置。
                     */
                    ContainerStdoutInfo m_containerStdout;
                    bool m_containerStdoutHasBeenSet;

                    /**
                     * 日志格式化方式，用于容器采集场景。
- stdout-docker-json：用于docker容器采集场景
- stdout-containerd：用于containerd容器采集场景
                     */
                    std::string m_logFormat;
                    bool m_logFormatHasBeenSet;

                    /**
                     * 提取规则，如果设置了ExtractRule，则必须设置LogType
                     */
                    ExtractRuleInfo m_extractRule;
                    bool m_extractRuleHasBeenSet;

                    /**
                     * 采集黑名单路径列表
                     */
                    std::vector<ExcludePathInfo> m_excludePaths;
                    bool m_excludePathsHasBeenSet;

                    /**
                     * 组合解析采集规则，用于复杂场景下的日志采集。
- 取值参考：[使用组合解析提取模式采集日志
](https://cloud.tencent.com/document/product/614/61310)
                     */
                    std::string m_userDefineRule;
                    bool m_userDefineRuleHasBeenSet;

                    /**
                     * 绑定的机器组id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 绑定的机器组id列表
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 采集相关配置信息。详情见CollectInfo复杂类型配置。
                     */
                    std::vector<CollectInfo> m_collectInfos;
                    bool m_collectInfosHasBeenSet;

                    /**
                     * 高级采集配置。 Json字符串， Key/Value定义为如下：
- ClsAgentFileTimeout(超时属性), 取值范围: 大于等于0的整数， 0为不超时
- ClsAgentMaxDepth(最大目录深度)，取值范围: 大于等于0的整数
- ClsAgentParseFailMerge(合并解析失败日志)，取值范围: true或false
- ClsAgentDefault(自定义默认值，无特殊含义，用于清空其他选项)，建议取值0

                     */
                    std::string m_advancedConfig;
                    bool m_advancedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CREATECONFIGEXTRAREQUEST_H_
