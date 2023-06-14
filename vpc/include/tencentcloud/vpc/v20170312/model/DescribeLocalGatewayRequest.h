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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBELOCALGATEWAYREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBELOCALGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeLocalGateway请求参数结构体
                */
                class DescribeLocalGatewayRequest : public AbstractModel
                {
                public:
                    DescribeLocalGatewayRequest();
                    ~DescribeLocalGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询条件：
vpc-id：按照VPCID过滤，local-gateway-name：按照本地网关名称过滤，名称支持模糊搜索，local-gateway-id：按照本地网关实例ID过滤，cdc-id：按照cdc实例ID过滤查询。
                     * @return Filters 查询条件：
vpc-id：按照VPCID过滤，local-gateway-name：按照本地网关名称过滤，名称支持模糊搜索，local-gateway-id：按照本地网关实例ID过滤，cdc-id：按照cdc实例ID过滤查询。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置查询条件：
vpc-id：按照VPCID过滤，local-gateway-name：按照本地网关名称过滤，名称支持模糊搜索，local-gateway-id：按照本地网关实例ID过滤，cdc-id：按照cdc实例ID过滤查询。
                     * @param _filters 查询条件：
vpc-id：按照VPCID过滤，local-gateway-name：按照本地网关名称过滤，名称支持模糊搜索，local-gateway-id：按照本地网关实例ID过滤，cdc-id：按照cdc实例ID过滤查询。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @return Offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @param _offset 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @return Limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * @param _limit 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 查询条件：
vpc-id：按照VPCID过滤，local-gateway-name：按照本地网关名称过滤，名称支持模糊搜索，local-gateway-id：按照本地网关实例ID过滤，cdc-id：按照cdc实例ID过滤查询。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于`Offset`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于`Limit`的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/11646)中的相关小节。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBELOCALGATEWAYREQUEST_H_
