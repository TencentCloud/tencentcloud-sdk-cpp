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

#ifndef TENCENTCLOUD_BTOE_V20210514_MODEL_GETDEPOSITCERTREQUEST_H_
#define TENCENTCLOUD_BTOE_V20210514_MODEL_GETDEPOSITCERTREQUEST_H_

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
                * GetDepositCert请求参数结构体
                */
                class GetDepositCertRequest : public AbstractModel
                {
                public:
                    GetDepositCertRequest();
                    ~GetDepositCertRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取存证编码
                     * @return EvidenceId 存证编码
                     * 
                     */
                    std::string GetEvidenceId() const;

                    /**
                     * 设置存证编码
                     * @param _evidenceId 存证编码
                     * 
                     */
                    void SetEvidenceId(const std::string& _evidenceId);

                    /**
                     * 判断参数 EvidenceId 是否已赋值
                     * @return EvidenceId 是否已赋值
                     * 
                     */
                    bool EvidenceIdHasBeenSet() const;

                private:

                    /**
                     * 存证编码
                     */
                    std::string m_evidenceId;
                    bool m_evidenceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BTOE_V20210514_MODEL_GETDEPOSITCERTREQUEST_H_
