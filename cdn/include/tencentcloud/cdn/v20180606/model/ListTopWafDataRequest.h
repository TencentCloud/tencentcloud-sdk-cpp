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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPWAFDATAREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPWAFDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ListTopWafData请求参数结构体
                */
                class ListTopWafDataRequest : public AbstractModel
                {
                public:
                    ListTopWafDataRequest();
                    ~ListTopWafDataRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取指定域名查询，不填写查询整个AppID下数据
                     * @return Domain 指定域名查询，不填写查询整个AppID下数据
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置指定域名查询，不填写查询整个AppID下数据
                     * @param _domain 指定域名查询，不填写查询整个AppID下数据
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
                     * 获取指定攻击类型
不填则查询所有攻击类型的数据总和
AttackType 映射如下:
"webshell" : Webshell检测防护
"oa" : 常见OA漏洞防护
"xss" : XSS跨站脚本攻击防护
"xxe" : XXE攻击防护
"webscan" : 扫描器攻击漏洞防护
"cms" : 常见CMS漏洞防护
"upload" : 恶意文件上传攻击防护
"sql" : SQL注入攻击防护
"cmd_inject": 命令/代码注入攻击防护
"osc" : 开源组件漏洞防护
"file_read" : 任意文件读取
"ldap" : LDAP注入攻击防护
"other" : 其它漏洞防护
                     * @return AttackType 指定攻击类型
不填则查询所有攻击类型的数据总和
AttackType 映射如下:
"webshell" : Webshell检测防护
"oa" : 常见OA漏洞防护
"xss" : XSS跨站脚本攻击防护
"xxe" : XXE攻击防护
"webscan" : 扫描器攻击漏洞防护
"cms" : 常见CMS漏洞防护
"upload" : 恶意文件上传攻击防护
"sql" : SQL注入攻击防护
"cmd_inject": 命令/代码注入攻击防护
"osc" : 开源组件漏洞防护
"file_read" : 任意文件读取
"ldap" : LDAP注入攻击防护
"other" : 其它漏洞防护
                     * 
                     */
                    std::string GetAttackType() const;

                    /**
                     * 设置指定攻击类型
不填则查询所有攻击类型的数据总和
AttackType 映射如下:
"webshell" : Webshell检测防护
"oa" : 常见OA漏洞防护
"xss" : XSS跨站脚本攻击防护
"xxe" : XXE攻击防护
"webscan" : 扫描器攻击漏洞防护
"cms" : 常见CMS漏洞防护
"upload" : 恶意文件上传攻击防护
"sql" : SQL注入攻击防护
"cmd_inject": 命令/代码注入攻击防护
"osc" : 开源组件漏洞防护
"file_read" : 任意文件读取
"ldap" : LDAP注入攻击防护
"other" : 其它漏洞防护
                     * @param _attackType 指定攻击类型
不填则查询所有攻击类型的数据总和
AttackType 映射如下:
"webshell" : Webshell检测防护
"oa" : 常见OA漏洞防护
"xss" : XSS跨站脚本攻击防护
"xxe" : XXE攻击防护
"webscan" : 扫描器攻击漏洞防护
"cms" : 常见CMS漏洞防护
"upload" : 恶意文件上传攻击防护
"sql" : SQL注入攻击防护
"cmd_inject": 命令/代码注入攻击防护
"osc" : 开源组件漏洞防护
"file_read" : 任意文件读取
"ldap" : LDAP注入攻击防护
"other" : 其它漏洞防护
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
                     * 获取指定防御模式
不填则查询所有防御模式的数据总和
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
                     * @return DefenceMode 指定防御模式
不填则查询所有防御模式的数据总和
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
                     * 
                     */
                    std::string GetDefenceMode() const;

                    /**
                     * 设置指定防御模式
不填则查询所有防御模式的数据总和
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
                     * @param _defenceMode 指定防御模式
不填则查询所有防御模式的数据总和
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
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
                     * 获取排序对象，支持以下几种形式：
url：攻击目标 url 排序
ip：攻击源 IP 排序
attackType：攻击类型排序
domain：当查询整个AppID下数据时，按照域名请求量排序
                     * @return Metric 排序对象，支持以下几种形式：
url：攻击目标 url 排序
ip：攻击源 IP 排序
attackType：攻击类型排序
domain：当查询整个AppID下数据时，按照域名请求量排序
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置排序对象，支持以下几种形式：
url：攻击目标 url 排序
ip：攻击源 IP 排序
attackType：攻击类型排序
domain：当查询整个AppID下数据时，按照域名请求量排序
                     * @param _metric 排序对象，支持以下几种形式：
url：攻击目标 url 排序
ip：攻击源 IP 排序
attackType：攻击类型排序
domain：当查询整个AppID下数据时，按照域名请求量排序
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

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

                    /**
                     * 获取指定攻击类型列表，取值参考AttackType
                     * @return AttackTypes 指定攻击类型列表，取值参考AttackType
                     * 
                     */
                    std::vector<std::string> GetAttackTypes() const;

                    /**
                     * 设置指定攻击类型列表，取值参考AttackType
                     * @param _attackTypes 指定攻击类型列表，取值参考AttackType
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
                     * 获取指定域名列表查询，不填写查询整个AppID下数据
                     * @return Domains 指定域名列表查询，不填写查询整个AppID下数据
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置指定域名列表查询，不填写查询整个AppID下数据
                     * @param _domains 指定域名列表查询，不填写查询整个AppID下数据
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                private:

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
                     * 指定域名查询，不填写查询整个AppID下数据
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 指定攻击类型
不填则查询所有攻击类型的数据总和
AttackType 映射如下:
"webshell" : Webshell检测防护
"oa" : 常见OA漏洞防护
"xss" : XSS跨站脚本攻击防护
"xxe" : XXE攻击防护
"webscan" : 扫描器攻击漏洞防护
"cms" : 常见CMS漏洞防护
"upload" : 恶意文件上传攻击防护
"sql" : SQL注入攻击防护
"cmd_inject": 命令/代码注入攻击防护
"osc" : 开源组件漏洞防护
"file_read" : 任意文件读取
"ldap" : LDAP注入攻击防护
"other" : 其它漏洞防护
                     */
                    std::string m_attackType;
                    bool m_attackTypeHasBeenSet;

                    /**
                     * 指定防御模式
不填则查询所有防御模式的数据总和
DefenceMode 映射如下：
  observe = '观察模式'
  intercept = '拦截模式'
                     */
                    std::string m_defenceMode;
                    bool m_defenceModeHasBeenSet;

                    /**
                     * 排序对象，支持以下几种形式：
url：攻击目标 url 排序
ip：攻击源 IP 排序
attackType：攻击类型排序
domain：当查询整个AppID下数据时，按照域名请求量排序
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 地域：mainland 或 overseas
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 指定攻击类型列表，取值参考AttackType
                     */
                    std::vector<std::string> m_attackTypes;
                    bool m_attackTypesHasBeenSet;

                    /**
                     * 指定域名列表查询，不填写查询整个AppID下数据
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPWAFDATAREQUEST_H_
