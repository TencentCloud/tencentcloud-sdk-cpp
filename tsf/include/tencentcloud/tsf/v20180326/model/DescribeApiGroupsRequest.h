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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIGROUPSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeApiGroups请求参数结构体
                */
                class DescribeApiGroupsRequest : public AbstractModel
                {
                public:
                    DescribeApiGroupsRequest();
                    ~DescribeApiGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索关键字
                     * @return SearchWord 搜索关键字
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字
                     * @param _searchWord 搜索关键字
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取每页条数，默认为20
                     * @return Limit 每页条数，默认为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数，默认为20
                     * @param _limit 每页条数，默认为20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分组类型。 ms： 微服务分组； external:外部Api分组
                     * @return GroupType 分组类型。 ms： 微服务分组； external:外部Api分组
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置分组类型。 ms： 微服务分组； external:外部Api分组
                     * @param _groupType 分组类型。 ms： 微服务分组； external:外部Api分组
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     * @return AuthType 鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     * @param _authType 鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取发布状态, drafted: 未发布。 released: 发布
                     * @return Status 发布状态, drafted: 未发布。 released: 发布
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置发布状态, drafted: 未发布。 released: 发布
                     * @param _status 发布状态, drafted: 未发布。 released: 发布
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取排序字段："created_time"或"group_context"
                     * @return OrderBy 排序字段："created_time"或"group_context"
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段："created_time"或"group_context"
                     * @param _orderBy 排序字段："created_time"或"group_context"
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序类型：0(ASC)或1(DESC)
                     * @return OrderType 排序类型：0(ASC)或1(DESC)
                     * 
                     */
                    int64_t GetOrderType() const;

                    /**
                     * 设置排序类型：0(ASC)或1(DESC)
                     * @param _orderType 排序类型：0(ASC)或1(DESC)
                     * 
                     */
                    void SetOrderType(const int64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取网关实体ID
                     * @return GatewayInstanceId 网关实体ID
                     * 
                     */
                    std::string GetGatewayInstanceId() const;

                    /**
                     * 设置网关实体ID
                     * @param _gatewayInstanceId 网关实体ID
                     * 
                     */
                    void SetGatewayInstanceId(const std::string& _gatewayInstanceId);

                    /**
                     * 判断参数 GatewayInstanceId 是否已赋值
                     * @return GatewayInstanceId 是否已赋值
                     * 
                     */
                    bool GatewayInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 搜索关键字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条数，默认为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分组类型。 ms： 微服务分组； external:外部Api分组
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 鉴权类型。 secret： 密钥鉴权； none:无鉴权
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 发布状态, drafted: 未发布。 released: 发布
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 排序字段："created_time"或"group_context"
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序类型：0(ASC)或1(DESC)
                     */
                    int64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 网关实体ID
                     */
                    std::string m_gatewayInstanceId;
                    bool m_gatewayInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEAPIGROUPSREQUEST_H_
