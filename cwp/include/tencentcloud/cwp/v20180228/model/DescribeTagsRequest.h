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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBETAGSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBETAGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeTags请求参数结构体
                */
                class DescribeTagsRequest : public AbstractModel
                {
                public:
                    DescribeTagsRequest();
                    ~DescribeTagsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云主机类型。
<li>CVM：表示云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云服务器</li>
                     * @return MachineType 云主机类型。
<li>CVM：表示云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云服务器</li>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置云主机类型。
<li>CVM：表示云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云服务器</li>
                     * @param _machineType 云主机类型。
<li>CVM：表示云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云服务器</li>
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取机器所属地域。如：ap-guangzhou
                     * @return MachineRegion 机器所属地域。如：ap-guangzhou
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置机器所属地域。如：ap-guangzhou
                     * @param _machineRegion 机器所属地域。如：ap-guangzhou
                     * 
                     */
                    void SetMachineRegion(const std::string& _machineRegion);

                    /**
                     * 判断参数 MachineRegion 是否已赋值
                     * @return MachineRegion 是否已赋值
                     * 
                     */
                    bool MachineRegionHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>Keywords - String - 是否必填：否 - 查询关键字(机器名称/机器IP </li>
<li>Status - String - 是否必填：否 - 客户端在线状态（OFFLINE: 离线 | ONLINE: 在线 | UNINSTALLED：未安装 | SHUTDOWN 已关机）</li>
<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版）</li>
<li>Risk - String 是否必填: 否 - 风险主机( yes ) </li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li>
                     * @return Filters 过滤条件。
<li>Keywords - String - 是否必填：否 - 查询关键字(机器名称/机器IP </li>
<li>Status - String - 是否必填：否 - 客户端在线状态（OFFLINE: 离线 | ONLINE: 在线 | UNINSTALLED：未安装 | SHUTDOWN 已关机）</li>
<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版）</li>
<li>Risk - String 是否必填: 否 - 风险主机( yes ) </li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>Keywords - String - 是否必填：否 - 查询关键字(机器名称/机器IP </li>
<li>Status - String - 是否必填：否 - 客户端在线状态（OFFLINE: 离线 | ONLINE: 在线 | UNINSTALLED：未安装 | SHUTDOWN 已关机）</li>
<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版）</li>
<li>Risk - String 是否必填: 否 - 风险主机( yes ) </li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li>
                     * @param _filters 过滤条件。
<li>Keywords - String - 是否必填：否 - 查询关键字(机器名称/机器IP </li>
<li>Status - String - 是否必填：否 - 客户端在线状态（OFFLINE: 离线 | ONLINE: 在线 | UNINSTALLED：未安装 | SHUTDOWN 已关机）</li>
<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版）</li>
<li>Risk - String 是否必填: 否 - 风险主机( yes ) </li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 云主机类型。
<li>CVM：表示云服务器</li>
<li>BM:  表示黑石物理机</li>
<li>ECM:  表示边缘计算服务器</li>
<li>LH:  表示轻量应用服务器</li>
<li>Other:  表示混合云服务器</li>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 机器所属地域。如：ap-guangzhou
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * 过滤条件。
<li>Keywords - String - 是否必填：否 - 查询关键字(机器名称/机器IP </li>
<li>Status - String - 是否必填：否 - 客户端在线状态（OFFLINE: 离线 | ONLINE: 在线 | UNINSTALLED：未安装 | SHUTDOWN 已关机）</li>
<li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版）</li>
<li>Risk - String 是否必填: 否 - 风险主机( yes ) </li>
<li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )
每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBETAGSREQUEST_H_
