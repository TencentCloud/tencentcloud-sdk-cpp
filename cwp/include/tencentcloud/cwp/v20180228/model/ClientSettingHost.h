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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CLIENTSETTINGHOST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CLIENTSETTINGHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
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
                     * 获取host对应的数据库记录ID
                     * @return Id host对应的数据库记录ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置host对应的数据库记录ID
                     * @param _id host对应的数据库记录ID
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
                     * 获取主机名字
                     * @return Name 主机名字
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置主机名字
                     * @param _name 主机名字
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
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取公网IP
                     * @return PublicIp 公网IP
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置公网IP
                     * @param _publicIp 公网IP
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
                     * 获取内网IP
                     * @return PrivateIp 内网IP
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置内网IP
                     * @param _privateIp 内网IP
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
                     * 获取主机Quuid
                     * @return Quuid 主机Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
                     * @param _quuid 主机Quuid
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
                     * 获取主机状态
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>SHUTDOWN: 已关机</li>
<li>UNINSTALLED: 未防护</li>
                     * @return Status 主机状态
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>SHUTDOWN: 已关机</li>
<li>UNINSTALLED: 未防护</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置主机状态
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>SHUTDOWN: 已关机</li>
<li>UNINSTALLED: 未防护</li>
                     * @param _status 主机状态
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>SHUTDOWN: 已关机</li>
<li>UNINSTALLED: 未防护</li>
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
                     * 获取ins-sad143
                     * @return VpcId ins-sad143
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置ins-sad143
                     * @param _vpcId ins-sad143
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
                     * 获取地域信息
                     * @return RegionInfo 地域信息
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置地域信息
                     * @param _regionInfo 地域信息
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
                     * 获取附加信息
                     * @return MachineExtraInfo 附加信息
                     * 
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置附加信息
                     * @param _machineExtraInfo 附加信息
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
                     * 获取<li>0: 关闭 </li>
<li>1:  开启</li>
<li>2: 开启中 </li>
<li>3:  关闭中</li>
<li>9: 未设置</li>
                     * @return FunctionStatus <li>0: 关闭 </li>
<li>1:  开启</li>
<li>2: 开启中 </li>
<li>3:  关闭中</li>
<li>9: 未设置</li>
                     * 
                     */
                    uint64_t GetFunctionStatus() const;

                    /**
                     * 设置<li>0: 关闭 </li>
<li>1:  开启</li>
<li>2: 开启中 </li>
<li>3:  关闭中</li>
<li>9: 未设置</li>
                     * @param _functionStatus <li>0: 关闭 </li>
<li>1:  开启</li>
<li>2: 开启中 </li>
<li>3:  关闭中</li>
<li>9: 未设置</li>
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
                     * 获取以下几个固定值需要前端特殊处理，其他失败原因可直接展示：
1. UNINSTALLED   -- 未安装
2. NEED_UPGRADE -- 需要升级
3. NOT_RUNNING -- 已关机
4. NO_PASSWORD -- 未开启密码登录，无法开启扫码
                     * @return Message 以下几个固定值需要前端特殊处理，其他失败原因可直接展示：
1. UNINSTALLED   -- 未安装
2. NEED_UPGRADE -- 需要升级
3. NOT_RUNNING -- 已关机
4. NO_PASSWORD -- 未开启密码登录，无法开启扫码
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置以下几个固定值需要前端特殊处理，其他失败原因可直接展示：
1. UNINSTALLED   -- 未安装
2. NEED_UPGRADE -- 需要升级
3. NOT_RUNNING -- 已关机
4. NO_PASSWORD -- 未开启密码登录，无法开启扫码
                     * @param _message 以下几个固定值需要前端特殊处理，其他失败原因可直接展示：
1. UNINSTALLED   -- 未安装
2. NEED_UPGRADE -- 需要升级
3. NOT_RUNNING -- 已关机
4. NO_PASSWORD -- 未开启密码登录，无法开启扫码
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
                     * 获取失败原因
                     * @return MessageDesc 失败原因
                     * 
                     */
                    std::string GetMessageDesc() const;

                    /**
                     * 设置失败原因
                     * @param _messageDesc 失败原因
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
                     * 获取实例状态
<li>RUNNING: 运行中</li>
<li>STOPED: 已关机</li>
<li>EXPIRED: 待回收</li>
                     * @return InstanceStatus 实例状态
<li>RUNNING: 运行中</li>
<li>STOPED: 已关机</li>
<li>EXPIRED: 待回收</li>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置实例状态
<li>RUNNING: 运行中</li>
<li>STOPED: 已关机</li>
<li>EXPIRED: 待回收</li>
                     * @param _instanceStatus 实例状态
<li>RUNNING: 运行中</li>
<li>STOPED: 已关机</li>
<li>EXPIRED: 待回收</li>
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
                     * host对应的数据库记录ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 主机名字
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 公网IP
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * 内网IP
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * 主机Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机状态
<li>OFFLINE: 离线  </li>
<li>ONLINE: 在线</li>
<li>SHUTDOWN: 已关机</li>
<li>UNINSTALLED: 未防护</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ins-sad143
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 地域信息
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * 附加信息
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                    /**
                     * <li>0: 关闭 </li>
<li>1:  开启</li>
<li>2: 开启中 </li>
<li>3:  关闭中</li>
<li>9: 未设置</li>
                     */
                    uint64_t m_functionStatus;
                    bool m_functionStatusHasBeenSet;

                    /**
                     * 以下几个固定值需要前端特殊处理，其他失败原因可直接展示：
1. UNINSTALLED   -- 未安装
2. NEED_UPGRADE -- 需要升级
3. NOT_RUNNING -- 已关机
4. NO_PASSWORD -- 未开启密码登录，无法开启扫码
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_messageDesc;
                    bool m_messageDescHasBeenSet;

                    /**
                     * 实例状态
<li>RUNNING: 运行中</li>
<li>STOPED: 已关机</li>
<li>EXPIRED: 待回收</li>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CLIENTSETTINGHOST_H_
