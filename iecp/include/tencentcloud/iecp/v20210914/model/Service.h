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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_SERVICE_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_SERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/PortConfig.h>
#include <tencentcloud/iecp/v20210914/model/Label.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 服务配置
                */
                class Service : public AbstractModel
                {
                public:
                    Service();
                    ~Service() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取类型 (ClusterIP|NodePort)
                     * @return Type 类型 (ClusterIP|NodePort)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型 (ClusterIP|NodePort)
                     * @param _type 类型 (ClusterIP|NodePort)
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
                     * 获取端口配置
                     * @return Ports 端口配置
                     * 
                     */
                    std::vector<PortConfig> GetPorts() const;

                    /**
                     * 设置端口配置
                     * @param _ports 端口配置
                     * 
                     */
                    void SetPorts(const std::vector<PortConfig>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return Labels 标签
                     * 
                     */
                    std::vector<Label> GetLabels() const;

                    /**
                     * 设置标签
                     * @param _labels 标签
                     * 
                     */
                    void SetLabels(const std::vector<Label>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取命名空间默认default
                     * @return Namespace 命名空间默认default
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间默认default
                     * @param _namespace 命名空间默认default
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取服务IP
                     * @return ClusterIP 服务IP
                     * 
                     */
                    std::string GetClusterIP() const;

                    /**
                     * 设置服务IP
                     * @param _clusterIP 服务IP
                     * 
                     */
                    void SetClusterIP(const std::string& _clusterIP);

                    /**
                     * 判断参数 ClusterIP 是否已赋值
                     * @return ClusterIP 是否已赋值
                     * 
                     */
                    bool ClusterIPHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型 (ClusterIP|NodePort)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 端口配置
                     */
                    std::vector<PortConfig> m_ports;
                    bool m_portsHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<Label> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 命名空间默认default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 服务IP
                     */
                    std::string m_clusterIP;
                    bool m_clusterIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_SERVICE_H_
