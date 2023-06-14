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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATATRYTIMESUNIT_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATATRYTIMESUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaOperData操作数据查询尝试次数 type = 3
                */
                class CaptchaOperDataTryTimesUnit : public AbstractModel
                {
                public:
                    CaptchaOperDataTryTimesUnit();
                    ~CaptchaOperDataTryTimesUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
                     * @return DateKey 时间
                     * 
                     */
                    std::string GetDateKey() const;

                    /**
                     * 设置时间
                     * @param _dateKey 时间
                     * 
                     */
                    void SetDateKey(const std::string& _dateKey);

                    /**
                     * 判断参数 DateKey 是否已赋值
                     * @return DateKey 是否已赋值
                     * 
                     */
                    bool DateKeyHasBeenSet() const;

                    /**
                     * 获取平均尝试次数
                     * @return CntPerPass 平均尝试次数
                     * 
                     */
                    std::vector<double> GetCntPerPass() const;

                    /**
                     * 设置平均尝试次数
                     * @param _cntPerPass 平均尝试次数
                     * 
                     */
                    void SetCntPerPass(const std::vector<double>& _cntPerPass);

                    /**
                     * 判断参数 CntPerPass 是否已赋值
                     * @return CntPerPass 是否已赋值
                     * 
                     */
                    bool CntPerPassHasBeenSet() const;

                    /**
                     * 获取market平均尝试次数
                     * @return MarketCntPerPass market平均尝试次数
                     * 
                     */
                    double GetMarketCntPerPass() const;

                    /**
                     * 设置market平均尝试次数
                     * @param _marketCntPerPass market平均尝试次数
                     * 
                     */
                    void SetMarketCntPerPass(const double& _marketCntPerPass);

                    /**
                     * 判断参数 MarketCntPerPass 是否已赋值
                     * @return MarketCntPerPass 是否已赋值
                     * 
                     */
                    bool MarketCntPerPassHasBeenSet() const;

                private:

                    /**
                     * 时间
                     */
                    std::string m_dateKey;
                    bool m_dateKeyHasBeenSet;

                    /**
                     * 平均尝试次数
                     */
                    std::vector<double> m_cntPerPass;
                    bool m_cntPerPassHasBeenSet;

                    /**
                     * market平均尝试次数
                     */
                    double m_marketCntPerPass;
                    bool m_marketCntPerPassHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATATRYTIMESUNIT_H_
