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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGEBILLUSAGEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGEBILLUSAGEREQUEST_H_

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
                * DescribeBandwidthPackageBillUsage请求参数结构体
                */
                class DescribeBandwidthPackageBillUsageRequest : public AbstractModel
                {
                public:
                    DescribeBandwidthPackageBillUsageRequest();
                    ~DescribeBandwidthPackageBillUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取后付费共享带宽包的唯一ID，可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209)接口获取BandwidthPackageId。
                     * @return BandwidthPackageId 后付费共享带宽包的唯一ID，可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209)接口获取BandwidthPackageId。
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置后付费共享带宽包的唯一ID，可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209)接口获取BandwidthPackageId。
                     * @param _bandwidthPackageId 后付费共享带宽包的唯一ID，可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209)接口获取BandwidthPackageId。
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                private:

                    /**
                     * 后付费共享带宽包的唯一ID，可以使用[DescribeBandwidthPackages](https://cloud.tencent.com/document/api/215/19209)接口获取BandwidthPackageId。
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEBANDWIDTHPACKAGEBILLUSAGEREQUEST_H_
