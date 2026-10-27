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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONEHOSTSRESPONSE_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONEHOSTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdz/v20221123/model/CloudDedicatedZoneHostsInfo.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * DescribeCloudDedicatedZoneHosts返回参数结构体
                */
                class DescribeCloudDedicatedZoneHostsResponse : public AbstractModel
                {
                public:
                    DescribeCloudDedicatedZoneHostsResponse();
                    ~DescribeCloudDedicatedZoneHostsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>返回Host和Host上部署的实例信息之间的关系</p>
                     * @return CloudDedicatedZoneHostsInfoSet <p>返回Host和Host上部署的实例信息之间的关系</p>
                     * 
                     */
                    std::vector<CloudDedicatedZoneHostsInfo> GetCloudDedicatedZoneHostsInfoSet() const;

                    /**
                     * 判断参数 CloudDedicatedZoneHostsInfoSet 是否已赋值
                     * @return CloudDedicatedZoneHostsInfoSet 是否已赋值
                     * 
                     */
                    bool CloudDedicatedZoneHostsInfoSetHasBeenSet() const;

                    /**
                     * 获取<p>母机总数</p>
                     * @return TotalCount <p>母机总数</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * <p>返回Host和Host上部署的实例信息之间的关系</p>
                     */
                    std::vector<CloudDedicatedZoneHostsInfo> m_cloudDedicatedZoneHostsInfoSet;
                    bool m_cloudDedicatedZoneHostsInfoSetHasBeenSet;

                    /**
                     * <p>母机总数</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONEHOSTSRESPONSE_H_
