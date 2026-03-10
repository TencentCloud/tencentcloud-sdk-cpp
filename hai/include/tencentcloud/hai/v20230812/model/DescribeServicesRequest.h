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
                     * 获取服务列表
                     * @return ServiceIds 服务列表
                     * 
                     */
                    std::vector<std::string> GetServiceIds() const;

                    /**
                     * 设置服务列表
                     * @param _serviceIds 服务列表
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
                     * 获取分页大小
                     * @return Limit 分页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页大小
                     * @param _limit 分页大小
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
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
                     * 服务列表
                     */
                    std::vector<std::string> m_serviceIds;
                    bool m_serviceIdsHasBeenSet;

                    /**
                     * 分页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBESERVICESREQUEST_H_
