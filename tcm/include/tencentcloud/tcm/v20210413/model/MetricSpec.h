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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_METRICSPEC_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_METRICSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcm/v20210413/model/PodsMetricSource.h>
#include <tencentcloud/tcm/v20210413/model/ResourceMetricSource.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * MetricSpec 描述如何通过指定指标进行自动扩缩容
                */
                class MetricSpec : public AbstractModel
                {
                public:
                    MetricSpec();
                    ~MetricSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标来源类型，支持 Pods/Resource
                     * @return Type 指标来源类型，支持 Pods/Resource
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置指标来源类型，支持 Pods/Resource
                     * @param _type 指标来源类型，支持 Pods/Resource
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
                     * 获取使用自定义指标扩进行自动扩缩容
                     * @return Pods 使用自定义指标扩进行自动扩缩容
                     * 
                     */
                    PodsMetricSource GetPods() const;

                    /**
                     * 设置使用自定义指标扩进行自动扩缩容
                     * @param _pods 使用自定义指标扩进行自动扩缩容
                     * 
                     */
                    void SetPods(const PodsMetricSource& _pods);

                    /**
                     * 判断参数 Pods 是否已赋值
                     * @return Pods 是否已赋值
                     * 
                     */
                    bool PodsHasBeenSet() const;

                    /**
                     * 获取使用资源指标扩进行自动扩缩容
                     * @return Resource 使用资源指标扩进行自动扩缩容
                     * 
                     */
                    ResourceMetricSource GetResource() const;

                    /**
                     * 设置使用资源指标扩进行自动扩缩容
                     * @param _resource 使用资源指标扩进行自动扩缩容
                     * 
                     */
                    void SetResource(const ResourceMetricSource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                private:

                    /**
                     * 指标来源类型，支持 Pods/Resource
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 使用自定义指标扩进行自动扩缩容
                     */
                    PodsMetricSource m_pods;
                    bool m_podsHasBeenSet;

                    /**
                     * 使用资源指标扩进行自动扩缩容
                     */
                    ResourceMetricSource m_resource;
                    bool m_resourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_METRICSPEC_H_
