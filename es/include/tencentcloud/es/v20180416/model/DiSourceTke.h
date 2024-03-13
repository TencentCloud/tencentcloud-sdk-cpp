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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DISOURCETKE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DISOURCETKE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/DiSourceTkePodLabel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 数据接入tke数据源
                */
                class DiSourceTke : public AbstractModel
                {
                public:
                    DiSourceTke();
                    ~DiSourceTke() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源所属vpc id，创建后不允许修改
                     * @return VpcId 数据源所属vpc id，创建后不允许修改
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置数据源所属vpc id，创建后不允许修改
                     * @param _vpcId 数据源所属vpc id，创建后不允许修改
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
                     * 获取tke实例id，创建后不允许修改
                     * @return TkeId tke实例id，创建后不允许修改
                     * 
                     */
                    std::string GetTkeId() const;

                    /**
                     * 设置tke实例id，创建后不允许修改
                     * @param _tkeId tke实例id，创建后不允许修改
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
                     * 获取tke包含的命名空间
                     * @return IncludeNamespaces tke包含的命名空间
                     * 
                     */
                    std::vector<std::string> GetIncludeNamespaces() const;

                    /**
                     * 设置tke包含的命名空间
                     * @param _includeNamespaces tke包含的命名空间
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
                     * @return ExcludeNamespaces tke不包含的命名空间
                     * 
                     */
                    std::vector<std::string> GetExcludeNamespaces() const;

                    /**
                     * 设置tke不包含的命名空间
                     * @param _excludeNamespaces tke不包含的命名空间
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
                     * 获取tke容器名称
                     * @return ContainerName tke容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置tke容器名称
                     * @param _containerName tke容器名称
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
                     * 获取tke日志内容过滤
                     * @return LogFilters tke日志内容过滤
                     * 
                     */
                    std::string GetLogFilters() const;

                    /**
                     * 设置tke日志内容过滤
                     * @param _logFilters tke日志内容过滤
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
                     * 获取tke beats配置项
                     * @return ConfigContent tke beats配置项
                     * 
                     */
                    std::string GetConfigContent() const;

                    /**
                     * 设置tke beats配置项
                     * @param _configContent tke beats配置项
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
                     * 获取tke pod标签
                     * @return PodLabel tke pod标签
                     * 
                     */
                    std::vector<DiSourceTkePodLabel> GetPodLabel() const;

                    /**
                     * 设置tke pod标签
                     * @param _podLabel tke pod标签
                     * 
                     */
                    void SetPodLabel(const std::vector<DiSourceTkePodLabel>& _podLabel);

                    /**
                     * 判断参数 PodLabel 是否已赋值
                     * @return PodLabel 是否已赋值
                     * 
                     */
                    bool PodLabelHasBeenSet() const;

                    /**
                     * 获取/
                     * @return InputType /
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置/
                     * @param _inputType /
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
                     * 获取tke 日志采集路径
                     * @return InputPath tke 日志采集路径
                     * 
                     */
                    std::string GetInputPath() const;

                    /**
                     * 设置tke 日志采集路径
                     * @param _inputPath tke 日志采集路径
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
                     * 数据源所属vpc id，创建后不允许修改
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * tke实例id，创建后不允许修改
                     */
                    std::string m_tkeId;
                    bool m_tkeIdHasBeenSet;

                    /**
                     * tke包含的命名空间
                     */
                    std::vector<std::string> m_includeNamespaces;
                    bool m_includeNamespacesHasBeenSet;

                    /**
                     * tke不包含的命名空间
                     */
                    std::vector<std::string> m_excludeNamespaces;
                    bool m_excludeNamespacesHasBeenSet;

                    /**
                     * tke容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * tke日志内容过滤
                     */
                    std::string m_logFilters;
                    bool m_logFiltersHasBeenSet;

                    /**
                     * tke beats配置项
                     */
                    std::string m_configContent;
                    bool m_configContentHasBeenSet;

                    /**
                     * tke pod标签
                     */
                    std::vector<DiSourceTkePodLabel> m_podLabel;
                    bool m_podLabelHasBeenSet;

                    /**
                     * /
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * tke 日志采集路径
                     */
                    std::string m_inputPath;
                    bool m_inputPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DISOURCETKE_H_
