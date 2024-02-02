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
                     * 获取0 关闭网络攻击检测，1开启网络攻击检测
                     * @return NetAttackEnable 0 关闭网络攻击检测，1开启网络攻击检测
                     * 
                     */
                    uint64_t GetNetAttackEnable() const;

                    /**
                     * 设置0 关闭网络攻击检测，1开启网络攻击检测
                     * @param _netAttackEnable 0 关闭网络攻击检测，1开启网络攻击检测
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
                     * 获取0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略
                     * @return NetAttackAlarmStatus 0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略
                     * 
                     */
                    uint64_t GetNetAttackAlarmStatus() const;

                    /**
                     * 设置0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略
                     * @param _netAttackAlarmStatus 0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略
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
                     * 获取1 全部旗舰版主机，0 Quuids列表主机
                     * @return Scope 1 全部旗舰版主机，0 Quuids列表主机
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置1 全部旗舰版主机，0 Quuids列表主机
                     * @param _scope 1 全部旗舰版主机，0 Quuids列表主机
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
                     * 获取自选主机
                     * @return InstanceIds 自选主机
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置自选主机
                     * @param _instanceIds 自选主机
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
                     * 获取自选排除的主机
                     * @return ExcludeInstanceIds 自选排除的主机
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIds() const;

                    /**
                     * 设置自选排除的主机
                     * @param _excludeInstanceIds 自选排除的主机
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
                     * 获取新增资产自动包含 0 不包含 1包含
                     * @return AutoInclude 新增资产自动包含 0 不包含 1包含
                     * 
                     */
                    uint64_t GetAutoInclude() const;

                    /**
                     * 设置新增资产自动包含 0 不包含 1包含
                     * @param _autoInclude 新增资产自动包含 0 不包含 1包含
                     * 
                     */
                    void SetAutoInclude(const uint64_t& _autoInclude);

                    /**
                     * 判断参数 AutoInclude 是否已赋值
                     * @return AutoInclude 是否已赋值
                     * 
                     */
                    bool AutoIncludeHasBeenSet() const;

                private:

                    /**
                     * 0 关闭网络攻击检测，1开启网络攻击检测
                     */
                    uint64_t m_netAttackEnable;
                    bool m_netAttackEnableHasBeenSet;

                    /**
                     * 0 新增告警事件默认待处理，1新增告警事件默认已处理，3新增告警事件默认忽略
                     */
                    uint64_t m_netAttackAlarmStatus;
                    bool m_netAttackAlarmStatusHasBeenSet;

                    /**
                     * 1 全部旗舰版主机，0 Quuids列表主机
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 自选主机
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 自选排除的主机
                     */
                    std::vector<std::string> m_excludeInstanceIds;
                    bool m_excludeInstanceIdsHasBeenSet;

                    /**
                     * 新增资产自动包含 0 不包含 1包含
                     */
                    uint64_t m_autoInclude;
                    bool m_autoIncludeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYNETATTACKSETTINGREQUEST_H_
