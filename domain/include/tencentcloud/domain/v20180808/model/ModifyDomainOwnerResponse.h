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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifyDomainOwner返回参数结构体
                */
                class ModifyDomainOwnerResponse : public AbstractModel
                {
                public:
                    ModifyDomainOwnerResponse();
                    ~ModifyDomainOwnerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取null: 未转移对应的 DNS 解析域名，false: 转移对应的 DNS 解析域名失败，true: 转移对应的 DNS 解析域名成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransferDnsResult null: 未转移对应的 DNS 解析域名，false: 转移对应的 DNS 解析域名失败，true: 转移对应的 DNS 解析域名成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetTransferDnsResult() const;

                    /**
                     * 判断参数 TransferDnsResult 是否已赋值
                     * @return TransferDnsResult 是否已赋值
                     * 
                     */
                    bool TransferDnsResultHasBeenSet() const;

                private:

                    /**
                     * null: 未转移对应的 DNS 解析域名，false: 转移对应的 DNS 解析域名失败，true: 转移对应的 DNS 解析域名成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_transferDnsResult;
                    bool m_transferDnsResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERRESPONSE_H_
