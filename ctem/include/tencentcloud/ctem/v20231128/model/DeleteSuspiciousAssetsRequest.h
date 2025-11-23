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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DELETESUSPICIOUSASSETSREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DELETESUSPICIOUSASSETSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * DeleteSuspiciousAssets请求参数结构体
                */
                class DeleteSuspiciousAssetsRequest : public AbstractModel
                {
                public:
                    DeleteSuspiciousAssetsRequest();
                    ~DeleteSuspiciousAssetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID列表
                     * @return Ids ID列表
                     * 
                     */
                    std::vector<int64_t> GetIds() const;

                    /**
                     * 设置ID列表
                     * @param _ids ID列表
                     * 
                     */
                    void SetIds(const std::vector<int64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取企业ID列表，可多选
                     * @return CustomerIdList 企业ID列表，可多选
                     * 
                     */
                    std::vector<int64_t> GetCustomerIdList() const;

                    /**
                     * 设置企业ID列表，可多选
                     * @param _customerIdList 企业ID列表，可多选
                     * 
                     */
                    void SetCustomerIdList(const std::vector<int64_t>& _customerIdList);

                    /**
                     * 判断参数 CustomerIdList 是否已赋值
                     * @return CustomerIdList 是否已赋值
                     * 
                     */
                    bool CustomerIdListHasBeenSet() const;

                    /**
                     * 获取是否聚合数据
                     * @return IsAggregation 是否聚合数据
                     * 
                     */
                    bool GetIsAggregation() const;

                    /**
                     * 设置是否聚合数据
                     * @param _isAggregation 是否聚合数据
                     * 
                     */
                    void SetIsAggregation(const bool& _isAggregation);

                    /**
                     * 判断参数 IsAggregation 是否已赋值
                     * @return IsAggregation 是否已赋值
                     * 
                     */
                    bool IsAggregationHasBeenSet() const;

                private:

                    /**
                     * ID列表
                     */
                    std::vector<int64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 企业ID列表，可多选
                     */
                    std::vector<int64_t> m_customerIdList;
                    bool m_customerIdListHasBeenSet;

                    /**
                     * 是否聚合数据
                     */
                    bool m_isAggregation;
                    bool m_isAggregationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DELETESUSPICIOUSASSETSREQUEST_H_
