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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_QUOTACREATEITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_QUOTACREATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * Token 限额配置项（创建 API 密钥时用）
                */
                class QuotaCreateItem : public AbstractModel
                {
                public:
                    QuotaCreateItem();
                    ~QuotaCreateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。</p>
                     * @return CycleUnit <p>限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。</p>
                     * 
                     */
                    std::string GetCycleUnit() const;

                    /**
                     * 设置<p>限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。</p>
                     * @param _cycleUnit <p>限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。</p>
                     * 
                     */
                    void SetCycleUnit(const std::string& _cycleUnit);

                    /**
                     * 判断参数 CycleUnit 是否已赋值
                     * @return CycleUnit 是否已赋值
                     * 
                     */
                    bool CycleUnitHasBeenSet() const;

                    /**
                     * 获取<p>维度当期限额总量（Token 数），不能大于10万亿。使用字符串避免大数精度丢失。</p>
                     * @return CycleCredits <p>维度当期限额总量（Token 数），不能大于10万亿。使用字符串避免大数精度丢失。</p>
                     * 
                     */
                    std::string GetCycleCredits() const;

                    /**
                     * 设置<p>维度当期限额总量（Token 数），不能大于10万亿。使用字符串避免大数精度丢失。</p>
                     * @param _cycleCredits <p>维度当期限额总量（Token 数），不能大于10万亿。使用字符串避免大数精度丢失。</p>
                     * 
                     */
                    void SetCycleCredits(const std::string& _cycleCredits);

                    /**
                     * 判断参数 CycleCredits 是否已赋值
                     * @return CycleCredits 是否已赋值
                     * 
                     */
                    bool CycleCreditsHasBeenSet() const;

                    /**
                     * 获取<p>月度限额起始日。CycleUnit 为 m 时可选，1~31，默认 1。小月（如 2 月）由下游自动取该月最后一天。</p>
                     * @return MonthStartDay <p>月度限额起始日。CycleUnit 为 m 时可选，1~31，默认 1。小月（如 2 月）由下游自动取该月最后一天。</p>
                     * 
                     */
                    int64_t GetMonthStartDay() const;

                    /**
                     * 设置<p>月度限额起始日。CycleUnit 为 m 时可选，1~31，默认 1。小月（如 2 月）由下游自动取该月最后一天。</p>
                     * @param _monthStartDay <p>月度限额起始日。CycleUnit 为 m 时可选，1~31，默认 1。小月（如 2 月）由下游自动取该月最后一天。</p>
                     * 
                     */
                    void SetMonthStartDay(const int64_t& _monthStartDay);

                    /**
                     * 判断参数 MonthStartDay 是否已赋值
                     * @return MonthStartDay 是否已赋值
                     * 
                     */
                    bool MonthStartDayHasBeenSet() const;

                private:

                    /**
                     * <p>限额周期。取值：d（按日）、m（按月）、lifetime（总额度，不重置）。</p>
                     */
                    std::string m_cycleUnit;
                    bool m_cycleUnitHasBeenSet;

                    /**
                     * <p>维度当期限额总量（Token 数），不能大于10万亿。使用字符串避免大数精度丢失。</p>
                     */
                    std::string m_cycleCredits;
                    bool m_cycleCreditsHasBeenSet;

                    /**
                     * <p>月度限额起始日。CycleUnit 为 m 时可选，1~31，默认 1。小月（如 2 月）由下游自动取该月最后一天。</p>
                     */
                    int64_t m_monthStartDay;
                    bool m_monthStartDayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_QUOTACREATEITEM_H_
