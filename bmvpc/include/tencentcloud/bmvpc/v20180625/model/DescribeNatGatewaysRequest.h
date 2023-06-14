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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBENATGATEWAYSREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBENATGATEWAYSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeNatGateways请求参数结构体
                */
                class DescribeNatGatewaysRequest : public AbstractModel
                {
                public:
                    DescribeNatGatewaysRequest();
                    ~DescribeNatGatewaysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取NAT网关ID，例如：nat-kdm476mp
                     * @return NatId NAT网关ID，例如：nat-kdm476mp
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置NAT网关ID，例如：nat-kdm476mp
                     * @param _natId NAT网关ID，例如：nat-kdm476mp
                     * 
                     */
                    void SetNatId(const std::string& _natId);

                    /**
                     * 判断参数 NatId 是否已赋值
                     * @return NatId 是否已赋值
                     * 
                     */
                    bool NatIdHasBeenSet() const;

                    /**
                     * 获取NAT名称
                     * @return NatName NAT名称
                     * 
                     */
                    std::string GetNatName() const;

                    /**
                     * 设置NAT名称
                     * @param _natName NAT名称
                     * 
                     */
                    void SetNatName(const std::string& _natName);

                    /**
                     * 判断参数 NatName 是否已赋值
                     * @return NatName 是否已赋值
                     * 
                     */
                    bool NatNameHasBeenSet() const;

                    /**
                     * 获取搜索字段
                     * @return SearchKey 搜索字段
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索字段
                     * @param _searchKey 搜索字段
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取私有网络ID，例如：vpc-kd7d06of
                     * @return VpcId 私有网络ID，例如：vpc-kd7d06of
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID，例如：vpc-kd7d06of
                     * @param _vpcId 私有网络ID，例如：vpc-kd7d06of
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取起始值
                     * @return Offset 起始值
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始值
                     * @param _offset 起始值
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
                     * 获取偏移值，默认值为 20
                     * @return Limit 偏移值，默认值为 20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置偏移值，默认值为 20
                     * @param _limit 偏移值，默认值为 20
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
                     * 获取NAT所在可用区，形如：ap-guangzhou-2。
                     * @return Zone NAT所在可用区，形如：ap-guangzhou-2。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置NAT所在可用区，形如：ap-guangzhou-2。
                     * @param _zone NAT所在可用区，形如：ap-guangzhou-2。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取排序字段, 支持"CreateTime"排序
                     * @return OrderField 排序字段, 支持"CreateTime"排序
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段, 支持"CreateTime"排序
                     * @param _orderField 排序字段, 支持"CreateTime"排序
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
                     * 获取排序方向, “asc”、“desc”
                     * @return OrderDirection 排序方向, “asc”、“desc”
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置排序方向, “asc”、“desc”
                     * @param _orderDirection 排序方向, “asc”、“desc”
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * NAT网关ID，例如：nat-kdm476mp
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * NAT名称
                     */
                    std::string m_natName;
                    bool m_natNameHasBeenSet;

                    /**
                     * 搜索字段
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 私有网络ID，例如：vpc-kd7d06of
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 起始值
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 偏移值，默认值为 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * NAT所在可用区，形如：ap-guangzhou-2。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 排序字段, 支持"CreateTime"排序
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方向, “asc”、“desc”
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBENATGATEWAYSREQUEST_H_
