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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTPATCHEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTPATCHEFFECTHOSTLISTREQUEST_H_

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
                * ExportPatchEffectHostList请求参数结构体
                */
                class ExportPatchEffectHostListRequest : public AbstractModel
                {
                public:
                    ExportPatchEffectHostListRequest();
                    ~ExportPatchEffectHostListRequest() = default;
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
                     * 获取过滤条件：  
<li>ProtectType : uint64类型 非必填 防护版本类型  0表示BASIC_VERSION，1表示Flagship </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景） </li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称 </li>
<li>InstanceID : string类型 非必填 主机id </li>
<li>IpAddress : string类型 非必填 主机的ip地址 </li>
<li>Uuid : string类型 非必填 主机uuid</li>
                     * @return Filters 过滤条件：  
<li>ProtectType : uint64类型 非必填 防护版本类型  0表示BASIC_VERSION，1表示Flagship </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景） </li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称 </li>
<li>InstanceID : string类型 非必填 主机id </li>
<li>IpAddress : string类型 非必填 主机的ip地址 </li>
<li>Uuid : string类型 非必填 主机uuid</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件：  
<li>ProtectType : uint64类型 非必填 防护版本类型  0表示BASIC_VERSION，1表示Flagship </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景） </li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称 </li>
<li>InstanceID : string类型 非必填 主机id </li>
<li>IpAddress : string类型 非必填 主机的ip地址 </li>
<li>Uuid : string类型 非必填 主机uuid</li>
                     * @param _filters 过滤条件：  
<li>ProtectType : uint64类型 非必填 防护版本类型  0表示BASIC_VERSION，1表示Flagship </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景） </li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称 </li>
<li>InstanceID : string类型 非必填 主机id </li>
<li>IpAddress : string类型 非必填 主机的ip地址 </li>
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
                     * 过滤条件：  
<li>ProtectType : uint64类型 非必填 防护版本类型  0表示BASIC_VERSION，1表示Flagship </li>
<li>InstanceState : string类型 非必填 主机状态 : "PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-开机中 "STOPPING"-关机中 "REBOOTING"-重启中 "SHUTDOWN"-待销毁 "TERMINATING"-销毁中 "UNKNOWN"-未知（针对非腾讯云机器，且客户端离线的场景） </li>
<li>Status : uint64类型 非必填 处理状态 0表示待处理，1表示忽略，3表示已修复</li>
<li>HostName : string类型 非必填 主机名称 </li>
<li>InstanceID : string类型 非必填 主机id </li>
<li>IpAddress : string类型 非必填 主机的ip地址 </li>
<li>Uuid : string类型 非必填 主机uuid</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTPATCHEFFECTHOSTLISTREQUEST_H_
