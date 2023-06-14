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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHATICKETDATARES_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHATICKETDATARES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/captcha/v20190722/model/TicketAmountUnit.h>
#include <tencentcloud/captcha/v20190722/model/TicketThroughUnit.h>
#include <tencentcloud/captcha/v20190722/model/TicketInterceptUnit.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaTicketData 接口 返回数据类型集合
                */
                class CaptchaTicketDataRes : public AbstractModel
                {
                public:
                    CaptchaTicketDataRes();
                    ~CaptchaTicketDataRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取票据验证总量返回
                     * @return TicketAmountArray 票据验证总量返回
                     * 
                     */
                    std::vector<TicketAmountUnit> GetTicketAmountArray() const;

                    /**
                     * 设置票据验证总量返回
                     * @param _ticketAmountArray 票据验证总量返回
                     * 
                     */
                    void SetTicketAmountArray(const std::vector<TicketAmountUnit>& _ticketAmountArray);

                    /**
                     * 判断参数 TicketAmountArray 是否已赋值
                     * @return TicketAmountArray 是否已赋值
                     * 
                     */
                    bool TicketAmountArrayHasBeenSet() const;

                    /**
                     * 获取票据验证通过量返回
                     * @return TicketThroughArray 票据验证通过量返回
                     * 
                     */
                    std::vector<TicketThroughUnit> GetTicketThroughArray() const;

                    /**
                     * 设置票据验证通过量返回
                     * @param _ticketThroughArray 票据验证通过量返回
                     * 
                     */
                    void SetTicketThroughArray(const std::vector<TicketThroughUnit>& _ticketThroughArray);

                    /**
                     * 判断参数 TicketThroughArray 是否已赋值
                     * @return TicketThroughArray 是否已赋值
                     * 
                     */
                    bool TicketThroughArrayHasBeenSet() const;

                    /**
                     * 获取票据验证拦截量返回
                     * @return TicketInterceptArray 票据验证拦截量返回
                     * 
                     */
                    std::vector<TicketInterceptUnit> GetTicketInterceptArray() const;

                    /**
                     * 设置票据验证拦截量返回
                     * @param _ticketInterceptArray 票据验证拦截量返回
                     * 
                     */
                    void SetTicketInterceptArray(const std::vector<TicketInterceptUnit>& _ticketInterceptArray);

                    /**
                     * 判断参数 TicketInterceptArray 是否已赋值
                     * @return TicketInterceptArray 是否已赋值
                     * 
                     */
                    bool TicketInterceptArrayHasBeenSet() const;

                private:

                    /**
                     * 票据验证总量返回
                     */
                    std::vector<TicketAmountUnit> m_ticketAmountArray;
                    bool m_ticketAmountArrayHasBeenSet;

                    /**
                     * 票据验证通过量返回
                     */
                    std::vector<TicketThroughUnit> m_ticketThroughArray;
                    bool m_ticketThroughArrayHasBeenSet;

                    /**
                     * 票据验证拦截量返回
                     */
                    std::vector<TicketInterceptUnit> m_ticketInterceptArray;
                    bool m_ticketInterceptArrayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_CAPTCHATICKETDATARES_H_
