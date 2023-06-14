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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_RESOURCEMETRICTARGET_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_RESOURCEMETRICTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 资源目标指标
                */
                class ResourceMetricTarget : public AbstractModel
                {
                public:
                    ResourceMetricTarget();
                    ~ResourceMetricTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型(cpu|memory)
                     * @return Type 类型(cpu|memory)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型(cpu|memory)
                     * @param _type 类型(cpu|memory)
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
                     * 获取平均值
                     * @return AverageValue 平均值
                     * 
                     */
                    int64_t GetAverageValue() const;

                    /**
                     * 设置平均值
                     * @param _averageValue 平均值
                     * 
                     */
                    void SetAverageValue(const int64_t& _averageValue);

                    /**
                     * 判断参数 AverageValue 是否已赋值
                     * @return AverageValue 是否已赋值
                     * 
                     */
                    bool AverageValueHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Scale 单位
                     * 
                     */
                    std::string GetScale() const;

                    /**
                     * 设置单位
                     * @param _scale 单位
                     * 
                     */
                    void SetScale(const std::string& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取平均值
                     * @return AverageUtilization 平均值
                     * 
                     */
                    int64_t GetAverageUtilization() const;

                    /**
                     * 设置平均值
                     * @param _averageUtilization 平均值
                     * 
                     */
                    void SetAverageUtilization(const int64_t& _averageUtilization);

                    /**
                     * 判断参数 AverageUtilization 是否已赋值
                     * @return AverageUtilization 是否已赋值
                     * 
                     */
                    bool AverageUtilizationHasBeenSet() const;

                private:

                    /**
                     * 类型(cpu|memory)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 平均值
                     */
                    int64_t m_averageValue;
                    bool m_averageValueHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 平均值
                     */
                    int64_t m_averageUtilization;
                    bool m_averageUtilizationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_RESOURCEMETRICTARGET_H_
