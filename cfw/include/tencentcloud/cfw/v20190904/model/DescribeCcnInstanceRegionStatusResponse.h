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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNINSTANCEREGIONSTATUSRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNINSTANCEREGIONSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/RegionFwStatus.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCcnInstanceRegionStatus返回参数结构体
                */
                class DescribeCcnInstanceRegionStatusResponse : public AbstractModel
                {
                public:
                    DescribeCcnInstanceRegionStatusResponse();
                    ~DescribeCcnInstanceRegionStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取地域总数量
                     * @return Total 地域总数量
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取地域防火墙引流网络状态列表
                     * @return RegionFwStatus 地域防火墙引流网络状态列表
                     * 
                     */
                    std::vector<RegionFwStatus> GetRegionFwStatus() const;

                    /**
                     * 判断参数 RegionFwStatus 是否已赋值
                     * @return RegionFwStatus 是否已赋值
                     * 
                     */
                    bool RegionFwStatusHasBeenSet() const;

                private:

                    /**
                     * 地域总数量
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 地域防火墙引流网络状态列表
                     */
                    std::vector<RegionFwStatus> m_regionFwStatus;
                    bool m_regionFwStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNINSTANCEREGIONSTATUSRESPONSE_H_
