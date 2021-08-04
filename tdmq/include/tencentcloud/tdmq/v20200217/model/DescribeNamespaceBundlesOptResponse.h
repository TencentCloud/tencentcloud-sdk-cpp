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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBENAMESPACEBUNDLESOPTRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBENAMESPACEBUNDLESOPTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/BundleSetOpt.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeNamespaceBundlesOpt返回参数结构体
                */
                class DescribeNamespaceBundlesOptResponse : public AbstractModel
                {
                public:
                    DescribeNamespaceBundlesOptResponse();
                    ~DescribeNamespaceBundlesOptResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录条数
                     * @return TotalCount 记录条数
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取bundle列表
                     * @return BundleSet bundle列表
                     */
                    std::vector<BundleSetOpt> GetBundleSet() const;

                    /**
                     * 判断参数 BundleSet 是否已赋值
                     * @return BundleSet 是否已赋值
                     */
                    bool BundleSetHasBeenSet() const;

                private:

                    /**
                     * 记录条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * bundle列表
                     */
                    std::vector<BundleSetOpt> m_bundleSet;
                    bool m_bundleSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBENAMESPACEBUNDLESOPTRESPONSE_H_