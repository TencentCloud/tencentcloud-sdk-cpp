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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DIDATASOURCETKE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DIDATASOURCETKE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 数据接入tke数据源信息
                */
                class DiDataSourceTke : public AbstractModel
                {
                public:
                    DiDataSourceTke();
                    ~DiDataSourceTke() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取tke实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TkeId tke实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTkeId() const;

                    /**
                     * 设置tke实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tkeId tke实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTkeId(const std::string& _tkeId);

                    /**
                     * 判断参数 TkeId 是否已赋值
                     * @return TkeId 是否已赋值
                     * 
                     */
                    bool TkeIdHasBeenSet() const;

                    /**
                     * 获取采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectorId 采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollectorId() const;

                    /**
                     * 设置采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectorId 采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectorId(const std::string& _collectorId);

                    /**
                     * 判断参数 CollectorId 是否已赋值
                     * @return CollectorId 是否已赋值
                     * 
                     */
                    bool CollectorIdHasBeenSet() const;

                    /**
                     * 获取采集源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectorName 采集源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollectorName() const;

                    /**
                     * 设置采集源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectorName 采集源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectorName(const std::string& _collectorName);

                    /**
                     * 判断参数 CollectorName 是否已赋值
                     * @return CollectorName 是否已赋值
                     * 
                     */
                    bool CollectorNameHasBeenSet() const;

                    /**
                     * 获取采集器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectorType 采集器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollectorType() const;

                    /**
                     * 设置采集器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectorType 采集器类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectorType(const std::string& _collectorType);

                    /**
                     * 判断参数 CollectorType 是否已赋值
                     * @return CollectorType 是否已赋值
                     * 
                     */
                    bool CollectorTypeHasBeenSet() const;

                    /**
                     * 获取采集器版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectorVersion 采集器版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCollectorVersion() const;

                    /**
                     * 设置采集器版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _collectorVersion 采集器版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCollectorVersion(const std::string& _collectorVersion);

                    /**
                     * 判断参数 CollectorVersion 是否已赋值
                     * @return CollectorVersion 是否已赋值
                     * 
                     */
                    bool CollectorVersionHasBeenSet() const;

                    /**
                     * 获取tke包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeNamespaces tke包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetIncludeNamespaces() const;

                    /**
                     * 设置tke包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeNamespaces tke包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncludeNamespaces(const std::vector<std::string>& _includeNamespaces);

                    /**
                     * 判断参数 IncludeNamespaces 是否已赋值
                     * @return IncludeNamespaces 是否已赋值
                     * 
                     */
                    bool IncludeNamespacesHasBeenSet() const;

                    /**
                     * 获取tke不包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExcludeNamespaces tke不包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExcludeNamespaces() const;

                    /**
                     * 设置tke不包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _excludeNamespaces tke不包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExcludeNamespaces(const std::vector<std::string>& _excludeNamespaces);

                    /**
                     * 判断参数 ExcludeNamespaces 是否已赋值
                     * @return ExcludeNamespaces 是否已赋值
                     * 
                     */
                    bool ExcludeNamespacesHasBeenSet() const;

                    /**
                     * 获取tke pod标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodLabelKeys tke pod标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPodLabelKeys() const;

                    /**
                     * 设置tke pod标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podLabelKeys tke pod标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodLabelKeys(const std::vector<std::string>& _podLabelKeys);

                    /**
                     * 判断参数 PodLabelKeys 是否已赋值
                     * @return PodLabelKeys 是否已赋值
                     * 
                     */
                    bool PodLabelKeysHasBeenSet() const;

                    /**
                     * 获取tke pod标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PodLabelValues tke pod标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetPodLabelValues() const;

                    /**
                     * 设置tke pod标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _podLabelValues tke pod标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPodLabelValues(const std::vector<std::string>& _podLabelValues);

                    /**
                     * 判断参数 PodLabelValues 是否已赋值
                     * @return PodLabelValues 是否已赋值
                     * 
                     */
                    bool PodLabelValuesHasBeenSet() const;

                    /**
                     * 获取tke容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContainerName tke容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置tke容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _containerName tke容器名称
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
                     * 获取tke采集器beat配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigContent tke采集器beat配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置tke采集器beat配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configContent tke采集器beat配置
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
                     * 获取TKE 日志采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputPath TKE 日志采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputPath() const;

                    /**
                     * 设置TKE 日志采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputPath TKE 日志采集路径
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

                private:

                    /**
                     * vpc id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * tke实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tkeId;
                    bool m_tkeIdHasBeenSet;

                    /**
                     * 采集器id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectorId;
                    bool m_collectorIdHasBeenSet;

                    /**
                     * 采集源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectorName;
                    bool m_collectorNameHasBeenSet;

                    /**
                     * 采集器类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectorType;
                    bool m_collectorTypeHasBeenSet;

                    /**
                     * 采集器版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectorVersion;
                    bool m_collectorVersionHasBeenSet;

                    /**
                     * tke包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_includeNamespaces;
                    bool m_includeNamespacesHasBeenSet;

                    /**
                     * tke不包含的命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_excludeNamespaces;
                    bool m_excludeNamespacesHasBeenSet;

                    /**
                     * tke pod标签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_podLabelKeys;
                    bool m_podLabelKeysHasBeenSet;

                    /**
                     * tke pod标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_podLabelValues;
                    bool m_podLabelValuesHasBeenSet;

                    /**
                     * tke容器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * tke采集器beat配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * /
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * TKE 日志采集路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputPath;
                    bool m_inputPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DIDATASOURCETKE_H_
