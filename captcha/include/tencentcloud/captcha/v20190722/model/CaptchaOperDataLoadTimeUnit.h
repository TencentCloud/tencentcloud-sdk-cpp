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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATALOADTIMEUNIT_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATALOADTIMEUNIT_H_

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
                * 操作数据查询方法DescribeCaptchaOperData 的返回结果，安全验证码加载耗时type = 1
                */
                class CaptchaOperDataLoadTimeUnit : public AbstractModel
                {
                public:
                    CaptchaOperDataLoadTimeUnit();
                    ~CaptchaOperDataLoadTimeUnit() = default;
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
                     * 获取Market加载时间
                     * @return MarketLoadTime Market加载时间
                     * 
                     */
                    double GetMarketLoadTime() const;

                    /**
                     * 设置Market加载时间
                     * @param _marketLoadTime Market加载时间
                     * 
                     */
                    void SetMarketLoadTime(const double& _marketLoadTime);

                    /**
                     * 判断参数 MarketLoadTime 是否已赋值
                     * @return MarketLoadTime 是否已赋值
                     * 
                     */
                    bool MarketLoadTimeHasBeenSet() const;

                    /**
                     * 获取AppId加载时间
                     * @return AppIdLoadTime AppId加载时间
                     * 
                     */
                    double GetAppIdLoadTime() const;

                    /**
                     * 设置AppId加载时间
                     * @param _appIdLoadTime AppId加载时间
                     * 
                     */
                    void SetAppIdLoadTime(const double& _appIdLoadTime);

                    /**
                     * 判断参数 AppIdLoadTime 是否已赋值
                     * @return AppIdLoadTime 是否已赋值
                     * 
                     */
                    bool AppIdLoadTimeHasBeenSet() const;

                private:

                    /**
                     * 时间
                     */
                    std::string m_dateKey;
                    bool m_dateKeyHasBeenSet;

                    /**
                     * Market加载时间
                     */
                    double m_marketLoadTime;
                    bool m_marketLoadTimeHasBeenSet;

                    /**
                     * AppId加载时间
                     */
                    double m_appIdLoadTime;
                    bool m_appIdLoadTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHAOPERDATALOADTIMEUNIT_H_
