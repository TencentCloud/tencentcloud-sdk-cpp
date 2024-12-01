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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DOSAGEBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DOSAGEBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 药物用法用量
                */
                class DosageBlock : public AbstractModel
                {
                public:
                    DosageBlock();
                    ~DosageBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值
                     * @return Value 值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置值
                     * @param _value 值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取单次计量
                     * @return SingleMeasurement 单次计量
                     * 
                     */
                    std::string GetSingleMeasurement() const;

                    /**
                     * 设置单次计量
                     * @param _singleMeasurement 单次计量
                     * 
                     */
                    void SetSingleMeasurement(const std::string& _singleMeasurement);

                    /**
                     * 判断参数 SingleMeasurement 是否已赋值
                     * @return SingleMeasurement 是否已赋值
                     * 
                     */
                    bool SingleMeasurementHasBeenSet() const;

                    /**
                     * 获取频次
                     * @return Frequency 频次
                     * 
                     */
                    std::string GetFrequency() const;

                    /**
                     * 设置频次
                     * @param _frequency 频次
                     * 
                     */
                    void SetFrequency(const std::string& _frequency);

                    /**
                     * 判断参数 Frequency 是否已赋值
                     * @return Frequency 是否已赋值
                     * 
                     */
                    bool FrequencyHasBeenSet() const;

                    /**
                     * 获取给药途径
                     * @return DrugDeliveryRoute 给药途径
                     * 
                     */
                    std::string GetDrugDeliveryRoute() const;

                    /**
                     * 设置给药途径
                     * @param _drugDeliveryRoute 给药途径
                     * 
                     */
                    void SetDrugDeliveryRoute(const std::string& _drugDeliveryRoute);

                    /**
                     * 判断参数 DrugDeliveryRoute 是否已赋值
                     * @return DrugDeliveryRoute 是否已赋值
                     * 
                     */
                    bool DrugDeliveryRouteHasBeenSet() const;

                private:

                    /**
                     * 值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 单次计量
                     */
                    std::string m_singleMeasurement;
                    bool m_singleMeasurementHasBeenSet;

                    /**
                     * 频次
                     */
                    std::string m_frequency;
                    bool m_frequencyHasBeenSet;

                    /**
                     * 给药途径
                     */
                    std::string m_drugDeliveryRoute;
                    bool m_drugDeliveryRouteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DOSAGEBLOCK_H_
