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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_METRICSPEC_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_METRICSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/CustomMetricSpec.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 采集对象
                */
                class MetricSpec : public AbstractModel
                {
                public:
                    MetricSpec();
                    ~MetricSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义指标采集配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomSpecs 自定义指标采集配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CustomMetricSpec> GetCustomSpecs() const;

                    /**
                     * 设置自定义指标采集配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customSpecs 自定义指标采集配置项
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustomSpecs(const std::vector<CustomMetricSpec>& _customSpecs);

                    /**
                     * 判断参数 CustomSpecs 是否已赋值
                     * @return CustomSpecs 是否已赋值
                     * 
                     */
                    bool CustomSpecsHasBeenSet() const;

                private:

                    /**
                     * 自定义指标采集配置项
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CustomMetricSpec> m_customSpecs;
                    bool m_customSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_METRICSPEC_H_
