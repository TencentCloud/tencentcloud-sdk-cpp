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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONSUMPTIONUSAGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONSUMPTIONUSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 消耗用量
                */
                class ConsumptionUsage : public AbstractModel
                {
                public:
                    ConsumptionUsage();
                    ~ConsumptionUsage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>消耗PU</p>
                     * @return ConsumptionPU <p>消耗PU</p>
                     * 
                     */
                    double GetConsumptionPU() const;

                    /**
                     * 设置<p>消耗PU</p>
                     * @param _consumptionPU <p>消耗PU</p>
                     * 
                     */
                    void SetConsumptionPU(const double& _consumptionPU);

                    /**
                     * 判断参数 ConsumptionPU 是否已赋值
                     * @return ConsumptionPU 是否已赋值
                     * 
                     */
                    bool ConsumptionPUHasBeenSet() const;

                    /**
                     * 获取<p>用量数值</p>
                     * @return Usage <p>用量数值</p>
                     * 
                     */
                    double GetUsage() const;

                    /**
                     * 设置<p>用量数值</p>
                     * @param _usage <p>用量数值</p>
                     * 
                     */
                    void SetUsage(const double& _usage);

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取<p>用量单位，枚举值 DosageUnit</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token（默认）</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count（页数）</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times（次数）</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second（秒）</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item（条）</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet（张）</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character（字符）</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number（个数）</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second（毫秒）</td></tr></tbody></table>
                     * @return UsageUnit <p>用量单位，枚举值 DosageUnit</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token（默认）</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count（页数）</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times（次数）</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second（秒）</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item（条）</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet（张）</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character（字符）</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number（个数）</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second（毫秒）</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetUsageUnit() const;

                    /**
                     * 设置<p>用量单位，枚举值 DosageUnit</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token（默认）</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count（页数）</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times（次数）</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second（秒）</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item（条）</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet（张）</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character（字符）</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number（个数）</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second（毫秒）</td></tr></tbody></table>
                     * @param _usageUnit <p>用量单位，枚举值 DosageUnit</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token（默认）</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count（页数）</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times（次数）</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second（秒）</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item（条）</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet（张）</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character（字符）</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number（个数）</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second（毫秒）</td></tr></tbody></table>
                     * 
                     */
                    void SetUsageUnit(const int64_t& _usageUnit);

                    /**
                     * 判断参数 UsageUnit 是否已赋值
                     * @return UsageUnit 是否已赋值
                     * 
                     */
                    bool UsageUnitHasBeenSet() const;

                private:

                    /**
                     * <p>消耗PU</p>
                     */
                    double m_consumptionPU;
                    bool m_consumptionPUHasBeenSet;

                    /**
                     * <p>用量数值</p>
                     */
                    double m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * <p>用量单位，枚举值 DosageUnit</p><table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>DOSAGE_UNIT_TOKEN</td><td>0</td><td>token（默认）</td></tr><tr><td>DOSAGE_UNIT_PAGE_COUNT</td><td>1</td><td>page_count（页数）</td></tr><tr><td>DOSAGE_UNIT_TIMES</td><td>2</td><td>times（次数）</td></tr><tr><td>DOSAGE_UNIT_SECOND</td><td>3</td><td>second（秒）</td></tr><tr><td>DOSAGE_UNIT_ITEM</td><td>4</td><td>item（条）</td></tr><tr><td>DOSAGE_UNIT_SHEET</td><td>5</td><td>sheet（张）</td></tr><tr><td>DOSAGE_UNIT_CHARACTER</td><td>6</td><td>character（字符）</td></tr><tr><td>DOSAGE_UNIT_GB</td><td>7</td><td>GB</td></tr><tr><td>DOSAGE_UNIT_NUMBER</td><td>8</td><td>number（个数）</td></tr><tr><td>DOSAGE_UNIT_MILL_SECOND</td><td>9</td><td>mill_second（毫秒）</td></tr></tbody></table>
                     */
                    int64_t m_usageUnit;
                    bool m_usageUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONSUMPTIONUSAGE_H_
