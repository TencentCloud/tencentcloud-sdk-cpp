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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIGMETRIC_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIGMETRIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 弹性伸缩配置指标
                */
                class CloudNativeAPIGatewayStrategyAutoScalerConfigMetric : public AbstractModel
                {
                public:
                    CloudNativeAPIGatewayStrategyAutoScalerConfigMetric();
                    ~CloudNativeAPIGatewayStrategyAutoScalerConfigMetric() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标类型
- Resource
                     * @return Type 指标类型
- Resource
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置指标类型
- Resource
                     * @param _type 指标类型
- Resource
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
                     * 获取指标资源名称
- cpu
- memory
                     * @return ResourceName 指标资源名称
- cpu
- memory
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置指标资源名称
- cpu
- memory
                     * @param _resourceName 指标资源名称
- cpu
- memory
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取指标目标类型，目前只支持百分比Utilization
                     * @return TargetType 指标目标类型，目前只支持百分比Utilization
                     * 
                     */
                    std::string GetTargetType() const;

                    /**
                     * 设置指标目标类型，目前只支持百分比Utilization
                     * @param _targetType 指标目标类型，目前只支持百分比Utilization
                     * 
                     */
                    void SetTargetType(const std::string& _targetType);

                    /**
                     * 判断参数 TargetType 是否已赋值
                     * @return TargetType 是否已赋值
                     * 
                     */
                    bool TargetTypeHasBeenSet() const;

                    /**
                     * 获取指标目标值
                     * @return TargetValue 指标目标值
                     * 
                     */
                    int64_t GetTargetValue() const;

                    /**
                     * 设置指标目标值
                     * @param _targetValue 指标目标值
                     * 
                     */
                    void SetTargetValue(const int64_t& _targetValue);

                    /**
                     * 判断参数 TargetValue 是否已赋值
                     * @return TargetValue 是否已赋值
                     * 
                     */
                    bool TargetValueHasBeenSet() const;

                private:

                    /**
                     * 指标类型
- Resource
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 指标资源名称
- cpu
- memory
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 指标目标类型，目前只支持百分比Utilization
                     */
                    std::string m_targetType;
                    bool m_targetTypeHasBeenSet;

                    /**
                     * 指标目标值
                     */
                    int64_t m_targetValue;
                    bool m_targetValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOUDNATIVEAPIGATEWAYSTRATEGYAUTOSCALERCONFIGMETRIC_H_
