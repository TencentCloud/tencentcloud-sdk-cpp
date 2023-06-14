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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEDASHBOARDRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEDASHBOARDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/FlowUsage.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeDashboard返回参数结构体
                */
                class DescribeDashboardResponse : public AbstractModel
                {
                public:
                    DescribeDashboardResponse();
                    ~DescribeDashboardResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域解析总数
                     * @return ZoneTotal 私有域解析总数
                     * 
                     */
                    int64_t GetZoneTotal() const;

                    /**
                     * 判断参数 ZoneTotal 是否已赋值
                     * @return ZoneTotal 是否已赋值
                     * 
                     */
                    bool ZoneTotalHasBeenSet() const;

                    /**
                     * 获取私有域关联VPC数量
                     * @return ZoneVpcCount 私有域关联VPC数量
                     * 
                     */
                    int64_t GetZoneVpcCount() const;

                    /**
                     * 判断参数 ZoneVpcCount 是否已赋值
                     * @return ZoneVpcCount 是否已赋值
                     * 
                     */
                    bool ZoneVpcCountHasBeenSet() const;

                    /**
                     * 获取历史请求量总数
                     * @return RequestTotalCount 历史请求量总数
                     * 
                     */
                    int64_t GetRequestTotalCount() const;

                    /**
                     * 判断参数 RequestTotalCount 是否已赋值
                     * @return RequestTotalCount 是否已赋值
                     * 
                     */
                    bool RequestTotalCountHasBeenSet() const;

                    /**
                     * 获取流量包用量
                     * @return FlowUsage 流量包用量
                     * 
                     */
                    std::vector<FlowUsage> GetFlowUsage() const;

                    /**
                     * 判断参数 FlowUsage 是否已赋值
                     * @return FlowUsage 是否已赋值
                     * 
                     */
                    bool FlowUsageHasBeenSet() const;

                private:

                    /**
                     * 私有域解析总数
                     */
                    int64_t m_zoneTotal;
                    bool m_zoneTotalHasBeenSet;

                    /**
                     * 私有域关联VPC数量
                     */
                    int64_t m_zoneVpcCount;
                    bool m_zoneVpcCountHasBeenSet;

                    /**
                     * 历史请求量总数
                     */
                    int64_t m_requestTotalCount;
                    bool m_requestTotalCountHasBeenSet;

                    /**
                     * 流量包用量
                     */
                    std::vector<FlowUsage> m_flowUsage;
                    bool m_flowUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DESCRIBEDASHBOARDRESPONSE_H_
