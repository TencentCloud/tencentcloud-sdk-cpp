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
                    std::string ToJsonString() const;


                    /**
                     * 获取1 OK 验证通过
7 captcha no match 传入的Randstr不合法，请检查Randstr是否与前端返回的Randstr一致
8 ticket expired 传入的Ticket已过期（Ticket有效期5分钟），请重新生成Ticket、Randstr进行校验
9 ticket reused 传入的Ticket被重复使用，请重新生成Ticket、Randstr进行校验
15 decrypt fail 传入的Ticket不合法，请检查Ticket是否与前端返回的Ticket一致
16 appid-ticket mismatch 传入的CaptchaAppId错误，请检查CaptchaAppId是否与前端传入的CaptchaAppId一致，并且保障CaptchaAppId是从验证码控制台【验证管理】->【基础配置】中获取
21 diff 票据校验异常，可能的原因是（1）若Ticket包含trerror前缀，一般是由于用户网络较差，导致前端自动容灾，而生成了容灾票据，业务侧可根据需要进行跳过或二次处理。（2）若Ticket不包含trerror前缀，则是由于验证码风控系统发现请求有安全风险，业务侧可根据需要进行拦截。
100 appid-secretkey-ticket mismatch 参数校验错误，（1）请检查CaptchaAppId与AppSecretKey是否正确，CaptchaAppId、AppSecretKey需要在验证码控制台【验证管理】>【基础配置】中获取（2）请检查传入的Ticket是否由传入的CaptchaAppId生成
                     * @return CaptchaCode 1 OK 验证通过
7 captcha no match 传入的Randstr不合法，请检查Randstr是否与前端返回的Randstr一致
8 ticket expired 传入的Ticket已过期（Ticket有效期5分钟），请重新生成Ticket、Randstr进行校验
9 ticket reused 传入的Ticket被重复使用，请重新生成Ticket、Randstr进行校验
15 decrypt fail 传入的Ticket不合法，请检查Ticket是否与前端返回的Ticket一致
16 appid-ticket mismatch 传入的CaptchaAppId错误，请检查CaptchaAppId是否与前端传入的CaptchaAppId一致，并且保障CaptchaAppId是从验证码控制台【验证管理】->【基础配置】中获取
21 diff 票据校验异常，可能的原因是（1）若Ticket包含trerror前缀，一般是由于用户网络较差，导致前端自动容灾，而生成了容灾票据，业务侧可根据需要进行跳过或二次处理。（2）若Ticket不包含trerror前缀，则是由于验证码风控系统发现请求有安全风险，业务侧可根据需要进行拦截。
100 appid-secretkey-ticket mismatch 参数校验错误，（1）请检查CaptchaAppId与AppSecretKey是否正确，CaptchaAppId、AppSecretKey需要在验证码控制台【验证管理】>【基础配置】中获取（2）请检查传入的Ticket是否由传入的CaptchaAppId生成
                     * 
                     */
                    int64_t GetCaptchaCode() const;

                    /**
                     * 判断参数 CaptchaCode 是否已赋值
                     * @return CaptchaCode 是否已赋值
                     * 
                     */
                    bool CaptchaCodeHasBeenSet() const;

                    /**
                     * 获取状态描述及验证错误信息
                     * @return CaptchaMsg 状态描述及验证错误信息
                     * 
                     */
                    std::string GetCaptchaMsg() const;

                    /**
                     * 判断参数 CaptchaMsg 是否已赋值
                     * @return CaptchaMsg 是否已赋值
                     * 
                     */
                    bool CaptchaMsgHasBeenSet() const;

                    /**
                     * 获取无感验证模式下，该参数返回验证结果：
EvilLevel=0 请求无恶意
EvilLevel=100 请求有恶意
                     * @return EvilLevel 无感验证模式下，该参数返回验证结果：
EvilLevel=0 请求无恶意
EvilLevel=100 请求有恶意
                     * 
                     */
                    int64_t GetEvilLevel() const;

                    /**
                     * 判断参数 EvilLevel 是否已赋值
                     * @return EvilLevel 是否已赋值
                     * 
                     */
                    bool EvilLevelHasBeenSet() const;

                    /**
                     * 获取前端获取验证码时间，时间戳格式
                     * @return GetCaptchaTime 前端获取验证码时间，时间戳格式
                     * 
                     */
                    int64_t GetGetCaptchaTime() const;

                    /**
                     * 判断参数 GetCaptchaTime 是否已赋值
                     * @return GetCaptchaTime 是否已赋值
                     * 
                     */
                    bool GetCaptchaTimeHasBeenSet() const;

                    /**
                     * 获取拦截类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EvilBitmap 拦截类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetEvilBitmap() const;

                    /**
                     * 判断参数 EvilBitmap 是否已赋值
                     * @return EvilBitmap 是否已赋值
                     * 
                     */
                    bool EvilBitmapHasBeenSet() const;

                    /**
                     * 获取提交验证码时间
                     * @return SubmitCaptchaTime 提交验证码时间
                     * 
                     */
                    int64_t GetSubmitCaptchaTime() const;

                    /**
                     * 判断参数 SubmitCaptchaTime 是否已赋值
                     * @return SubmitCaptchaTime 是否已赋值
                     * 
                     */
                    bool SubmitCaptchaTimeHasBeenSet() const;

                    /**
                     * 获取设备风险大类
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceRiskCategory 设备风险大类
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceRiskCategory() const;

                    /**
                     * 判断参数 DeviceRiskCategory 是否已赋值
                     * @return DeviceRiskCategory 是否已赋值
                     * 
                     */
                    bool DeviceRiskCategoryHasBeenSet() const;

                    /**
                     * 获取验证码评分
                     * @return Score 验证码评分
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                private:

                    /**
                     * 1 OK 验证通过
7 captcha no match 传入的Randstr不合法，请检查Randstr是否与前端返回的Randstr一致
8 ticket expired 传入的Ticket已过期（Ticket有效期5分钟），请重新生成Ticket、Randstr进行校验
9 ticket reused 传入的Ticket被重复使用，请重新生成Ticket、Randstr进行校验
15 decrypt fail 传入的Ticket不合法，请检查Ticket是否与前端返回的Ticket一致
16 appid-ticket mismatch 传入的CaptchaAppId错误，请检查CaptchaAppId是否与前端传入的CaptchaAppId一致，并且保障CaptchaAppId是从验证码控制台【验证管理】->【基础配置】中获取
21 diff 票据校验异常，可能的原因是（1）若Ticket包含trerror前缀，一般是由于用户网络较差，导致前端自动容灾，而生成了容灾票据，业务侧可根据需要进行跳过或二次处理。（2）若Ticket不包含trerror前缀，则是由于验证码风控系统发现请求有安全风险，业务侧可根据需要进行拦截。
100 appid-secretkey-ticket mismatch 参数校验错误，（1）请检查CaptchaAppId与AppSecretKey是否正确，CaptchaAppId、AppSecretKey需要在验证码控制台【验证管理】>【基础配置】中获取（2）请检查传入的Ticket是否由传入的CaptchaAppId生成
                     */
                    int64_t m_captchaCode;
                    bool m_captchaCodeHasBeenSet;

                    /**
                     * 状态描述及验证错误信息
                     */
                    std::string m_captchaMsg;
                    bool m_captchaMsgHasBeenSet;

                    /**
                     * 无感验证模式下，该参数返回验证结果：
EvilLevel=0 请求无恶意
EvilLevel=100 请求有恶意
                     */
                    int64_t m_evilLevel;
                    bool m_evilLevelHasBeenSet;

                    /**
                     * 前端获取验证码时间，时间戳格式
                     */
                    int64_t m_getCaptchaTime;
                    bool m_getCaptchaTimeHasBeenSet;

                    /**
                     * 拦截类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_evilBitmap;
                    bool m_evilBitmapHasBeenSet;

                    /**
                     * 提交验证码时间
                     */
                    int64_t m_submitCaptchaTime;
                    bool m_submitCaptchaTimeHasBeenSet;

                    /**
                     * 设备风险大类
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceRiskCategory;
                    bool m_deviceRiskCategoryHasBeenSet;

                    /**
                     * 验证码评分
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHARESULTRESPONSE_H_
