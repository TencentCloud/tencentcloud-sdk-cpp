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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyNetAttackSetting请求参数结构体
                */
                class ModifyNetAttackSettingRequest : public AbstractModel
                {
                public:
                    ModifyNetAttackSettingRequest();
                    ~ModifyNetAttackSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>0 关闭网络攻击检测，1开启网络攻击检测</p>
                     * @return NetAttackEnable <p>0 关闭网络攻击检测，1开启网络攻击检测</p>
                     * 
                     */
                    uint64_t GetNetAttackEnable() const;

                    /**
                     * 设置<p>0 关闭网络攻击检测，1开启网络攻击检测</p>
                     * @param _netAttackEnable <p>0 关闭网络攻击检测，1开启网络攻击检测</p>
                     * 
                     */
                    void SetNetAttackEnable(const uint64_t& _netAttackEnable);

                    /**
                     * 判断参数 NetAttackEnable 是否已赋值
                     * @return NetAttackEnable 是否已赋值
                     * 
                     */
                    bool NetAttackEnableHasBeenSet() const;

                    /**
                     * 获取<p>0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略</p>
                     * @return NetAttackAlarmStatus <p>0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略</p>
                     * 
                     */
                    uint64_t GetNetAttackAlarmStatus() const;

                    /**
                     * 设置<p>0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略</p>
                     * @param _netAttackAlarmStatus <p>0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略</p>
                     * 
                     */
                    void SetNetAttackAlarmStatus(const uint64_t& _netAttackAlarmStatus);

                    /**
                     * 判断参数 NetAttackAlarmStatus 是否已赋值
                     * @return NetAttackAlarmStatus 是否已赋值
                     * 
                     */
                    bool NetAttackAlarmStatusHasBeenSet() const;

                    /**
                     * 获取<p>1 全部旗舰版主机，0 Quuids列表主机</p>
                     * @return Scope <p>1 全部旗舰版主机，0 Quuids列表主机</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>1 全部旗舰版主机，0 Quuids列表主机</p>
                     * @param _scope <p>1 全部旗舰版主机，0 Quuids列表主机</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>自选主机</p>
                     * @return InstanceIds <p>自选主机</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>自选主机</p>
                     * @param _instanceIds <p>自选主机</p>
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
                     * 获取<p>自选排除的主机</p>
                     * @return ExcludeInstanceIds <p>自选排除的主机</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

                    /**
                     * 设置<p>自选排除的主机</p>
                     * @param _excludeInstanceIds <p>自选排除的主机</p>
                     * 
                     */
                    void SetExcludeInstanceIds(const std::vector<std::string>& _excludeInstanceIds);

                    /**
                     * 判断参数 ExcludeInstanceIds 是否已赋值
                     * @return ExcludeInstanceIds 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>新增资产自动包含 0 不包含 1包含</p>
                     * @return AutoInclude <p>新增资产自动包含 0 不包含 1包含</p>
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 设置<p>新增资产自动包含 0 不包含 1包含</p>
                     * @param _autoInclude <p>新增资产自动包含 0 不包含 1包含</p>
                     * 
                     */
                    void SetAutoInclude(const uint64_t& _autoInclude);

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                    /**
                     * 获取<p>产品类型 0-主机安全 1-安全中心</p>
                     * @return ProductType <p>产品类型 0-主机安全 1-安全中心</p>
                     * 
                     */
                    uint64_t GetProductType() const;

                    /**
                     * 设置<p>产品类型 0-主机安全 1-安全中心</p>
                     * @param _productType <p>产品类型 0-主机安全 1-安全中心</p>
                     * 
                     */
                    void SetProductType(const uint64_t& _productType);

                    /**
                     * 判断参数 ProductType 是否已赋值
                     * @return ProductType 是否已赋值
                     * 
                     */
                    bool ProductTypeHasBeenSet() const;

                private:

                    /**
                     * <p>0 关闭网络攻击检测，1开启网络攻击检测</p>
                     */
                    uint64_t m_netAttackEnable;
                    bool m_netAttackEnableHasBeenSet;

                    /**
                     * <p>0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略</p>
                     */
                    uint64_t m_netAttackAlarmStatus;
                    bool m_netAttackAlarmStatusHasBeenSet;

                    /**
                     * <p>1 全部旗舰版主机，0 Quuids列表主机</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>自选主机</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>自选排除的主机</p>
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                    /**
                     * <p>新增资产自动包含 0 不包含 1包含</p>
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                    /**
                     * <p>产品类型 0-主机安全 1-安全中心</p>
                     */
                    uint64_t m_productType;
                    bool m_productTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_
