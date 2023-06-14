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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETDETAILINFOREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETDETAILINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeComplianceAssetDetailInfo请求参数结构体
                */
                class DescribeComplianceAssetDetailInfoRequest : public AbstractModel
                {
                public:
                    DescribeComplianceAssetDetailInfoRequest();
                    ~DescribeComplianceAssetDetailInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户资产ID。
                     * @return CustomerAssetId 客户资产ID。
                     * 
                     */
                    uint64_t GetCustomerAssetId() const;

                    /**
                     * 设置客户资产ID。
                     * @param _customerAssetId 客户资产ID。
                     * 
                     */
                    void SetCustomerAssetId(const uint64_t& _customerAssetId);

                    /**
                     * 判断参数 CustomerAssetId 是否已赋值
                     * @return CustomerAssetId 是否已赋值
                     * 
                     */
                    bool CustomerAssetIdHasBeenSet() const;

                private:

                    /**
                     * 客户资产ID。
                     */
                    uint64_t m_customerAssetId;
                    bool m_customerAssetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBECOMPLIANCEASSETDETAILINFOREQUEST_H_
