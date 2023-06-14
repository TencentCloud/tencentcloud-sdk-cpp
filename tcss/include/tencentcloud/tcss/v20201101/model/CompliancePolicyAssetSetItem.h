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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYASSETSETITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYASSETSETITEM_H_

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
                * 检查项+资产ids 的集合单元
                */
                class CompliancePolicyAssetSetItem : public AbstractModel
                {
                public:
                    CompliancePolicyAssetSetItem();
                    ~CompliancePolicyAssetSetItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检查项ID
                     * @return CustomerPolicyItemId 检查项ID
                     * 
                     */
                    uint64_t GetCustomerPolicyItemId() const;

                    /**
                     * 设置检查项ID
                     * @param _customerPolicyItemId 检查项ID
                     * 
                     */
                    void SetCustomerPolicyItemId(const uint64_t& _customerPolicyItemId);

                    /**
                     * 判断参数 CustomerPolicyItemId 是否已赋值
                     * @return CustomerPolicyItemId 是否已赋值
                     * 
                     */
                    bool CustomerPolicyItemIdHasBeenSet() const;

                    /**
                     * 获取需要忽略指定检查项内的资产ID列表，为空表示所有
                     * @return CustomerAssetItemIdSet 需要忽略指定检查项内的资产ID列表，为空表示所有
                     * 
                     */
                    std::vector<uint64_t> GetCustomerAssetItemIdSet() const;

                    /**
                     * 设置需要忽略指定检查项内的资产ID列表，为空表示所有
                     * @param _customerAssetItemIdSet 需要忽略指定检查项内的资产ID列表，为空表示所有
                     * 
                     */
                    void SetCustomerAssetItemIdSet(const std::vector<uint64_t>& _customerAssetItemIdSet);

                    /**
                     * 判断参数 CustomerAssetItemIdSet 是否已赋值
                     * @return CustomerAssetItemIdSet 是否已赋值
                     * 
                     */
                    bool CustomerAssetItemIdSetHasBeenSet() const;

                private:

                    /**
                     * 检查项ID
                     */
                    uint64_t m_customerPolicyItemId;
                    bool m_customerPolicyItemIdHasBeenSet;

                    /**
                     * 需要忽略指定检查项内的资产ID列表，为空表示所有
                     */
                    std::vector<uint64_t> m_customerAssetItemIdSet;
                    bool m_customerAssetItemIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_COMPLIANCEPOLICYASSETSETITEM_H_
