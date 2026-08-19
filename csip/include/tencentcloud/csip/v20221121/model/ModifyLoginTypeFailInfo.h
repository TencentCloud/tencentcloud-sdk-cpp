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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINTYPEFAILINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINTYPEFAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 修改主机登录方式失败详情
                */
                class ModifyLoginTypeFailInfo : public AbstractModel
                {
                public:
                    ModifyLoginTypeFailInfo();
                    ~ModifyLoginTypeFailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主机名称</p>
                     * @return MachineName <p>主机名称</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>主机名称</p>
                     * @param _machineName <p>主机名称</p>
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取<p>主机实例ID</p>
                     * @return InstanceId <p>主机实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>主机实例ID</p>
                     * @param _instanceId <p>主机实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>主机内网IP</p>
                     * @return MachineIp <p>主机内网IP</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>主机内网IP</p>
                     * @param _machineIp <p>主机内网IP</p>
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取<p>主机公网IP</p>
                     * @return MachineWanIp <p>主机公网IP</p>
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置<p>主机公网IP</p>
                     * @param _machineWanIp <p>主机公网IP</p>
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取<p>主机可用区</p>
                     * @return Region <p>主机可用区</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>主机可用区</p>
                     * @param _region <p>主机可用区</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>主机类型</p>
                     * @return MachineType <p>主机类型</p>
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置<p>主机类型</p>
                     * @param _machineType <p>主机类型</p>
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
                     * 获取<p>以下几个固定值需要前端特殊处理，其他失败原因可直接展示：</p><ol><li>UNINSTALLED   -- 未安装</li><li>NEED_UPGRADE -- 需要升级</li><li>NOT_RUNNING -- 已关机</li><li>NO_PASSWORD -- 未开启密码登录，无法开启扫码</li></ol>
                     * @return Message <p>以下几个固定值需要前端特殊处理，其他失败原因可直接展示：</p><ol><li>UNINSTALLED   -- 未安装</li><li>NEED_UPGRADE -- 需要升级</li><li>NOT_RUNNING -- 已关机</li><li>NO_PASSWORD -- 未开启密码登录，无法开启扫码</li></ol>
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置<p>以下几个固定值需要前端特殊处理，其他失败原因可直接展示：</p><ol><li>UNINSTALLED   -- 未安装</li><li>NEED_UPGRADE -- 需要升级</li><li>NOT_RUNNING -- 已关机</li><li>NO_PASSWORD -- 未开启密码登录，无法开启扫码</li></ol>
                     * @param _message <p>以下几个固定值需要前端特殊处理，其他失败原因可直接展示：</p><ol><li>UNINSTALLED   -- 未安装</li><li>NEED_UPGRADE -- 需要升级</li><li>NOT_RUNNING -- 已关机</li><li>NO_PASSWORD -- 未开启密码登录，无法开启扫码</li></ol>
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取<p>失败原因</p>
                     * @return MessageDesc <p>失败原因</p>
                     * 
                     */
                    std::string GetMessageDesc() const;

                    /**
                     * 设置<p>失败原因</p>
                     * @param _messageDesc <p>失败原因</p>
                     * 
                     */
                    void SetMessageDesc(const std::string& _messageDesc);

                    /**
                     * 判断参数 MessageDesc 是否已赋值
                     * @return MessageDesc 是否已赋值
                     * 
                     */
                    bool MessageDescHasBeenSet() const;

                private:

                    /**
                     * <p>主机名称</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>主机实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>主机内网IP</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>主机公网IP</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>主机可用区</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>主机类型</p>
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * <p>以下几个固定值需要前端特殊处理，其他失败原因可直接展示：</p><ol><li>UNINSTALLED   -- 未安装</li><li>NEED_UPGRADE -- 需要升级</li><li>NOT_RUNNING -- 已关机</li><li>NO_PASSWORD -- 未开启密码登录，无法开启扫码</li></ol>
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_messageDesc;
                    bool m_messageDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYLOGINTYPEFAILINFO_H_
