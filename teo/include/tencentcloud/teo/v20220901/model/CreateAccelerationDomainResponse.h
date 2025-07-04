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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateAccelerationDomain返回参数结构体
                */
                class CreateAccelerationDomainResponse : public AbstractModel
                {
                public:
                    CreateAccelerationDomainResponse();
                    ~CreateAccelerationDomainResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当您的站点未进行归属权验证时，您可通过该参数返回的信息单独对域名进行归属权校验。详情参考 [站点/域名归属权验证](https://cloud.tencent.com/document/product/1552/70789)。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnershipVerification 当您的站点未进行归属权验证时，您可通过该参数返回的信息单独对域名进行归属权校验。详情参考 [站点/域名归属权验证](https://cloud.tencent.com/document/product/1552/70789)。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                private:

                    /**
                     * 当您的站点未进行归属权验证时，您可通过该参数返回的信息单独对域名进行归属权校验。详情参考 [站点/域名归属权验证](https://cloud.tencent.com/document/product/1552/70789)。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEACCELERATIONDOMAINRESPONSE_H_
