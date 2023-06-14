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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_HORIZONTALPODAUTOSCALER_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_HORIZONTALPODAUTOSCALER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/ResourceMetricTarget.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * pod水平伸缩配置
                */
                class HorizontalPodAutoscaler : public AbstractModel
                {
                public:
                    HorizontalPodAutoscaler();
                    ~HorizontalPodAutoscaler() = default;
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
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
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
                     * 获取最小实例数
                     * @return MinReplicas 最小实例数
                     * 
                     */
                    int64_t GetMinReplicas() const;

                    /**
                     * 设置最小实例数
                     * @param _minReplicas 最小实例数
                     * 
                     */
                    void SetMinReplicas(const int64_t& _minReplicas);

                    /**
                     * 判断参数 MinReplicas 是否已赋值
                     * @return MinReplicas 是否已赋值
                     * 
                     */
                    bool MinReplicasHasBeenSet() const;

                    /**
                     * 获取最大实例数
                     * @return MaxReplicas 最大实例数
                     * 
                     */
                    int64_t GetMaxReplicas() const;

                    /**
                     * 设置最大实例数
                     * @param _maxReplicas 最大实例数
                     * 
                     */
                    void SetMaxReplicas(const int64_t& _maxReplicas);

                    /**
                     * 判断参数 MaxReplicas 是否已赋值
                     * @return MaxReplicas 是否已赋值
                     * 
                     */
                    bool MaxReplicasHasBeenSet() const;

                    /**
                     * 获取资源目标指标
                     * @return ResourceMetricTarget 资源目标指标
                     * 
                     */
                    std::vector<ResourceMetricTarget> GetResourceMetricTarget() const;

                    /**
                     * 设置资源目标指标
                     * @param _resourceMetricTarget 资源目标指标
                     * 
                     */
                    void SetResourceMetricTarget(const std::vector<ResourceMetricTarget>& _resourceMetricTarget);

                    /**
                     * 判断参数 ResourceMetricTarget 是否已赋值
                     * @return ResourceMetricTarget 是否已赋值
                     * 
                     */
                    bool ResourceMetricTargetHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 最小实例数
                     */
                    int64_t m_minReplicas;
                    bool m_minReplicasHasBeenSet;

                    /**
                     * 最大实例数
                     */
                    int64_t m_maxReplicas;
                    bool m_maxReplicasHasBeenSet;

                    /**
                     * 资源目标指标
                     */
                    std::vector<ResourceMetricTarget> m_resourceMetricTarget;
                    bool m_resourceMetricTargetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_HORIZONTALPODAUTOSCALER_H_
