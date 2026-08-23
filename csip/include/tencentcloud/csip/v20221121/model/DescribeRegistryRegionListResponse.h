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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEREGISTRYREGIONLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEREGISTRYREGIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeRegistryRegionList返回参数结构体
                */
                class DescribeRegistryRegionListResponse : public AbstractModel
                {
                public:
                    DescribeRegistryRegionListResponse();
                    ~DescribeRegistryRegionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>地域列表</p>
                     * @return Regions <p>地域列表</p>
                     * 
                     */
                    std::vector<RegionInfo> GetRegions() const;

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取<p>默认地域</p>
                     * @return DefaultRegion <p>默认地域</p>
                     * 
                     */
                    std::string GetDefaultRegion() const;

                    /**
                     * 判断参数 DefaultRegion 是否已赋值
                     * @return DefaultRegion 是否已赋值
                     * 
                     */
                    bool DefaultRegionHasBeenSet() const;

                private:

                    /**
                     * <p>地域列表</p>
                     */
                    std::vector<RegionInfo> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * <p>默认地域</p>
                     */
                    std::string m_defaultRegion;
                    bool m_defaultRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEREGISTRYREGIONLISTRESPONSE_H_
