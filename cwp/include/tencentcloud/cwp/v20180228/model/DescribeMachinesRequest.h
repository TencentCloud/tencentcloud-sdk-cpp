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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESREQUEST_H_

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
                * DescribeMachines请求参数结构体
                */
                class DescribeMachinesRequest : public AbstractModel
                {
                public:
                    DescribeMachinesRequest();
                    ~DescribeMachinesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>机器所属专区类型<br>CVM 云服务器<br>BM 黑石<br>ECM 边缘计算<br>LH 轻量应用服务器<br>Other 混合云专区</p>
                     * @return MachineType <p>机器所属专区类型<br>CVM 云服务器<br>BM 黑石<br>ECM 边缘计算<br>LH 轻量应用服务器<br>Other 混合云专区</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>机器所属专区类型<br>CVM 云服务器<br>BM 黑石<br>ECM 边缘计算<br>LH 轻量应用服务器<br>Other 混合云专区</p>
                     * @param _machineType <p>机器所属专区类型<br>CVM 云服务器<br>BM 黑石<br>ECM 边缘计算<br>LH 轻量应用服务器<br>Other 混合云专区</p>
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
                     * 获取<p>机器所属地域。如：ap-guangzhou，ap-shanghai，非腾讯云主机使用：ap-others</p>
                     * @return MachineRegion <p>机器所属地域。如：ap-guangzhou，ap-shanghai，非腾讯云主机使用：ap-others</p>
                     * 
                     */
                    std::string GetMachineRegion() const;

                    /**
                     * 设置<p>机器所属地域。如：ap-guangzhou，ap-shanghai，非腾讯云主机使用：ap-others</p>
                     * @param _machineRegion <p>机器所属地域。如：ap-guangzhou，ap-shanghai，非腾讯云主机使用：ap-others</p>
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
                     * 获取<p>返回数量，默认为10，最大值为100。</p>
                     * @return Limit <p>返回数量，默认为10，最大值为100。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为10，最大值为100。</p>
                     * @param _limit <p>返回数量，默认为10，最大值为100。</p>
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
                     * 获取<p>偏移量，默认为0。</p>
                     * @return Offset <p>偏移量，默认为0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0。</p>
                     * @param _offset <p>偏移量，默认为0。</p>
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
                     * 获取<p>过滤条件。</p><li>Ips - String - 是否必填：否 - 通过ip查询 </li><li>Names - String - 是否必填：否 - 通过实例名查询 </li><li>InstanceIds - String - 是否必填：否 - 通过实例id查询 </li><li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship : 旗舰版 | ProtectedMachines: 专业版+旗舰版）</li><li>Risk - String 是否必填: 否 - 风险主机( yes ) </li><li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li><li>Quuid - String - 是否必填: 否 - 云服务器uuid  最大100条.</li><li>AddedOnTheFifteen- String 是否必填: 否 - 是否只查询15天内新增的主机( 1：是) </li><li> TagId- String 是否必填: 否 - 查询指定标签关联的主机列表 </li><li> AgentStatus- String 是否必填: 否 - ALL 全部; ONLINE 防护中; OFFLINE 已离线;UNINSTALLED 未安装</li><li> MachineStatus- String 是否必填: 否 - ALL 全部; RUNNING 运行中; STOPPED 已关机; EXPIRED 待回收</li>
                     * @return Filters <p>过滤条件。</p><li>Ips - String - 是否必填：否 - 通过ip查询 </li><li>Names - String - 是否必填：否 - 通过实例名查询 </li><li>InstanceIds - String - 是否必填：否 - 通过实例id查询 </li><li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship : 旗舰版 | ProtectedMachines: 专业版+旗舰版）</li><li>Risk - String 是否必填: 否 - 风险主机( yes ) </li><li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li><li>Quuid - String - 是否必填: 否 - 云服务器uuid  最大100条.</li><li>AddedOnTheFifteen- String 是否必填: 否 - 是否只查询15天内新增的主机( 1：是) </li><li> TagId- String 是否必填: 否 - 查询指定标签关联的主机列表 </li><li> AgentStatus- String 是否必填: 否 - ALL 全部; ONLINE 防护中; OFFLINE 已离线;UNINSTALLED 未安装</li><li> MachineStatus- String 是否必填: 否 - ALL 全部; RUNNING 运行中; STOPPED 已关机; EXPIRED 待回收</li>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件。</p><li>Ips - String - 是否必填：否 - 通过ip查询 </li><li>Names - String - 是否必填：否 - 通过实例名查询 </li><li>InstanceIds - String - 是否必填：否 - 通过实例id查询 </li><li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship : 旗舰版 | ProtectedMachines: 专业版+旗舰版）</li><li>Risk - String 是否必填: 否 - 风险主机( yes ) </li><li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li><li>Quuid - String - 是否必填: 否 - 云服务器uuid  最大100条.</li><li>AddedOnTheFifteen- String 是否必填: 否 - 是否只查询15天内新增的主机( 1：是) </li><li> TagId- String 是否必填: 否 - 查询指定标签关联的主机列表 </li><li> AgentStatus- String 是否必填: 否 - ALL 全部; ONLINE 防护中; OFFLINE 已离线;UNINSTALLED 未安装</li><li> MachineStatus- String 是否必填: 否 - ALL 全部; RUNNING 运行中; STOPPED 已关机; EXPIRED 待回收</li>
                     * @param _filters <p>过滤条件。</p><li>Ips - String - 是否必填：否 - 通过ip查询 </li><li>Names - String - 是否必填：否 - 通过实例名查询 </li><li>InstanceIds - String - 是否必填：否 - 通过实例id查询 </li><li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship : 旗舰版 | ProtectedMachines: 专业版+旗舰版）</li><li>Risk - String 是否必填: 否 - 风险主机( yes ) </li><li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li><li>Quuid - String - 是否必填: 否 - 云服务器uuid  最大100条.</li><li>AddedOnTheFifteen- String 是否必填: 否 - 是否只查询15天内新增的主机( 1：是) </li><li> TagId- String 是否必填: 否 - 查询指定标签关联的主机列表 </li><li> AgentStatus- String 是否必填: 否 - ALL 全部; ONLINE 防护中; OFFLINE 已离线;UNINSTALLED 未安装</li><li> MachineStatus- String 是否必填: 否 - ALL 全部; RUNNING 运行中; STOPPED 已关机; EXPIRED 待回收</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>机器所属业务ID列表</p>
                     * @return ProjectIds <p>机器所属业务ID列表</p>
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置<p>机器所属业务ID列表</p>
                     * @param _projectIds <p>机器所属业务ID列表</p>
                     * 
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取<p>机器对应的APPID</p>
                     * @return MachineAppId <p>机器对应的APPID</p>
                     * 
                     */
                    uint64_t GetMachineAppId() const;

                    /**
                     * 设置<p>机器对应的APPID</p>
                     * @param _machineAppId <p>机器对应的APPID</p>
                     * 
                     */
                    void SetMachineAppId(const uint64_t& _machineAppId);

                    /**
                     * 判断参数 MachineAppId 是否已赋值
                     * @return MachineAppId 是否已赋值
                     * 
                     */
                    bool MachineAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>机器所属专区类型<br>CVM 云服务器<br>BM 黑石<br>ECM 边缘计算<br>LH 轻量应用服务器<br>Other 混合云专区</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>机器所属地域。如：ap-guangzhou，ap-shanghai，非腾讯云主机使用：ap-others</p>
                     */
                    std::string m_machineRegion;
                    bool m_machineRegionHasBeenSet;

                    /**
                     * <p>返回数量，默认为10，最大值为100。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>过滤条件。</p><li>Ips - String - 是否必填：否 - 通过ip查询 </li><li>Names - String - 是否必填：否 - 通过实例名查询 </li><li>InstanceIds - String - 是否必填：否 - 通过实例id查询 </li><li>Version - String  是否必填：否 - 当前防护版本（ PRO_VERSION：专业版 | BASIC_VERSION：基础版 | Flagship : 旗舰版 | ProtectedMachines: 专业版+旗舰版）</li><li>Risk - String 是否必填: 否 - 风险主机( yes ) </li><li>Os -String 是否必填: 否 - 操作系统( DescribeMachineOsList 接口 值 )每个过滤条件只支持一个值，暂不支持多个值“或”关系查询</li><li>Quuid - String - 是否必填: 否 - 云服务器uuid  最大100条.</li><li>AddedOnTheFifteen- String 是否必填: 否 - 是否只查询15天内新增的主机( 1：是) </li><li> TagId- String 是否必填: 否 - 查询指定标签关联的主机列表 </li><li> AgentStatus- String 是否必填: 否 - ALL 全部; ONLINE 防护中; OFFLINE 已离线;UNINSTALLED 未安装</li><li> MachineStatus- String 是否必填: 否 - ALL 全部; RUNNING 运行中; STOPPED 已关机; EXPIRED 待回收</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>机器所属业务ID列表</p>
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * <p>机器对应的APPID</p>
                     */
                    uint64_t m_machineAppId;
                    bool m_machineAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINESREQUEST_H_
