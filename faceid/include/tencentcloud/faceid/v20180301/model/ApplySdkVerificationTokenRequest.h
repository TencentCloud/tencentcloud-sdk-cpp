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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ApplySdkVerificationToken请求参数结构体
                */
                class ApplySdkVerificationTokenRequest : public AbstractModel
                {
                public:
                    ApplySdkVerificationTokenRequest();
                    ~ApplySdkVerificationTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否需要身份证鉴伪，如果不需要，则仅做证件OCR。当前仅IdCardType为HK支持鉴伪。
                     * @return NeedVerifyIdCard 是否需要身份证鉴伪，如果不需要，则仅做证件OCR。当前仅IdCardType为HK支持鉴伪。
                     */
                    bool GetNeedVerifyIdCard() const;

                    /**
                     * 设置是否需要身份证鉴伪，如果不需要，则仅做证件OCR。当前仅IdCardType为HK支持鉴伪。
                     * @param NeedVerifyIdCard 是否需要身份证鉴伪，如果不需要，则仅做证件OCR。当前仅IdCardType为HK支持鉴伪。
                     */
                    void SetNeedVerifyIdCard(const bool& _needVerifyIdCard);

                    /**
                     * 判断参数 NeedVerifyIdCard 是否已赋值
                     * @return NeedVerifyIdCard 是否已赋值
                     */
                    bool NeedVerifyIdCardHasBeenSet() const;

                    /**
                     * 获取卡证类型，当前仅支持HK（香港身份证），ML（马来西亚身份证），PhilippinesVoteID（菲律宾选民卡），PhilippinesDrivingLicense（菲律宾驾驶证）。默认为HK。
                     * @return IdCardType 卡证类型，当前仅支持HK（香港身份证），ML（马来西亚身份证），PhilippinesVoteID（菲律宾选民卡），PhilippinesDrivingLicense（菲律宾驾驶证）。默认为HK。
                     */
                    std::string GetIdCardType() const;

                    /**
                     * 设置卡证类型，当前仅支持HK（香港身份证），ML（马来西亚身份证），PhilippinesVoteID（菲律宾选民卡），PhilippinesDrivingLicense（菲律宾驾驶证）。默认为HK。
                     * @param IdCardType 卡证类型，当前仅支持HK（香港身份证），ML（马来西亚身份证），PhilippinesVoteID（菲律宾选民卡），PhilippinesDrivingLicense（菲律宾驾驶证）。默认为HK。
                     */
                    void SetIdCardType(const std::string& _idCardType);

                    /**
                     * 判断参数 IdCardType 是否已赋值
                     * @return IdCardType 是否已赋值
                     */
                    bool IdCardTypeHasBeenSet() const;

                    /**
                     * 获取是否允许用户修改ocr结果，默认false，允许。
                     * @return DisableChangeOcrResult 是否允许用户修改ocr结果，默认false，允许。
                     */
                    bool GetDisableChangeOcrResult() const;

                    /**
                     * 设置是否允许用户修改ocr结果，默认false，允许。
                     * @param DisableChangeOcrResult 是否允许用户修改ocr结果，默认false，允许。
                     */
                    void SetDisableChangeOcrResult(const bool& _disableChangeOcrResult);

                    /**
                     * 判断参数 DisableChangeOcrResult 是否已赋值
                     * @return DisableChangeOcrResult 是否已赋值
                     */
                    bool DisableChangeOcrResultHasBeenSet() const;

                    /**
                     * 获取是否关闭OCR告警，默认false，不关闭。如果为false开启OCR告警，我们会根据Ocr的告警信息进行拦截，当NeedVerifyIdCard为true时该字段将为true。
                     * @return DisableCheckOcrWarnings 是否关闭OCR告警，默认false，不关闭。如果为false开启OCR告警，我们会根据Ocr的告警信息进行拦截，当NeedVerifyIdCard为true时该字段将为true。
                     */
                    bool GetDisableCheckOcrWarnings() const;

                    /**
                     * 设置是否关闭OCR告警，默认false，不关闭。如果为false开启OCR告警，我们会根据Ocr的告警信息进行拦截，当NeedVerifyIdCard为true时该字段将为true。
                     * @param DisableCheckOcrWarnings 是否关闭OCR告警，默认false，不关闭。如果为false开启OCR告警，我们会根据Ocr的告警信息进行拦截，当NeedVerifyIdCard为true时该字段将为true。
                     */
                    void SetDisableCheckOcrWarnings(const bool& _disableCheckOcrWarnings);

                    /**
                     * 判断参数 DisableCheckOcrWarnings 是否已赋值
                     * @return DisableCheckOcrWarnings 是否已赋值
                     */
                    bool DisableCheckOcrWarningsHasBeenSet() const;

                    /**
                     * 获取透传字段，在获取验证结果时返回，最长1024位。
                     * @return Extra 透传字段，在获取验证结果时返回，最长1024位。
                     */
                    std::string GetExtra() const;

                    /**
                     * 设置透传字段，在获取验证结果时返回，最长1024位。
                     * @param Extra 透传字段，在获取验证结果时返回，最长1024位。
                     */
                    void SetExtra(const std::string& _extra);

                    /**
                     * 判断参数 Extra 是否已赋值
                     * @return Extra 是否已赋值
                     */
                    bool ExtraHasBeenSet() const;

                private:

                    /**
                     * 是否需要身份证鉴伪，如果不需要，则仅做证件OCR。当前仅IdCardType为HK支持鉴伪。
                     */
                    bool m_needVerifyIdCard;
                    bool m_needVerifyIdCardHasBeenSet;

                    /**
                     * 卡证类型，当前仅支持HK（香港身份证），ML（马来西亚身份证），PhilippinesVoteID（菲律宾选民卡），PhilippinesDrivingLicense（菲律宾驾驶证）。默认为HK。
                     */
                    std::string m_idCardType;
                    bool m_idCardTypeHasBeenSet;

                    /**
                     * 是否允许用户修改ocr结果，默认false，允许。
                     */
                    bool m_disableChangeOcrResult;
                    bool m_disableChangeOcrResultHasBeenSet;

                    /**
                     * 是否关闭OCR告警，默认false，不关闭。如果为false开启OCR告警，我们会根据Ocr的告警信息进行拦截，当NeedVerifyIdCard为true时该字段将为true。
                     */
                    bool m_disableCheckOcrWarnings;
                    bool m_disableCheckOcrWarningsHasBeenSet;

                    /**
                     * 透传字段，在获取验证结果时返回，最长1024位。
                     */
                    std::string m_extra;
                    bool m_extraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYSDKVERIFICATIONTOKENREQUEST_H_
