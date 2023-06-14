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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCHANGERATEDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCHANGERATEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 查询汇率数据
                */
                class QueryExchangerateData : public AbstractModel
                {
                public:
                    QueryExchangerateData();
                    ~QueryExchangerateData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取汇率
                     * @return Rate 汇率
                     * 
                     */
                    std::string GetRate() const;

                    /**
                     * 设置汇率
                     * @param _rate 汇率
                     * 
                     */
                    void SetRate(const std::string& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取源币种
                     * @return SourceCurrency 源币种
                     * 
                     */
                    std::string GetSourceCurrency() const;

                    /**
                     * 设置源币种
                     * @param _sourceCurrency 源币种
                     * 
                     */
                    void SetSourceCurrency(const std::string& _sourceCurrency);

                    /**
                     * 判断参数 SourceCurrency 是否已赋值
                     * @return SourceCurrency 是否已赋值
                     * 
                     */
                    bool SourceCurrencyHasBeenSet() const;

                    /**
                     * 获取目的币种
                     * @return TargetCurrency 目的币种
                     * 
                     */
                    std::string GetTargetCurrency() const;

                    /**
                     * 设置目的币种
                     * @param _targetCurrency 目的币种
                     * 
                     */
                    void SetTargetCurrency(const std::string& _targetCurrency);

                    /**
                     * 判断参数 TargetCurrency 是否已赋值
                     * @return TargetCurrency 是否已赋值
                     * 
                     */
                    bool TargetCurrencyHasBeenSet() const;

                    /**
                     * 获取汇率时间
                     * @return RateTime 汇率时间
                     * 
                     */
                    std::string GetRateTime() const;

                    /**
                     * 设置汇率时间
                     * @param _rateTime 汇率时间
                     * 
                     */
                    void SetRateTime(const std::string& _rateTime);

                    /**
                     * 判断参数 RateTime 是否已赋值
                     * @return RateTime 是否已赋值
                     * 
                     */
                    bool RateTimeHasBeenSet() const;

                    /**
                     * 获取基准币种
                     * @return BaseCurrency 基准币种
                     * 
                     */
                    std::string GetBaseCurrency() const;

                    /**
                     * 设置基准币种
                     * @param _baseCurrency 基准币种
                     * 
                     */
                    void SetBaseCurrency(const std::string& _baseCurrency);

                    /**
                     * 判断参数 BaseCurrency 是否已赋值
                     * @return BaseCurrency 是否已赋值
                     * 
                     */
                    bool BaseCurrencyHasBeenSet() const;

                private:

                    /**
                     * 汇率
                     */
                    std::string m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 源币种
                     */
                    std::string m_sourceCurrency;
                    bool m_sourceCurrencyHasBeenSet;

                    /**
                     * 目的币种
                     */
                    std::string m_targetCurrency;
                    bool m_targetCurrencyHasBeenSet;

                    /**
                     * 汇率时间
                     */
                    std::string m_rateTime;
                    bool m_rateTimeHasBeenSet;

                    /**
                     * 基准币种
                     */
                    std::string m_baseCurrency;
                    bool m_baseCurrencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCHANGERATEDATA_H_
