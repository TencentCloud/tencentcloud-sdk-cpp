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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBERESOURCEUSAGEINFOREQUEST_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBERESOURCEUSAGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeResourceUsageInfo请求参数结构体
                */
                class DescribeResourceUsageInfoRequest : public AbstractModel
                {
                public:
                    DescribeResourceUsageInfoRequest();
                    ~DescribeResourceUsageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源计费项名称
                     * @return PriceName 资源计费项名称
                     */
                    std::string GetPriceName() const;

                    /**
                     * 设置资源计费项名称
                     * @param PriceName 资源计费项名称
                     */
                    void SetPriceName(const std::string& _priceName);

                    /**
                     * 判断参数 PriceName 是否已赋值
                     * @return PriceName 是否已赋值
                     */
                    bool PriceNameHasBeenSet() const;

                private:

                    /**
                     * 资源计费项名称
                     */
                    std::string m_priceName;
                    bool m_priceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBERESOURCEUSAGEINFOREQUEST_H_
