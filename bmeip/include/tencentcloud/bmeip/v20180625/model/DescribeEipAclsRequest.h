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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPACLSREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPACLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeEipAcls请求参数结构体
                */
                class DescribeEipAclsRequest : public AbstractModel
                {
                public:
                    DescribeEipAclsRequest();
                    ~DescribeEipAclsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ACL 名称，支持模糊查找
                     * @return AclName ACL 名称，支持模糊查找
                     * 
                     */
                    std::string GetAclName() const;

                    /**
                     * 设置ACL 名称，支持模糊查找
                     * @param _aclName ACL 名称，支持模糊查找
                     * 
                     */
                    void SetAclName(const std::string& _aclName);

                    /**
                     * 判断参数 AclName 是否已赋值
                     * @return AclName 是否已赋值
                     * 
                     */
                    bool AclNameHasBeenSet() const;

                    /**
                     * 获取ACL 实例 ID 列表，数组下标从 0 开始
                     * @return AclIds ACL 实例 ID 列表，数组下标从 0 开始
                     * 
                     */
                    std::vector<std::string> GetAclIds() const;

                    /**
                     * 设置ACL 实例 ID 列表，数组下标从 0 开始
                     * @param _aclIds ACL 实例 ID 列表，数组下标从 0 开始
                     * 
                     */
                    void SetAclIds(const std::vector<std::string>& _aclIds);

                    /**
                     * 判断参数 AclIds 是否已赋值
                     * @return AclIds 是否已赋值
                     * 
                     */
                    bool AclIdsHasBeenSet() const;

                    /**
                     * 获取分页参数。偏移量，默认为 0
                     * @return Offset 分页参数。偏移量，默认为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数。偏移量，默认为 0
                     * @param _offset 分页参数。偏移量，默认为 0
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
                     * 获取分页参数。每一页的 EIPACL 列表数目
                     * @return Limit 分页参数。每一页的 EIPACL 列表数目
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数。每一页的 EIPACL 列表数目
                     * @param _limit 分页参数。每一页的 EIPACL 列表数目
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
                     * 获取EIP实例ID列表
                     * @return EipIds EIP实例ID列表
                     * 
                     */
                    std::vector<std::string> GetEipIds() const;

                    /**
                     * 设置EIP实例ID列表
                     * @param _eipIds EIP实例ID列表
                     * 
                     */
                    void SetEipIds(const std::vector<std::string>& _eipIds);

                    /**
                     * 判断参数 EipIds 是否已赋值
                     * @return EipIds 是否已赋值
                     * 
                     */
                    bool EipIdsHasBeenSet() const;

                    /**
                     * 获取EIP IP地址列表
                     * @return EipIps EIP IP地址列表
                     * 
                     */
                    std::vector<std::string> GetEipIps() const;

                    /**
                     * 设置EIP IP地址列表
                     * @param _eipIps EIP IP地址列表
                     * 
                     */
                    void SetEipIps(const std::vector<std::string>& _eipIps);

                    /**
                     * 判断参数 EipIps 是否已赋值
                     * @return EipIps 是否已赋值
                     * 
                     */
                    bool EipIpsHasBeenSet() const;

                    /**
                     * 获取EIP名称列表
                     * @return EipNames EIP名称列表
                     * 
                     */
                    std::vector<std::string> GetEipNames() const;

                    /**
                     * 设置EIP名称列表
                     * @param _eipNames EIP名称列表
                     * 
                     */
                    void SetEipNames(const std::vector<std::string>& _eipNames);

                    /**
                     * 判断参数 EipNames 是否已赋值
                     * @return EipNames 是否已赋值
                     * 
                     */
                    bool EipNamesHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return OrderField 排序字段
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段
                     * @param _orderField 排序字段
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
                    uint64_t GetOrder() const;

                    /**
                     * 设置排序方式，取值：0:增序(默认)，1:降序
                     * @param _order 排序方式，取值：0:增序(默认)，1:降序
                     * 
                     */
                    void SetOrder(const uint64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取ACL名称列表，支持模糊查找
                     * @return AclNames ACL名称列表，支持模糊查找
                     * 
                     */
                    std::vector<std::string> GetAclNames() const;

                    /**
                     * 设置ACL名称列表，支持模糊查找
                     * @param _aclNames ACL名称列表，支持模糊查找
                     * 
                     */
                    void SetAclNames(const std::vector<std::string>& _aclNames);

                    /**
                     * 判断参数 AclNames 是否已赋值
                     * @return AclNames 是否已赋值
                     * 
                     */
                    bool AclNamesHasBeenSet() const;

                private:

                    /**
                     * ACL 名称，支持模糊查找
                     */
                    std::string m_aclName;
                    bool m_aclNameHasBeenSet;

                    /**
                     * ACL 实例 ID 列表，数组下标从 0 开始
                     */
                    std::vector<std::string> m_aclIds;
                    bool m_aclIdsHasBeenSet;

                    /**
                     * 分页参数。偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数。每一页的 EIPACL 列表数目
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * EIP实例ID列表
                     */
                    std::vector<std::string> m_eipIds;
                    bool m_eipIdsHasBeenSet;

                    /**
                     * EIP IP地址列表
                     */
                    std::vector<std::string> m_eipIps;
                    bool m_eipIpsHasBeenSet;

                    /**
                     * EIP名称列表
                     */
                    std::vector<std::string> m_eipNames;
                    bool m_eipNamesHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式，取值：0:增序(默认)，1:降序
                     */
                    uint64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * ACL名称列表，支持模糊查找
                     */
                    std::vector<std::string> m_aclNames;
                    bool m_aclNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPACLSREQUEST_H_
