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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULHOSTBRIEFINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULHOSTBRIEFINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AccountBriefInfo.h>
#include <tencentcloud/csip/v20221121/model/VPRRatingInfo.h>
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
                class VulHostBriefInfo : public AbstractModel
                {
                public:
                    VulHostBriefInfo();
                    ~VulHostBriefInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>云主机实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
                     * @return InstanceID <p>云主机实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>云主机实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
                     * @param _instanceID <p>云主机实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
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
                     * 获取<p>主机名称</p>
                     * @return Name <p>主机名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>主机名称</p>
                     * @param _name <p>主机名称</p>
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
                     * 获取<p>公网 IP 地址</p>
                     * @return PublicIP <p>公网 IP 地址</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>公网 IP 地址</p>
                     * @param _publicIP <p>公网 IP 地址</p>
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
                     * 获取<p>内网 IP 地址</p>
                     * @return PrivateIP <p>内网 IP 地址</p>
                     * 
                     */
                    std::string GetPrivateIP() const;

                    /**
                     * 设置<p>内网 IP 地址</p>
                     * @param _privateIP <p>内网 IP 地址</p>
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
                     * 获取<p>防护版本<br>枚举值：<br>NONE：无防护<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版<br>PRO_LH：轻量版</p>
                     * @return DefendVersion <p>防护版本<br>枚举值：<br>NONE：无防护<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版<br>PRO_LH：轻量版</p>
                     * 
                     */
                    std::string GetDefendVersion() const;

                    /**
                     * 设置<p>防护版本<br>枚举值：<br>NONE：无防护<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版<br>PRO_LH：轻量版</p>
                     * @param _defendVersion <p>防护版本<br>枚举值：<br>NONE：无防护<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版<br>PRO_LH：轻量版</p>
                     * 
                     */
                    void SetDefendVersion(const std::string& _defendVersion);

                    /**
                     * 判断参数 DefendVersion 是否已赋值
                     * @return DefendVersion 是否已赋值
                     * 
                     */
                    bool DefendVersionHasBeenSet() const;

                    /**
                     * 获取<p>漏洞防御状态<br>枚举值：<br>ENABLED：已开启<br>NOT_SUPPORTED：不支持<br>NOT_ENABLED：未开启</p>
                     * @return DefendStatus <p>漏洞防御状态<br>枚举值：<br>ENABLED：已开启<br>NOT_SUPPORTED：不支持<br>NOT_ENABLED：未开启</p>
                     * 
                     */
                    std::string GetDefendStatus() const;

                    /**
                     * 设置<p>漏洞防御状态<br>枚举值：<br>ENABLED：已开启<br>NOT_SUPPORTED：不支持<br>NOT_ENABLED：未开启</p>
                     * @param _defendStatus <p>漏洞防御状态<br>枚举值：<br>ENABLED：已开启<br>NOT_SUPPORTED：不支持<br>NOT_ENABLED：未开启</p>
                     * 
                     */
                    void SetDefendStatus(const std::string& _defendStatus);

                    /**
                     * 判断参数 DefendStatus 是否已赋值
                     * @return DefendStatus 是否已赋值
                     * 
                     */
                    bool DefendStatusHasBeenSet() const;

                    /**
                     * 获取<p>所属账号信息</p>
                     * @return Account <p>所属账号信息</p>
                     * 
                     */
                    AccountBriefInfo GetAccount() const;

                    /**
                     * 设置<p>所属账号信息</p>
                     * @param _account <p>所属账号信息</p>
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
                     * 获取<p>云主机实例状态<br>枚举值：<br>RUNNING：运行中<br>STOPPED：已停止<br>UNKNOWN：未知</p>
                     * @return InstanceStatus <p>云主机实例状态<br>枚举值：<br>RUNNING：运行中<br>STOPPED：已停止<br>UNKNOWN：未知</p>
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置<p>云主机实例状态<br>枚举值：<br>RUNNING：运行中<br>STOPPED：已停止<br>UNKNOWN：未知</p>
                     * @param _instanceStatus <p>云主机实例状态<br>枚举值：<br>RUNNING：运行中<br>STOPPED：已停止<br>UNKNOWN：未知</p>
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
                     * 获取<p>修复状态枚举值</p><p>枚举值：</p><ul><li>PENDING： 待修复</li><li>SCANNING： 扫描中</li><li>FIXED： 已修复</li><li>IGNORED： 已忽略</li><li>FIXING： 修复中</li><li>FIX_FAILED： 修复失败</li><li>NEED_REBOOT： 修复待重启</li></ul>
                     * @return RiskStatus <p>修复状态枚举值</p><p>枚举值：</p><ul><li>PENDING： 待修复</li><li>SCANNING： 扫描中</li><li>FIXED： 已修复</li><li>IGNORED： 已忽略</li><li>FIXING： 修复中</li><li>FIX_FAILED： 修复失败</li><li>NEED_REBOOT： 修复待重启</li></ul>
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置<p>修复状态枚举值</p><p>枚举值：</p><ul><li>PENDING： 待修复</li><li>SCANNING： 扫描中</li><li>FIXED： 已修复</li><li>IGNORED： 已忽略</li><li>FIXING： 修复中</li><li>FIX_FAILED： 修复失败</li><li>NEED_REBOOT： 修复待重启</li></ul>
                     * @param _riskStatus <p>修复状态枚举值</p><p>枚举值：</p><ul><li>PENDING： 待修复</li><li>SCANNING： 扫描中</li><li>FIXED： 已修复</li><li>IGNORED： 已忽略</li><li>FIXING： 修复中</li><li>FIX_FAILED： 修复失败</li><li>NEED_REBOOT： 修复待重启</li></ul>
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取<p>VPR 评级信息（含评级结果与各维度详情）</p>
                     * @return VPRRating <p>VPR 评级信息（含评级结果与各维度详情）</p>
                     * 
                     */
                    VPRRatingInfo GetVPRRating() const;

                    /**
                     * 设置<p>VPR 评级信息（含评级结果与各维度详情）</p>
                     * @param _vPRRating <p>VPR 评级信息（含评级结果与各维度详情）</p>
                     * 
                     */
                    void SetVPRRating(const VPRRatingInfo& _vPRRating);

                    /**
                     * 判断参数 VPRRating 是否已赋值
                     * @return VPRRating 是否已赋值
                     * 
                     */
                    bool VPRRatingHasBeenSet() const;

                    /**
                     * 获取<p>CWP Agent 状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线<br>UNINSTALLED：未安装</p>
                     * @return AgentStatus <p>CWP Agent 状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线<br>UNINSTALLED：未安装</p>
                     * 
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置<p>CWP Agent 状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线<br>UNINSTALLED：未安装</p>
                     * @param _agentStatus <p>CWP Agent 状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线<br>UNINSTALLED：未安装</p>
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
                     * 获取<p>资产标签列表（CSIP 内部资产标签）</p>
                     * @return TagItem <p>资产标签列表（CSIP 内部资产标签）</p>
                     * 
                     */
                    std::vector<MiniTagItem> GetTagItem() const;

                    /**
                     * 设置<p>资产标签列表（CSIP 内部资产标签）</p>
                     * @param _tagItem <p>资产标签列表（CSIP 内部资产标签）</p>
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
                     * 获取<p>云上标签列表（云资产侧 Tag）</p>
                     * @return CloudTag <p>云上标签列表（云资产侧 Tag）</p>
                     * 
                     */
                    std::vector<Tag> GetCloudTag() const;

                    /**
                     * 设置<p>云上标签列表（云资产侧 Tag）</p>
                     * @param _cloudTag <p>云上标签列表（云资产侧 Tag）</p>
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
                     * <p>云主机实例 ID<br>参数格式：形如 ins-xxxxxxxx</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>主机名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>公网 IP 地址</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>内网 IP 地址</p>
                     */
                    std::string m_privateIP;
                    bool m_privateIPHasBeenSet;

                    /**
                     * <p>防护版本<br>枚举值：<br>NONE：无防护<br>BASIC：基础版<br>PRO：专业版<br>ULTIMATE：旗舰版<br>PRO_LH：轻量版</p>
                     */
                    std::string m_defendVersion;
                    bool m_defendVersionHasBeenSet;

                    /**
                     * <p>漏洞防御状态<br>枚举值：<br>ENABLED：已开启<br>NOT_SUPPORTED：不支持<br>NOT_ENABLED：未开启</p>
                     */
                    std::string m_defendStatus;
                    bool m_defendStatusHasBeenSet;

                    /**
                     * <p>所属账号信息</p>
                     */
                    AccountBriefInfo m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>云主机实例状态<br>枚举值：<br>RUNNING：运行中<br>STOPPED：已停止<br>UNKNOWN：未知</p>
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * <p>修复状态枚举值</p><p>枚举值：</p><ul><li>PENDING： 待修复</li><li>SCANNING： 扫描中</li><li>FIXED： 已修复</li><li>IGNORED： 已忽略</li><li>FIXING： 修复中</li><li>FIX_FAILED： 修复失败</li><li>NEED_REBOOT： 修复待重启</li></ul>
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * <p>VPR 评级信息（含评级结果与各维度详情）</p>
                     */
                    VPRRatingInfo m_vPRRating;
                    bool m_vPRRatingHasBeenSet;

                    /**
                     * <p>CWP Agent 状态<br>枚举值：<br>ONLINE：在线<br>OFFLINE：离线<br>UNINSTALLED：未安装</p>
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * <p>资产标签列表（CSIP 内部资产标签）</p>
                     */
                    std::vector<MiniTagItem> m_tagItem;
                    bool m_tagItemHasBeenSet;

                    /**
                     * <p>云上标签列表（云资产侧 Tag）</p>
                     */
                    std::vector<Tag> m_cloudTag;
                    bool m_cloudTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULHOSTBRIEFINFO_H_
