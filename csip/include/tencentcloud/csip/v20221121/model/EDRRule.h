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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRRULE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RuleContentCmdLine.h>
#include <tencentcloud/csip/v20221121/model/RuleContentProcessNetwork.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR-策略内容
                */
                class EDRRule : public AbstractModel
                {
                public:
                    EDRRule();
                    ~EDRRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>策略ID</p>
                     * @return RuleID <p>策略ID</p>
                     * 
                     */
                    std::string GetRuleID() const;

                    /**
                     * 设置<p>策略ID</p>
                     * @param _ruleID <p>策略ID</p>
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
                     * 获取<p>策略类型，0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
                     * @return RuleType <p>策略类型，0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>策略类型，0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
                     * @param _ruleType <p>策略类型，0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
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
                     * 获取<p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     * @return Action <p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     * 
                     */
                    int64_t GetAction() const;

                    /**
                     * 设置<p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     * @param _action <p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     * 
                     */
                    void SetAction(const int64_t& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>告警等级 / Alert Level: 0-无/None, 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
                     * @return Level <p>告警等级 / Alert Level: 0-无/None, 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置<p>告警等级 / Alert Level: 0-无/None, 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
                     * @param _level <p>告警等级 / Alert Level: 0-无/None, 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
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
                     * 获取<p>检测方式 / Detect Type: 0-主机检测/Host Detection, 1-网络检测/Network Detection</p>
                     * @return DetectType <p>检测方式 / Detect Type: 0-主机检测/Host Detection, 1-网络检测/Network Detection</p>
                     * 
                     */
                    int64_t GetDetectType() const;

                    /**
                     * 设置<p>检测方式 / Detect Type: 0-主机检测/Host Detection, 1-网络检测/Network Detection</p>
                     * @param _detectType <p>检测方式 / Detect Type: 0-主机检测/Host Detection, 1-网络检测/Network Detection</p>
                     * 
                     */
                    void SetDetectType(const int64_t& _detectType);

                    /**
                     * 判断参数 DetectType 是否已赋值
                     * @return DetectType 是否已赋值
                     * 
                     */
                    bool DetectTypeHasBeenSet() const;

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
                     * 获取<p>主机生效资产范围 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship</p>
                     * @return CWPScope <p>主机生效资产范围 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship</p>
                     * 
                     */
                    int64_t GetCWPScope() const;

                    /**
                     * 设置<p>主机生效资产范围 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship</p>
                     * @param _cWPScope <p>主机生效资产范围 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship</p>
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
                     * 获取<p>主机运行时的自选主机</p>
                     * @return QUUIDS <p>主机运行时的自选主机</p>
                     * 
                     */
                    std::vector<std::string> GetQUUIDS() const;

                    /**
                     * 设置<p>主机运行时的自选主机</p>
                     * @param _qUUIDS <p>主机运行时的自选主机</p>
                     * 
                     */
                    void SetQUUIDS(const std::vector<std::string>& _qUUIDS);

                    /**
                     * 判断参数 QUUIDS 是否已赋值
                     * @return QUUIDS 是否已赋值
                     * 
                     */
                    bool QUUIDSHasBeenSet() const;

                    /**
                     * 获取<p>状态 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
                     * @return Status <p>状态 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
                     * @param _status <p>状态 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改时间</p>
                     * @return ModifyTime <p>修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>修改时间</p>
                     * @param _modifyTime <p>修改时间</p>
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否支持拦截 / Support Block: 0-不支持/Not Supported, 1-支持/Supported</p>
                     * @return SupportBlock <p>是否支持拦截 / Support Block: 0-不支持/Not Supported, 1-支持/Supported</p>
                     * 
                     */
                    int64_t GetSupportBlock() const;

                    /**
                     * 设置<p>是否支持拦截 / Support Block: 0-不支持/Not Supported, 1-支持/Supported</p>
                     * @param _supportBlock <p>是否支持拦截 / Support Block: 0-不支持/Not Supported, 1-支持/Supported</p>
                     * 
                     */
                    void SetSupportBlock(const int64_t& _supportBlock);

                    /**
                     * 判断参数 SupportBlock 是否已赋值
                     * @return SupportBlock 是否已赋值
                     * 
                     */
                    bool SupportBlockHasBeenSet() const;

                    /**
                     * 获取<p>MD5列表,ContentType=md5 时填充</p>
                     * @return Md5List <p>MD5列表,ContentType=md5 时填充</p>
                     * 
                     */
                    std::vector<std::string> GetMd5List() const;

                    /**
                     * 设置<p>MD5列表,ContentType=md5 时填充</p>
                     * @param _md5List <p>MD5列表,ContentType=md5 时填充</p>
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
                     * 获取<p>文件名列表,ContentType=custom_file 时填充</p>
                     * @return FileName <p>文件名列表,ContentType=custom_file 时填充</p>
                     * 
                     */
                    std::vector<std::string> GetFileName() const;

                    /**
                     * 设置<p>文件名列表,ContentType=custom_file 时填充</p>
                     * @param _fileName <p>文件名列表,ContentType=custom_file 时填充</p>
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
                     * 获取<p>文件目录列表,ContentType=custom_file 时填充</p>
                     * @return FileDirectory <p>文件目录列表,ContentType=custom_file 时填充</p>
                     * 
                     */
                    std::vector<std::string> GetFileDirectory() const;

                    /**
                     * 设置<p>文件目录列表,ContentType=custom_file 时填充</p>
                     * @param _fileDirectory <p>文件目录列表,ContentType=custom_file 时填充</p>
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
                     * 获取<p>域名列表,ContentType=dns 时填充</p>
                     * @return Domains <p>域名列表,ContentType=dns 时填充</p>
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置<p>域名列表,ContentType=dns 时填充</p>
                     * @param _domains <p>域名列表,ContentType=dns 时填充</p>
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
                     * 获取<p>出站IP列表,ContentType=ip_outbound 时填充</p>
                     * @return OutboundIP <p>出站IP列表,ContentType=ip_outbound 时填充</p>
                     * 
                     */
                    std::vector<std::string> GetOutboundIP() const;

                    /**
                     * 设置<p>出站IP列表,ContentType=ip_outbound 时填充</p>
                     * @param _outboundIP <p>出站IP列表,ContentType=ip_outbound 时填充</p>
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
                     * 获取<p>入站IP列表,ContentType=ip_inbound 时填充</p>
                     * @return InboundIP <p>入站IP列表,ContentType=ip_inbound 时填充</p>
                     * 
                     */
                    std::vector<std::string> GetInboundIP() const;

                    /**
                     * 设置<p>入站IP列表,ContentType=ip_inbound 时填充</p>
                     * @param _inboundIP <p>入站IP列表,ContentType=ip_inbound 时填充</p>
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
                     * 获取<p>命令行规则,ContentType=cmdline 时填充</p>
                     * @return CmdLineRules <p>命令行规则,ContentType=cmdline 时填充</p>
                     * 
                     */
                    RuleContentCmdLine GetCmdLineRules() const;

                    /**
                     * 设置<p>命令行规则,ContentType=cmdline 时填充</p>
                     * @param _cmdLineRules <p>命令行规则,ContentType=cmdline 时填充</p>
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
                     * 获取<p>生效镜像ID列表 / Image IDs (when TCSSScope=0)</p>
                     * @return ImageIDs <p>生效镜像ID列表 / Image IDs (when TCSSScope=0)</p>
                     * 
                     */
                    std::vector<std::string> GetImageIDs() const;

                    /**
                     * 设置<p>生效镜像ID列表 / Image IDs (when TCSSScope=0)</p>
                     * @param _imageIDs <p>生效镜像ID列表 / Image IDs (when TCSSScope=0)</p>
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
                     * 获取<p>镜像名正则表达式 / Image Names Regex</p>
                     * @return ImageNamesRegex <p>镜像名正则表达式 / Image Names Regex</p>
                     * 
                     */
                    std::string GetImageNamesRegex() const;

                    /**
                     * 设置<p>镜像名正则表达式 / Image Names Regex</p>
                     * @param _imageNamesRegex <p>镜像名正则表达式 / Image Names Regex</p>
                     * 
                     */
                    void SetImageNamesRegex(const std::string& _imageNamesRegex);

                    /**
                     * 判断参数 ImageNamesRegex 是否已赋值
                     * @return ImageNamesRegex 是否已赋值
                     * 
                     */
                    bool ImageNamesRegexHasBeenSet() const;

                    /**
                     * 获取<p>置信度 / Confidence: 0-低/Low, 1-中/Medium, 2-高/High</p>
                     * @return Confidence <p>置信度 / Confidence: 0-低/Low, 1-中/Medium, 2-高/High</p>
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置<p>置信度 / Confidence: 0-低/Low, 1-中/Medium, 2-高/High</p>
                     * @param _confidence <p>置信度 / Confidence: 0-低/Low, 1-中/Medium, 2-高/High</p>
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>排除的主机列表 / Excluded Host QUUIDS</p>
                     * @return ExcludeQUUIDS <p>排除的主机列表 / Excluded Host QUUIDS</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQUUIDS() const;

                    /**
                     * 设置<p>排除的主机列表 / Excluded Host QUUIDS</p>
                     * @param _excludeQUUIDS <p>排除的主机列表 / Excluded Host QUUIDS</p>
                     * 
                     */
                    void SetExcludeQUUIDS(const std::vector<std::string>& _excludeQUUIDS);

                    /**
                     * 判断参数 ExcludeQUUIDS 是否已赋值
                     * @return ExcludeQUUIDS 是否已赋值
                     * 
                     */
                    bool ExcludeQUUIDSHasBeenSet() const;

                    /**
                     * 获取<p>排除的镜像ID列表 / Excluded Image IDs</p>
                     * @return ExcludeImageIDs <p>排除的镜像ID列表 / Excluded Image IDs</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeImageIDs() const;

                    /**
                     * 设置<p>排除的镜像ID列表 / Excluded Image IDs</p>
                     * @param _excludeImageIDs <p>排除的镜像ID列表 / Excluded Image IDs</p>
                     * 
                     */
                    void SetExcludeImageIDs(const std::vector<std::string>& _excludeImageIDs);

                    /**
                     * 判断参数 ExcludeImageIDs 是否已赋值
                     * @return ExcludeImageIDs 是否已赋值
                     * 
                     */
                    bool ExcludeImageIDsHasBeenSet() const;

                    /**
                     * 获取<p>进程网络规则 / Process network rules</p>
                     * @return ProcessNetworkRules <p>进程网络规则 / Process network rules</p>
                     * 
                     */
                    RuleContentProcessNetwork GetProcessNetworkRules() const;

                    /**
                     * 设置<p>进程网络规则 / Process network rules</p>
                     * @param _processNetworkRules <p>进程网络规则 / Process network rules</p>
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
                     * 获取<p>策略对应APPID</p>
                     * @return AppID <p>策略对应APPID</p>
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置<p>策略对应APPID</p>
                     * @param _appID <p>策略对应APPID</p>
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>自选实例ID范围</p>
                     * @return InstanceIDs <p>自选实例ID范围</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIDs() const;

                    /**
                     * 设置<p>自选实例ID范围</p>
                     * @param _instanceIDs <p>自选实例ID范围</p>
                     * 
                     */
                    void SetInstanceIDs(const std::vector<std::string>& _instanceIDs);

                    /**
                     * 判断参数 InstanceIDs 是否已赋值
                     * @return InstanceIDs 是否已赋值
                     * 
                     */
                    bool InstanceIDsHasBeenSet() const;

                    /**
                     * 获取<p>排除实例ID</p>
                     * @return ExcludeInstanceIDs <p>排除实例ID</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeInstanceIDs() const;

                    /**
                     * 设置<p>排除实例ID</p>
                     * @param _excludeInstanceIDs <p>排除实例ID</p>
                     * 
                     */
                    void SetExcludeInstanceIDs(const std::vector<std::string>& _excludeInstanceIDs);

                    /**
                     * 判断参数 ExcludeInstanceIDs 是否已赋值
                     * @return ExcludeInstanceIDs 是否已赋值
                     * 
                     */
                    bool ExcludeInstanceIDsHasBeenSet() const;

                private:

                    /**
                     * <p>策略ID</p>
                     */
                    std::string m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * <p>策略类型，0-系统策略/System Rule, 1-自定义策略/Custom Rule</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>策略名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>策略描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>内容类型 / Content Type: md5-文件MD5/File MD5, cmdline-命令行/Command Line, dns-DNS, ip_inbound-入站IP/Inbound IP, ip_outbound-出站IP/Outbound IP, custom_file-自定义文件/Custom File, process_network-进程网络/Process Network</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>执行动作 / Action: 0-告警/Alert, 1-放行/Allow, 2-告警并拦截/Alert and Block</p>
                     */
                    int64_t m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>告警等级 / Alert Level: 0-无/None, 1-高危/High, 2-中危/Medium, 3-低危/Low, 4-提示/Reminder</p>
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>检测模式 / Detect Mode: 0-精准/Precise, 1-均衡/Balanced, 2-深度/Deep</p>
                     */
                    int64_t m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * <p>检测方式 / Detect Type: 0-主机检测/Host Detection, 1-网络检测/Network Detection</p>
                     */
                    int64_t m_detectType;
                    bool m_detectTypeHasBeenSet;

                    /**
                     * <p>攻击阶段</p>
                     */
                    std::string m_attackStage;
                    bool m_attackStageHasBeenSet;

                    /**
                     * <p>主机生效资产范围 / Effective Scope: 0-指定主机/Specified Hosts, 1-全部主机/All Hosts, 2-专业版/Professional, 3-旗舰版/Flagship, 4-专业版+旗舰版/Professional+Flagship</p>
                     */
                    int64_t m_cWPScope;
                    bool m_cWPScopeHasBeenSet;

                    /**
                     * <p>主机运行时的自选主机</p>
                     */
                    std::vector<std::string> m_qUUIDS;
                    bool m_qUUIDSHasBeenSet;

                    /**
                     * <p>状态 / Status: 0-开启/Enabled, 1-关闭/Disabled</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>是否支持拦截 / Support Block: 0-不支持/Not Supported, 1-支持/Supported</p>
                     */
                    int64_t m_supportBlock;
                    bool m_supportBlockHasBeenSet;

                    /**
                     * <p>MD5列表,ContentType=md5 时填充</p>
                     */
                    std::vector<std::string> m_md5List;
                    bool m_md5ListHasBeenSet;

                    /**
                     * <p>文件名列表,ContentType=custom_file 时填充</p>
                     */
                    std::vector<std::string> m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>文件目录列表,ContentType=custom_file 时填充</p>
                     */
                    std::vector<std::string> m_fileDirectory;
                    bool m_fileDirectoryHasBeenSet;

                    /**
                     * <p>域名列表,ContentType=dns 时填充</p>
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * <p>出站IP列表,ContentType=ip_outbound 时填充</p>
                     */
                    std::vector<std::string> m_outboundIP;
                    bool m_outboundIPHasBeenSet;

                    /**
                     * <p>入站IP列表,ContentType=ip_inbound 时填充</p>
                     */
                    std::vector<std::string> m_inboundIP;
                    bool m_inboundIPHasBeenSet;

                    /**
                     * <p>命令行规则,ContentType=cmdline 时填充</p>
                     */
                    RuleContentCmdLine m_cmdLineRules;
                    bool m_cmdLineRulesHasBeenSet;

                    /**
                     * <p>容器生效镜像范围 / Container Image Scope: 0-指定镜像/Specified Images, 1-全部镜像/All Images</p>
                     */
                    int64_t m_tCSSScope;
                    bool m_tCSSScopeHasBeenSet;

                    /**
                     * <p>生效镜像ID列表 / Image IDs (when TCSSScope=0)</p>
                     */
                    std::vector<std::string> m_imageIDs;
                    bool m_imageIDsHasBeenSet;

                    /**
                     * <p>镜像名正则表达式 / Image Names Regex</p>
                     */
                    std::string m_imageNamesRegex;
                    bool m_imageNamesRegexHasBeenSet;

                    /**
                     * <p>置信度 / Confidence: 0-低/Low, 1-中/Medium, 2-高/High</p>
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>排除的主机列表 / Excluded Host QUUIDS</p>
                     */
                    std::vector<std::string> m_excludeQUUIDS;
                    bool m_excludeQUUIDSHasBeenSet;

                    /**
                     * <p>排除的镜像ID列表 / Excluded Image IDs</p>
                     */
                    std::vector<std::string> m_excludeImageIDs;
                    bool m_excludeImageIDsHasBeenSet;

                    /**
                     * <p>进程网络规则 / Process network rules</p>
                     */
                    RuleContentProcessNetwork m_processNetworkRules;
                    bool m_processNetworkRulesHasBeenSet;

                    /**
                     * <p>策略对应APPID</p>
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>自选实例ID范围</p>
                     */
                    std::vector<std::string> m_instanceIDs;
                    bool m_instanceIDsHasBeenSet;

                    /**
                     * <p>排除实例ID</p>
                     */
                    std::vector<std::string> m_excludeInstanceIDs;
                    bool m_excludeInstanceIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRRULE_H_
