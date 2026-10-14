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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_COLLECTORTARGET_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_COLLECTORTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/Namespaces.h>
#include <tencentcloud/es/v20180416/model/PodLabel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 容器日志采集配置
                */
                class CollectorTarget : public AbstractModel
                {
                public:
                    CollectorTarget();
                    ~CollectorTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>采集配置名称</p>
                     * @return TargetName <p>采集配置名称</p>
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置<p>采集配置名称</p>
                     * @param _targetName <p>采集配置名称</p>
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取<p>命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespaces <p>命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Namespaces GetNamespaces() const;

                    /**
                     * 设置<p>命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaces <p>命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaces(const Namespaces& _namespaces);

                    /**
                     * 判断参数 Namespaces 是否已赋值
                     * @return Namespaces 是否已赋值
                     * 
                     */
                    bool NamespacesHasBeenSet() const;

                    /**
                     * 获取<p>Pod标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodLabels <p>Pod标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PodLabel> GetPodLabels() const;

                    /**
                     * 设置<p>Pod标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podLabels <p>Pod标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodLabels(const std::vector<PodLabel>& _podLabels);

                    /**
                     * 判断参数 PodLabels 是否已赋值
                     * @return PodLabels 是否已赋值
                     * 
                     */
                    bool PodLabelsHasBeenSet() const;

                    /**
                     * 获取<p>容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName <p>容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置<p>容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerName <p>容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取<p>ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexPrefix <p>ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexPrefix() const;

                    /**
                     * 设置<p>ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexPrefix <p>ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexPrefix(const std::string& _indexPrefix);

                    /**
                     * 判断参数 IndexPrefix 是否已赋值
                     * @return IndexPrefix 是否已赋值
                     * 
                     */
                    bool IndexPrefixHasBeenSet() const;

                    /**
                     * 获取<p>日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogFilters <p>日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogFilters() const;

                    /**
                     * 设置<p>日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logFilters <p>日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogFilters(const std::string& _logFilters);

                    /**
                     * 判断参数 LogFilters 是否已赋值
                     * @return LogFilters 是否已赋值
                     * 
                     */
                    bool LogFiltersHasBeenSet() const;

                    /**
                     * 获取<p>高级配置，可自定义采集规则，最多支持2048个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigContent <p>高级配置，可自定义采集规则，最多支持2048个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置<p>高级配置，可自定义采集规则，最多支持2048个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configContent <p>高级配置，可自定义采集规则，最多支持2048个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigContent(const std::string& _configContent);

                    /**
                     * 判断参数 ConfigContent 是否已赋值
                     * @return ConfigContent 是否已赋值
                     * 
                     */
                    bool ConfigContentHasBeenSet() const;

                    /**
                     * 获取<p>Ckafka实例的Topic</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaTopic <p>Ckafka实例的Topic</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKafkaTopic() const;

                    /**
                     * 设置<p>Ckafka实例的Topic</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaTopic <p>Ckafka实例的Topic</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKafkaTopic(const std::string& _kafkaTopic);

                    /**
                     * 判断参数 KafkaTopic 是否已赋值
                     * @return KafkaTopic 是否已赋值
                     * 
                     */
                    bool KafkaTopicHasBeenSet() const;

                    /**
                     * 获取<p>ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexAlias <p>ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexAlias() const;

                    /**
                     * 设置<p>ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexAlias <p>ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndexAlias(const std::string& _indexAlias);

                    /**
                     * 判断参数 IndexAlias 是否已赋值
                     * @return IndexAlias 是否已赋值
                     * 
                     */
                    bool IndexAliasHasBeenSet() const;

                    /**
                     * 获取<p>/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputType <p>/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置<p>/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputType <p>/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取<p>日志采集host路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputPath <p>日志采集host路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputPath() const;

                    /**
                     * 设置<p>日志采集host路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputPath <p>日志采集host路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputPath(const std::string& _inputPath);

                    /**
                     * 判断参数 InputPath 是否已赋值
                     * @return InputPath 是否已赋值
                     * 
                     */
                    bool InputPathHasBeenSet() const;

                    /**
                     * 获取<p>inputs.tail_files</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputsTailFiles <p>inputs.tail_files</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInputsTailFiles() const;

                    /**
                     * 设置<p>inputs.tail_files</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputsTailFiles <p>inputs.tail_files</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputsTailFiles(const bool& _inputsTailFiles);

                    /**
                     * 判断参数 InputsTailFiles 是否已赋值
                     * @return InputsTailFiles 是否已赋值
                     * 
                     */
                    bool InputsTailFilesHasBeenSet() const;

                    /**
                     * 获取<p>开关inputs.multitline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputsMultiLineEnabled <p>开关inputs.multitline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInputsMultiLineEnabled() const;

                    /**
                     * 设置<p>开关inputs.multitline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputsMultiLineEnabled <p>开关inputs.multitline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputsMultiLineEnabled(const bool& _inputsMultiLineEnabled);

                    /**
                     * 判断参数 InputsMultiLineEnabled 是否已赋值
                     * @return InputsMultiLineEnabled 是否已赋值
                     * 
                     */
                    bool InputsMultiLineEnabledHasBeenSet() const;

                    /**
                     * 获取<p>inputs.multiline.type</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputsMultiLineType <p>inputs.multiline.type</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputsMultiLineType() const;

                    /**
                     * 设置<p>inputs.multiline.type</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputsMultiLineType <p>inputs.multiline.type</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputsMultiLineType(const std::string& _inputsMultiLineType);

                    /**
                     * 判断参数 InputsMultiLineType 是否已赋值
                     * @return InputsMultiLineType 是否已赋值
                     * 
                     */
                    bool InputsMultiLineTypeHasBeenSet() const;

                    /**
                     * 获取<p>inputs.multiline.pattern</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputsMultiLinePattern <p>inputs.multiline.pattern</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputsMultiLinePattern() const;

                    /**
                     * 设置<p>inputs.multiline.pattern</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputsMultiLinePattern <p>inputs.multiline.pattern</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputsMultiLinePattern(const std::string& _inputsMultiLinePattern);

                    /**
                     * 判断参数 InputsMultiLinePattern 是否已赋值
                     * @return InputsMultiLinePattern 是否已赋值
                     * 
                     */
                    bool InputsMultiLinePatternHasBeenSet() const;

                    /**
                     * 获取<p>inputs.multiline.negate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputsMultiLineNegate <p>inputs.multiline.negate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInputsMultiLineNegate() const;

                    /**
                     * 设置<p>inputs.multiline.negate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputsMultiLineNegate <p>inputs.multiline.negate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputsMultiLineNegate(const bool& _inputsMultiLineNegate);

                    /**
                     * 判断参数 InputsMultiLineNegate 是否已赋值
                     * @return InputsMultiLineNegate 是否已赋值
                     * 
                     */
                    bool InputsMultiLineNegateHasBeenSet() const;

                    /**
                     * 获取<p>inputs.multiline.match</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputsMultiLineMatch <p>inputs.multiline.match</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputsMultiLineMatch() const;

                    /**
                     * 设置<p>inputs.multiline.match</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputsMultiLineMatch <p>inputs.multiline.match</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputsMultiLineMatch(const std::string& _inputsMultiLineMatch);

                    /**
                     * 判断参数 InputsMultiLineMatch 是否已赋值
                     * @return InputsMultiLineMatch 是否已赋值
                     * 
                     */
                    bool InputsMultiLineMatchHasBeenSet() const;

                    /**
                     * 获取<p>按空间采集时 tke 的采集类型，默认为 container，支持 container、filestream</p>
                     * @return TkeCollectType <p>按空间采集时 tke 的采集类型，默认为 container，支持 container、filestream</p>
                     * 
                     */
                    std::string GetTkeCollectType() const;

                    /**
                     * 设置<p>按空间采集时 tke 的采集类型，默认为 container，支持 container、filestream</p>
                     * @param _tkeCollectType <p>按空间采集时 tke 的采集类型，默认为 container，支持 container、filestream</p>
                     * 
                     */
                    void SetTkeCollectType(const std::string& _tkeCollectType);

                    /**
                     * 判断参数 TkeCollectType 是否已赋值
                     * @return TkeCollectType 是否已赋值
                     * 
                     */
                    bool TkeCollectTypeHasBeenSet() const;

                private:

                    /**
                     * <p>采集配置名称</p>
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * <p>命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Namespaces m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * <p>Pod标签列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PodLabel> m_podLabels;
                    bool m_podLabelsHasBeenSet;

                    /**
                     * <p>容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * <p>ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexPrefix;
                    bool m_indexPrefixHasBeenSet;

                    /**
                     * <p>日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logFilters;
                    bool m_logFiltersHasBeenSet;

                    /**
                     * <p>高级配置，可自定义采集规则，最多支持2048个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * <p>Ckafka实例的Topic</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaTopic;
                    bool m_kafkaTopicHasBeenSet;

                    /**
                     * <p>ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexAlias;
                    bool m_indexAliasHasBeenSet;

                    /**
                     * <p>/</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * <p>日志采集host路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputPath;
                    bool m_inputPathHasBeenSet;

                    /**
                     * <p>inputs.tail_files</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_inputsTailFiles;
                    bool m_inputsTailFilesHasBeenSet;

                    /**
                     * <p>开关inputs.multitline</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_inputsMultiLineEnabled;
                    bool m_inputsMultiLineEnabledHasBeenSet;

                    /**
                     * <p>inputs.multiline.type</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputsMultiLineType;
                    bool m_inputsMultiLineTypeHasBeenSet;

                    /**
                     * <p>inputs.multiline.pattern</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputsMultiLinePattern;
                    bool m_inputsMultiLinePatternHasBeenSet;

                    /**
                     * <p>inputs.multiline.negate</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_inputsMultiLineNegate;
                    bool m_inputsMultiLineNegateHasBeenSet;

                    /**
                     * <p>inputs.multiline.match</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputsMultiLineMatch;
                    bool m_inputsMultiLineMatchHasBeenSet;

                    /**
                     * <p>按空间采集时 tke 的采集类型，默认为 container，支持 container、filestream</p>
                     */
                    std::string m_tkeCollectType;
                    bool m_tkeCollectTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COLLECTORTARGET_H_
