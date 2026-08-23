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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEHOSTASSET_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEHOSTASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/MiniTagItem.h>
#include <tencentcloud/csip/v20221121/model/Tag.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 基线主机资产，承载子任务/风险记录关联的主机详情。
                */
                class BaselineHostAsset : public AbstractModel
                {
                public:
                    BaselineHostAsset();
                    ~BaselineHostAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>云主机实例 ID，格式形如 ins-instanceid。</p>
                     * @return InstanceID <p>云主机实例 ID，格式形如 ins-instanceid。</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>云主机实例 ID，格式形如 ins-instanceid。</p>
                     * @param _instanceID <p>云主机实例 ID，格式形如 ins-instanceid。</p>
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
                     * 获取<p>主机唯一标识 QUUID。</p>
                     * @return QUUID <p>主机唯一标识 QUUID。</p>
                     * 
                     */
                    std::string GetQUUID() const;

                    /**
                     * 设置<p>主机唯一标识 QUUID。</p>
                     * @param _qUUID <p>主机唯一标识 QUUID。</p>
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
                     * 获取<p>主机 Agent 上报的 UUID。</p>
                     * @return UUID <p>主机 Agent 上报的 UUID。</p>
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置<p>主机 Agent 上报的 UUID。</p>
                     * @param _uUID <p>主机 Agent 上报的 UUID。</p>
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
                     * 获取<p>主机公网 IP。</p>
                     * @return PublicIP <p>主机公网 IP。</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>主机公网 IP。</p>
                     * @param _publicIP <p>主机公网 IP。</p>
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
                     * 获取<p>主机内网 IP。</p>
                     * @return PrivateIP <p>主机内网 IP。</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>主机内网 IP。</p>
                     * @param _privateIP <p>主机内网 IP。</p>
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
                     * 获取<p>CWP Agent 状态。取值：</p><ul><li>ONLINE：在线</li><li>OFFLINE：离线</li><li>UNINSTALLED：未安装</li></ul>
                     * @return AgentStatus <p>CWP Agent 状态。取值：</p><ul><li>ONLINE：在线</li><li>OFFLINE：离线</li><li>UNINSTALLED：未安装</li></ul>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>CWP Agent 状态。取值：</p><ul><li>ONLINE：在线</li><li>OFFLINE：离线</li><li>UNINSTALLED：未安装</li></ul>
                     * @param _agentStatus <p>CWP Agent 状态。取值：</p><ul><li>ONLINE：在线</li><li>OFFLINE：离线</li><li>UNINSTALLED：未安装</li></ul>
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
                     * 获取<p>云主机实例运行状态。取值：</p><ul><li>RUNNING：运行中</li><li>STOPPED：已停止</li><li>UNKNOWN：未知</li></ul>
                     * @return InstanceStatus <p>云主机实例运行状态。取值：</p><ul><li>RUNNING：运行中</li><li>STOPPED：已停止</li><li>UNKNOWN：未知</li></ul>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>云主机实例运行状态。取值：</p><ul><li>RUNNING：运行中</li><li>STOPPED：已停止</li><li>UNKNOWN：未知</li></ul>
                     * @param _instanceStatus <p>云主机实例运行状态。取值：</p><ul><li>RUNNING：运行中</li><li>STOPPED：已停止</li><li>UNKNOWN：未知</li></ul>
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
                     * 获取<p>主机名称。</p>
                     * @return Name <p>主机名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>主机名称。</p>
                     * @param _name <p>主机名称。</p>
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
                     * 获取<p>主机所属租户 Appid。</p>
                     * @return Appid <p>主机所属租户 Appid。</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>主机所属租户 Appid。</p>
                     * @param _appid <p>主机所属租户 Appid。</p>
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>CSIP 内部资产标签列表。</p>
                     * @return TagItem <p>CSIP 内部资产标签列表。</p>
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItem() const;

                    /**
                     * 设置<p>CSIP 内部资产标签列表。</p>
                     * @param _tagItem <p>CSIP 内部资产标签列表。</p>
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
                     * 获取<p>云上原生资产标签（Tag）列表。</p>
                     * @return CloudTag <p>云上原生资产标签（Tag）列表。</p>
                     * 
                     */
                    std::vector<Tag> GetCloudTag() const;

                    /**
                     * 设置<p>云上原生资产标签（Tag）列表。</p>
                     * @param _cloudTag <p>云上原生资产标签（Tag）列表。</p>
                     * 
                     */
                    void SetCloudTag(const std::vector<Tag>& _cloudTag);

                    /**
                     * 判断参数 CloudTag 是否已赋值
                     * @return CloudTag 是否已赋值
                     * 
                     */
                    bool CloudTagHasBeenSet() const;

                    /**
                     * 获取<p>主机所在地域信息。</p>
                     * @return RegionInfo <p>主机所在地域信息。</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>主机所在地域信息。</p>
                     * @param _regionInfo <p>主机所在地域信息。</p>
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
                     * 获取<p>主机操作系统信息（含发行版与版本号）。</p>
                     * @return OsInfo <p>主机操作系统信息（含发行版与版本号）。</p>
                     * 
                     */
                    std::string GetOsInfo() const;

                    /**
                     * 设置<p>主机操作系统信息（含发行版与版本号）。</p>
                     * @param _osInfo <p>主机操作系统信息（含发行版与版本号）。</p>
                     * 
                     */
                    void SetOsInfo(const std::string& _osInfo);

                    /**
                     * 判断参数 OsInfo 是否已赋值
                     * @return OsInfo 是否已赋值
                     * 
                     */
                    bool OsInfoHasBeenSet() const;

                    /**
                     * 获取<p>主机防护版本。取值：NONE（未防护）、BASIC（基础版）、PRO（专业版）、ULTIMATE（旗舰版）、PRO_LH（轻量版）。</p>
                     * @return ProtectVersion <p>主机防护版本。取值：NONE（未防护）、BASIC（基础版）、PRO（专业版）、ULTIMATE（旗舰版）、PRO_LH（轻量版）。</p>
                     * 
                     */
                    std::string GetProtectVersion() const;

                    /**
                     * 设置<p>主机防护版本。取值：NONE（未防护）、BASIC（基础版）、PRO（专业版）、ULTIMATE（旗舰版）、PRO_LH（轻量版）。</p>
                     * @param _protectVersion <p>主机防护版本。取值：NONE（未防护）、BASIC（基础版）、PRO（专业版）、ULTIMATE（旗舰版）、PRO_LH（轻量版）。</p>
                     * 
                     */
                    void SetProtectVersion(const std::string& _protectVersion);

                    /**
                     * 判断参数 ProtectVersion 是否已赋值
                     * @return ProtectVersion 是否已赋值
                     * 
                     */
                    bool ProtectVersionHasBeenSet() const;

                private:

                    /**
                     * <p>云主机实例 ID，格式形如 ins-instanceid。</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>主机唯一标识 QUUID。</p>
                     */
                    std::string m_qUUID;
                    bool m_qUUIDHasBeenSet;

                    /**
                     * <p>主机 Agent 上报的 UUID。</p>
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * <p>主机公网 IP。</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>主机内网 IP。</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>CWP Agent 状态。取值：</p><ul><li>ONLINE：在线</li><li>OFFLINE：离线</li><li>UNINSTALLED：未安装</li></ul>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>云主机实例运行状态。取值：</p><ul><li>RUNNING：运行中</li><li>STOPPED：已停止</li><li>UNKNOWN：未知</li></ul>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>主机名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>主机所属租户 Appid。</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>CSIP 内部资产标签列表。</p>
                     */
                    std::vector<MiniTagItem> m_tagItem;
                    bool m_tagItemHasBeenSet;

                    /**
                     * <p>云上原生资产标签（Tag）列表。</p>
                     */
                    std::vector<Tag> m_cloudTag;
                    bool m_cloudTagHasBeenSet;

                    /**
                     * <p>主机所在地域信息。</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>主机操作系统信息（含发行版与版本号）。</p>
                     */
                    std::string m_osInfo;
                    bool m_osInfoHasBeenSet;

                    /**
                     * <p>主机防护版本。取值：NONE（未防护）、BASIC（基础版）、PRO（专业版）、ULTIMATE（旗舰版）、PRO_LH（轻量版）。</p>
                     */
                    std::string m_protectVersion;
                    bool m_protectVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEHOSTASSET_H_
