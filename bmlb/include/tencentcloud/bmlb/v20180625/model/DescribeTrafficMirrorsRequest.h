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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeTrafficMirrors请求参数结构体
                */
                class DescribeTrafficMirrorsRequest : public AbstractModel
                {
                public:
                    DescribeTrafficMirrorsRequest();
                    ~DescribeTrafficMirrorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流量镜像实例ID的数组，支持批量查询
                     * @return TrafficMirrorIds 流量镜像实例ID的数组，支持批量查询
                     * 
                     */
                    std::vector<std::string> GetTrafficMirrorIds() const;

                    /**
                     * 设置流量镜像实例ID的数组，支持批量查询
                     * @param _trafficMirrorIds 流量镜像实例ID的数组，支持批量查询
                     * 
                     */
                    void SetTrafficMirrorIds(const std::vector<std::string>& _trafficMirrorIds);

                    /**
                     * 判断参数 TrafficMirrorIds 是否已赋值
                     * @return TrafficMirrorIds 是否已赋值
                     * 
                     */
                    bool TrafficMirrorIdsHasBeenSet() const;

                    /**
                     * 获取流量镜像实例别名数组。
                     * @return Aliases 流量镜像实例别名数组。
                     * 
                     */
                    std::vector<std::string> GetAliases() const;

                    /**
                     * 设置流量镜像实例别名数组。
                     * @param _aliases 流量镜像实例别名数组。
                     * 
                     */
                    void SetAliases(const std::vector<std::string>& _aliases);

                    /**
                     * 判断参数 Aliases 是否已赋值
                     * @return Aliases 是否已赋值
                     * 
                     */
                    bool AliasesHasBeenSet() const;

                    /**
                     * 获取流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     * @return VpcIds 流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     * 
                     */
                    std::vector<std::string> GetVpcIds() const;

                    /**
                     * 设置流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     * @param _vpcIds 流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     * 
                     */
                    void SetVpcIds(const std::vector<std::string>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取分页的偏移量，也即从第几条记录开始查询
                     * @return Offset 分页的偏移量，也即从第几条记录开始查询
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，也即从第几条记录开始查询
                     * @param _offset 分页的偏移量，也即从第几条记录开始查询
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
                     * 获取单次查询返回的条目数，默认值：500。
                     * @return Limit 单次查询返回的条目数，默认值：500。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次查询返回的条目数，默认值：500。
                     * @param _limit 单次查询返回的条目数，默认值：500。
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
                     * 获取排序字段。trafficMirrorId或者createTime。
                     * @return OrderField 排序字段。trafficMirrorId或者createTime。
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段。trafficMirrorId或者createTime。
                     * @param _orderField 排序字段。trafficMirrorId或者createTime。
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取排序方式，取值：0:增序(默认)，1:降序
                     * @return Order 排序方式，取值：0:增序(默认)，1:降序
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置排序方式，取值：0:增序(默认)，1:降序
                     * @param _order 排序方式，取值：0:增序(默认)，1:降序
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取模糊匹配trafficMirrorId或者alias字段。
                     * @return SearchKey 模糊匹配trafficMirrorId或者alias字段。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置模糊匹配trafficMirrorId或者alias字段。
                     * @param _searchKey 模糊匹配trafficMirrorId或者alias字段。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * 流量镜像实例ID的数组，支持批量查询
                     */
                    std::vector<std::string> m_trafficMirrorIds;
                    bool m_trafficMirrorIdsHasBeenSet;

                    /**
                     * 流量镜像实例别名数组。
                     */
                    std::vector<std::string> m_aliases;
                    bool m_aliasesHasBeenSet;

                    /**
                     * 流量镜像实例所属的私有网络ID数组，形如：vpc-xxx。
                     */
                    std::vector<std::string> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 分页的偏移量，也即从第几条记录开始查询
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次查询返回的条目数，默认值：500。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段。trafficMirrorId或者createTime。
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式，取值：0:增序(默认)，1:降序
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 模糊匹配trafficMirrorId或者alias字段。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DESCRIBETRAFFICMIRRORSREQUEST_H_
