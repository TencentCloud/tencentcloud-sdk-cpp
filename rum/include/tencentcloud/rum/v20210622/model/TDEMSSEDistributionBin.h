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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSEDISTRIBUTIONBIN_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSEDISTRIBUTIONBIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 大模型对话分布档
                */
                class TDEMSSEDistributionBin : public AbstractModel
                {
                public:
                    TDEMSSEDistributionBin();
                    ~TDEMSSEDistributionBin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>档位左端，左闭。</p>
                     * @return Start <p>档位左端，左闭。</p>
                     * 
                     */
                    double GetStart() const;

                    /**
                     * 设置<p>档位左端，左闭。</p>
                     * @param _start <p>档位左端，左闭。</p>
                     * 
                     */
                    void SetStart(const double& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取<p>档位右端。溢出档省略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return End <p>档位右端。溢出档省略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetEnd() const;

                    /**
                     * 设置<p>档位右端。溢出档省略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _end <p>档位右端。溢出档省略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnd(const double& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                    /**
                     * 获取<p>是否为溢出档。溢出档为 true，且不返回 End。</p>
                     * @return Overflow <p>是否为溢出档。溢出档为 true，且不返回 End。</p>
                     * 
                     */
                    bool GetOverflow() const;

                    /**
                     * 设置<p>是否为溢出档。溢出档为 true，且不返回 End。</p>
                     * @param _overflow <p>是否为溢出档。溢出档为 true，且不返回 End。</p>
                     * 
                     */
                    void SetOverflow(const bool& _overflow);

                    /**
                     * 判断参数 Overflow 是否已赋值
                     * @return Overflow 是否已赋值
                     * 
                     */
                    bool OverflowHasBeenSet() const;

                    /**
                     * 获取<p>落入该档的对话次数。</p>
                     * @return Count <p>落入该档的对话次数。</p>
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置<p>落入该档的对话次数。</p>
                     * @param _count <p>落入该档的对话次数。</p>
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>该档占有效样本的百分比，已乘 100。</p>
                     * @return Rate <p>该档占有效样本的百分比，已乘 100。</p>
                     * 
                     */
                    double GetRate() const;

                    /**
                     * 设置<p>该档占有效样本的百分比，已乘 100。</p>
                     * @param _rate <p>该档占有效样本的百分比，已乘 100。</p>
                     * 
                     */
                    void SetRate(const double& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                private:

                    /**
                     * <p>档位左端，左闭。</p>
                     */
                    double m_start;
                    bool m_startHasBeenSet;

                    /**
                     * <p>档位右端。溢出档省略。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_end;
                    bool m_endHasBeenSet;

                    /**
                     * <p>是否为溢出档。溢出档为 true，且不返回 End。</p>
                     */
                    bool m_overflow;
                    bool m_overflowHasBeenSet;

                    /**
                     * <p>落入该档的对话次数。</p>
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>该档占有效样本的百分比，已乘 100。</p>
                     */
                    double m_rate;
                    bool m_rateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_TDEMSSEDISTRIBUTIONBIN_H_
