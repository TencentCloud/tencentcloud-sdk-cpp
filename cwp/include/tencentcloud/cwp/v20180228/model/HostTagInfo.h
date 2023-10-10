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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HOSTTAGINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HOSTTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 主机与主机标签信息
                */
                class HostTagInfo : public AbstractModel
                {
                public:
                    HostTagInfo();
                    ~HostTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid 主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quuid 主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主机标签名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 主机标签名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置主机标签名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagList 主机标签名数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取主机内网Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostIp 主机内网Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机内网Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostIp 主机内网Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aliasName 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取主机公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineWanIp 主机公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置主机公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineWanIp 主机公网ip
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取主机uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 主机uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uuid 主机uuid
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取内核版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KernelVersion 内核版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKernelVersion() const;

                    /**
                     * 设置内核版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kernelVersion 内核版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKernelVersion(const std::string& _kernelVersion);

                    /**
                     * 判断参数 KernelVersion 是否已赋值
                     * @return KernelVersion 是否已赋值
                     * 
                     */
                    bool KernelVersionHasBeenSet() const;

                    /**
                     * 获取主机在线状态 ONLINE，OFFLINE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineStatus 主机在线状态 ONLINE，OFFLINE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置主机在线状态 ONLINE，OFFLINE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machineStatus 主机在线状态 ONLINE，OFFLINE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                    /**
                     * 获取防护版本 BASIC_VERSION 基础版, PRO_VERSION 专业版 Flagship 旗舰版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectType 防护版本 BASIC_VERSION 基础版, PRO_VERSION 专业版 Flagship 旗舰版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtectType() const;

                    /**
                     * 设置防护版本 BASIC_VERSION 基础版, PRO_VERSION 专业版 Flagship 旗舰版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protectType 防护版本 BASIC_VERSION 基础版, PRO_VERSION 专业版 Flagship 旗舰版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtectType(const std::string& _protectType);

                    /**
                     * 判断参数 ProtectType 是否已赋值
                     * @return ProtectType 是否已赋值
                     * 
                     */
                    bool ProtectTypeHasBeenSet() const;

                    /**
                     * 获取漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulNum 漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVulNum() const;

                    /**
                     * 设置漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulNum 漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulNum(const int64_t& _vulNum);

                    /**
                     * 判断参数 VulNum 是否已赋值
                     * @return VulNum 是否已赋值
                     * 
                     */
                    bool VulNumHasBeenSet() const;

                    /**
                     * 获取云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloudTags 云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cloudTags 云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCloudTags(const std::vector<Tags>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取主机instance ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceID 主机instance ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置主机instance ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceID 主机instance ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                private:

                    /**
                     * 主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机标签名数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 主机内网Ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 主机名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 主机公网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 主机uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 内核版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_kernelVersion;
                    bool m_kernelVersionHasBeenSet;

                    /**
                     * 主机在线状态 ONLINE，OFFLINE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                    /**
                     * 防护版本 BASIC_VERSION 基础版, PRO_VERSION 专业版 Flagship 旗舰版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protectType;
                    bool m_protectTypeHasBeenSet;

                    /**
                     * 漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vulNum;
                    bool m_vulNumHasBeenSet;

                    /**
                     * 云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * 主机instance ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTTAGINFO_H_
