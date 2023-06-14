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

#ifndef TENCENTCLOUD_BTOE_V20210514_MODEL_VERIFYEVIDENCEHASHREQUEST_H_
#define TENCENTCLOUD_BTOE_V20210514_MODEL_VERIFYEVIDENCEHASHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Btoe
    {
        namespace V20210514
        {
            namespace Model
            {
                /**
                * VerifyEvidenceHash请求参数结构体
                */
                class VerifyEvidenceHashRequest : public AbstractModel
                {
                public:
                    VerifyEvidenceHashRequest();
                    ~VerifyEvidenceHashRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取存证内容hash，hash类型即为用户在存证时所用或所选的hash类型
                     * @return EvidenceHash 存证内容hash，hash类型即为用户在存证时所用或所选的hash类型
                     * 
                     */
                    std::string GetEvidenceHash() const;

                    /**
                     * 设置存证内容hash，hash类型即为用户在存证时所用或所选的hash类型
                     * @param _evidenceHash 存证内容hash，hash类型即为用户在存证时所用或所选的hash类型
                     * 
                     */
                    void SetEvidenceHash(const std::string& _evidenceHash);

                    /**
                     * 判断参数 EvidenceHash 是否已赋值
                     * @return EvidenceHash 是否已赋值
                     * 
                     */
                    bool EvidenceHashHasBeenSet() const;

                private:

                    /**
                     * 存证内容hash，hash类型即为用户在存证时所用或所选的hash类型
                     */
                    std::string m_evidenceHash;
                    bool m_evidenceHashHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210514_MODEL_VERIFYEVIDENCEHASHREQUEST_H_
