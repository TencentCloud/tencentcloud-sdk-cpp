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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNLOGTASKREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNLOGTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnEventLogConditions.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CreateScdnLogTask请求参数结构体
                */
                class CreateScdnLogTaskRequest : public AbstractModel
                {
                public:
                    CreateScdnLogTaskRequest();
                    ~CreateScdnLogTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取防护类型
Mode 映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
  bot = "Bot攻击"
                     * @return Mode 防护类型
Mode 映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
  bot = "Bot攻击"
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置防护类型
Mode 映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
  bot = "Bot攻击"
                     * @param _mode 防护类型
Mode 映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
  bot = "Bot攻击"
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
                     * @return StartTime 查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
                     * @param _startTime 查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
                     * @return EndTime 查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
                     * @param _endTime 查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取指定域名查询, 不填默认查询全部域名
                     * @return Domain 指定域名查询, 不填默认查询全部域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置指定域名查询, 不填默认查询全部域名
                     * @param _domain 指定域名查询, 不填默认查询全部域名
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
                     * 获取指定攻击类型, 不填默认查询全部攻击类型
AttackType 映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  malicious_file_upload= '恶意文件上传'
  js = "JS主动探测"
  cookie = "Cookie指纹"
                     * @return AttackType 指定攻击类型, 不填默认查询全部攻击类型
AttackType 映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  malicious_file_upload= '恶意文件上传'
  js = "JS主动探测"
  cookie = "Cookie指纹"
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置指定攻击类型, 不填默认查询全部攻击类型
AttackType 映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  malicious_file_upload= '恶意文件上传'
  js = "JS主动探测"
  cookie = "Cookie指纹"
                     * @param _attackType 指定攻击类型, 不填默认查询全部攻击类型
AttackType 映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  malicious_file_upload= '恶意文件上传'
  js = "JS主动探测"
  cookie = "Cookie指纹"
                     * 
                     */
                    void SetAttackType(const std::string& _attackType);

                    /**
                     * 判断参数 AttackType 是否已赋值
                     * @return AttackType 是否已赋值
                     * 
                     */
                    bool AttackTypeHasBeenSet() const;

                    /**
                     * 获取指定执行动作, 不填默认查询全部执行动作
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
  captcha = "验证码"
  redirect = "重定向"
                     * @return DefenceMode 指定执行动作, 不填默认查询全部执行动作
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
  captcha = "验证码"
  redirect = "重定向"
                     * 
                     */
                    std::string GetDefenceMode() const;

                    /**
                     * 设置指定执行动作, 不填默认查询全部执行动作
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
  captcha = "验证码"
  redirect = "重定向"
                     * @param _defenceMode 指定执行动作, 不填默认查询全部执行动作
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
  captcha = "验证码"
  redirect = "重定向"
                     * 
                     */
                    void SetDefenceMode(const std::string& _defenceMode);

                    /**
                     * 判断参数 DefenceMode 是否已赋值
                     * @return DefenceMode 是否已赋值
                     * 
                     */
                    bool DefenceModeHasBeenSet() const;

                    /**
                     * 获取不填为全部ip
                     * @return Ip 不填为全部ip
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置不填为全部ip
                     * @param _ip 不填为全部ip
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
                     * 获取指定域名查询, 与 Domain 参数同时有值时使用 Domains 参数，不填默认查询全部域名，指定域名查询时最多支持同时选择 5 个域名查询
                     * @return Domains 指定域名查询, 与 Domain 参数同时有值时使用 Domains 参数，不填默认查询全部域名，指定域名查询时最多支持同时选择 5 个域名查询
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置指定域名查询, 与 Domain 参数同时有值时使用 Domains 参数，不填默认查询全部域名，指定域名查询时最多支持同时选择 5 个域名查询
                     * @param _domains 指定域名查询, 与 Domain 参数同时有值时使用 Domains 参数，不填默认查询全部域名，指定域名查询时最多支持同时选择 5 个域名查询
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
                     * 获取指定攻击类型查询, 与 AttackType 参数同时有值时使用 AttackTypes 参数，不填默认查询全部攻击类型
                     * @return AttackTypes 指定攻击类型查询, 与 AttackType 参数同时有值时使用 AttackTypes 参数，不填默认查询全部攻击类型
                     * 
                     */
                    std::vector<std::string> GetAttackTypes() const;

                    /**
                     * 设置指定攻击类型查询, 与 AttackType 参数同时有值时使用 AttackTypes 参数，不填默认查询全部攻击类型
                     * @param _attackTypes 指定攻击类型查询, 与 AttackType 参数同时有值时使用 AttackTypes 参数，不填默认查询全部攻击类型
                     * 
                     */
                    void SetAttackTypes(const std::vector<std::string>& _attackTypes);

                    /**
                     * 判断参数 AttackTypes 是否已赋值
                     * @return AttackTypes 是否已赋值
                     * 
                     */
                    bool AttackTypesHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return Conditions 查询条件
                     * 
                     */
                    std::vector<ScdnEventLogConditions> GetConditions() const;

                    /**
                     * 设置查询条件
                     * @param _conditions 查询条件
                     * 
                     */
                    void SetConditions(const std::vector<ScdnEventLogConditions>& _conditions);

                    /**
                     * 判断参数 Conditions 是否已赋值
                     * @return Conditions 是否已赋值
                     * 
                     */
                    bool ConditionsHasBeenSet() const;

                    /**
                     * 获取来源产品 cdn ecdn
                     * @return Source 来源产品 cdn ecdn
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置来源产品 cdn ecdn
                     * @param _source 来源产品 cdn ecdn
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取地域：mainland 或 overseas
                     * @return Area 地域：mainland 或 overseas
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置地域：mainland 或 overseas
                     * @param _area 地域：mainland 或 overseas
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                private:

                    /**
                     * 防护类型
Mode 映射如下：
  waf = "Web攻击"
  cc = "CC攻击"
  bot = "Bot攻击"
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 查询起始时间，如：2018-09-04 10:40:00，返回结果大于等于指定时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，如：2018-09-04 10:40:00，返回结果小于等于指定时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 指定域名查询, 不填默认查询全部域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 指定攻击类型, 不填默认查询全部攻击类型
AttackType 映射如下:
  other = '未知类型'
  malicious_scan = "恶意扫描"
  sql_inject = "SQL注入攻击"
  xss = "XSS攻击"
  cmd_inject = "命令注入攻击"
  ldap_inject = "LDAP注入攻击"
  ssi_inject = "SSI注入攻击"
  xml_inject = "XML注入攻击"
  web_service = "WEB服务漏洞攻击"
  web_app = "WEB应用漏洞攻击"
  path_traversal = "路径跨越攻击"
  illegal_access_core_file = "核心文件非法访问"
  trojan_horse = "木马后门攻击"
  csrf = "CSRF攻击"
  malicious_file_upload= '恶意文件上传'
  js = "JS主动探测"
  cookie = "Cookie指纹"
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 指定执行动作, 不填默认查询全部执行动作
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
  captcha = "验证码"
  redirect = "重定向"
                     */
                    std::string m_defenceMode;
                    bool m_defenceModeHasBeenSet;

                    /**
                     * 不填为全部ip
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 指定域名查询, 与 Domain 参数同时有值时使用 Domains 参数，不填默认查询全部域名，指定域名查询时最多支持同时选择 5 个域名查询
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 指定攻击类型查询, 与 AttackType 参数同时有值时使用 AttackTypes 参数，不填默认查询全部攻击类型
                     */
                    std::vector<std::string> m_attackTypes;
                    bool m_attackTypesHasBeenSet;

                    /**
                     * 查询条件
                     */
                    std::vector<ScdnEventLogConditions> m_conditions;
                    bool m_conditionsHasBeenSet;

                    /**
                     * 来源产品 cdn ecdn
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 地域：mainland 或 overseas
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CREATESCDNLOGTASKREQUEST_H_
