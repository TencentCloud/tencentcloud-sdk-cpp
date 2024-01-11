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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_ISSUECREDENTIALRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_ISSUECREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * IssueCredential返回参数结构体
                */
                class IssueCredentialResponse : public AbstractModel
                {
                public:
                    IssueCredentialResponse();
                    ~IssueCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取可验证凭证内容
                     * @return CredentialData 可验证凭证内容
                     * 
                     */
                    std::string GetCredentialData() const;

                    /**
                     * 判断参数 CredentialData 是否已赋值
                     * @return CredentialData 是否已赋值
                     * 
                     */
                    bool CredentialDataHasBeenSet() const;

                private:

                    /**
                     * 可验证凭证内容
                     */
                    std::string m_credentialData;
                    bool m_credentialDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_ISSUECREDENTIALRESPONSE_H_
