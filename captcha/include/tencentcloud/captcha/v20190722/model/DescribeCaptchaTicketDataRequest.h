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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHATICKETDATAREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHATICKETDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeCaptchaTicketData请求参数结构体
                */
                class DescribeCaptchaTicketDataRequest : public AbstractModel
                {
                public:
                    DescribeCaptchaTicketDataRequest();
                    ~DescribeCaptchaTicketDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证码应用ID
                     * @return CaptchaAppId 验证码应用ID
                     */
                    int64_t GetCaptchaAppId() const;

                    /**
                     * 设置验证码应用ID
                     * @param CaptchaAppId 验证码应用ID
                     */
                    void SetCaptchaAppId(const int64_t& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间 例如：20200909
                     * @return Start 查询开始时间 例如：20200909
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置查询开始时间 例如：20200909
                     * @param Start 查询开始时间 例如：20200909
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取查询结束时间 例如：20220314
                     * @return End 查询结束时间 例如：20220314
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置查询结束时间 例如：20220314
                     * @param End 查询结束时间 例如：20220314
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * 验证码应用ID
                     */
                    int64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * 查询开始时间 例如：20200909
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 查询结束时间 例如：20220314
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHATICKETDATAREQUEST_H_
