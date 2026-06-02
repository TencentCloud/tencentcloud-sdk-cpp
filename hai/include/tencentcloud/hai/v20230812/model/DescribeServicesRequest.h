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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBESERVICESREQUEST_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBESERVICESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * DescribeServices请求参数结构体
                */
                class DescribeServicesRequest : public AbstractModel
                {
                public:
                    DescribeServicesRequest();
                    ~DescribeServicesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>服务列表</p>
                     * @return ServiceIds <p>服务列表</p>
                     * 
                     */
                    std::vector<std::string> GetServiceIds() const;

                    /**
                     * 设置<p>服务列表</p>
                     * @param _serviceIds <p>服务列表</p>
                     * 
                     */
                    void SetServiceIds(const std::vector<std::string>& _serviceIds);

                    /**
                     * 判断参数 ServiceIds 是否已赋值
                     * @return ServiceIds 是否已赋值
                     * 
                     */
                    bool ServiceIdsHasBeenSet() const;

                    /**
                     * 获取<p>分页大小</p>
                     * @return Limit <p>分页大小</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页大小</p>
                     * @param _limit <p>分页大小</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>服务列表</p>
                     */
                    std::vector<std::string> m_serviceIds;
                    bool m_serviceIdsHasBeenSet;

                    /**
                     * <p>分页大小</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBESERVICESREQUEST_H_
