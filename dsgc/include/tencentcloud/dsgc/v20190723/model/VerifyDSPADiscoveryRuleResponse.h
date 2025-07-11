/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_VERIFYDSPADISCOVERYRULERESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_VERIFYDSPADISCOVERYRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * VerifyDSPADiscoveryRule返回参数结构体
                */
                class VerifyDSPADiscoveryRuleResponse : public AbstractModel
                {
                public:
                    VerifyDSPADiscoveryRuleResponse();
                    ~VerifyDSPADiscoveryRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取验证结果
Success 验证成功
Failed 验证失败
                     * @return VerifyResult 验证结果
Success 验证成功
Failed 验证失败
                     * 
                     */
                    std::string GetVerifyResult() const;

                    /**
                     * 判断参数 VerifyResult 是否已赋值
                     * @return VerifyResult 是否已赋值
                     * 
                     */
                    bool VerifyResultHasBeenSet() const;

                    /**
                     * 获取验证结果详情
                     * @return DetailInfo 验证结果详情
                     * 
                     */
                    std::string GetDetailInfo() const;

                    /**
                     * 判断参数 DetailInfo 是否已赋值
                     * @return DetailInfo 是否已赋值
                     * 
                     */
                    bool DetailInfoHasBeenSet() const;

                private:

                    /**
                     * 验证结果
Success 验证成功
Failed 验证失败
                     */
                    std::string m_verifyResult;
                    bool m_verifyResultHasBeenSet;

                    /**
                     * 验证结果详情
                     */
                    std::string m_detailInfo;
                    bool m_detailInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_VERIFYDSPADISCOVERYRULERESPONSE_H_
