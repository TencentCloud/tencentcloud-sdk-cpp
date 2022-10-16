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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENRESPONSE_H_

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
                * ApplyWebVerificationToken返回参数结构体
                */
                class ApplyWebVerificationTokenResponse : public AbstractModel
                {
                public:
                    ApplyWebVerificationTokenResponse();
                    ~ApplyWebVerificationTokenResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户浏览器需要打开此地址开始核验流程。
                     * @return VerificationUrl 用户浏览器需要打开此地址开始核验流程。
                     */
                    std::string GetVerificationUrl() const;

                    /**
                     * 判断参数 VerificationUrl 是否已赋值
                     * @return VerificationUrl 是否已赋值
                     */
                    bool VerificationUrlHasBeenSet() const;

                    /**
                     * 获取标识一次Web核验流程的令牌，有效时间为7,200秒。流程结束后可用该令牌获取核验结果信息。
                     * @return BizToken 标识一次Web核验流程的令牌，有效时间为7,200秒。流程结束后可用该令牌获取核验结果信息。
                     */
                    std::string GetBizToken() const;

                    /**
                     * 判断参数 BizToken 是否已赋值
                     * @return BizToken 是否已赋值
                     */
                    bool BizTokenHasBeenSet() const;

                private:

                    /**
                     * 用户浏览器需要打开此地址开始核验流程。
                     */
                    std::string m_verificationUrl;
                    bool m_verificationUrlHasBeenSet;

                    /**
                     * 标识一次Web核验流程的令牌，有效时间为7,200秒。流程结束后可用该令牌获取核验结果信息。
                     */
                    std::string m_bizToken;
                    bool m_bizTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_APPLYWEBVERIFICATIONTOKENRESPONSE_H_
