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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTBRIEFINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccountBriefInfo.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机简要信息
                */
                class HostBriefInfo : public AbstractModel
                {
                public:
                    HostBriefInfo();
                    ~HostBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云主机实例 ID
参数格式：形如 ins-instance
                     * @return InstanceID 云主机实例 ID
参数格式：形如 ins-instance
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置云主机实例 ID
参数格式：形如 ins-instance
                     * @param _instanceID 云主机实例 ID
参数格式：形如 ins-instance
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取主机 QUUID（CWP 内部唯一标识）
                     * @return QUUID 主机 QUUID（CWP 内部唯一标识）
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置主机 QUUID（CWP 内部唯一标识）
                     * @param _qUUID 主机 QUUID（CWP 内部唯一标识）
                     * 
                     */
                    void SetQUUID(const std::string& _qUUID);

                    /**
                     * 判断参数 QUUID 是否已赋值
                     * @return QUUID 是否已赋值
                     * 
                     */
                    bool QUUIDHasBeenSet() const;

                    /**
                     * 获取主机 UUID
                     * @return UUID 主机 UUID
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置主机 UUID
                     * @param _uUID 主机 UUID
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取公网 IP 地址
                     * @return PublicIP 公网 IP 地址
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置公网 IP 地址
                     * @param _publicIP 公网 IP 地址
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取内网 IP 地址
                     * @return PrivateIP 内网 IP 地址
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置内网 IP 地址
                     * @param _privateIP 内网 IP 地址
                     * 
                     */
                    void SetPrivateIP(const std::string& _privateIP);

                    /**
                     * 判断参数 PrivateIP 是否已赋值
                     * @return PrivateIP 是否已赋值
                     * 
                     */
                    bool PrivateIPHasBeenSet() const;

                    /**
                     * 获取CWP Agent 状态
枚举值：
ONLINE：在线
OFFLINE：离线
UNINSTALLED：未安装
                     * @return AgentStatus CWP Agent 状态
枚举值：
ONLINE：在线
OFFLINE：离线
UNINSTALLED：未安装
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置CWP Agent 状态
枚举值：
ONLINE：在线
OFFLINE：离线
UNINSTALLED：未安装
                     * @param _agentStatus CWP Agent 状态
枚举值：
ONLINE：在线
OFFLINE：离线
UNINSTALLED：未安装
                     * 
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     * 
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取云主机实例状态
枚举值：
RUNNING：运行中
STOPPED：已停止
UNKNOWN：未知
                     * @return InstanceStatus 云主机实例状态
枚举值：
RUNNING：运行中
STOPPED：已停止
UNKNOWN：未知
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置云主机实例状态
枚举值：
RUNNING：运行中
STOPPED：已停止
UNKNOWN：未知
                     * @param _instanceStatus 云主机实例状态
枚举值：
RUNNING：运行中
STOPPED：已停止
UNKNOWN：未知
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return Name 主机名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置主机名称
                     * @param _name 主机名称
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
                     * 获取所属账号信息
                     * @return Account 所属账号信息
                     * 
                     */
                    AccountBriefInfo GetAccount() const;

                    /**
                     * 设置所属账号信息
                     * @param _account 所属账号信息
                     * 
                     */
                    void SetAccount(const AccountBriefInfo& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取资产标签列表（CSIP 内部资产标签）
                     * @return TagItem 资产标签列表（CSIP 内部资产标签）
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItem() const;

                    /**
                     * 设置资产标签列表（CSIP 内部资产标签）
                     * @param _tagItem 资产标签列表（CSIP 内部资产标签）
                     * 
                     */
                    void SetTagItem(const std::vector<MiniTagItem>& _tagItem);

                    /**
                     * 判断参数 TagItem 是否已赋值
                     * @return TagItem 是否已赋值
                     * 
                     */
                    bool TagItemHasBeenSet() const;

                    /**
                     * 获取云上标签列表（云资产侧 Tag）
                     * @return CloudTag 云上标签列表（云资产侧 Tag）
                     * 
                     */
                    std::vector<Tag> GetCloudTag() const;

                    /**
                     * 设置云上标签列表（云资产侧 Tag）
                     * @param _cloudTag 云上标签列表（云资产侧 Tag）
                     * 
                     */
                    void SetCloudTag(const std::vector<Tag>& _cloudTag);

                    /**
                     * 判断参数 CloudTag 是否已赋值
                     * @return CloudTag 是否已赋值
                     * 
                     */
                    bool CloudTagHasBeenSet() const;

                private:

                    /**
                     * 云主机实例 ID
参数格式：形如 ins-instance
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 主机 QUUID（CWP 内部唯一标识）
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * 主机 UUID
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 公网 IP 地址
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 内网 IP 地址
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * CWP Agent 状态
枚举值：
ONLINE：在线
OFFLINE：离线
UNINSTALLED：未安装
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * 云主机实例状态
枚举值：
RUNNING：运行中
STOPPED：已停止
UNKNOWN：未知
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 所属账号信息
                     */
                    AccountBriefInfo m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * 资产标签列表（CSIP 内部资产标签）
                     */
                    std::vector<MiniTagItem> m_tagItem;
                    bool m_tagItemHasBeenSet;

                    /**
                     * 云上标签列表（云资产侧 Tag）
                     */
                    std::vector<Tag> m_cloudTag;
                    bool m_cloudTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTBRIEFINFO_H_
