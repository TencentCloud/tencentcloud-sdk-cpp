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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENATIVEGATEWAYSERVERGROUPSREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENATIVEGATEWAYSERVERGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Filter.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeNativeGatewayServerGroups请求参数结构体
                */
                class DescribeNativeGatewayServerGroupsRequest : public AbstractModel
                {
                public:
                    DescribeNativeGatewayServerGroupsRequest();
                    ~DescribeNativeGatewayServerGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云原生API网关实例ID。
                     * @return GatewayId 云原生API网关实例ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置云原生API网关实例ID。
                     * @param _gatewayId 云原生API网关实例ID。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取翻页从第几个开始获取
                     * @return Offset 翻页从第几个开始获取
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置翻页从第几个开始获取
                     * @param _offset 翻页从第几个开始获取
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取翻页获取多少个
                     * @return Limit 翻页获取多少个
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置翻页获取多少个
                     * @param _limit 翻页获取多少个
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
                     * 获取过滤参数
                     * @return Filters 过滤参数
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤参数
                     * @param _filters 过滤参数
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 翻页从第几个开始获取
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 翻页获取多少个
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤参数
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENATIVEGATEWAYSERVERGROUPSREQUEST_H_
