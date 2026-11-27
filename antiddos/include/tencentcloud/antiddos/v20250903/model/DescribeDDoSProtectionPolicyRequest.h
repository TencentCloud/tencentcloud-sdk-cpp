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

#ifndef TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEDDOSPROTECTIONPOLICYREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEDDOSPROTECTIONPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20250903
        {
            namespace Model
            {
                /**
                * DescribeDDoSProtectionPolicy请求参数结构体
                */
                class DescribeDDoSProtectionPolicyRequest : public AbstractModel
                {
                public:
                    DescribeDDoSProtectionPolicyRequest();
                    ~DescribeDDoSProtectionPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>防护实例 ID。</p>
                     * @return ProtectionId <p>防护实例 ID。</p>
                     * 
                     */
                    std::string GetProtectionId() const;

                    /**
                     * 设置<p>防护实例 ID。</p>
                     * @param _protectionId <p>防护实例 ID。</p>
                     * 
                     */
                    void SetProtectionId(const std::string& _protectionId);

                    /**
                     * 判断参数 ProtectionId 是否已赋值
                     * @return ProtectionId 是否已赋值
                     * 
                     */
                    bool ProtectionIdHasBeenSet() const;

                private:

                    /**
                     * <p>防护实例 ID。</p>
                     */
                    std::string m_protectionId;
                    bool m_protectionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20250903_MODEL_DESCRIBEDDOSPROTECTIONPOLICYREQUEST_H_
