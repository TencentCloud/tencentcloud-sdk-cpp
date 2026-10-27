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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEREGIONDISTRIBUTIONRESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEREGIONDISTRIBUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/DistributionInfo.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribeInstanceRegionDistribution返回参数结构体
                */
                class DescribeInstanceRegionDistributionResponse : public AbstractModel
                {
                public:
                    DescribeInstanceRegionDistributionResponse();
                    ~DescribeInstanceRegionDistributionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>各区域实例个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DistributionInfo <p>各区域实例个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DistributionInfo> GetDistributionInfo() const;

                    /**
                     * 判断参数 DistributionInfo 是否已赋值
                     * @return DistributionInfo 是否已赋值
                     * 
                     */
                    bool DistributionInfoHasBeenSet() const;

                private:

                    /**
                     * <p>各区域实例个数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DistributionInfo> m_distributionInfo;
                    bool m_distributionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEINSTANCEREGIONDISTRIBUTIONRESPONSE_H_
