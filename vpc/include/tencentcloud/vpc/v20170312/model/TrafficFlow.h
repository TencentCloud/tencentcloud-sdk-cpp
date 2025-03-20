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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICFLOW_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICFLOW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 流量描述。
                */
                class TrafficFlow : public AbstractModel
                {
                public:
                    TrafficFlow();
                    ~TrafficFlow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实际流量，单位为 字节
                     * @return Value 实际流量，单位为 字节
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置实际流量，单位为 字节
                     * @param _value 实际流量，单位为 字节
                     * 
                     */
                    void SetValue(const uint64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取格式化后的流量，单位见参数 FormatUnit
                     * @return FormatValue 格式化后的流量，单位见参数 FormatUnit
                     * 
                     */
                    double GetFormatValue() const;

                    /**
                     * 设置格式化后的流量，单位见参数 FormatUnit
                     * @param _formatValue 格式化后的流量，单位见参数 FormatUnit
                     * 
                     */
                    void SetFormatValue(const double& _formatValue);

                    /**
                     * 判断参数 FormatValue 是否已赋值
                     * @return FormatValue 是否已赋值
                     * 
                     */
                    bool FormatValueHasBeenSet() const;

                    /**
                     * 获取格式化后流量的单位
                     * @return FormatUnit 格式化后流量的单位
                     * 
                     */
                    std::string GetFormatUnit() const;

                    /**
                     * 设置格式化后流量的单位
                     * @param _formatUnit 格式化后流量的单位
                     * 
                     */
                    void SetFormatUnit(const std::string& _formatUnit);

                    /**
                     * 判断参数 FormatUnit 是否已赋值
                     * @return FormatUnit 是否已赋值
                     * 
                     */
                    bool FormatUnitHasBeenSet() const;

                private:

                    /**
                     * 实际流量，单位为 字节
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 格式化后的流量，单位见参数 FormatUnit
                     */
                    double m_formatValue;
                    bool m_formatValueHasBeenSet;

                    /**
                     * 格式化后流量的单位
                     */
                    std::string m_formatUnit;
                    bool m_formatUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_TRAFFICFLOW_H_
