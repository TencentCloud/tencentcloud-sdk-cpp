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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBETHIRDPARTYAUTHCODERESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBETHIRDPARTYAUTHCODERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeThirdPartyAuthCode返回参数结构体
                */
                class DescribeThirdPartyAuthCodeResponse : public AbstractModel
                {
                public:
                    DescribeThirdPartyAuthCodeResponse();
                    ~DescribeThirdPartyAuthCodeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取AuthCode 中对应个人用户是否实名
<ul>
<li> **VERIFIED** : 此个人已实名</li>
<li> **UNVERIFIED**: 此个人未实名</li></ul>
                     * @return VerifyStatus AuthCode 中对应个人用户是否实名
<ul>
<li> **VERIFIED** : 此个人已实名</li>
<li> **UNVERIFIED**: 此个人未实名</li></ul>
                     * 
                     */
                    std::string GetVerifyStatus() const;

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

                private:

                    /**
                     * AuthCode 中对应个人用户是否实名
<ul>
<li> **VERIFIED** : 此个人已实名</li>
<li> **UNVERIFIED**: 此个人未实名</li></ul>
                     */
                    std::string m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBETHIRDPARTYAUTHCODERESPONSE_H_
