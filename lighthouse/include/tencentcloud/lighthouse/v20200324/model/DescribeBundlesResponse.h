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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/Bundle.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeBundles返回参数结构体
                */
                class DescribeBundlesResponse : public AbstractModel
                {
                public:
                    DescribeBundlesResponse();
                    ~DescribeBundlesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取套餐详细信息列表。
                     * @return BundleSet 套餐详细信息列表。
                     * 
                     */
                    std::vector<Bundle> GetBundleSet() const;

                    /**
                     * 判断参数 BundleSet 是否已赋值
                     * @return BundleSet 是否已赋值
                     * 
                     */
                    bool BundleSetHasBeenSet() const;

                    /**
                     * 获取符合要求的套餐总数，用于分页展示。
                     * @return TotalCount 符合要求的套餐总数，用于分页展示。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 套餐详细信息列表。
                     */
                    std::vector<Bundle> m_bundleSet;
                    bool m_bundleSetHasBeenSet;

                    /**
                     * 符合要求的套餐总数，用于分页展示。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBUNDLESRESPONSE_H_
