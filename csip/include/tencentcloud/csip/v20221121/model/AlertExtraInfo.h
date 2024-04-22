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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTEXTRAINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RelatedEvent.h>
#include <tencentcloud/csip/v20221121/model/KeyValue.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 告警下拉字段
                */
                class AlertExtraInfo : public AbstractModel
                {
                public:
                    AlertExtraInfo();
                    ~AlertExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取相关攻击事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelateEvent 相关攻击事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RelatedEvent GetRelateEvent() const;

                    /**
                     * 设置相关攻击事件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relateEvent 相关攻击事件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelateEvent(const RelatedEvent& _relateEvent);

                    /**
                     * 判断参数 RelateEvent 是否已赋值
                     * @return RelateEvent 是否已赋值
                     * 
                     */
                    bool RelateEventHasBeenSet() const;

                    /**
                     * 获取泄漏内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeakContent 泄漏内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLeakContent() const;

                    /**
                     * 设置泄漏内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leakContent 泄漏内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLeakContent(const std::string& _leakContent);

                    /**
                     * 判断参数 LeakContent 是否已赋值
                     * @return LeakContent 是否已赋值
                     * 
                     */
                    bool LeakContentHasBeenSet() const;

                    /**
                     * 获取泄漏API
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeakAPI 泄漏API
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLeakAPI() const;

                    /**
                     * 设置泄漏API
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leakAPI 泄漏API
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLeakAPI(const std::string& _leakAPI);

                    /**
                     * 判断参数 LeakAPI 是否已赋值
                     * @return LeakAPI 是否已赋值
                     * 
                     */
                    bool LeakAPIHasBeenSet() const;

                    /**
                     * 获取secretID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecretID secretID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSecretID() const;

                    /**
                     * 设置secretID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secretID secretID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecretID(const std::string& _secretID);

                    /**
                     * 判断参数 SecretID 是否已赋值
                     * @return SecretID 是否已赋值
                     * 
                     */
                    bool SecretIDHasBeenSet() const;

                    /**
                     * 获取命中规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rule 命中规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRule() const;

                    /**
                     * 设置命中规则
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rule 命中规则
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRule(const std::string& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleDesc 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRuleDesc() const;

                    /**
                     * 设置规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleDesc 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleDesc(const std::string& _ruleDesc);

                    /**
                     * 判断参数 RuleDesc 是否已赋值
                     * @return RuleDesc 是否已赋值
                     * 
                     */
                    bool RuleDescHasBeenSet() const;

                    /**
                     * 获取协议端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtocolPort 协议端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtocolPort() const;

                    /**
                     * 设置协议端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protocolPort 协议端口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtocolPort(const std::string& _protocolPort);

                    /**
                     * 判断参数 ProtocolPort 是否已赋值
                     * @return ProtocolPort 是否已赋值
                     * 
                     */
                    bool ProtocolPortHasBeenSet() const;

                    /**
                     * 获取攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackContent 攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackContent() const;

                    /**
                     * 设置攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackContent 攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackContent(const std::string& _attackContent);

                    /**
                     * 判断参数 AttackContent 是否已赋值
                     * @return AttackContent 是否已赋值
                     * 
                     */
                    bool AttackContentHasBeenSet() const;

                    /**
                     * 获取攻击IP画像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackIPProfile 攻击IP画像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackIPProfile() const;

                    /**
                     * 设置攻击IP画像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackIPProfile 攻击IP画像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackIPProfile(const std::string& _attackIPProfile);

                    /**
                     * 判断参数 AttackIPProfile 是否已赋值
                     * @return AttackIPProfile 是否已赋值
                     * 
                     */
                    bool AttackIPProfileHasBeenSet() const;

                    /**
                     * 获取攻击IP标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackIPTags 攻击IP标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackIPTags() const;

                    /**
                     * 设置攻击IP标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackIPTags 攻击IP标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackIPTags(const std::string& _attackIPTags);

                    /**
                     * 判断参数 AttackIPTags 是否已赋值
                     * @return AttackIPTags 是否已赋值
                     * 
                     */
                    bool AttackIPTagsHasBeenSet() const;

                    /**
                     * 获取请求方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestMethod 请求方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestMethod() const;

                    /**
                     * 设置请求方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestMethod 请求方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestMethod(const std::string& _requestMethod);

                    /**
                     * 判断参数 RequestMethod 是否已赋值
                     * @return RequestMethod 是否已赋值
                     * 
                     */
                    bool RequestMethodHasBeenSet() const;

                    /**
                     * 获取HTTP日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpLog HTTP日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHttpLog() const;

                    /**
                     * 设置HTTP日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpLog HTTP日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpLog(const std::string& _httpLog);

                    /**
                     * 判断参数 HttpLog 是否已赋值
                     * @return HttpLog 是否已赋值
                     * 
                     */
                    bool HttpLogHasBeenSet() const;

                    /**
                     * 获取被攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackDomain 被攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackDomain() const;

                    /**
                     * 设置被攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackDomain 被攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackDomain(const std::string& _attackDomain);

                    /**
                     * 判断参数 AttackDomain 是否已赋值
                     * @return AttackDomain 是否已赋值
                     * 
                     */
                    bool AttackDomainHasBeenSet() const;

                    /**
                     * 获取文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilePath 文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filePath 文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取user_agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAgent user_agent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置user_agent
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAgent user_agent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestHeaders 请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestHeaders() const;

                    /**
                     * 设置请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestHeaders 请求头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestHeaders(const std::string& _requestHeaders);

                    /**
                     * 判断参数 RequestHeaders 是否已赋值
                     * @return RequestHeaders 是否已赋值
                     * 
                     */
                    bool RequestHeadersHasBeenSet() const;

                    /**
                     * 获取登录用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoginUserName 登录用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLoginUserName() const;

                    /**
                     * 设置登录用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _loginUserName 登录用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLoginUserName(const std::string& _loginUserName);

                    /**
                     * 判断参数 LoginUserName 是否已赋值
                     * @return LoginUserName 是否已赋值
                     * 
                     */
                    bool LoginUserNameHasBeenSet() const;

                    /**
                     * 获取漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulnerabilityName 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulnerabilityName() const;

                    /**
                     * 设置漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulnerabilityName 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulnerabilityName(const std::string& _vulnerabilityName);

                    /**
                     * 判断参数 VulnerabilityName 是否已赋值
                     * @return VulnerabilityName 是否已赋值
                     * 
                     */
                    bool VulnerabilityNameHasBeenSet() const;

                    /**
                     * 获取公共漏洞和暴露
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CVE 公共漏洞和暴露
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCVE() const;

                    /**
                     * 设置公共漏洞和暴露
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cVE 公共漏洞和暴露
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCVE(const std::string& _cVE);

                    /**
                     * 判断参数 CVE 是否已赋值
                     * @return CVE 是否已赋值
                     * 
                     */
                    bool CVEHasBeenSet() const;

                    /**
                     * 获取服务进程
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceProcess 服务进程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceProcess() const;

                    /**
                     * 设置服务进程
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceProcess 服务进程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceProcess(const std::string& _serviceProcess);

                    /**
                     * 判断参数 ServiceProcess 是否已赋值
                     * @return ServiceProcess 是否已赋值
                     * 
                     */
                    bool ServiceProcessHasBeenSet() const;

                    /**
                     * 获取文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileSize() const;

                    /**
                     * 设置文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const std::string& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileMD5 文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileMD5() const;

                    /**
                     * 设置文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileMD5 文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileMD5(const std::string& _fileMD5);

                    /**
                     * 判断参数 FileMD5 是否已赋值
                     * @return FileMD5 是否已赋值
                     * 
                     */
                    bool FileMD5HasBeenSet() const;

                    /**
                     * 获取文件最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileLastAccessTime 文件最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileLastAccessTime() const;

                    /**
                     * 设置文件最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileLastAccessTime 文件最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileLastAccessTime(const std::string& _fileLastAccessTime);

                    /**
                     * 判断参数 FileLastAccessTime 是否已赋值
                     * @return FileLastAccessTime 是否已赋值
                     * 
                     */
                    bool FileLastAccessTimeHasBeenSet() const;

                    /**
                     * 获取文件修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileModifyTime 文件修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileModifyTime() const;

                    /**
                     * 设置文件修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileModifyTime 文件修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileModifyTime(const std::string& _fileModifyTime);

                    /**
                     * 判断参数 FileModifyTime 是否已赋值
                     * @return FileModifyTime 是否已赋值
                     * 
                     */
                    bool FileModifyTimeHasBeenSet() const;

                    /**
                     * 获取最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecentAccessTime 最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecentAccessTime() const;

                    /**
                     * 设置最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recentAccessTime 最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecentAccessTime(const std::string& _recentAccessTime);

                    /**
                     * 判断参数 RecentAccessTime 是否已赋值
                     * @return RecentAccessTime 是否已赋值
                     * 
                     */
                    bool RecentAccessTimeHasBeenSet() const;

                    /**
                     * 获取最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RecentModifyTime 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRecentModifyTime() const;

                    /**
                     * 设置最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _recentModifyTime 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRecentModifyTime(const std::string& _recentModifyTime);

                    /**
                     * 判断参数 RecentModifyTime 是否已赋值
                     * @return RecentModifyTime 是否已赋值
                     * 
                     */
                    bool RecentModifyTimeHasBeenSet() const;

                    /**
                     * 获取病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirusName 病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virusName 病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     * 
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取病毒文件标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirusFileTags 病毒文件标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirusFileTags() const;

                    /**
                     * 设置病毒文件标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virusFileTags 病毒文件标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirusFileTags(const std::string& _virusFileTags);

                    /**
                     * 判断参数 VirusFileTags 是否已赋值
                     * @return VirusFileTags 是否已赋值
                     * 
                     */
                    bool VirusFileTagsHasBeenSet() const;

                    /**
                     * 获取行为特征
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BehavioralCharacteristics 行为特征
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBehavioralCharacteristics() const;

                    /**
                     * 设置行为特征
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _behavioralCharacteristics 行为特征
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBehavioralCharacteristics(const std::string& _behavioralCharacteristics);

                    /**
                     * 判断参数 BehavioralCharacteristics 是否已赋值
                     * @return BehavioralCharacteristics 是否已赋值
                     * 
                     */
                    bool BehavioralCharacteristicsHasBeenSet() const;

                    /**
                     * 获取进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessNamePID 进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessNamePID() const;

                    /**
                     * 设置进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processNamePID 进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessNamePID(const std::string& _processNamePID);

                    /**
                     * 判断参数 ProcessNamePID 是否已赋值
                     * @return ProcessNamePID 是否已赋值
                     * 
                     */
                    bool ProcessNamePIDHasBeenSet() const;

                    /**
                     * 获取进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessPath 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessPath() const;

                    /**
                     * 设置进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processPath 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessPath(const std::string& _processPath);

                    /**
                     * 判断参数 ProcessPath 是否已赋值
                     * @return ProcessPath 是否已赋值
                     * 
                     */
                    bool ProcessPathHasBeenSet() const;

                    /**
                     * 获取进程命令行
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessCommandLine 进程命令行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessCommandLine() const;

                    /**
                     * 设置进程命令行
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processCommandLine 进程命令行
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessCommandLine(const std::string& _processCommandLine);

                    /**
                     * 判断参数 ProcessCommandLine 是否已赋值
                     * @return ProcessCommandLine 是否已赋值
                     * 
                     */
                    bool ProcessCommandLineHasBeenSet() const;

                    /**
                     * 获取进程权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessPermissions 进程权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessPermissions() const;

                    /**
                     * 设置进程权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processPermissions 进程权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessPermissions(const std::string& _processPermissions);

                    /**
                     * 判断参数 ProcessPermissions 是否已赋值
                     * @return ProcessPermissions 是否已赋值
                     * 
                     */
                    bool ProcessPermissionsHasBeenSet() const;

                    /**
                     * 获取执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutedCommand 执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutedCommand() const;

                    /**
                     * 设置执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executedCommand 执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutedCommand(const std::string& _executedCommand);

                    /**
                     * 判断参数 ExecutedCommand 是否已赋值
                     * @return ExecutedCommand 是否已赋值
                     * 
                     */
                    bool ExecutedCommandHasBeenSet() const;

                    /**
                     * 获取受影响文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AffectedFileName 受影响文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAffectedFileName() const;

                    /**
                     * 设置受影响文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _affectedFileName 受影响文件名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAffectedFileName(const std::string& _affectedFileName);

                    /**
                     * 判断参数 AffectedFileName 是否已赋值
                     * @return AffectedFileName 是否已赋值
                     * 
                     */
                    bool AffectedFileNameHasBeenSet() const;

                    /**
                     * 获取诱饵路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DecoyPath 诱饵路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDecoyPath() const;

                    /**
                     * 设置诱饵路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _decoyPath 诱饵路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDecoyPath(const std::string& _decoyPath);

                    /**
                     * 判断参数 DecoyPath 是否已赋值
                     * @return DecoyPath 是否已赋值
                     * 
                     */
                    bool DecoyPathHasBeenSet() const;

                    /**
                     * 获取恶意进程文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaliciousProcessFileSize 恶意进程文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaliciousProcessFileSize() const;

                    /**
                     * 设置恶意进程文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maliciousProcessFileSize 恶意进程文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaliciousProcessFileSize(const std::string& _maliciousProcessFileSize);

                    /**
                     * 判断参数 MaliciousProcessFileSize 是否已赋值
                     * @return MaliciousProcessFileSize 是否已赋值
                     * 
                     */
                    bool MaliciousProcessFileSizeHasBeenSet() const;

                    /**
                     * 获取恶意进程文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaliciousProcessFileMD5 恶意进程文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaliciousProcessFileMD5() const;

                    /**
                     * 设置恶意进程文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maliciousProcessFileMD5 恶意进程文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaliciousProcessFileMD5(const std::string& _maliciousProcessFileMD5);

                    /**
                     * 判断参数 MaliciousProcessFileMD5 是否已赋值
                     * @return MaliciousProcessFileMD5 是否已赋值
                     * 
                     */
                    bool MaliciousProcessFileMD5HasBeenSet() const;

                    /**
                     * 获取恶意进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaliciousProcessNamePID 恶意进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaliciousProcessNamePID() const;

                    /**
                     * 设置恶意进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maliciousProcessNamePID 恶意进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaliciousProcessNamePID(const std::string& _maliciousProcessNamePID);

                    /**
                     * 判断参数 MaliciousProcessNamePID 是否已赋值
                     * @return MaliciousProcessNamePID 是否已赋值
                     * 
                     */
                    bool MaliciousProcessNamePIDHasBeenSet() const;

                    /**
                     * 获取恶意进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaliciousProcessPath 恶意进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaliciousProcessPath() const;

                    /**
                     * 设置恶意进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maliciousProcessPath 恶意进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaliciousProcessPath(const std::string& _maliciousProcessPath);

                    /**
                     * 判断参数 MaliciousProcessPath 是否已赋值
                     * @return MaliciousProcessPath 是否已赋值
                     * 
                     */
                    bool MaliciousProcessPathHasBeenSet() const;

                    /**
                     * 获取恶意进程启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaliciousProcessStartTime 恶意进程启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaliciousProcessStartTime() const;

                    /**
                     * 设置恶意进程启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maliciousProcessStartTime 恶意进程启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaliciousProcessStartTime(const std::string& _maliciousProcessStartTime);

                    /**
                     * 判断参数 MaliciousProcessStartTime 是否已赋值
                     * @return MaliciousProcessStartTime 是否已赋值
                     * 
                     */
                    bool MaliciousProcessStartTimeHasBeenSet() const;

                    /**
                     * 获取命令内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommandContent 命令内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommandContent() const;

                    /**
                     * 设置命令内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commandContent 命令内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommandContent(const std::string& _commandContent);

                    /**
                     * 判断参数 CommandContent 是否已赋值
                     * @return CommandContent 是否已赋值
                     * 
                     */
                    bool CommandContentHasBeenSet() const;

                    /**
                     * 获取启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartupUser 启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartupUser() const;

                    /**
                     * 设置启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startupUser 启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartupUser(const std::string& _startupUser);

                    /**
                     * 判断参数 StartupUser 是否已赋值
                     * @return StartupUser 是否已赋值
                     * 
                     */
                    bool StartupUserHasBeenSet() const;

                    /**
                     * 获取用户所属组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroup 用户所属组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置用户所属组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroup 用户所属组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取新增权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewPermissions 新增权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNewPermissions() const;

                    /**
                     * 设置新增权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _newPermissions 新增权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNewPermissions(const std::string& _newPermissions);

                    /**
                     * 判断参数 NewPermissions 是否已赋值
                     * @return NewPermissions 是否已赋值
                     * 
                     */
                    bool NewPermissionsHasBeenSet() const;

                    /**
                     * 获取父进程
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentProcess 父进程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentProcess() const;

                    /**
                     * 设置父进程
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentProcess 父进程
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentProcess(const std::string& _parentProcess);

                    /**
                     * 判断参数 ParentProcess 是否已赋值
                     * @return ParentProcess 是否已赋值
                     * 
                     */
                    bool ParentProcessHasBeenSet() const;

                    /**
                     * 获取类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassName 类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _className 类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取所属类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassLoader 所属类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassLoader() const;

                    /**
                     * 设置所属类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classLoader 所属类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassLoader(const std::string& _classLoader);

                    /**
                     * 判断参数 ClassLoader 是否已赋值
                     * @return ClassLoader 是否已赋值
                     * 
                     */
                    bool ClassLoaderHasBeenSet() const;

                    /**
                     * 获取类文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassFileSize 类文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassFileSize() const;

                    /**
                     * 设置类文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classFileSize 类文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassFileSize(const std::string& _classFileSize);

                    /**
                     * 判断参数 ClassFileSize 是否已赋值
                     * @return ClassFileSize 是否已赋值
                     * 
                     */
                    bool ClassFileSizeHasBeenSet() const;

                    /**
                     * 获取类文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassFileMD5 类文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClassFileMD5() const;

                    /**
                     * 设置类文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classFileMD5 类文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassFileMD5(const std::string& _classFileMD5);

                    /**
                     * 判断参数 ClassFileMD5 是否已赋值
                     * @return ClassFileMD5 是否已赋值
                     * 
                     */
                    bool ClassFileMD5HasBeenSet() const;

                    /**
                     * 获取父类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentClassName 父类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentClassName() const;

                    /**
                     * 设置父类名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentClassName 父类名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentClassName(const std::string& _parentClassName);

                    /**
                     * 判断参数 ParentClassName 是否已赋值
                     * @return ParentClassName 是否已赋值
                     * 
                     */
                    bool ParentClassNameHasBeenSet() const;

                    /**
                     * 获取继承接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InheritedInterface 继承接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInheritedInterface() const;

                    /**
                     * 设置继承接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inheritedInterface 继承接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInheritedInterface(const std::string& _inheritedInterface);

                    /**
                     * 判断参数 InheritedInterface 是否已赋值
                     * @return InheritedInterface 是否已赋值
                     * 
                     */
                    bool InheritedInterfaceHasBeenSet() const;

                    /**
                     * 获取注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取载荷内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayloadContent 载荷内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPayloadContent() const;

                    /**
                     * 设置载荷内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _payloadContent 载荷内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPayloadContent(const std::string& _payloadContent);

                    /**
                     * 判断参数 PayloadContent 是否已赋值
                     * @return PayloadContent 是否已赋值
                     * 
                     */
                    bool PayloadContentHasBeenSet() const;

                    /**
                     * 获取回连地址画像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackAddressPortrait 回连地址画像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallbackAddressPortrait() const;

                    /**
                     * 设置回连地址画像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callbackAddressPortrait 回连地址画像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallbackAddressPortrait(const std::string& _callbackAddressPortrait);

                    /**
                     * 判断参数 CallbackAddressPortrait 是否已赋值
                     * @return CallbackAddressPortrait 是否已赋值
                     * 
                     */
                    bool CallbackAddressPortraitHasBeenSet() const;

                    /**
                     * 获取回连地址标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackAddressTag 回连地址标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCallbackAddressTag() const;

                    /**
                     * 设置回连地址标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _callbackAddressTag 回连地址标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCallbackAddressTag(const std::string& _callbackAddressTag);

                    /**
                     * 判断参数 CallbackAddressTag 是否已赋值
                     * @return CallbackAddressTag 是否已赋值
                     * 
                     */
                    bool CallbackAddressTagHasBeenSet() const;

                    /**
                     * 获取进程MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessMD5 进程MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessMD5() const;

                    /**
                     * 设置进程MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processMD5 进程MD5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessMD5(const std::string& _processMD5);

                    /**
                     * 判断参数 ProcessMD5 是否已赋值
                     * @return ProcessMD5 是否已赋值
                     * 
                     */
                    bool ProcessMD5HasBeenSet() const;

                    /**
                     * 获取文件权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FilePermission 文件权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFilePermission() const;

                    /**
                     * 设置文件权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _filePermission 文件权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFilePermission(const std::string& _filePermission);

                    /**
                     * 判断参数 FilePermission 是否已赋值
                     * @return FilePermission 是否已赋值
                     * 
                     */
                    bool FilePermissionHasBeenSet() const;

                    /**
                     * 获取来源于日志分析的信息字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromLogAnalysisData 来源于日志分析的信息字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KeyValue> GetFromLogAnalysisData() const;

                    /**
                     * 设置来源于日志分析的信息字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromLogAnalysisData 来源于日志分析的信息字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromLogAnalysisData(const std::vector<KeyValue>& _fromLogAnalysisData);

                    /**
                     * 判断参数 FromLogAnalysisData 是否已赋值
                     * @return FromLogAnalysisData 是否已赋值
                     * 
                     */
                    bool FromLogAnalysisDataHasBeenSet() const;

                    /**
                     * 获取命中探针
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitProbe 命中探针
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHitProbe() const;

                    /**
                     * 设置命中探针
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitProbe 命中探针
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitProbe(const std::string& _hitProbe);

                    /**
                     * 判断参数 HitProbe 是否已赋值
                     * @return HitProbe 是否已赋值
                     * 
                     */
                    bool HitProbeHasBeenSet() const;

                    /**
                     * 获取命中蜜罐

注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitHoneyPot 命中蜜罐

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHitHoneyPot() const;

                    /**
                     * 设置命中蜜罐

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitHoneyPot 命中蜜罐

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitHoneyPot(const std::string& _hitHoneyPot);

                    /**
                     * 判断参数 HitHoneyPot 是否已赋值
                     * @return HitHoneyPot 是否已赋值
                     * 
                     */
                    bool HitHoneyPotHasBeenSet() const;

                    /**
                     * 获取命令列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommandList 命令列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCommandList() const;

                    /**
                     * 设置命令列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _commandList 命令列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCommandList(const std::string& _commandList);

                    /**
                     * 判断参数 CommandList 是否已赋值
                     * @return CommandList 是否已赋值
                     * 
                     */
                    bool CommandListHasBeenSet() const;

                    /**
                     * 获取攻击事件描述

注意：此字段可能返回 null，表示取不到有效值。
                     * @return AttackEventDesc 攻击事件描述

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAttackEventDesc() const;

                    /**
                     * 设置攻击事件描述

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _attackEventDesc 攻击事件描述

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAttackEventDesc(const std::string& _attackEventDesc);

                    /**
                     * 判断参数 AttackEventDesc 是否已赋值
                     * @return AttackEventDesc 是否已赋值
                     * 
                     */
                    bool AttackEventDescHasBeenSet() const;

                    /**
                     * 获取进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessInfo 进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessInfo() const;

                    /**
                     * 设置进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processInfo 进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessInfo(const std::string& _processInfo);

                    /**
                     * 判断参数 ProcessInfo 是否已赋值
                     * @return ProcessInfo 是否已赋值
                     * 
                     */
                    bool ProcessInfoHasBeenSet() const;

                    /**
                     * 获取使用用户名&密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserNameAndPwd 使用用户名&密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserNameAndPwd() const;

                    /**
                     * 设置使用用户名&密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userNameAndPwd 使用用户名&密码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserNameAndPwd(const std::string& _userNameAndPwd);

                    /**
                     * 判断参数 UserNameAndPwd 是否已赋值
                     * @return UserNameAndPwd 是否已赋值
                     * 
                     */
                    bool UserNameAndPwdHasBeenSet() const;

                    /**
                     * 获取主机防护策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyID 主机防护策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyID() const;

                    /**
                     * 设置主机防护策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyID 主机防护策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyID(const std::string& _strategyID);

                    /**
                     * 判断参数 StrategyID 是否已赋值
                     * @return StrategyID 是否已赋值
                     * 
                     */
                    bool StrategyIDHasBeenSet() const;

                    /**
                     * 获取主机防护策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrategyName 主机防护策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrategyName() const;

                    /**
                     * 设置主机防护策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strategyName 主机防护策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrategyName(const std::string& _strategyName);

                    /**
                     * 判断参数 StrategyName 是否已赋值
                     * @return StrategyName 是否已赋值
                     * 
                     */
                    bool StrategyNameHasBeenSet() const;

                    /**
                     * 获取主机防护命中策略，是策略ID和策略名称的组合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HitStrategy 主机防护命中策略，是策略ID和策略名称的组合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHitStrategy() const;

                    /**
                     * 设置主机防护命中策略，是策略ID和策略名称的组合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hitStrategy 主机防护命中策略，是策略ID和策略名称的组合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHitStrategy(const std::string& _hitStrategy);

                    /**
                     * 判断参数 HitStrategy 是否已赋值
                     * @return HitStrategy 是否已赋值
                     * 
                     */
                    bool HitStrategyHasBeenSet() const;

                private:

                    /**
                     * 相关攻击事件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RelatedEvent m_relateEvent;
                    bool m_relateEventHasBeenSet;

                    /**
                     * 泄漏内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_leakContent;
                    bool m_leakContentHasBeenSet;

                    /**
                     * 泄漏API
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_leakAPI;
                    bool m_leakAPIHasBeenSet;

                    /**
                     * secretID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_secretID;
                    bool m_secretIDHasBeenSet;

                    /**
                     * 命中规则
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleDesc;
                    bool m_ruleDescHasBeenSet;

                    /**
                     * 协议端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protocolPort;
                    bool m_protocolPortHasBeenSet;

                    /**
                     * 攻击内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackContent;
                    bool m_attackContentHasBeenSet;

                    /**
                     * 攻击IP画像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackIPProfile;
                    bool m_attackIPProfileHasBeenSet;

                    /**
                     * 攻击IP标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackIPTags;
                    bool m_attackIPTagsHasBeenSet;

                    /**
                     * 请求方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestMethod;
                    bool m_requestMethodHasBeenSet;

                    /**
                     * HTTP日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpLog;
                    bool m_httpLogHasBeenSet;

                    /**
                     * 被攻击域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackDomain;
                    bool m_attackDomainHasBeenSet;

                    /**
                     * 文件路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * user_agent
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 请求头
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestHeaders;
                    bool m_requestHeadersHasBeenSet;

                    /**
                     * 登录用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_loginUserName;
                    bool m_loginUserNameHasBeenSet;

                    /**
                     * 漏洞名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulnerabilityName;
                    bool m_vulnerabilityNameHasBeenSet;

                    /**
                     * 公共漏洞和暴露
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cVE;
                    bool m_cVEHasBeenSet;

                    /**
                     * 服务进程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceProcess;
                    bool m_serviceProcessHasBeenSet;

                    /**
                     * 文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileMD5;
                    bool m_fileMD5HasBeenSet;

                    /**
                     * 文件最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileLastAccessTime;
                    bool m_fileLastAccessTimeHasBeenSet;

                    /**
                     * 文件修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileModifyTime;
                    bool m_fileModifyTimeHasBeenSet;

                    /**
                     * 最近访问时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recentAccessTime;
                    bool m_recentAccessTimeHasBeenSet;

                    /**
                     * 最近修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_recentModifyTime;
                    bool m_recentModifyTimeHasBeenSet;

                    /**
                     * 病毒名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * 病毒文件标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virusFileTags;
                    bool m_virusFileTagsHasBeenSet;

                    /**
                     * 行为特征
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_behavioralCharacteristics;
                    bool m_behavioralCharacteristicsHasBeenSet;

                    /**
                     * 进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processNamePID;
                    bool m_processNamePIDHasBeenSet;

                    /**
                     * 进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processPath;
                    bool m_processPathHasBeenSet;

                    /**
                     * 进程命令行
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processCommandLine;
                    bool m_processCommandLineHasBeenSet;

                    /**
                     * 进程权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processPermissions;
                    bool m_processPermissionsHasBeenSet;

                    /**
                     * 执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executedCommand;
                    bool m_executedCommandHasBeenSet;

                    /**
                     * 受影响文件名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_affectedFileName;
                    bool m_affectedFileNameHasBeenSet;

                    /**
                     * 诱饵路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_decoyPath;
                    bool m_decoyPathHasBeenSet;

                    /**
                     * 恶意进程文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maliciousProcessFileSize;
                    bool m_maliciousProcessFileSizeHasBeenSet;

                    /**
                     * 恶意进程文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maliciousProcessFileMD5;
                    bool m_maliciousProcessFileMD5HasBeenSet;

                    /**
                     * 恶意进程名（PID）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maliciousProcessNamePID;
                    bool m_maliciousProcessNamePIDHasBeenSet;

                    /**
                     * 恶意进程路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maliciousProcessPath;
                    bool m_maliciousProcessPathHasBeenSet;

                    /**
                     * 恶意进程启动时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maliciousProcessStartTime;
                    bool m_maliciousProcessStartTimeHasBeenSet;

                    /**
                     * 命令内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_commandContent;
                    bool m_commandContentHasBeenSet;

                    /**
                     * 启动用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startupUser;
                    bool m_startupUserHasBeenSet;

                    /**
                     * 用户所属组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * 新增权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newPermissions;
                    bool m_newPermissionsHasBeenSet;

                    /**
                     * 父进程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentProcess;
                    bool m_parentProcessHasBeenSet;

                    /**
                     * 类名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * 所属类加载器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classLoader;
                    bool m_classLoaderHasBeenSet;

                    /**
                     * 类文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classFileSize;
                    bool m_classFileSizeHasBeenSet;

                    /**
                     * 类文件MD5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_classFileMD5;
                    bool m_classFileMD5HasBeenSet;

                    /**
                     * 父类名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentClassName;
                    bool m_parentClassNameHasBeenSet;

                    /**
                     * 继承接口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inheritedInterface;
                    bool m_inheritedInterfaceHasBeenSet;

                    /**
                     * 注释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 载荷内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payloadContent;
                    bool m_payloadContentHasBeenSet;

                    /**
                     * 回连地址画像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackAddressPortrait;
                    bool m_callbackAddressPortraitHasBeenSet;

                    /**
                     * 回连地址标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackAddressTag;
                    bool m_callbackAddressTagHasBeenSet;

                    /**
                     * 进程MD5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processMD5;
                    bool m_processMD5HasBeenSet;

                    /**
                     * 文件权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_filePermission;
                    bool m_filePermissionHasBeenSet;

                    /**
                     * 来源于日志分析的信息字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KeyValue> m_fromLogAnalysisData;
                    bool m_fromLogAnalysisDataHasBeenSet;

                    /**
                     * 命中探针
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hitProbe;
                    bool m_hitProbeHasBeenSet;

                    /**
                     * 命中蜜罐

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hitHoneyPot;
                    bool m_hitHoneyPotHasBeenSet;

                    /**
                     * 命令列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_commandList;
                    bool m_commandListHasBeenSet;

                    /**
                     * 攻击事件描述

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_attackEventDesc;
                    bool m_attackEventDescHasBeenSet;

                    /**
                     * 进程信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processInfo;
                    bool m_processInfoHasBeenSet;

                    /**
                     * 使用用户名&密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userNameAndPwd;
                    bool m_userNameAndPwdHasBeenSet;

                    /**
                     * 主机防护策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyID;
                    bool m_strategyIDHasBeenSet;

                    /**
                     * 主机防护策略名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strategyName;
                    bool m_strategyNameHasBeenSet;

                    /**
                     * 主机防护命中策略，是策略ID和策略名称的组合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hitStrategy;
                    bool m_hitStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ALERTEXTRAINFO_H_
