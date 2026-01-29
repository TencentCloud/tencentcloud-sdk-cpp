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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TIMINGDATARECORD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TIMINGDATARECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TimingTypeValue.h>
#include <tencentcloud/teo/v20220901/model/FloatTimingTypeValue.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 时序数据信息
                */
                class TimingDataRecord : public AbstractModel
                {
                public:
                    TimingDataRecord();
                    ~TimingDataRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询维度值。
                     * @return TypeKey 查询维度值。
                     * 
                     */
                    std::string GetTypeKey() const;

                    /**
                     * 设置查询维度值。
                     * @param _typeKey 查询维度值。
                     * 
                     */
                    void SetTypeKey(const std::string& _typeKey);

                    /**
                     * 判断参数 TypeKey 是否已赋值
                     * @return TypeKey 是否已赋值
                     * 
                     */
                    bool TypeKeyHasBeenSet() const;

                    /**
                     * 获取<code>Integer</code> 类型的详细时序数据，查询指标值类型为 <code>Integer</code> 指标会由本字段返回对应时序数据。<br> **注意**：若查询指标未明确说明指标值类型，默认由本字段返回数据。
                     * @return TypeValue <code>Integer</code> 类型的详细时序数据，查询指标值类型为 <code>Integer</code> 指标会由本字段返回对应时序数据。<br> **注意**：若查询指标未明确说明指标值类型，默认由本字段返回数据。
                     * 
                     */
                    std::vector<TimingTypeValue> GetTypeValue() const;

                    /**
                     * 设置<code>Integer</code> 类型的详细时序数据，查询指标值类型为 <code>Integer</code> 指标会由本字段返回对应时序数据。<br> **注意**：若查询指标未明确说明指标值类型，默认由本字段返回数据。
                     * @param _typeValue <code>Integer</code> 类型的详细时序数据，查询指标值类型为 <code>Integer</code> 指标会由本字段返回对应时序数据。<br> **注意**：若查询指标未明确说明指标值类型，默认由本字段返回数据。
                     * 
                     */
                    void SetTypeValue(const std::vector<TimingTypeValue>& _typeValue);

                    /**
                     * 判断参数 TypeValue 是否已赋值
                     * @return TypeValue 是否已赋值
                     * 
                     */
                    bool TypeValueHasBeenSet() const;

                    /**
                     * 获取<code>Float</code> 类型的详细时序数据，查询指标值类型为 <code>Float</code> 指标会由本字段返回对应时序数据。
                     * @return FloatTypeValue <code>Float</code> 类型的详细时序数据，查询指标值类型为 <code>Float</code> 指标会由本字段返回对应时序数据。
                     * 
                     */
                    std::vector<FloatTimingTypeValue> GetFloatTypeValue() const;

                    /**
                     * 设置<code>Float</code> 类型的详细时序数据，查询指标值类型为 <code>Float</code> 指标会由本字段返回对应时序数据。
                     * @param _floatTypeValue <code>Float</code> 类型的详细时序数据，查询指标值类型为 <code>Float</code> 指标会由本字段返回对应时序数据。
                     * 
                     */
                    void SetFloatTypeValue(const std::vector<FloatTimingTypeValue>& _floatTypeValue);

                    /**
                     * 判断参数 FloatTypeValue 是否已赋值
                     * @return FloatTypeValue 是否已赋值
                     * 
                     */
                    bool FloatTypeValueHasBeenSet() const;

                private:

                    /**
                     * 查询维度值。
                     */
                    std::string m_typeKey;
                    bool m_typeKeyHasBeenSet;

                    /**
                     * <code>Integer</code> 类型的详细时序数据，查询指标值类型为 <code>Integer</code> 指标会由本字段返回对应时序数据。<br> **注意**：若查询指标未明确说明指标值类型，默认由本字段返回数据。
                     */
                    std::vector<TimingTypeValue> m_typeValue;
                    bool m_typeValueHasBeenSet;

                    /**
                     * <code>Float</code> 类型的详细时序数据，查询指标值类型为 <code>Float</code> 指标会由本字段返回对应时序数据。
                     */
                    std::vector<FloatTimingTypeValue> m_floatTypeValue;
                    bool m_floatTypeValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TIMINGDATARECORD_H_
