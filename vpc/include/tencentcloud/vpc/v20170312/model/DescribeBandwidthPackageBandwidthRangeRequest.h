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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGEBANDWIDTHRANGEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGEBANDWIDTHRANGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBandwidthPackageBandwidthRange请求参数结构体
                */
                class DescribeBandwidthPackageBandwidthRangeRequest : public AbstractModel
                {
                public:
                    DescribeBandwidthPackageBandwidthRangeRequest();
                    ~DescribeBandwidthPackageBandwidthRangeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取带宽包资源ID列表，单次查询上限20。可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口查询BandwidthPackageId。
                     * @return BandwidthPackageIds 带宽包资源ID列表，单次查询上限20。可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口查询BandwidthPackageId。
                     * 
                     */
                    std::vector<std::string> GetBandwidthPackageIds() const;

                    /**
                     * 设置带宽包资源ID列表，单次查询上限20。可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口查询BandwidthPackageId。
                     * @param _bandwidthPackageIds 带宽包资源ID列表，单次查询上限20。可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口查询BandwidthPackageId。
                     * 
                     */
                    void SetBandwidthPackageIds(const std::vector<std::string>& _bandwidthPackageIds);

                    /**
                     * 判断参数 BandwidthPackageIds 是否已赋值
                     * @return BandwidthPackageIds 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdsHasBeenSet() const;

                private:

                    /**
                     * 带宽包资源ID列表，单次查询上限20。可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/product/215/19209)接口查询BandwidthPackageId。
                     */
                    std::vector<std::string> m_bandwidthPackageIds;
                    bool m_bandwidthPackageIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGEBANDWIDTHRANGEREQUEST_H_
