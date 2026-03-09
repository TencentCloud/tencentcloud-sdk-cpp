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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHEFFECTHOSTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePatchEffectHostList请求参数结构体
                */
                class DescribePatchEffectHostListRequest : public AbstractModel
                {
                public:
                    DescribePatchEffectHostListRequest();
                    ~DescribePatchEffectHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取补丁id
                     * @return KbId 补丁id
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 设置补丁id
                     * @param _kbId 补丁id
                     * 
                     */
                    void SetKbId(const uint64_t& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取分页limit 最大100
                     * @return Limit 分页limit 最大100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页limit 最大100
                     * @param _limit 分页limit 最大100
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
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
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
                     * 获取过滤条件：  
<li>HostVersion : uint64类型 非必填 版本信息 : 0-基础版 1-专业版 2-旗舰版 3-轻量版 </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景）</li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称</li>
<li>InstanceID : string类型 非必填 主机id</li>
<li>IpAddress : string类型 非必填 主机的ip地址</li>
<li>Uuid : string类型 非必填 主机uuid</li>
                     * @return Filters 过滤条件：  
<li>HostVersion : uint64类型 非必填 版本信息 : 0-基础版 1-专业版 2-旗舰版 3-轻量版 </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景）</li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称</li>
<li>InstanceID : string类型 非必填 主机id</li>
<li>IpAddress : string类型 非必填 主机的ip地址</li>
<li>Uuid : string类型 非必填 主机uuid</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件：  
<li>HostVersion : uint64类型 非必填 版本信息 : 0-基础版 1-专业版 2-旗舰版 3-轻量版 </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景）</li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称</li>
<li>InstanceID : string类型 非必填 主机id</li>
<li>IpAddress : string类型 非必填 主机的ip地址</li>
<li>Uuid : string类型 非必填 主机uuid</li>
                     * @param _filters 过滤条件：  
<li>HostVersion : uint64类型 非必填 版本信息 : 0-基础版 1-专业版 2-旗舰版 3-轻量版 </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景）</li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称</li>
<li>InstanceID : string类型 非必填 主机id</li>
<li>IpAddress : string类型 非必填 主机的ip地址</li>
<li>Uuid : string类型 非必填 主机uuid</li>
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
                     * 补丁id
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * 分页limit 最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件：  
<li>HostVersion : uint64类型 非必填 版本信息 : 0-基础版 1-专业版 2-旗舰版 3-轻量版 </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景）</li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称</li>
<li>InstanceID : string类型 非必填 主机id</li>
<li>IpAddress : string类型 非必填 主机的ip地址</li>
<li>Uuid : string类型 非必填 主机uuid</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHEFFECTHOSTLISTREQUEST_H_
