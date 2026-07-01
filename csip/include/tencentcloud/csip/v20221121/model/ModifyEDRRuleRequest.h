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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRRULEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RuleContentCmdLine.h>
#include <tencentcloud/csip/v20221121/model/RuleContentProcessNetwork.h>
#include <tencentcloud/csip/v20221121/model/EdrAlertTarget.h>
#include <tencentcloud/csip/v20221121/model/InstanceIDWithAppIdItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyEDRRule请求参数结构体
                */
                class ModifyEDRRuleRequest : public AbstractModel
                {
                public:
                    ModifyEDRRuleRequest();
                    ~ModifyEDRRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略类型 / Rule Type: 0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
                     * @return RuleType <p>策略类型 / Rule Type: 0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>策略类型 / Rule Type: 0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
                     * @param _ruleType <p>策略类型 / Rule Type: 0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     * @return AlertAction <p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     * 
                     */
                    int64_t GetAlertAction() const;

                    /**
                     * 设置<p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     * @param _alertAction <p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     * 
                     */
                    void SetAlertAction(const int64_t& _alertAction);

                    /**
                     * 判断参数 AlertAction 是否已赋值
                     * @return AlertAction 是否已赋值
                     * 
                     */
                    bool AlertActionHasBeenSet() const;

                    /**
                     * 获取<p>生效资产 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // 主机列表 / Host QUUIDS (when Scope=0)</p>
                     * @return CWPScope <p>生效资产 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // 主机列表 / Host QUUIDS (when Scope=0)</p>
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 设置<p>生效资产 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // 主机列表 / Host QUUIDS (when Scope=0)</p>
                     * @param _cWPScope <p>生效资产 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // 主机列表 / Host QUUIDS (when Scope=0)</p>
                     * 
                     */
                    void SetCWPScope(const int64_t& _cWPScope);

                    /**
                     * 判断参数 CWPScope 是否已赋值
                     * @return CWPScope 是否已赋值
                     * 
                     */
                    bool CWPScopeHasBeenSet() const;

                    /**
                     * 获取<p>容器生效镜像范围 / Container Image Scope: 0-指定镜像/Specified Images, 1-全部镜像/All Images</p>
                     * @return TCSSScope <p>容器生效镜像范围 / Container Image Scope: 0-指定镜像/Specified Images, 1-全部镜像/All Images</p>
                     * 
                     */
                    int64_t GetTCSSScope() const;

                    /**
                     * 设置<p>容器生效镜像范围 / Container Image Scope: 0-指定镜像/Specified Images, 1-全部镜像/All Images</p>
                     * @param _tCSSScope <p>容器生效镜像范围 / Container Image Scope: 0-指定镜像/Specified Images, 1-全部镜像/All Images</p>
                     * 
                     */
                    void SetTCSSScope(const int64_t& _tCSSScope);

                    /**
                     * 判断参数 TCSSScope 是否已赋值
                     * @return TCSSScope 是否已赋值
                     * 
                     */
                    bool TCSSScopeHasBeenSet() const;

                    /**
                     * 获取<p>开关 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
                     * @return Status <p>开关 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>开关 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
                     * @param _status <p>开关 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>策略名称</p>
                     * @return Name <p>策略名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>策略名称</p>
                     * @param _name <p>策略名称</p>
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
                     * 获取<p>内容类型 / Content Type: md5-文件MD5/File MD5, cmdline-命令行/Command Line, dns-DNS, ip_inbound-入站IP/Inbound IP, ip_outbound-出站IP/Outbound IP, custom_file-自定义文件/Custom File, process_network-进程网络/Process Network</p>
                     * @return ContentType <p>内容类型 / Content Type: md5-文件MD5/File MD5, cmdline-命令行/Command Line, dns-DNS, ip_inbound-入站IP/Inbound IP, ip_outbound-出站IP/Outbound IP, custom_file-自定义文件/Custom File, process_network-进程网络/Process Network</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>内容类型 / Content Type: md5-文件MD5/File MD5, cmdline-命令行/Command Line, dns-DNS, ip_inbound-入站IP/Inbound IP, ip_outbound-出站IP/Outbound IP, custom_file-自定义文件/Custom File, process_network-进程网络/Process Network</p>
                     * @param _contentType <p>内容类型 / Content Type: md5-文件MD5/File MD5, cmdline-命令行/Command Line, dns-DNS, ip_inbound-入站IP/Inbound IP, ip_outbound-出站IP/Outbound IP, custom_file-自定义文件/Custom File, process_network-进程网络/Process Network</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>告警等级 / Alert Level: 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
                     * @return Level <p>告警等级 / Alert Level: 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置<p>告警等级 / Alert Level: 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
                     * @param _level <p>告警等级 / Alert Level: 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>检测模式 / Detect Mode: 0-精准/Precise, 1-均衡/Balanced, 2-深度/Deep</p>
                     * @return DetectMode <p>检测模式 / Detect Mode: 0-精准/Precise, 1-均衡/Balanced, 2-深度/Deep</p>
                     * 
                     */
                    int64_t GetDetectMode() const;

                    /**
                     * 设置<p>检测模式 / Detect Mode: 0-精准/Precise, 1-均衡/Balanced, 2-深度/Deep</p>
                     * @param _detectMode <p>检测模式 / Detect Mode: 0-精准/Precise, 1-均衡/Balanced, 2-深度/Deep</p>
                     * 
                     */
                    void SetDetectMode(const int64_t& _detectMode);

                    /**
                     * 判断参数 DetectMode 是否已赋值
                     * @return DetectMode 是否已赋值
                     * 
                     */
                    bool DetectModeHasBeenSet() const;

                    /**
                     * 获取<p>攻击阶段</p>
                     * @return AttackStage <p>攻击阶段</p>
                     * 
                     */
                    std::string GetAttackStage() const;

                    /**
                     * 设置<p>攻击阶段</p>
                     * @param _attackStage <p>攻击阶段</p>
                     * 
                     */
                    void SetAttackStage(const std::string& _attackStage);

                    /**
                     * 判断参数 AttackStage 是否已赋值
                     * @return AttackStage 是否已赋值
                     * 
                     */
                    bool AttackStageHasBeenSet() const;

                    /**
                     * 获取<p>策略</p>
                     * @return RuleID <p>策略</p>
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置<p>策略</p>
                     * @param _ruleID <p>策略</p>
                     * 
                     */
                    void SetRuleID(const std::string& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取<p>策略描述</p>
                     * @return Description <p>策略描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>策略描述</p>
                     * @param _description <p>策略描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>处理历史告警 / Handle Old Events: 0-否/No, 1-是/Yes</p>
                     * @return DealOldEvents <p>处理历史告警 / Handle Old Events: 0-否/No, 1-是/Yes</p>
                     * 
                     */
                    int64_t GetDealOldEvents() const;

                    /**
                     * 设置<p>处理历史告警 / Handle Old Events: 0-否/No, 1-是/Yes</p>
                     * @param _dealOldEvents <p>处理历史告警 / Handle Old Events: 0-否/No, 1-是/Yes</p>
                     * 
                     */
                    void SetDealOldEvents(const int64_t& _dealOldEvents);

                    /**
                     * 判断参数 DealOldEvents 是否已赋值
                     * @return DealOldEvents 是否已赋值
                     * 
                     */
                    bool DealOldEventsHasBeenSet() const;

                    /**
                     * 获取<p>ContentType=md5 时传入的 MD5 列表</p>
                     * @return Md5List <p>ContentType=md5 时传入的 MD5 列表</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>ContentType=md5 时传入的 MD5 列表</p>
                     * @param _md5List <p>ContentType=md5 时传入的 MD5 列表</p>
                     * 
                     */
                    void SetMd5List(const std::vector<std::string>& _md5List);

                    /**
                     * 判断参数 Md5List 是否已赋值
                     * @return Md5List 是否已赋值
                     * 
                     */
                    bool Md5ListHasBeenSet() const;

                    /**
                     * 获取<p>ContentType=custom_file 时传入的文件名列表(Base64编码)</p>
                     * @return FileName <p>ContentType=custom_file 时传入的文件名列表(Base64编码)</p>
                     * 
                     */
                    std::vector<std::string> GetFileName() const;

                    /**
                     * 设置<p>ContentType=custom_file 时传入的文件名列表(Base64编码)</p>
                     * @param _fileName <p>ContentType=custom_file 时传入的文件名列表(Base64编码)</p>
                     * 
                     */
                    void SetFileName(const std::vector<std::string>& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>ContentType=custom_file 时传入的文件目录列表(Base64编码)</p>
                     * @return FileDirectory <p>ContentType=custom_file 时传入的文件目录列表(Base64编码)</p>
                     * 
                     */
                    std::vector<std::string> GetFileDirectory() const;

                    /**
                     * 设置<p>ContentType=custom_file 时传入的文件目录列表(Base64编码)</p>
                     * @param _fileDirectory <p>ContentType=custom_file 时传入的文件目录列表(Base64编码)</p>
                     * 
                     */
                    void SetFileDirectory(const std::vector<std::string>& _fileDirectory);

                    /**
                     * 判断参数 FileDirectory 是否已赋值
                     * @return FileDirectory 是否已赋值
                     * 
                     */
                    bool FileDirectoryHasBeenSet() const;

                    /**
                     * 获取<p>ContentType=cmdline 时传入的命令行规则，Process/PProcess/AProcess 的 Exe/Cmdline 字段需要 Base64 编码</p>
                     * @return CmdLineRules <p>ContentType=cmdline 时传入的命令行规则，Process/PProcess/AProcess 的 Exe/Cmdline 字段需要 Base64 编码</p>
                     * 
                     */
                    RuleContentCmdLine GetCmdLineRules() const;

                    /**
                     * 设置<p>ContentType=cmdline 时传入的命令行规则，Process/PProcess/AProcess 的 Exe/Cmdline 字段需要 Base64 编码</p>
                     * @param _cmdLineRules <p>ContentType=cmdline 时传入的命令行规则，Process/PProcess/AProcess 的 Exe/Cmdline 字段需要 Base64 编码</p>
                     * 
                     */
                    void SetCmdLineRules(const RuleContentCmdLine& _cmdLineRules);

                    /**
                     * 判断参数 CmdLineRules 是否已赋值
                     * @return CmdLineRules 是否已赋值
                     * 
                     */
                    bool CmdLineRulesHasBeenSet() const;

                    /**
                     * 获取<p>ContentType=dns 时传入的域名列表(Base64编码)</p>
                     * @return Domains <p>ContentType=dns 时传入的域名列表(Base64编码)</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>ContentType=dns 时传入的域名列表(Base64编码)</p>
                     * @param _domains <p>ContentType=dns 时传入的域名列表(Base64编码)</p>
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取<p>ContentType=ip_outbound 时传入的出站IP列表(Base64编码)</p>
                     * @return OutboundIP <p>ContentType=ip_outbound 时传入的出站IP列表(Base64编码)</p>
                     * 
                     */
                    std::vector<std::string> GetOutboundIP() const;

                    /**
                     * 设置<p>ContentType=ip_outbound 时传入的出站IP列表(Base64编码)</p>
                     * @param _outboundIP <p>ContentType=ip_outbound 时传入的出站IP列表(Base64编码)</p>
                     * 
                     */
                    void SetOutboundIP(const std::vector<std::string>& _outboundIP);

                    /**
                     * 判断参数 OutboundIP 是否已赋值
                     * @return OutboundIP 是否已赋值
                     * 
                     */
                    bool OutboundIPHasBeenSet() const;

                    /**
                     * 获取<p>ContentType=ip_inbound 时传入的入站IP列表(Base64编码)</p>
                     * @return InboundIP <p>ContentType=ip_inbound 时传入的入站IP列表(Base64编码)</p>
                     * 
                     */
                    std::vector<std::string> GetInboundIP() const;

                    /**
                     * 设置<p>ContentType=ip_inbound 时传入的入站IP列表(Base64编码)</p>
                     * @param _inboundIP <p>ContentType=ip_inbound 时传入的入站IP列表(Base64编码)</p>
                     * 
                     */
                    void SetInboundIP(const std::vector<std::string>& _inboundIP);

                    /**
                     * 判断参数 InboundIP 是否已赋值
                     * @return InboundIP 是否已赋值
                     * 
                     */
                    bool InboundIPHasBeenSet() const;

                    /**
                     * 获取<p>镜像ID列表 / Image IDs (when TCSSScope=0)</p>
                     * @return ImageIDs <p>镜像ID列表 / Image IDs (when TCSSScope=0)</p>
                     * 
                     */
                    std::vector<std::string> GetImageIDs() const;

                    /**
                     * 设置<p>镜像ID列表 / Image IDs (when TCSSScope=0)</p>
                     * @param _imageIDs <p>镜像ID列表 / Image IDs (when TCSSScope=0)</p>
                     * 
                     */
                    void SetImageIDs(const std::vector<std::string>& _imageIDs);

                    /**
                     * 判断参数 ImageIDs 是否已赋值
                     * @return ImageIDs 是否已赋值
                     * 
                     */
                    bool ImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>ContentType=process_network 时传入的进程网络规则</p>
                     * @return ProcessNetworkRules <p>ContentType=process_network 时传入的进程网络规则</p>
                     * 
                     */
                    RuleContentProcessNetwork GetProcessNetworkRules() const;

                    /**
                     * 设置<p>ContentType=process_network 时传入的进程网络规则</p>
                     * @param _processNetworkRules <p>ContentType=process_network 时传入的进程网络规则</p>
                     * 
                     */
                    void SetProcessNetworkRules(const RuleContentProcessNetwork& _processNetworkRules);

                    /**
                     * 判断参数 ProcessNetworkRules 是否已赋值
                     * @return ProcessNetworkRules 是否已赋值
                     * 
                     */
                    bool ProcessNetworkRulesHasBeenSet() const;

                    /**
                     * 获取<p>选择的多账号的APPID</p>
                     * @return TargetAppIDs <p>选择的多账号的APPID</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDs() const;

                    /**
                     * 设置<p>选择的多账号的APPID</p>
                     * @param _targetAppIDs <p>选择的多账号的APPID</p>
                     * 
                     */
                    void SetTargetAppIDs(const std::vector<uint64_t>& _targetAppIDs);

                    /**
                     * 判断参数 TargetAppIDs 是否已赋值
                     * @return TargetAppIDs 是否已赋值
                     * 
                     */
                    bool TargetAppIDsHasBeenSet() const;

                    /**
                     * 获取<p>告警的加白目标机器信息</p>
                     * @return Target <p>告警的加白目标机器信息</p>
                     * 
                     */
                    EdrAlertTarget GetTarget() const;

                    /**
                     * 设置<p>告警的加白目标机器信息</p>
                     * @param _target <p>告警的加白目标机器信息</p>
                     * 
                     */
                    void SetTarget(const EdrAlertTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>自选资产对应的实例ID和APPID</p>
                     * @return InstanceIDsWithAppId <p>自选资产对应的实例ID和APPID</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>自选资产对应的实例ID和APPID</p>
                     * @param _instanceIDsWithAppId <p>自选资产对应的实例ID和APPID</p>
                     * 
                     */
                    void SetInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _instanceIDsWithAppId);

                    /**
                     * 判断参数 InstanceIDsWithAppId 是否已赋值
                     * @return InstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool InstanceIDsWithAppIdHasBeenSet() const;

                    /**
                     * 获取<p>全选资产排除的实例ID和APPID</p>
                     * @return ExcludeInstanceIDsWithAppId <p>全选资产排除的实例ID和APPID</p>
                     * 
                     */
                    std::vector<InstanceIDWithAppIdItem> GetExcludeInstanceIDsWithAppId() const;

                    /**
                     * 设置<p>全选资产排除的实例ID和APPID</p>
                     * @param _excludeInstanceIDsWithAppId <p>全选资产排除的实例ID和APPID</p>
                     * 
                     */
                    void SetExcludeInstanceIDsWithAppId(const std::vector<InstanceIDWithAppIdItem>& _excludeInstanceIDsWithAppId);

                    /**
                     * 判断参数 ExcludeInstanceIDsWithAppId 是否已赋值
                     * @return ExcludeInstanceIDsWithAppId 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsWithAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>策略类型 / Rule Type: 0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     */
                    int64_t m_alertAction;
                    bool m_alertActionHasBeenSet;

                    /**
                     * <p>生效资产 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship     QUUIDS        []string json:&quot;QUUIDS&quot;                                      // 主机列表 / Host QUUIDS (when Scope=0)</p>
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * <p>容器生效镜像范围 / Container Image Scope: 0-指定镜像/Specified Images, 1-全部镜像/All Images</p>
                     */
                    int64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * <p>开关 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>内容类型 / Content Type: md5-文件MD5/File MD5, cmdline-命令行/Command Line, dns-DNS, ip_inbound-入站IP/Inbound IP, ip_outbound-出站IP/Outbound IP, custom_file-自定义文件/Custom File, process_network-进程网络/Process Network</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>告警等级 / Alert Level: 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>检测模式 / Detect Mode: 0-精准/Precise, 1-均衡/Balanced, 2-深度/Deep</p>
                     */
                    int64_t m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * <p>攻击阶段</p>
                     */
                    std::string m_attackStage;
                    bool m_attackStageHasBeenSet;

                    /**
                     * <p>策略</p>
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>处理历史告警 / Handle Old Events: 0-否/No, 1-是/Yes</p>
                     */
                    int64_t m_dealOldEvents;
                    bool m_dealOldEventsHasBeenSet;

                    /**
                     * <p>ContentType=md5 时传入的 MD5 列表</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                    /**
                     * <p>ContentType=custom_file 时传入的文件名列表(Base64编码)</p>
                     */
                    std::vector<std::string> m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>ContentType=custom_file 时传入的文件目录列表(Base64编码)</p>
                     */
                    std::vector<std::string> m_fileDirectory;
                    bool m_fileDirectoryHasBeenSet;

                    /**
                     * <p>ContentType=cmdline 时传入的命令行规则，Process/PProcess/AProcess 的 Exe/Cmdline 字段需要 Base64 编码</p>
                     */
                    RuleContentCmdLine m_cmdLineRules;
                    bool m_cmdLineRulesHasBeenSet;

                    /**
                     * <p>ContentType=dns 时传入的域名列表(Base64编码)</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>ContentType=ip_outbound 时传入的出站IP列表(Base64编码)</p>
                     */
                    std::vector<std::string> m_outboundIP;
                    bool m_outboundIPHasBeenSet;

                    /**
                     * <p>ContentType=ip_inbound 时传入的入站IP列表(Base64编码)</p>
                     */
                    std::vector<std::string> m_inboundIP;
                    bool m_inboundIPHasBeenSet;

                    /**
                     * <p>镜像ID列表 / Image IDs (when TCSSScope=0)</p>
                     */
                    std::vector<std::string> m_imageIDs;
                    bool m_imageIDsHasBeenSet;

                    /**
                     * <p>ContentType=process_network 时传入的进程网络规则</p>
                     */
                    RuleContentProcessNetwork m_processNetworkRules;
                    bool m_processNetworkRulesHasBeenSet;

                    /**
                     * <p>选择的多账号的APPID</p>
                     */
                    std::vector<uint64_t> m_targetAppIDs;
                    bool m_targetAppIDsHasBeenSet;

                    /**
                     * <p>告警的加白目标机器信息</p>
                     */
                    EdrAlertTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>自选资产对应的实例ID和APPID</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_instanceIDsWithAppId;
                    bool m_instanceIDsWithAppIdHasBeenSet;

                    /**
                     * <p>全选资产排除的实例ID和APPID</p>
                     */
                    std::vector<InstanceIDWithAppIdItem> m_excludeInstanceIDsWithAppId;
                    bool m_excludeInstanceIDsWithAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYEDRRULEREQUEST_H_
