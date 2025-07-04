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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLEDISCOUNTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLEDISCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeBundleDiscount请求参数结构体
                */
                class DescribeBundleDiscountRequest : public AbstractModel
                {
                public:
                    DescribeBundleDiscountRequest();
                    ~DescribeBundleDiscountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐 ID。可通过[DescribeBundles](https://cloud.tencent.com/document/product/1207/47575)接口返回值中的BundleId获取。
                     * @return BundleId 套餐 ID。可通过[DescribeBundles](https://cloud.tencent.com/document/product/1207/47575)接口返回值中的BundleId获取。
                     * 
                     */
                    std::string GetBundleId() const;

                    /**
                     * 设置套餐 ID。可通过[DescribeBundles](https://cloud.tencent.com/document/product/1207/47575)接口返回值中的BundleId获取。
                     * @param _bundleId 套餐 ID。可通过[DescribeBundles](https://cloud.tencent.com/document/product/1207/47575)接口返回值中的BundleId获取。
                     * 
                     */
                    void SetBundleId(const std::string& _bundleId);

                    /**
                     * 判断参数 BundleId 是否已赋值
                     * @return BundleId 是否已赋值
                     * 
                     */
                    bool BundleIdHasBeenSet() const;

                private:

                    /**
                     * 套餐 ID。可通过[DescribeBundles](https://cloud.tencent.com/document/product/1207/47575)接口返回值中的BundleId获取。
                     */
                    std::string m_bundleId;
                    bool m_bundleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLEDISCOUNTREQUEST_H_
