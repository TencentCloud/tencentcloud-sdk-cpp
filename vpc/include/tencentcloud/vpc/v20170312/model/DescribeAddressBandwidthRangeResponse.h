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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSBANDWIDTHRANGERESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSBANDWIDTHRANGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/BandwidthRange.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeAddressBandwidthRange返回参数结构体
                */
                class DescribeAddressBandwidthRangeResponse : public AbstractModel
                {
                public:
                    DescribeAddressBandwidthRangeResponse();
                    ~DescribeAddressBandwidthRangeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取EIP带宽上下限详细信息。
                     * @return BandwidthRangeSet EIP带宽上下限详细信息。
                     * 
                     */
                    std::vector<BandwidthRange> GetBandwidthRangeSet() const;

                    /**
                     * 判断参数 BandwidthRangeSet 是否已赋值
                     * @return BandwidthRangeSet 是否已赋值
                     * 
                     */
                    bool BandwidthRangeSetHasBeenSet() const;

                private:

                    /**
                     * EIP带宽上下限详细信息。
                     */
                    std::vector<BandwidthRange> m_bandwidthRangeSet;
                    bool m_bandwidthRangeSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEADDRESSBANDWIDTHRANGERESPONSE_H_
