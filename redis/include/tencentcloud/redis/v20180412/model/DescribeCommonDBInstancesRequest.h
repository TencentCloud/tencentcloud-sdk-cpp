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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBECOMMONDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBECOMMONDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeCommonDBInstances请求参数结构体
                */
                class DescribeCommonDBInstancesRequest : public AbstractModel
                {
                public:
                    DescribeCommonDBInstancesRequest();
                    ~DescribeCommonDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取vpc网络ID信息列表
                     * @return VpcIds vpc网络ID信息列表
                     * 
                     */
                    std::vector<int64_t> GetVpcIds() const;

                    /**
                     * 设置vpc网络ID信息列表
                     * @param _vpcIds vpc网络ID信息列表
                     * 
                     */
                    void SetVpcIds(const std::vector<int64_t>& _vpcIds);

                    /**
                     * 判断参数 VpcIds 是否已赋值
                     * @return VpcIds 是否已赋值
                     * 
                     */
                    bool VpcIdsHasBeenSet() const;

                    /**
                     * 获取子网ID信息列表
                     * @return SubnetIds 子网ID信息列表
                     * 
                     */
                    std::vector<int64_t> GetSubnetIds() const;

                    /**
                     * 设置子网ID信息列表
                     * @param _subnetIds 子网ID信息列表
                     * 
                     */
                    void SetSubnetIds(const std::vector<int64_t>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                    /**
                     * 获取计费类型过滤列表；0表示包年包月，1表示按量计费
                     * @return PayMode 计费类型过滤列表；0表示包年包月，1表示按量计费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费类型过滤列表；0表示包年包月，1表示按量计费
                     * @param _payMode 计费类型过滤列表；0表示包年包月，1表示按量计费
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取实例ID过滤信息列表，数组最大长度限制为100
                     * @return InstanceIds 实例ID过滤信息列表，数组最大长度限制为100
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID过滤信息列表，数组最大长度限制为100
                     * @param _instanceIds 实例ID过滤信息列表，数组最大长度限制为100
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
                     * 获取实例名称过滤信息列表
                     * @return InstanceNames 实例名称过滤信息列表
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置实例名称过滤信息列表
                     * @param _instanceNames 实例名称过滤信息列表
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取实例状态信息过滤列表
                     * @return Status 实例状态信息过滤列表
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置实例状态信息过滤列表
                     * @param _status 实例状态信息过滤列表
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return OrderBy 排序字段
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段
                     * @param _orderBy 排序字段
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
                     * 获取排序方式
                     * @return OrderByType 排序方式
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式
                     * @param _orderByType 排序方式
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取实例vip信息列表
                     * @return Vips 实例vip信息列表
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置实例vip信息列表
                     * @param _vips 实例vip信息列表
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取vpc网络ID信息列表
                     * @return UniqVpcIds vpc网络ID信息列表
                     * 
                     */
                    std::vector<std::string> GetUniqVpcIds() const;

                    /**
                     * 设置vpc网络ID信息列表
                     * @param _uniqVpcIds vpc网络ID信息列表
                     * 
                     */
                    void SetUniqVpcIds(const std::vector<std::string>& _uniqVpcIds);

                    /**
                     * 判断参数 UniqVpcIds 是否已赋值
                     * @return UniqVpcIds 是否已赋值
                     * 
                     */
                    bool UniqVpcIdsHasBeenSet() const;

                    /**
                     * 获取子网统一ID列表
                     * @return UniqSubnetIds 子网统一ID列表
                     * 
                     */
                    std::vector<std::string> GetUniqSubnetIds() const;

                    /**
                     * 设置子网统一ID列表
                     * @param _uniqSubnetIds 子网统一ID列表
                     * 
                     */
                    void SetUniqSubnetIds(const std::vector<std::string>& _uniqSubnetIds);

                    /**
                     * 判断参数 UniqSubnetIds 是否已赋值
                     * @return UniqSubnetIds 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdsHasBeenSet() const;

                    /**
                     * 获取数量限制，默认推荐100
                     * @return Limit 数量限制，默认推荐100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置数量限制，默认推荐100
                     * @param _limit 数量限制，默认推荐100
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
                     * 获取偏移量，默认0
                     * @return Offset 偏移量，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0
                     * @param _offset 偏移量，默认0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * vpc网络ID信息列表
                     */
                    std::vector<int64_t> m_vpcIds;
                    bool m_vpcIdsHasBeenSet;

                    /**
                     * 子网ID信息列表
                     */
                    std::vector<int64_t> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                    /**
                     * 计费类型过滤列表；0表示包年包月，1表示按量计费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 实例ID过滤信息列表，数组最大长度限制为100
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例名称过滤信息列表
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 实例状态信息过滤列表
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * 实例vip信息列表
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * vpc网络ID信息列表
                     */
                    std::vector<std::string> m_uniqVpcIds;
                    bool m_uniqVpcIdsHasBeenSet;

                    /**
                     * 子网统一ID列表
                     */
                    std::vector<std::string> m_uniqSubnetIds;
                    bool m_uniqSubnetIdsHasBeenSet;

                    /**
                     * 数量限制，默认推荐100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBECOMMONDBINSTANCESREQUEST_H_
