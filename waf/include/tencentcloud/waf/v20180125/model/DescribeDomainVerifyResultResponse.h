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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINVERIFYRESULTRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINVERIFYRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeDomainVerifyResult返回参数结构体
                */
                class DescribeDomainVerifyResultResponse : public AbstractModel
                {
                public:
                    DescribeDomainVerifyResultResponse();
                    ~DescribeDomainVerifyResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取结果描述；如果可以添加返回空字符串
                     * @return Msg 结果描述；如果可以添加返回空字符串
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取检验状态：0表示可以添加，大于0为不能添加
                     * @return VerifyCode 检验状态：0表示可以添加，大于0为不能添加
                     * 
                     */
                    int64_t GetVerifyCode() const;

                    /**
                     * 判断参数 VerifyCode 是否已赋值
                     * @return VerifyCode 是否已赋值
                     * 
                     */
                    bool VerifyCodeHasBeenSet() const;

                private:

                    /**
                     * 结果描述；如果可以添加返回空字符串
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 检验状态：0表示可以添加，大于0为不能添加
                     */
                    int64_t m_verifyCode;
                    bool m_verifyCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEDOMAINVERIFYRESULTRESPONSE_H_
