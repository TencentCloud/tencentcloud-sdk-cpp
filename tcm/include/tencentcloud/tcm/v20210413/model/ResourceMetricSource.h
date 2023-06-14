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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_RESOURCEMETRICSOURCE_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_RESOURCEMETRICSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * ResourceMetricSource 定义了如何根据已知类型的资源指标进行扩缩容
                */
                class ResourceMetricSource : public AbstractModel
                {
                public:
                    ResourceMetricSource();
                    ~ResourceMetricSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源名称 cpu/memory
                     * @return Name 资源名称 cpu/memory
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源名称 cpu/memory
                     * @param _name 资源名称 cpu/memory
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
                     * 获取目标平均利用率
                     * @return TargetAverageUtilization 目标平均利用率
                     * 
                     */
                    int64_t GetTargetAverageUtilization() const;

                    /**
                     * 设置目标平均利用率
                     * @param _targetAverageUtilization 目标平均利用率
                     * 
                     */
                    void SetTargetAverageUtilization(const int64_t& _targetAverageUtilization);

                    /**
                     * 判断参数 TargetAverageUtilization 是否已赋值
                     * @return TargetAverageUtilization 是否已赋值
                     * 
                     */
                    bool TargetAverageUtilizationHasBeenSet() const;

                    /**
                     * 获取目标平均值
                     * @return TargetAverageValue 目标平均值
                     * 
                     */
                    std::string GetTargetAverageValue() const;

                    /**
                     * 设置目标平均值
                     * @param _targetAverageValue 目标平均值
                     * 
                     */
                    void SetTargetAverageValue(const std::string& _targetAverageValue);

                    /**
                     * 判断参数 TargetAverageValue 是否已赋值
                     * @return TargetAverageValue 是否已赋值
                     * 
                     */
                    bool TargetAverageValueHasBeenSet() const;

                private:

                    /**
                     * 资源名称 cpu/memory
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 目标平均利用率
                     */
                    int64_t m_targetAverageUtilization;
                    bool m_targetAverageUtilizationHasBeenSet;

                    /**
                     * 目标平均值
                     */
                    std::string m_targetAverageValue;
                    bool m_targetAverageValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_RESOURCEMETRICSOURCE_H_
