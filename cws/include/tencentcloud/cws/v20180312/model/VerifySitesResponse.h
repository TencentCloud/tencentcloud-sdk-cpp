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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_VERIFYSITESRESPONSE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_VERIFYSITESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * VerifySites返回参数结构体
                */
                class VerifySitesResponse : public AbstractModel
                {
                public:
                    VerifySitesResponse();
                    ~VerifySitesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取验证成功的根域名数量。
                     * @return SuccessNumber 验证成功的根域名数量。
                     * 
                     */
                    uint64_t GetSuccessNumber() const;

                    /**
                     * 判断参数 SuccessNumber 是否已赋值
                     * @return SuccessNumber 是否已赋值
                     * 
                     */
                    bool SuccessNumberHasBeenSet() const;

                    /**
                     * 获取验证失败的根域名数量。
                     * @return FailNumber 验证失败的根域名数量。
                     * 
                     */
                    uint64_t GetFailNumber() const;

                    /**
                     * 判断参数 FailNumber 是否已赋值
                     * @return FailNumber 是否已赋值
                     * 
                     */
                    bool FailNumberHasBeenSet() const;

                private:

                    /**
                     * 验证成功的根域名数量。
                     */
                    uint64_t m_successNumber;
                    bool m_successNumberHasBeenSet;

                    /**
                     * 验证失败的根域名数量。
                     */
                    uint64_t m_failNumber;
                    bool m_failNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_VERIFYSITESRESPONSE_H_
