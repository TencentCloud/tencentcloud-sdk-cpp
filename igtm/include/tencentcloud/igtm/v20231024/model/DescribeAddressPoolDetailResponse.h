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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEADDRESSPOOLDETAILRESPONSE_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEADDRESSPOOLDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/igtm/v20231024/model/AddressPoolDetail.h>
#include <tencentcloud/igtm/v20231024/model/Address.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeAddressPoolDetail返回参数结构体
                */
                class DescribeAddressPoolDetailResponse : public AbstractModel
                {
                public:
                    DescribeAddressPoolDetailResponse();
                    ~DescribeAddressPoolDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组详情描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressPool 资源组详情描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AddressPoolDetail GetAddressPool() const;

                    /**
                     * 判断参数 AddressPool 是否已赋值
                     * @return AddressPool 是否已赋值
                     * 
                     */
                    bool AddressPoolHasBeenSet() const;

                    /**
                     * 获取资源组中的资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressSet 资源组中的资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Address> GetAddressSet() const;

                    /**
                     * 判断参数 AddressSet 是否已赋值
                     * @return AddressSet 是否已赋值
                     * 
                     */
                    bool AddressSetHasBeenSet() const;

                private:

                    /**
                     * 资源组详情描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AddressPoolDetail m_addressPool;
                    bool m_addressPoolHasBeenSet;

                    /**
                     * 资源组中的资源列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Address> m_addressSet;
                    bool m_addressSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEADDRESSPOOLDETAILRESPONSE_H_
