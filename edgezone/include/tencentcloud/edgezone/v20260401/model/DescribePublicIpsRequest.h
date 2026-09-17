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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPUBLICIPSREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPUBLICIPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * DescribePublicIps请求参数结构体
                */
                class DescribePublicIpsRequest : public AbstractModel
                {
                public:
                    DescribePublicIpsRequest();
                    ~DescribePublicIpsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按公网实例 ID 过滤（子串匹配，多个值取并集）
                     * @return NetworkInstanceId 按公网实例 ID 过滤（子串匹配，多个值取并集）
                     * 
                     */
                    std::vector<std::string> GetNetworkInstanceId() const;

                    /**
                     * 设置按公网实例 ID 过滤（子串匹配，多个值取并集）
                     * @param _networkInstanceId 按公网实例 ID 过滤（子串匹配，多个值取并集）
                     * 
                     */
                    void SetNetworkInstanceId(const std::vector<std::string>& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取按可用区/机房过滤
                     * @return ZoneId 按可用区/机房过滤
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置按可用区/机房过滤
                     * @param _zoneId 按可用区/机房过滤
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取按 IP 过滤（子串匹配，多个值取并集）
                     * @return Ip 按 IP 过滤（子串匹配，多个值取并集）
                     * 
                     */
                    std::vector<std::string> GetIp() const;

                    /**
                     * 设置按 IP 过滤（子串匹配，多个值取并集）
                     * @param _ip 按 IP 过滤（子串匹配，多个值取并集）
                     * 
                     */
                    void SetIp(const std::vector<std::string>& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取按状态过滤，可选值：`InUse`、`Unbound`（多个值取并集）
                     * @return State 按状态过滤，可选值：`InUse`、`Unbound`（多个值取并集）
                     * 
                     */
                    std::vector<std::string> GetState() const;

                    /**
                     * 设置按状态过滤，可选值：`InUse`、`Unbound`（多个值取并集）
                     * @param _state 按状态过滤，可选值：`InUse`、`Unbound`（多个值取并集）
                     * 
                     */
                    void SetState(const std::vector<std::string>& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取按 IP 版本过滤，可选值：`Ipv4`、`Ipv6`（多个值取并集）
                     * @return Type 按 IP 版本过滤，可选值：`Ipv4`、`Ipv6`（多个值取并集）
                     * 
                     */
                    std::vector<std::string> GetType() const;

                    /**
                     * 设置按 IP 版本过滤，可选值：`Ipv4`、`Ipv6`（多个值取并集）
                     * @param _type 按 IP 版本过滤，可选值：`Ipv4`、`Ipv6`（多个值取并集）
                     * 
                     */
                    void SetType(const std::vector<std::string>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取按创建时间排序，可选值：`asc`、`desc`（默认 `desc`）
                     * @return OrderByCreateTime 按创建时间排序，可选值：`asc`、`desc`（默认 `desc`）
                     * 
                     */
                    std::string GetOrderByCreateTime() const;

                    /**
                     * 设置按创建时间排序，可选值：`asc`、`desc`（默认 `desc`）
                     * @param _orderByCreateTime 按创建时间排序，可选值：`asc`、`desc`（默认 `desc`）
                     * 
                     */
                    void SetOrderByCreateTime(const std::string& _orderByCreateTime);

                    /**
                     * 判断参数 OrderByCreateTime 是否已赋值
                     * @return OrderByCreateTime 是否已赋值
                     * 
                     */
                    bool OrderByCreateTimeHasBeenSet() const;

                    /**
                     * 获取按更新时间排序，可选值：`asc`、`desc`（优先级高于创建时间排序）
                     * @return OrderByUpdateTime 按更新时间排序，可选值：`asc`、`desc`（优先级高于创建时间排序）
                     * 
                     */
                    std::string GetOrderByUpdateTime() const;

                    /**
                     * 设置按更新时间排序，可选值：`asc`、`desc`（优先级高于创建时间排序）
                     * @param _orderByUpdateTime 按更新时间排序，可选值：`asc`、`desc`（优先级高于创建时间排序）
                     * 
                     */
                    void SetOrderByUpdateTime(const std::string& _orderByUpdateTime);

                    /**
                     * 判断参数 OrderByUpdateTime 是否已赋值
                     * @return OrderByUpdateTime 是否已赋值
                     * 
                     */
                    bool OrderByUpdateTimeHasBeenSet() const;

                    /**
                     * 获取分页偏移量，默认 0
                     * @return Offset 分页偏移量，默认 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认 0
                     * @param _offset 分页偏移量，默认 0
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
                     * 获取每页数量，默认 20，最大 100
                     * @return Limit 每页数量，默认 20，最大 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，默认 20，最大 100
                     * @param _limit 每页数量，默认 20，最大 100
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
                     * 按公网实例 ID 过滤（子串匹配，多个值取并集）
                     */
                    std::vector<std::string> m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * 按可用区/机房过滤
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 按 IP 过滤（子串匹配，多个值取并集）
                     */
                    std::vector<std::string> m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 按状态过滤，可选值：`InUse`、`Unbound`（多个值取并集）
                     */
                    std::vector<std::string> m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 按 IP 版本过滤，可选值：`Ipv4`、`Ipv6`（多个值取并集）
                     */
                    std::vector<std::string> m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 按创建时间排序，可选值：`asc`、`desc`（默认 `desc`）
                     */
                    std::string m_orderByCreateTime;
                    bool m_orderByCreateTimeHasBeenSet;

                    /**
                     * 按更新时间排序，可选值：`asc`、`desc`（优先级高于创建时间排序）
                     */
                    std::string m_orderByUpdateTime;
                    bool m_orderByUpdateTimeHasBeenSet;

                    /**
                     * 分页偏移量，默认 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页数量，默认 20，最大 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_DESCRIBEPUBLICIPSREQUEST_H_
