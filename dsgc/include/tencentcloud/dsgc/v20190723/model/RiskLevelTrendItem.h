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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_RISKLEVELTRENDITEM_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_RISKLEVELTRENDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 风险级别趋势项
                */
                class RiskLevelTrendItem : public AbstractModel
                {
                public:
                    RiskLevelTrendItem();
                    ~RiskLevelTrendItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取高风险数量
                     * @return High 高风险数量
                     * 
                     */
                    uint64_t GetHigh() const;

                    /**
                     * 设置高风险数量
                     * @param _high 高风险数量
                     * 
                     */
                    void SetHigh(const uint64_t& _high);

                    /**
                     * 判断参数 High 是否已赋值
                     * @return High 是否已赋值
                     * 
                     */
                    bool HighHasBeenSet() const;

                    /**
                     * 获取中风险数量
                     * @return Medium 中风险数量
                     * 
                     */
                    uint64_t GetMedium() const;

                    /**
                     * 设置中风险数量
                     * @param _medium 中风险数量
                     * 
                     */
                    void SetMedium(const uint64_t& _medium);

                    /**
                     * 判断参数 Medium 是否已赋值
                     * @return Medium 是否已赋值
                     * 
                     */
                    bool MediumHasBeenSet() const;

                    /**
                     * 获取低风险数量
                     * @return Low 低风险数量
                     * 
                     */
                    uint64_t GetLow() const;

                    /**
                     * 设置低风险数量
                     * @param _low 低风险数量
                     * 
                     */
                    void SetLow(const uint64_t& _low);

                    /**
                     * 判断参数 Low 是否已赋值
                     * @return Low 是否已赋值
                     * 
                     */
                    bool LowHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置总数
                     * @param _total 总数
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 高风险数量
                     */
                    uint64_t m_high;
                    bool m_highHasBeenSet;

                    /**
                     * 中风险数量
                     */
                    uint64_t m_medium;
                    bool m_mediumHasBeenSet;

                    /**
                     * 低风险数量
                     */
                    uint64_t m_low;
                    bool m_lowHasBeenSet;

                    /**
                     * 总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_RISKLEVELTRENDITEM_H_
