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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/BandwidthPackage.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBandwidthPackages返回参数结构体
                */
                class DescribeBandwidthPackagesResponse : public AbstractModel
                {
                public:
                    DescribeBandwidthPackagesResponse();
                    ~DescribeBandwidthPackagesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的带宽包数量
                     * @return TotalCount 符合条件的带宽包数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取描述带宽包详细信息
                     * @return BandwidthPackageSet 描述带宽包详细信息
                     * 
                     */
                    std::vector<BandwidthPackage> GetBandwidthPackageSet() const;

                    /**
                     * 判断参数 BandwidthPackageSet 是否已赋值
                     * @return BandwidthPackageSet 是否已赋值
                     * 
                     */
                    bool BandwidthPackageSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的带宽包数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 描述带宽包详细信息
                     */
                    std::vector<BandwidthPackage> m_bandwidthPackageSet;
                    bool m_bandwidthPackageSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGESRESPONSE_H_
