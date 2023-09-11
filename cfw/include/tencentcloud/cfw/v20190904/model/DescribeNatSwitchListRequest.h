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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATSWITCHLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATSWITCHLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeNatSwitchList请求参数结构体
                */
                class DescribeNatSwitchListRequest : public AbstractModel
                {
                public:
                    DescribeNatSwitchListRequest();
                    ~DescribeNatSwitchListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，分页用
                     * @return Offset 偏移量，分页用
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，分页用
                     * @param _offset 偏移量，分页用
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
                     * 获取条数，分页用
                     * @return Limit 条数，分页用
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置条数，分页用
                     * @param _limit 条数，分页用
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
                     * 获取搜索值
                     * @return SearchValue 搜索值
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置搜索值
                     * @param _searchValue 搜索值
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取开关，1打开，0关闭
                     * @return Status 开关，1打开，0关闭
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置开关，1打开，0关闭
                     * @param _status 开关，1打开，0关闭
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取筛选NAT防火墙子网开关所属VPC
                     * @return VpcId 筛选NAT防火墙子网开关所属VPC
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置筛选NAT防火墙子网开关所属VPC
                     * @param _vpcId 筛选NAT防火墙子网开关所属VPC
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
                     * 获取筛选NAT防火墙子网开关所属NAT网关
                     * @return NatId 筛选NAT防火墙子网开关所属NAT网关
                     * 
                     */
                    std::string GetNatId() const;

                    /**
                     * 设置筛选NAT防火墙子网开关所属NAT网关
                     * @param _natId 筛选NAT防火墙子网开关所属NAT网关
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
                     * 获取筛选NAT防火墙子网开关所属NAT防火墙实例
                     * @return NatInsId 筛选NAT防火墙子网开关所属NAT防火墙实例
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置筛选NAT防火墙子网开关所属NAT防火墙实例
                     * @param _natInsId 筛选NAT防火墙子网开关所属NAT防火墙实例
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

                    /**
                     * 获取筛选NAT防火墙子网开关所属地域
                     * @return Area 筛选NAT防火墙子网开关所属地域
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置筛选NAT防火墙子网开关所属地域
                     * @param _area 筛选NAT防火墙子网开关所属地域
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 偏移量，分页用
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 条数，分页用
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索值
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 开关，1打开，0关闭
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 筛选NAT防火墙子网开关所属VPC
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 筛选NAT防火墙子网开关所属NAT网关
                     */
                    std::string m_natId;
                    bool m_natIdHasBeenSet;

                    /**
                     * 筛选NAT防火墙子网开关所属NAT防火墙实例
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                    /**
                     * 筛选NAT防火墙子网开关所属地域
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBENATSWITCHLISTREQUEST_H_
