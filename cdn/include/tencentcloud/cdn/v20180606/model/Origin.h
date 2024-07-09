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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ORIGIN_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ORIGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/PathRule.h>
#include <tencentcloud/cdn/v20180606/model/PathBasedOriginRule.h>
#include <tencentcloud/cdn/v20180606/model/OriginSni.h>
#include <tencentcloud/cdn/v20180606/model/AdvanceHttps.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 源站配置复杂类型，支持以下配置：
+ 源站指定为单个域名
+ 源站指定为多个 IP，可配置端口（1\~65535），可配置权重（1\~100），格式为 IP:端口:权重
+ 回源域名配置
+ 对象存储（COS）作为源站
+ 热备源站指定为单个域名
+ 热备源站指定为多个 IP，可配置端口（1\~65535），暂不支持权重配置
+ 热备源站回源域名配置
                */
                class Origin : public AbstractModel
                {
                public:
                    Origin();
                    ~Origin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主源站列表
<font color=red>修改源站时，需要同时填充对应的 OriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Origins 主源站列表
<font color=red>修改源站时，需要同时填充对应的 OriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOrigins() const;

                    /**
                     * 设置主源站列表
<font color=red>修改源站时，需要同时填充对应的 OriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _origins 主源站列表
<font color=red>修改源站时，需要同时填充对应的 OriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrigins(const std::vector<std::string>& _origins);

                    /**
                     * 判断参数 Origins 是否已赋值
                     * @return Origins 是否已赋值
                     * 
                     */
                    bool OriginsHasBeenSet() const;

                    /**
                     * 获取主源站类型
<font color=red>当源站列表 Origins 不为空时必填</font>
入参支持以下几种类型：
domain：域名类型
domainv6：域名解析V6类型
cos：对象存储源站
third_party: 第三方存储源站
igtm: IGTM多活源
ip：IP 列表作为源站
ipv6：源站列表为一个单独的 IPv6 地址
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ip_domain: 支持IP和域名形式源站混填（白名单功能）
ip_domainv6：源站列表为多个 IPv4 地址以及域名解析v6地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ipv6_domainv6：源站列表为多个 IPv6 地址以及域名解析v6地址
domain_domainv6：源站列表为多个域名解析v4 地址以及域名解析v6地址
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
ip_ipv6_domainv6：源站列表为多个 IPv4 地址IPv6 地址以及域名解析v6地址
ip_domain_domainv6：源站列表为多个 IPv4 地址域名解析v4 地址以及域名解析v6地址
ipv6_domain_domainv6：源站列表为多个 域名解析v4 地址IPv6 地址以及域名解析v6地址
ip_ipv6_domain_domainv6：源站列表为多个 IPv4 地址IPv6 地址 域名解析v4 地址以及域名解析v6地址
出参增加以下几种类型：
image：数据万象源站
ftp：历史 FTP 托管源源站，现已不维护
修改 Origins 时需要同时填充对应的 OriginType
IPv6 功能目前尚未全量，需要先申请试用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginType 主源站类型
<font color=red>当源站列表 Origins 不为空时必填</font>
入参支持以下几种类型：
domain：域名类型
domainv6：域名解析V6类型
cos：对象存储源站
third_party: 第三方存储源站
igtm: IGTM多活源
ip：IP 列表作为源站
ipv6：源站列表为一个单独的 IPv6 地址
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ip_domain: 支持IP和域名形式源站混填（白名单功能）
ip_domainv6：源站列表为多个 IPv4 地址以及域名解析v6地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ipv6_domainv6：源站列表为多个 IPv6 地址以及域名解析v6地址
domain_domainv6：源站列表为多个域名解析v4 地址以及域名解析v6地址
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
ip_ipv6_domainv6：源站列表为多个 IPv4 地址IPv6 地址以及域名解析v6地址
ip_domain_domainv6：源站列表为多个 IPv4 地址域名解析v4 地址以及域名解析v6地址
ipv6_domain_domainv6：源站列表为多个 域名解析v4 地址IPv6 地址以及域名解析v6地址
ip_ipv6_domain_domainv6：源站列表为多个 IPv4 地址IPv6 地址 域名解析v4 地址以及域名解析v6地址
出参增加以下几种类型：
image：数据万象源站
ftp：历史 FTP 托管源源站，现已不维护
修改 Origins 时需要同时填充对应的 OriginType
IPv6 功能目前尚未全量，需要先申请试用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置主源站类型
<font color=red>当源站列表 Origins 不为空时必填</font>
入参支持以下几种类型：
domain：域名类型
domainv6：域名解析V6类型
cos：对象存储源站
third_party: 第三方存储源站
igtm: IGTM多活源
ip：IP 列表作为源站
ipv6：源站列表为一个单独的 IPv6 地址
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ip_domain: 支持IP和域名形式源站混填（白名单功能）
ip_domainv6：源站列表为多个 IPv4 地址以及域名解析v6地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ipv6_domainv6：源站列表为多个 IPv6 地址以及域名解析v6地址
domain_domainv6：源站列表为多个域名解析v4 地址以及域名解析v6地址
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
ip_ipv6_domainv6：源站列表为多个 IPv4 地址IPv6 地址以及域名解析v6地址
ip_domain_domainv6：源站列表为多个 IPv4 地址域名解析v4 地址以及域名解析v6地址
ipv6_domain_domainv6：源站列表为多个 域名解析v4 地址IPv6 地址以及域名解析v6地址
ip_ipv6_domain_domainv6：源站列表为多个 IPv4 地址IPv6 地址 域名解析v4 地址以及域名解析v6地址
出参增加以下几种类型：
image：数据万象源站
ftp：历史 FTP 托管源源站，现已不维护
修改 Origins 时需要同时填充对应的 OriginType
IPv6 功能目前尚未全量，需要先申请试用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originType 主源站类型
<font color=red>当源站列表 Origins 不为空时必填</font>
入参支持以下几种类型：
domain：域名类型
domainv6：域名解析V6类型
cos：对象存储源站
third_party: 第三方存储源站
igtm: IGTM多活源
ip：IP 列表作为源站
ipv6：源站列表为一个单独的 IPv6 地址
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ip_domain: 支持IP和域名形式源站混填（白名单功能）
ip_domainv6：源站列表为多个 IPv4 地址以及域名解析v6地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ipv6_domainv6：源站列表为多个 IPv6 地址以及域名解析v6地址
domain_domainv6：源站列表为多个域名解析v4 地址以及域名解析v6地址
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
ip_ipv6_domainv6：源站列表为多个 IPv4 地址IPv6 地址以及域名解析v6地址
ip_domain_domainv6：源站列表为多个 IPv4 地址域名解析v4 地址以及域名解析v6地址
ipv6_domain_domainv6：源站列表为多个 域名解析v4 地址IPv6 地址以及域名解析v6地址
ip_ipv6_domain_domainv6：源站列表为多个 IPv4 地址IPv6 地址 域名解析v4 地址以及域名解析v6地址
出参增加以下几种类型：
image：数据万象源站
ftp：历史 FTP 托管源源站，现已不维护
修改 Origins 时需要同时填充对应的 OriginType
IPv6 功能目前尚未全量，需要先申请试用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取回主源站时 Host 头部
<font color=red>当源站类型为cos或者第三方存储加速时,ServerName字段必填</font>
不填充则默认为加速域名
若接入的是泛域名，则回源 Host 默认为访问时的子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerName 回主源站时 Host 头部
<font color=red>当源站类型为cos或者第三方存储加速时,ServerName字段必填</font>
不填充则默认为加速域名
若接入的是泛域名，则回源 Host 默认为访问时的子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerName() const;

                    /**
                     * 设置回主源站时 Host 头部
<font color=red>当源站类型为cos或者第三方存储加速时,ServerName字段必填</font>
不填充则默认为加速域名
若接入的是泛域名，则回源 Host 默认为访问时的子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverName 回主源站时 Host 头部
<font color=red>当源站类型为cos或者第三方存储加速时,ServerName字段必填</font>
不填充则默认为加速域名
若接入的是泛域名，则回源 Host 默认为访问时的子域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerName(const std::string& _serverName);

                    /**
                     * 判断参数 ServerName 是否已赋值
                     * @return ServerName 是否已赋值
                     * 
                     */
                    bool ServerNameHasBeenSet() const;

                    /**
                     * 获取OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket
注意：需要先授权 CDN 访问该私有 Bucket 的权限后，才可开启此配置。取值范围: on/off
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPrivateAccess OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket
注意：需要先授权 CDN 访问该私有 Bucket 的权限后，才可开启此配置。取值范围: on/off
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosPrivateAccess() const;

                    /**
                     * 设置OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket
注意：需要先授权 CDN 访问该私有 Bucket 的权限后，才可开启此配置。取值范围: on/off
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosPrivateAccess OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket
注意：需要先授权 CDN 访问该私有 Bucket 的权限后，才可开启此配置。取值范围: on/off
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosPrivateAccess(const std::string& _cosPrivateAccess);

                    /**
                     * 判断参数 CosPrivateAccess 是否已赋值
                     * @return CosPrivateAccess 是否已赋值
                     * 
                     */
                    bool CosPrivateAccessHasBeenSet() const;

                    /**
                     * 获取回源协议配置
http：强制 http 回源
follow：协议跟随回源
https：强制 https 回源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginPullProtocol 回源协议配置
http：强制 http 回源
follow：协议跟随回源
https：强制 https 回源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginPullProtocol() const;

                    /**
                     * 设置回源协议配置
http：强制 http 回源
follow：协议跟随回源
https：强制 https 回源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originPullProtocol 回源协议配置
http：强制 http 回源
follow：协议跟随回源
https：强制 https 回源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginPullProtocol(const std::string& _originPullProtocol);

                    /**
                     * 判断参数 OriginPullProtocol 是否已赋值
                     * @return OriginPullProtocol 是否已赋值
                     * 
                     */
                    bool OriginPullProtocolHasBeenSet() const;

                    /**
                     * 获取备源站列表
<font color=red>修改备源站时，需要同时填充对应的 BackupOriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupOrigins 备源站列表
<font color=red>修改备源站时，需要同时填充对应的 BackupOriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBackupOrigins() const;

                    /**
                     * 设置备源站列表
<font color=red>修改备源站时，需要同时填充对应的 BackupOriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupOrigins 备源站列表
<font color=red>修改备源站时，需要同时填充对应的 BackupOriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupOrigins(const std::vector<std::string>& _backupOrigins);

                    /**
                     * 判断参数 BackupOrigins 是否已赋值
                     * @return BackupOrigins 是否已赋值
                     * 
                     */
                    bool BackupOriginsHasBeenSet() const;

                    /**
                     * 获取备源站类型
<font color=red>备源站列表BackupOrigins 不为空时必填</font>
支持以下类型：
domain：域名类型
ip：IP 列表作为源站
以下备源源站类型尚未全量支持，需要申请试用：
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupOriginType 备源站类型
<font color=red>备源站列表BackupOrigins 不为空时必填</font>
支持以下类型：
domain：域名类型
ip：IP 列表作为源站
以下备源源站类型尚未全量支持，需要申请试用：
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackupOriginType() const;

                    /**
                     * 设置备源站类型
<font color=red>备源站列表BackupOrigins 不为空时必填</font>
支持以下类型：
domain：域名类型
ip：IP 列表作为源站
以下备源源站类型尚未全量支持，需要申请试用：
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupOriginType 备源站类型
<font color=red>备源站列表BackupOrigins 不为空时必填</font>
支持以下类型：
domain：域名类型
ip：IP 列表作为源站
以下备源源站类型尚未全量支持，需要申请试用：
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupOriginType(const std::string& _backupOriginType);

                    /**
                     * 判断参数 BackupOriginType 是否已赋值
                     * @return BackupOriginType 是否已赋值
                     * 
                     */
                    bool BackupOriginTypeHasBeenSet() const;

                    /**
                     * 获取回备源站时 Host 头部，不填充则默认为主源站的 ServerName
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackupServerName 回备源站时 Host 头部，不填充则默认为主源站的 ServerName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBackupServerName() const;

                    /**
                     * 设置回备源站时 Host 头部，不填充则默认为主源站的 ServerName
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _backupServerName 回备源站时 Host 头部，不填充则默认为主源站的 ServerName
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBackupServerName(const std::string& _backupServerName);

                    /**
                     * 判断参数 BackupServerName 是否已赋值
                     * @return BackupServerName 是否已赋值
                     * 
                     */
                    bool BackupServerNameHasBeenSet() const;

                    /**
                     * 获取回源路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasePath 回源路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置回源路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basePath 回源路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBasePath(const std::string& _basePath);

                    /**
                     * 判断参数 BasePath 是否已赋值
                     * @return BasePath 是否已赋值
                     * 
                     */
                    bool BasePathHasBeenSet() const;

                    /**
                     * 获取回源路径重写规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathRules 回源路径重写规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PathRule> GetPathRules() const;

                    /**
                     * 设置回源路径重写规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathRules 回源路径重写规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathRules(const std::vector<PathRule>& _pathRules);

                    /**
                     * 判断参数 PathRules 是否已赋值
                     * @return PathRules 是否已赋值
                     * 
                     */
                    bool PathRulesHasBeenSet() const;

                    /**
                     * 获取分路径回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PathBasedOrigin 分路径回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PathBasedOriginRule> GetPathBasedOrigin() const;

                    /**
                     * 设置分路径回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pathBasedOrigin 分路径回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPathBasedOrigin(const std::vector<PathBasedOriginRule>& _pathBasedOrigin);

                    /**
                     * 判断参数 PathBasedOrigin 是否已赋值
                     * @return PathBasedOrigin 是否已赋值
                     * 
                     */
                    bool PathBasedOriginHasBeenSet() const;

                    /**
                     * 获取HTTPS回源SNI配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sni HTTPS回源SNI配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginSni GetSni() const;

                    /**
                     * 设置HTTPS回源SNI配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sni HTTPS回源SNI配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSni(const OriginSni& _sni);

                    /**
                     * 判断参数 Sni 是否已赋值
                     * @return Sni 是否已赋值
                     * 
                     */
                    bool SniHasBeenSet() const;

                    /**
                     * 获取HTTPS回源高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvanceHttps HTTPS回源高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AdvanceHttps GetAdvanceHttps() const;

                    /**
                     * 设置HTTPS回源高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advanceHttps HTTPS回源高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvanceHttps(const AdvanceHttps& _advanceHttps);

                    /**
                     * 判断参数 AdvanceHttps 是否已赋值
                     * @return AdvanceHttps 是否已赋值
                     * 
                     */
                    bool AdvanceHttpsHasBeenSet() const;

                    /**
                     * 获取对象存储回源厂商
<font color=red>当源站类型为第三方存储源站(third_party)时必填</font>
可选值包括以下:
aws_s3: AWS S3
ali_oss: 阿里云 OSS
hw_obs: 华为 OBS
qiniu_kodo: 七牛云 kodo
others: 其它厂商对象存储,仅支持兼容以AWS签名算法的对象存储，如腾讯云金融专区COS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginCompany 对象存储回源厂商
<font color=red>当源站类型为第三方存储源站(third_party)时必填</font>
可选值包括以下:
aws_s3: AWS S3
ali_oss: 阿里云 OSS
hw_obs: 华为 OBS
qiniu_kodo: 七牛云 kodo
others: 其它厂商对象存储,仅支持兼容以AWS签名算法的对象存储，如腾讯云金融专区COS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginCompany() const;

                    /**
                     * 设置对象存储回源厂商
<font color=red>当源站类型为第三方存储源站(third_party)时必填</font>
可选值包括以下:
aws_s3: AWS S3
ali_oss: 阿里云 OSS
hw_obs: 华为 OBS
qiniu_kodo: 七牛云 kodo
others: 其它厂商对象存储,仅支持兼容以AWS签名算法的对象存储，如腾讯云金融专区COS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originCompany 对象存储回源厂商
<font color=red>当源站类型为第三方存储源站(third_party)时必填</font>
可选值包括以下:
aws_s3: AWS S3
ali_oss: 阿里云 OSS
hw_obs: 华为 OBS
qiniu_kodo: 七牛云 kodo
others: 其它厂商对象存储,仅支持兼容以AWS签名算法的对象存储，如腾讯云金融专区COS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginCompany(const std::string& _originCompany);

                    /**
                     * 判断参数 OriginCompany 是否已赋值
                     * @return OriginCompany 是否已赋值
                     * 
                     */
                    bool OriginCompanyHasBeenSet() const;

                private:

                    /**
                     * 主源站列表
<font color=red>修改源站时，需要同时填充对应的 OriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_origins;
                    bool m_originsHasBeenSet;

                    /**
                     * 主源站类型
<font color=red>当源站列表 Origins 不为空时必填</font>
入参支持以下几种类型：
domain：域名类型
domainv6：域名解析V6类型
cos：对象存储源站
third_party: 第三方存储源站
igtm: IGTM多活源
ip：IP 列表作为源站
ipv6：源站列表为一个单独的 IPv6 地址
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ip_domain: 支持IP和域名形式源站混填（白名单功能）
ip_domainv6：源站列表为多个 IPv4 地址以及域名解析v6地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ipv6_domainv6：源站列表为多个 IPv6 地址以及域名解析v6地址
domain_domainv6：源站列表为多个域名解析v4 地址以及域名解析v6地址
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
ip_ipv6_domainv6：源站列表为多个 IPv4 地址IPv6 地址以及域名解析v6地址
ip_domain_domainv6：源站列表为多个 IPv4 地址域名解析v4 地址以及域名解析v6地址
ipv6_domain_domainv6：源站列表为多个 域名解析v4 地址IPv6 地址以及域名解析v6地址
ip_ipv6_domain_domainv6：源站列表为多个 IPv4 地址IPv6 地址 域名解析v4 地址以及域名解析v6地址
出参增加以下几种类型：
image：数据万象源站
ftp：历史 FTP 托管源源站，现已不维护
修改 Origins 时需要同时填充对应的 OriginType
IPv6 功能目前尚未全量，需要先申请试用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 回主源站时 Host 头部
<font color=red>当源站类型为cos或者第三方存储加速时,ServerName字段必填</font>
不填充则默认为加速域名
若接入的是泛域名，则回源 Host 默认为访问时的子域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverName;
                    bool m_serverNameHasBeenSet;

                    /**
                     * OriginType 为对象存储（COS）时，可以指定是否允许访问私有 bucket
注意：需要先授权 CDN 访问该私有 Bucket 的权限后，才可开启此配置。取值范围: on/off
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosPrivateAccess;
                    bool m_cosPrivateAccessHasBeenSet;

                    /**
                     * 回源协议配置
http：强制 http 回源
follow：协议跟随回源
https：强制 https 回源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originPullProtocol;
                    bool m_originPullProtocolHasBeenSet;

                    /**
                     * 备源站列表
<font color=red>修改备源站时，需要同时填充对应的 BackupOriginType</font>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_backupOrigins;
                    bool m_backupOriginsHasBeenSet;

                    /**
                     * 备源站类型
<font color=red>备源站列表BackupOrigins 不为空时必填</font>
支持以下类型：
domain：域名类型
ip：IP 列表作为源站
以下备源源站类型尚未全量支持，需要申请试用：
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6：源站列表为多个 IPv4 地址和IPv6 地址
ipv6_domain: 源站列表为多个 IPv6 地址以及域名
ip_ipv6_domain：源站列表为多个 IPv4 地址IPv6 地址以及域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupOriginType;
                    bool m_backupOriginTypeHasBeenSet;

                    /**
                     * 回备源站时 Host 头部，不填充则默认为主源站的 ServerName
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backupServerName;
                    bool m_backupServerNameHasBeenSet;

                    /**
                     * 回源路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * 回源路径重写规则配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PathRule> m_pathRules;
                    bool m_pathRulesHasBeenSet;

                    /**
                     * 分路径回源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PathBasedOriginRule> m_pathBasedOrigin;
                    bool m_pathBasedOriginHasBeenSet;

                    /**
                     * HTTPS回源SNI配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginSni m_sni;
                    bool m_sniHasBeenSet;

                    /**
                     * HTTPS回源高级配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AdvanceHttps m_advanceHttps;
                    bool m_advanceHttpsHasBeenSet;

                    /**
                     * 对象存储回源厂商
<font color=red>当源站类型为第三方存储源站(third_party)时必填</font>
可选值包括以下:
aws_s3: AWS S3
ali_oss: 阿里云 OSS
hw_obs: 华为 OBS
qiniu_kodo: 七牛云 kodo
others: 其它厂商对象存储,仅支持兼容以AWS签名算法的对象存储，如腾讯云金融专区COS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originCompany;
                    bool m_originCompanyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ORIGIN_H_
