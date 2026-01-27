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
                     * 获取采集配置名称
                     * @return TargetName 采集配置名称
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置采集配置名称
                     * @param _targetName 采集配置名称
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
                     * 获取命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespaces 命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Namespaces GetNamespaces() const;

                    /**
                     * 设置命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaces 命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。
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
                     * 获取Pod标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodLabels Pod标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PodLabel> GetPodLabels() const;

                    /**
                     * 设置Pod标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podLabels Pod标签列表
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
                     * 获取容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName 容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerName 容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符
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
                     * 获取ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexPrefix ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexPrefix() const;

                    /**
                     * 设置ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexPrefix ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
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
                     * 获取日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogFilters 日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogFilters() const;

                    /**
                     * 设置日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logFilters 日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符
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
                     * 获取高级配置，可自定义采集规则，最多支持2048个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigContent 高级配置，可自定义采集规则，最多支持2048个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置高级配置，可自定义采集规则，最多支持2048个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configContent 高级配置，可自定义采集规则，最多支持2048个字符
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
                     * 获取Ckafka实例的Topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KafkaTopic Ckafka实例的Topic
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKafkaTopic() const;

                    /**
                     * 设置Ckafka实例的Topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kafkaTopic Ckafka实例的Topic
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
                     * 获取ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndexAlias ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndexAlias() const;

                    /**
                     * 设置ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indexAlias ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
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
                     * 获取/
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputType /
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置/
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputType /
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
                     * 获取日志采集host路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputPath 日志采集host路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputPath() const;

                    /**
                     * 设置日志采集host路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputPath 日志采集host路径
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
                     * 获取inputs.tail_files
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputsTailFiles inputs.tail_files
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetInputsTailFiles() const;

                    /**
                     * 设置inputs.tail_files
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputsTailFiles inputs.tail_files
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

                private:

                    /**
                     * 采集配置名称
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 命名空间列表，包括Include包含和Exclude不包含选项，两者都为空时等同于全部命名空间(包含当前所有的以及未来创建的)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Namespaces m_namespaces;
                    bool m_namespacesHasBeenSet;

                    /**
                     * Pod标签列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PodLabel> m_podLabels;
                    bool m_podLabelsHasBeenSet;

                    /**
                     * 容器名称，支持小写字母、数字、连接符-、下划线_，最多支持63个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * ES索引名称前缀，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称的前缀，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexPrefix;
                    bool m_indexPrefixHasBeenSet;

                    /**
                     * 日志内容过滤，以逗号分隔，支持大小写字母、数字、连接符-、下划线_以及逗号，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logFilters;
                    bool m_logFiltersHasBeenSet;

                    /**
                     * 高级配置，可自定义采集规则，最多支持2048个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * Ckafka实例的Topic
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kafkaTopic;
                    bool m_kafkaTopicHasBeenSet;

                    /**
                     * ES索引名称，如果当前采集配置下的容器日志输出到ES集群，则使用该字段作为ES索引名称，支持大小写字母、数字、连接符-、下划线_，最多支持50个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indexAlias;
                    bool m_indexAliasHasBeenSet;

                    /**
                     * /
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 日志采集host路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputPath;
                    bool m_inputPathHasBeenSet;

                    /**
                     * inputs.tail_files
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_inputsTailFiles;
                    bool m_inputsTailFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_COLLECTORTARGET_H_
