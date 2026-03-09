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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEJOBRECORDDETAILSREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEJOBRECORDDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * DescribeJobRecordDetails请求参数结构体
                */
                class DescribeJobRecordDetailsRequest : public AbstractModel
                {
                public:
                    DescribeJobRecordDetailsRequest();
                    ~DescribeJobRecordDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据类型，包括：enterprise(企业架构)，domain(主域名)，sub_domain(子域名)，asset(主机资产)，port(端口服务)，http(网站资产)，vul(漏洞信息)，app(APP)，wechat_applet(微信小程序)，wechat_official_account(微信公众号)，github(Github泄露)，manage(后台识别)，config(目录爆破)，dark_web(暗网泄露)，net_disk(文库网盘泄露)，social_engineering(员工信息)，supply_chain(供应链信息)，weak_password(弱口令)，sensitive_info(敏感信息泄露)，suspicious_asset(影子资产)</p>
                     * @return Module <p>数据类型，包括：enterprise(企业架构)，domain(主域名)，sub_domain(子域名)，asset(主机资产)，port(端口服务)，http(网站资产)，vul(漏洞信息)，app(APP)，wechat_applet(微信小程序)，wechat_official_account(微信公众号)，github(Github泄露)，manage(后台识别)，config(目录爆破)，dark_web(暗网泄露)，net_disk(文库网盘泄露)，social_engineering(员工信息)，supply_chain(供应链信息)，weak_password(弱口令)，sensitive_info(敏感信息泄露)，suspicious_asset(影子资产)</p>
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置<p>数据类型，包括：enterprise(企业架构)，domain(主域名)，sub_domain(子域名)，asset(主机资产)，port(端口服务)，http(网站资产)，vul(漏洞信息)，app(APP)，wechat_applet(微信小程序)，wechat_official_account(微信公众号)，github(Github泄露)，manage(后台识别)，config(目录爆破)，dark_web(暗网泄露)，net_disk(文库网盘泄露)，social_engineering(员工信息)，supply_chain(供应链信息)，weak_password(弱口令)，sensitive_info(敏感信息泄露)，suspicious_asset(影子资产)</p>
                     * @param _module <p>数据类型，包括：enterprise(企业架构)，domain(主域名)，sub_domain(子域名)，asset(主机资产)，port(端口服务)，http(网站资产)，vul(漏洞信息)，app(APP)，wechat_applet(微信小程序)，wechat_official_account(微信公众号)，github(Github泄露)，manage(后台识别)，config(目录爆破)，dark_web(暗网泄露)，net_disk(文库网盘泄露)，social_engineering(员工信息)，supply_chain(供应链信息)，weak_password(弱口令)，sensitive_info(敏感信息泄露)，suspicious_asset(影子资产)</p>
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取<p>结果id</p>
                     * @return Id <p>结果id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>结果id</p>
                     * @param _id <p>结果id</p>
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
                     * 获取<p>任务id</p>
                     * @return JobRecordId <p>任务id</p>
                     * 
                     */
                    int64_t GetJobRecordId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _jobRecordId <p>任务id</p>
                     * 
                     */
                    void SetJobRecordId(const int64_t& _jobRecordId);

                    /**
                     * 判断参数 JobRecordId 是否已赋值
                     * @return JobRecordId 是否已赋值
                     * 
                     */
                    bool JobRecordIdHasBeenSet() const;

                private:

                    /**
                     * <p>数据类型，包括：enterprise(企业架构)，domain(主域名)，sub_domain(子域名)，asset(主机资产)，port(端口服务)，http(网站资产)，vul(漏洞信息)，app(APP)，wechat_applet(微信小程序)，wechat_official_account(微信公众号)，github(Github泄露)，manage(后台识别)，config(目录爆破)，dark_web(暗网泄露)，net_disk(文库网盘泄露)，social_engineering(员工信息)，supply_chain(供应链信息)，weak_password(弱口令)，sensitive_info(敏感信息泄露)，suspicious_asset(影子资产)</p>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * <p>结果id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>任务id</p>
                     */
                    int64_t m_jobRecordId;
                    bool m_jobRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_DESCRIBEJOBRECORDDETAILSREQUEST_H_
