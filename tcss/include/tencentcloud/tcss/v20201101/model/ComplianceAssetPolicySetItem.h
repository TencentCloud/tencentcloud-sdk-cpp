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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETPOLICYSETITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETPOLICYSETITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 资产+检查项ids 集合单元
                */
                class ComplianceAssetPolicySetItem : public AbstractModel
                {
                public:
                    ComplianceAssetPolicySetItem();
                    ~ComplianceAssetPolicySetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资产ID
                     * @return CustomerAssetItemId 资产ID
                     * 
                     */
                    uint64_t GetCustomerAssetItemId() const;

                    /**
                     * 设置资产ID
                     * @param _customerAssetItemId 资产ID
                     * 
                     */
                    void SetCustomerAssetItemId(const uint64_t& _customerAssetItemId);

                    /**
                     * 判断参数 CustomerAssetItemId 是否已赋值
                     * @return CustomerAssetItemId 是否已赋值
                     * 
                     */
                    bool CustomerAssetItemIdHasBeenSet() const;

                    /**
                     * 获取需要忽略指定资产内的检查项ID列表，为空表示所有
                     * @return CustomerPolicyItemIdSet 需要忽略指定资产内的检查项ID列表，为空表示所有
                     * 
                     */
                    std::vector<uint64_t> GetCustomerPolicyItemIdSet() const;

                    /**
                     * 设置需要忽略指定资产内的检查项ID列表，为空表示所有
                     * @param _customerPolicyItemIdSet 需要忽略指定资产内的检查项ID列表，为空表示所有
                     * 
                     */
                    void SetCustomerPolicyItemIdSet(const std::vector<uint64_t>& _customerPolicyItemIdSet);

                    /**
                     * 判断参数 CustomerPolicyItemIdSet 是否已赋值
                     * @return CustomerPolicyItemIdSet 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdSetHasBeenSet() const;

                private:

                    /**
                     * 资产ID
                     */
                    uint64_t m_customerAssetItemId;
                    bool m_customerAssetItemIdHasBeenSet;

                    /**
                     * 需要忽略指定资产内的检查项ID列表，为空表示所有
                     */
                    std::vector<uint64_t> m_customerPolicyItemIdSet;
                    bool m_customerPolicyItemIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEASSETPOLICYSETITEM_H_
