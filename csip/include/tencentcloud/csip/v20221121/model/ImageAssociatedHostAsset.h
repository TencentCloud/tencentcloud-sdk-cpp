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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDHOSTASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDHOSTASSET_H_

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
                * 镜像关联主机资产
                */
                class ImageAssociatedHostAsset : public AbstractModel
                {
                public:
                    ImageAssociatedHostAsset();
                    ~ImageAssociatedHostAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>主机uuid</p>
                     * @return Uuid <p>主机uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>主机uuid</p>
                     * @param _uuid <p>主机uuid</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>主机quuid</p>
                     * @return QUuid <p>主机quuid</p>
                     * 
                     */
                    std::string GetQUuid() const;

                    /**
                     * 设置<p>主机quuid</p>
                     * @param _qUuid <p>主机quuid</p>
                     * 
                     */
                    void SetQUuid(const std::string& _qUuid);

                    /**
                     * 判断参数 QUuid 是否已赋值
                     * @return QUuid 是否已赋值
                     * 
                     */
                    bool QUuidHasBeenSet() const;

                    /**
                     * 获取<p>主机名</p>
                     * @return HostName <p>主机名</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>主机名</p>
                     * @param _hostName <p>主机名</p>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>主机所属账号名</p>
                     * @return OwnerAccountName <p>主机所属账号名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>主机所属账号名</p>
                     * @param _ownerAccountName <p>主机所属账号名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>主机所属账号appid</p>
                     * @return OwnerAppId <p>主机所属账号appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>主机所属账号appid</p>
                     * @param _ownerAppId <p>主机所属账号appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>主机所属账号uin</p>
                     * @return OwnerUin <p>主机所属账号uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>主机所属账号uin</p>
                     * @param _ownerUin <p>主机所属账号uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>主机内网地址</p>
                     * @return InnerIp <p>主机内网地址</p>
                     * 
                     */
                    std::string GetInnerIp() const;

                    /**
                     * 设置<p>主机内网地址</p>
                     * @param _innerIp <p>主机内网地址</p>
                     * 
                     */
                    void SetInnerIp(const std::string& _innerIp);

                    /**
                     * 判断参数 InnerIp 是否已赋值
                     * @return InnerIp 是否已赋值
                     * 
                     */
                    bool InnerIpHasBeenSet() const;

                    /**
                     * 获取<p>主机公网地址</p>
                     * @return PublicIp <p>主机公网地址</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>主机公网地址</p>
                     * @param _publicIp <p>主机公网地址</p>
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
                     * 获取<p>主机上agent状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 已卸载</li></ul>
                     * @return AgentStatus <p>主机上agent状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 已卸载</li></ul>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>主机上agent状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 已卸载</li></ul>
                     * @param _agentStatus <p>主机上agent状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 已卸载</li></ul>
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
                     * 获取<p>主机实例id</p>
                     * @return InstanceID <p>主机实例id</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>主机实例id</p>
                     * @param _instanceID <p>主机实例id</p>
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
                     * 获取<p>主机状态</p>
                     * @return InstanceState <p>主机状态</p>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置<p>主机状态</p>
                     * @param _instanceState <p>主机状态</p>
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                private:

                    /**
                     * <p>主机uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>主机quuid</p>
                     */
                    std::string m_qUuid;
                    bool m_qUuidHasBeenSet;

                    /**
                     * <p>主机名</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>主机所属账号名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>主机所属账号appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>主机所属账号uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>主机内网地址</p>
                     */
                    std::string m_innerIp;
                    bool m_innerIpHasBeenSet;

                    /**
                     * <p>主机公网地址</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>主机上agent状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 已卸载</li></ul>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>主机实例id</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>主机状态</p>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEASSOCIATEDHOSTASSET_H_
