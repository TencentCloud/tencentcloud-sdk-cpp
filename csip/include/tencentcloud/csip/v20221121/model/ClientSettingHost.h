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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLIENTSETTINGHOST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLIENTSETTINGHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>
#include <tencentcloud/csip/v20221121/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 客户端设置相关功能主机结构体
                */
                class ClientSettingHost : public AbstractModel
                {
                public:
                    ClientSettingHost();
                    ~ClientSettingHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>host对应的数据库记录ID</p>
                     * @return Id <p>host对应的数据库记录ID</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>host对应的数据库记录ID</p>
                     * @param _id <p>host对应的数据库记录ID</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>主机名字</p>
                     * @return Name <p>主机名字</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>主机名字</p>
                     * @param _name <p>主机名字</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>公网IP</p>
                     * @return PublicIp <p>公网IP</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公网IP</p>
                     * @param _publicIp <p>公网IP</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>内网IP</p>
                     * @return PrivateIp <p>内网IP</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>内网IP</p>
                     * @param _privateIp <p>内网IP</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>主机Quuid</p>
                     * @return Quuid <p>主机Quuid</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>主机Quuid</p>
                     * @param _quuid <p>主机Quuid</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>主机状态<br>OFFLINE: 离线<br>ONLINE: 在线<br>SHUTDOWN: 已关机<br>UNINSTALLED: 未防护</p>
                     * @return Status <p>主机状态<br>OFFLINE: 离线<br>ONLINE: 在线<br>SHUTDOWN: 已关机<br>UNINSTALLED: 未防护</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>主机状态<br>OFFLINE: 离线<br>ONLINE: 在线<br>SHUTDOWN: 已关机<br>UNINSTALLED: 未防护</p>
                     * @param _status <p>主机状态<br>OFFLINE: 离线<br>ONLINE: 在线<br>SHUTDOWN: 已关机<br>UNINSTALLED: 未防护</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>ins-sad143</p>
                     * @return VpcId <p>ins-sad143</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>ins-sad143</p>
                     * @param _vpcId <p>ins-sad143</p>
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
                     * 获取<p>地域信息</p>
                     * @return RegionInfo <p>地域信息</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>地域信息</p>
                     * @param _regionInfo <p>地域信息</p>
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取<p>附加信息</p>
                     * @return MachineExtraInfo <p>附加信息</p>
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置<p>附加信息</p>
                     * @param _machineExtraInfo <p>附加信息</p>
                     * 
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     * 
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                    /**
                     * 获取<p>0: 关闭<br>1:  开启<br>2: 开启中<br>3:  关闭中<br>9: 未设置</p>
                     * @return FunctionStatus <p>0: 关闭<br>1:  开启<br>2: 开启中<br>3:  关闭中<br>9: 未设置</p>
                     * 
                     */
                    uint64_t GetFunctionStatus() const;

                    /**
                     * 设置<p>0: 关闭<br>1:  开启<br>2: 开启中<br>3:  关闭中<br>9: 未设置</p>
                     * @param _functionStatus <p>0: 关闭<br>1:  开启<br>2: 开启中<br>3:  关闭中<br>9: 未设置</p>
                     * 
                     */
                    void SetFunctionStatus(const uint64_t& _functionStatus);

                    /**
                     * 判断参数 FunctionStatus 是否已赋值
                     * @return FunctionStatus 是否已赋值
                     * 
                     */
                    bool FunctionStatusHasBeenSet() const;

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

                    /**
                     * 获取<p>实例状态<br>RUNNING: 运行中<br>STOPED: 已关机<br>EXPIRED: 待回收</p>
                     * @return InstanceStatus <p>实例状态<br>RUNNING: 运行中<br>STOPED: 已关机<br>EXPIRED: 待回收</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>实例状态<br>RUNNING: 运行中<br>STOPED: 已关机<br>EXPIRED: 待回收</p>
                     * @param _instanceStatus <p>实例状态<br>RUNNING: 运行中<br>STOPED: 已关机<br>EXPIRED: 待回收</p>
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                private:

                    /**
                     * <p>host对应的数据库记录ID</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>主机名字</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>公网IP</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>内网IP</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>主机Quuid</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>主机状态<br>OFFLINE: 离线<br>ONLINE: 在线<br>SHUTDOWN: 已关机<br>UNINSTALLED: 未防护</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>ins-sad143</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>地域信息</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>附加信息</p>
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * <p>0: 关闭<br>1:  开启<br>2: 开启中<br>3:  关闭中<br>9: 未设置</p>
                     */
                    uint64_t m_functionStatus;
                    bool m_functionStatusHasBeenSet;

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

                    /**
                     * <p>实例状态<br>RUNNING: 运行中<br>STOPED: 已关机<br>EXPIRED: 待回收</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLIENTSETTINGHOST_H_
