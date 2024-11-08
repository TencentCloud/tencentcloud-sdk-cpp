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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONRESPONSE_H_

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
                * PhoneVerification返回参数结构体
                */
                class PhoneVerificationResponse : public AbstractModel
                {
                public:
                    PhoneVerificationResponse();
                    ~PhoneVerificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取认证结果码。
- 收费结果码
0: 三要素信息一致。
-4: 三要素信息不一致。

- 不收费结果码
-6: 手机号码不合法。
-7: 身份证号码有误。
-8: 姓名校验不通过。
-9: 没有记录。
-11: 验证中心服务繁忙。
-12: 认证次数超过当日限制，请次日重试。
                     * @return Result 认证结果码。
- 收费结果码
0: 三要素信息一致。
-4: 三要素信息不一致。

- 不收费结果码
-6: 手机号码不合法。
-7: 身份证号码有误。
-8: 姓名校验不通过。
-9: 没有记录。
-11: 验证中心服务繁忙。
-12: 认证次数超过当日限制，请次日重试。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取业务结果描述。
                     * @return Description 业务结果描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取运营商名称。
- 取值范围为["","移动","电信","联通"]
                     * @return Isp 运营商名称。
- 取值范围为["","移动","电信","联通"]
                     * 
                     */
                    std::string GetIsp() const;

                    /**
                     * 判断参数 Isp 是否已赋值
                     * @return Isp 是否已赋值
                     * 
                     */
                    bool IspHasBeenSet() const;

                    /**
                     * 获取业务结果详细信息。
- 当VerifyMode配置"详版"，且Result为"-4: 三要素信息不一致"时返回。
- 枚举值：
PhoneIdCardMismatch：手机号码与姓名一致，与身份证号不一致。
PhoneNameMismatch：手机号码身份证号一致，与姓名不一致。
PhoneNameIdCardMismatch：手机号码与姓名和身份证号均不一致。
NameIdCardMismatch：姓名和身份证号不一致。
OtherMismatch：其他不一致。
                     * @return ResultDetail 业务结果详细信息。
- 当VerifyMode配置"详版"，且Result为"-4: 三要素信息不一致"时返回。
- 枚举值：
PhoneIdCardMismatch：手机号码与姓名一致，与身份证号不一致。
PhoneNameMismatch：手机号码身份证号一致，与姓名不一致。
PhoneNameIdCardMismatch：手机号码与姓名和身份证号均不一致。
NameIdCardMismatch：姓名和身份证号不一致。
OtherMismatch：其他不一致。
                     * 
                     */
                    std::string GetResultDetail() const;

                    /**
                     * 判断参数 ResultDetail 是否已赋值
                     * @return ResultDetail 是否已赋值
                     * 
                     */
                    bool ResultDetailHasBeenSet() const;

                private:

                    /**
                     * 认证结果码。
- 收费结果码
0: 三要素信息一致。
-4: 三要素信息不一致。

- 不收费结果码
-6: 手机号码不合法。
-7: 身份证号码有误。
-8: 姓名校验不通过。
-9: 没有记录。
-11: 验证中心服务繁忙。
-12: 认证次数超过当日限制，请次日重试。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 业务结果描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 运营商名称。
- 取值范围为["","移动","电信","联通"]
                     */
                    std::string m_isp;
                    bool m_ispHasBeenSet;

                    /**
                     * 业务结果详细信息。
- 当VerifyMode配置"详版"，且Result为"-4: 三要素信息不一致"时返回。
- 枚举值：
PhoneIdCardMismatch：手机号码与姓名一致，与身份证号不一致。
PhoneNameMismatch：手机号码身份证号一致，与姓名不一致。
PhoneNameIdCardMismatch：手机号码与姓名和身份证号均不一致。
NameIdCardMismatch：姓名和身份证号不一致。
OtherMismatch：其他不一致。
                     */
                    std::string m_resultDetail;
                    bool m_resultDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_PHONEVERIFICATIONRESPONSE_H_
