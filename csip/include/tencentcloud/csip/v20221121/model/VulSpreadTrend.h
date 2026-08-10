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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULSPREADTREND_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULSPREADTREND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞传播趋势
                */
                class VulSpreadTrend : public AbstractModel
                {
                public:
                    VulSpreadTrend();
                    ~VulSpreadTrend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日期<br>参数格式：YYYY-MM-DD</p>
                     * @return Date <p>日期<br>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>日期<br>参数格式：YYYY-MM-DD</p>
                     * @param _date <p>日期<br>参数格式：YYYY-MM-DD</p>
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
                     * 获取<p>该日期的传播趋势数值</p>
                     * @return Trend <p>该日期的传播趋势数值</p>
                     * 
                     */
                    double GetTrend() const;

                    /**
                     * 设置<p>该日期的传播趋势数值</p>
                     * @param _trend <p>该日期的传播趋势数值</p>
                     * 
                     */
                    void SetTrend(const double& _trend);

                    /**
                     * 判断参数 Trend 是否已赋值
                     * @return Trend 是否已赋值
                     * 
                     */
                    bool TrendHasBeenSet() const;

                private:

                    /**
                     * <p>日期<br>参数格式：YYYY-MM-DD</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>该日期的传播趋势数值</p>
                     */
                    double m_trend;
                    bool m_trendHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULSPREADTREND_H_
