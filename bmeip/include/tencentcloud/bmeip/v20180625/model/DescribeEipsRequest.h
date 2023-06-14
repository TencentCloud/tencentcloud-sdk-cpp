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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPSREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPSREQUEST_H_

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
                * DescribeEips请求参数结构体
                */
                class DescribeEipsRequest : public AbstractModel
                {
                public:
                    DescribeEipsRequest();
                    ~DescribeEipsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取EIP IP 列表
                     * @return Eips EIP IP 列表
                     * 
                     */
                    std::vector<std::string> GetEips() const;

                    /**
                     * 设置EIP IP 列表
                     * @param _eips EIP IP 列表
                     * 
                     */
                    void SetEips(const std::vector<std::string>& _eips);

                    /**
                     * 判断参数 Eips 是否已赋值
                     * @return Eips 是否已赋值
                     * 
                     */
                    bool EipsHasBeenSet() const;

                    /**
                     * 获取主机实例ID 列表
                     * @return InstanceIds 主机实例ID 列表
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置主机实例ID 列表
                     * @param _instanceIds 主机实例ID 列表
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取EIP名称,模糊匹配
                     * @return SearchKey EIP名称,模糊匹配
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置EIP名称,模糊匹配
                     * @param _searchKey EIP名称,模糊匹配
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
                     * 获取状态列表, 默认所有
                     * @return Status 状态列表, 默认所有
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置状态列表, 默认所有
                     * @param _status 状态列表, 默认所有
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取返回EIP数量，默认 20, 最大值 100
                     * @return Limit 返回EIP数量，默认 20, 最大值 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回EIP数量，默认 20, 最大值 100
                     * @param _limit 返回EIP数量，默认 20, 最大值 100
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
                     * 获取排序字段，支持： EipId,Eip,Status, InstanceId,CreatedAt
                     * @return OrderField 排序字段，支持： EipId,Eip,Status, InstanceId,CreatedAt
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段，支持： EipId,Eip,Status, InstanceId,CreatedAt
                     * @param _orderField 排序字段，支持： EipId,Eip,Status, InstanceId,CreatedAt
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
                     * 获取排序方式 0:递增 1:递减(默认)
                     * @return Order 排序方式 0:递增 1:递减(默认)
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置排序方式 0:递增 1:递减(默认)
                     * @param _order 排序方式 0:递增 1:递减(默认)
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
                     * 获取计费模式,流量：flow，带宽：bandwidth
                     * @return PayMode 计费模式,流量：flow，带宽：bandwidth
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置计费模式,流量：flow，带宽：bandwidth
                     * @param _payMode 计费模式,流量：flow，带宽：bandwidth
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取EIP归属VpcId，例如vpc-k7j1t2x1
                     * @return VpcId EIP归属VpcId，例如vpc-k7j1t2x1
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置EIP归属VpcId，例如vpc-k7j1t2x1
                     * @param _vpcId EIP归属VpcId，例如vpc-k7j1t2x1
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
                     * 获取绑定类型，-1：未绑定，0：物理机，1：nat网关，2：虚拟IP, 3:托管机器
                     * @return BindTypes 绑定类型，-1：未绑定，0：物理机，1：nat网关，2：虚拟IP, 3:托管机器
                     * 
                     */
                    std::vector<int64_t> GetBindTypes() const;

                    /**
                     * 设置绑定类型，-1：未绑定，0：物理机，1：nat网关，2：虚拟IP, 3:托管机器
                     * @param _bindTypes 绑定类型，-1：未绑定，0：物理机，1：nat网关，2：虚拟IP, 3:托管机器
                     * 
                     */
                    void SetBindTypes(const std::vector<int64_t>& _bindTypes);

                    /**
                     * 判断参数 BindTypes 是否已赋值
                     * @return BindTypes 是否已赋值
                     * 
                     */
                    bool BindTypesHasBeenSet() const;

                    /**
                     * 获取独占标志，0：共享，1：独占
                     * @return ExclusiveTag 独占标志，0：共享，1：独占
                     * 
                     */
                    int64_t GetExclusiveTag() const;

                    /**
                     * 设置独占标志，0：共享，1：独占
                     * @param _exclusiveTag 独占标志，0：共享，1：独占
                     * 
                     */
                    void SetExclusiveTag(const int64_t& _exclusiveTag);

                    /**
                     * 判断参数 ExclusiveTag 是否已赋值
                     * @return ExclusiveTag 是否已赋值
                     * 
                     */
                    bool ExclusiveTagHasBeenSet() const;

                    /**
                     * 获取EIP ACL实例ID
                     * @return AclId EIP ACL实例ID
                     * 
                     */
                    std::string GetAclId() const;

                    /**
                     * 设置EIP ACL实例ID
                     * @param _aclId EIP ACL实例ID
                     * 
                     */
                    void SetAclId(const std::string& _aclId);

                    /**
                     * 判断参数 AclId 是否已赋值
                     * @return AclId 是否已赋值
                     * 
                     */
                    bool AclIdHasBeenSet() const;

                    /**
                     * 获取搜索条件，是否绑定了EIP ACL， 0：未绑定，1：绑定
                     * @return BindAcl 搜索条件，是否绑定了EIP ACL， 0：未绑定，1：绑定
                     * 
                     */
                    int64_t GetBindAcl() const;

                    /**
                     * 设置搜索条件，是否绑定了EIP ACL， 0：未绑定，1：绑定
                     * @param _bindAcl 搜索条件，是否绑定了EIP ACL， 0：未绑定，1：绑定
                     * 
                     */
                    void SetBindAcl(const int64_t& _bindAcl);

                    /**
                     * 判断参数 BindAcl 是否已赋值
                     * @return BindAcl 是否已赋值
                     * 
                     */
                    bool BindAclHasBeenSet() const;

                private:

                    /**
                     * EIP实例ID列表
                     */
                    std::vector<std::string> m_eipIds;
                    bool m_eipIdsHasBeenSet;

                    /**
                     * EIP IP 列表
                     */
                    std::vector<std::string> m_eips;
                    bool m_eipsHasBeenSet;

                    /**
                     * 主机实例ID 列表
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * EIP名称,模糊匹配
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 状态列表, 默认所有
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回EIP数量，默认 20, 最大值 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序字段，支持： EipId,Eip,Status, InstanceId,CreatedAt
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 排序方式 0:递增 1:递减(默认)
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 计费模式,流量：flow，带宽：bandwidth
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * EIP归属VpcId，例如vpc-k7j1t2x1
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 绑定类型，-1：未绑定，0：物理机，1：nat网关，2：虚拟IP, 3:托管机器
                     */
                    std::vector<int64_t> m_bindTypes;
                    bool m_bindTypesHasBeenSet;

                    /**
                     * 独占标志，0：共享，1：独占
                     */
                    int64_t m_exclusiveTag;
                    bool m_exclusiveTagHasBeenSet;

                    /**
                     * EIP ACL实例ID
                     */
                    std::string m_aclId;
                    bool m_aclIdHasBeenSet;

                    /**
                     * 搜索条件，是否绑定了EIP ACL， 0：未绑定，1：绑定
                     */
                    int64_t m_bindAcl;
                    bool m_bindAclHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_DESCRIBEEIPSREQUEST_H_
