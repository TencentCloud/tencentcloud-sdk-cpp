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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDESIGNATEDZONESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDESIGNATEDZONESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/DesignatedZoneInfoDict.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDesignatedZones返回参数结构体
                */
                class DescribeDesignatedZonesResponse : public AbstractModel
                {
                public:
                    DescribeDesignatedZonesResponse();
                    ~DescribeDesignatedZonesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户可选的可用区总数
                     * @return TotalCount 用户可选的可用区总数
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
                     * 获取用户可选的可用区详细信息
                     * @return DesignatedZoneInfo 用户可选的可用区详细信息
                     * 
                     */
                    std::vector<DesignatedZoneInfoDict> GetDesignatedZoneInfo() const;

                    /**
                     * 判断参数 DesignatedZoneInfo 是否已赋值
                     * @return DesignatedZoneInfo 是否已赋值
                     * 
                     */
                    bool DesignatedZoneInfoHasBeenSet() const;

                private:

                    /**
                     * 用户可选的可用区总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 用户可选的可用区详细信息
                     */
                    std::vector<DesignatedZoneInfoDict> m_designatedZoneInfo;
                    bool m_designatedZoneInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEDESIGNATEDZONESRESPONSE_H_
