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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_

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
                * DescribeCaptchaResult返回参数结构体
                */
                class DescribeCaptchaResultResponse : public AbstractModel
                {
                public:
                    DescribeCaptchaResultResponse();
                    ~DescribeCaptchaResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取1:验证成功，0:验证失败，100:AppSecretKey参数校验错误
                     * @return CaptchaCode 1:验证成功，0:验证失败，100:AppSecretKey参数校验错误
                     */
                    int64_t GetCaptchaCode() const;

                    /**
                     * 判断参数 CaptchaCode 是否已赋值
                     * @return CaptchaCode 是否已赋值
                     */
                    bool CaptchaCodeHasBeenSet() const;

                    /**
                     * 获取状态描述及验证错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CaptchaMsg 状态描述及验证错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCaptchaMsg() const;

                    /**
                     * 判断参数 CaptchaMsg 是否已赋值
                     * @return CaptchaMsg 是否已赋值
                     */
                    bool CaptchaMsgHasBeenSet() const;

                    /**
                     * 获取[0,100]，恶意等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvilLevel [0,100]，恶意等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEvilLevel() const;

                    /**
                     * 判断参数 EvilLevel 是否已赋值
                     * @return EvilLevel 是否已赋值
                     */
                    bool EvilLevelHasBeenSet() const;

                private:

                    /**
                     * 1:验证成功，0:验证失败，100:AppSecretKey参数校验错误
                     */
                    int64_t m_captchaCode;
                    bool m_captchaCodeHasBeenSet;

                    /**
                     * 状态描述及验证错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_captchaMsg;
                    bool m_captchaMsgHasBeenSet;

                    /**
                     * [0,100]，恶意等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_evilLevel;
                    bool m_evilLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_
