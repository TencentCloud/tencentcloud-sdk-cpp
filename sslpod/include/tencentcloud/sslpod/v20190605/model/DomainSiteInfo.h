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

#ifndef TENCENTCLOUD_SSLPOD_V20190605_MODEL_DOMAINSITEINFO_H_
#define TENCENTCLOUD_SSLPOD_V20190605_MODEL_DOMAINSITEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sslpod
    {
        namespace V20190605
        {
            namespace Model
            {
                /**
                * 监控的域名站点信息
                */
                class DomainSiteInfo : public AbstractModel
                {
                public:
                    DomainSiteInfo();
                    ~DomainSiteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID标识
                     * @return Id ID标识
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID标识
                     * @param _id ID标识
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return Ip IP地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置IP地址
                     * @param _ip IP地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取是否自动获取IP：true：是，false:否
                     * @return AutoIP 是否自动获取IP：true：是，false:否
                     * 
                     */
                    bool GetAutoIP() const;

                    /**
                     * 设置是否自动获取IP：true：是，false:否
                     * @param _autoIP 是否自动获取IP：true：是，false:否
                     * 
                     */
                    void SetAutoIP(const bool& _autoIP);

                    /**
                     * 判断参数 AutoIP 是否已赋值
                     * @return AutoIP 是否已赋值
                     * 
                     */
                    bool AutoIPHasBeenSet() const;

                    /**
                     * 获取评级
"A+"，
 "A"，
"A-"，
"B"，
"C"，
"D"，
 "E"，
 "F"，
"T"，
                     * @return Grade 评级
"A+"，
 "A"，
"A-"，
"B"，
"C"，
"D"，
 "E"，
 "F"，
"T"，
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置评级
"A+"，
 "A"，
"A-"，
"B"，
"C"，
"D"，
 "E"，
 "F"，
"T"，
                     * @param _grade 评级
"A+"，
 "A"，
"A-"，
"B"，
"C"，
"D"，
 "E"，
 "F"，
"T"，
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取证书品牌
                     * @return Brand 证书品牌
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置证书品牌
                     * @param _brand 证书品牌
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取监控服务类型
0 :Web
1: SMTP
2: IMAP
3: POP3
                     * @return ServerType 监控服务类型
0 :Web
1: SMTP
2: IMAP
3: POP3
                     * 
                     */
                    int64_t GetServerType() const;

                    /**
                     * 设置监控服务类型
0 :Web
1: SMTP
2: IMAP
3: POP3
                     * @param _serverType 监控服务类型
0 :Web
1: SMTP
2: IMAP
3: POP3
                     * 
                     */
                    void SetServerType(const int64_t& _serverType);

                    /**
                     * 判断参数 ServerType 是否已赋值
                     * @return ServerType 是否已赋值
                     * 
                     */
                    bool ServerTypeHasBeenSet() const;

                    /**
                     * 获取评级Code
0："unknown"，
1："A+"，
2： "A"，
3："A-"，
4："B"，
5："C"，
6："D"，
7： "E"，
8： "F"，
9："T"，
                     * @return GradeCode 评级Code
0："unknown"，
1："A+"，
2： "A"，
3："A-"，
4："B"，
5："C"，
6："D"，
7： "E"，
8： "F"，
9："T"，
                     * 
                     */
                    int64_t GetGradeCode() const;

                    /**
                     * 设置评级Code
0："unknown"，
1："A+"，
2： "A"，
3："A-"，
4："B"，
5："C"，
6："D"，
7： "E"，
8： "F"，
9："T"，
                     * @param _gradeCode 评级Code
0："unknown"，
1："A+"，
2： "A"，
3："A-"，
4："B"，
5："C"，
6："D"，
7： "E"，
8： "F"，
9："T"，
                     * 
                     */
                    void SetGradeCode(const int64_t& _gradeCode);

                    /**
                     * 判断参数 GradeCode 是否已赋值
                     * @return GradeCode 是否已赋值
                     * 
                     */
                    bool GradeCodeHasBeenSet() const;

                    /**
                     * 获取是否监控告警；true：是，false:否
                     * @return Notice 是否监控告警；true：是，false:否
                     * 
                     */
                    bool GetNotice() const;

                    /**
                     * 设置是否监控告警；true：是，false:否
                     * @param _notice 是否监控告警；true：是，false:否
                     * 
                     */
                    void SetNotice(const bool& _notice);

                    /**
                     * 判断参数 Notice 是否已赋值
                     * @return Notice 是否已赋值
                     * 
                     */
                    bool NoticeHasBeenSet() const;

                    /**
                     * 获取账号域名关系ID
                     * @return AccountDomainId 账号域名关系ID
                     * 
                     */
                    int64_t GetAccountDomainId() const;

                    /**
                     * 设置账号域名关系ID
                     * @param _accountDomainId 账号域名关系ID
                     * 
                     */
                    void SetAccountDomainId(const int64_t& _accountDomainId);

                    /**
                     * 判断参数 AccountDomainId 是否已赋值
                     * @return AccountDomainId 是否已赋值
                     * 
                     */
                    bool AccountDomainIdHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取域名状态:
连接异常，
证书已过期，
证书已吊销，
证书黑名单，
证书域名不匹配，
证书不可信，
证书密钥弱，
证书即将过期，少于7天，
证书即将过期，少于30天，
正常，
部分异常
                     * @return Status 域名状态:
连接异常，
证书已过期，
证书已吊销，
证书黑名单，
证书域名不匹配，
证书不可信，
证书密钥弱，
证书即将过期，少于7天，
证书即将过期，少于30天，
正常，
部分异常
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置域名状态:
连接异常，
证书已过期，
证书已吊销，
证书黑名单，
证书域名不匹配，
证书不可信，
证书密钥弱，
证书即将过期，少于7天，
证书即将过期，少于30天，
正常，
部分异常
                     * @param _status 域名状态:
连接异常，
证书已过期，
证书已吊销，
证书黑名单，
证书域名不匹配，
证书不可信，
证书密钥弱，
证书即将过期，少于7天，
证书即将过期，少于30天，
正常，
部分异常
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
                     * 获取域名端口
                     * @return Port 域名端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置域名端口
                     * @param _port 域名端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * ID标识
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 是否自动获取IP：true：是，false:否
                     */
                    bool m_autoIP;
                    bool m_autoIPHasBeenSet;

                    /**
                     * 评级
"A+"，
 "A"，
"A-"，
"B"，
"C"，
"D"，
 "E"，
 "F"，
"T"，
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 证书品牌
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * 监控服务类型
0 :Web
1: SMTP
2: IMAP
3: POP3
                     */
                    int64_t m_serverType;
                    bool m_serverTypeHasBeenSet;

                    /**
                     * 评级Code
0："unknown"，
1："A+"，
2： "A"，
3："A-"，
4："B"，
5："C"，
6："D"，
7： "E"，
8： "F"，
9："T"，
                     */
                    int64_t m_gradeCode;
                    bool m_gradeCodeHasBeenSet;

                    /**
                     * 是否监控告警；true：是，false:否
                     */
                    bool m_notice;
                    bool m_noticeHasBeenSet;

                    /**
                     * 账号域名关系ID
                     */
                    int64_t m_accountDomainId;
                    bool m_accountDomainIdHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 域名状态:
连接异常，
证书已过期，
证书已吊销，
证书黑名单，
证书域名不匹配，
证书不可信，
证书密钥弱，
证书即将过期，少于7天，
证书即将过期，少于30天，
正常，
部分异常
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSLPOD_V20190605_MODEL_DOMAINSITEINFO_H_
