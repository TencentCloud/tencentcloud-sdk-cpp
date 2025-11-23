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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_IGNOREDATAREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_IGNOREDATAREQUEST_H_

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
                * IgnoreData请求参数结构体
                */
                class IgnoreDataRequest : public AbstractModel
                {
                public:
                    IgnoreDataRequest();
                    ~IgnoreDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID列表
                     * @return Ids ID列表
                     * 
                     */
                    std::vector<int64_t> GetIds() const;

                    /**
                     * 设置ID列表
                     * @param _ids ID列表
                     * 
                     */
                    void SetIds(const std::vector<int64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取模块，包括：enterprise：企业架构，domain：主域名，sub_domain：子域名，asset：IP资产，port：端口服务，http：HTTP资产，vul：漏洞信息，app：APP，wechat_applet：微信小程序，wechat_official_account：微信公众号，github：Github信息泄露，manage：管理后台暴露，config：目录爆破，dark_web：暗网泄露，net_disk：文库网盘泄露，supply_chain：供应链，weak_password：弱口令，sensitive_info：敏感信息泄露
                     * @return Module 模块，包括：enterprise：企业架构，domain：主域名，sub_domain：子域名，asset：IP资产，port：端口服务，http：HTTP资产，vul：漏洞信息，app：APP，wechat_applet：微信小程序，wechat_official_account：微信公众号，github：Github信息泄露，manage：管理后台暴露，config：目录爆破，dark_web：暗网泄露，net_disk：文库网盘泄露，supply_chain：供应链，weak_password：弱口令，sensitive_info：敏感信息泄露
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块，包括：enterprise：企业架构，domain：主域名，sub_domain：子域名，asset：IP资产，port：端口服务，http：HTTP资产，vul：漏洞信息，app：APP，wechat_applet：微信小程序，wechat_official_account：微信公众号，github：Github信息泄露，manage：管理后台暴露，config：目录爆破，dark_web：暗网泄露，net_disk：文库网盘泄露，supply_chain：供应链，weak_password：弱口令，sensitive_info：敏感信息泄露
                     * @param _module 模块，包括：enterprise：企业架构，domain：主域名，sub_domain：子域名，asset：IP资产，port：端口服务，http：HTTP资产，vul：漏洞信息，app：APP，wechat_applet：微信小程序，wechat_official_account：微信公众号，github：Github信息泄露，manage：管理后台暴露，config：目录爆破，dark_web：暗网泄露，net_disk：文库网盘泄露，supply_chain：供应链，weak_password：弱口令，sensitive_info：敏感信息泄露
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
                     * 获取企业ID列表，可多选
                     * @return CustomerIdList 企业ID列表，可多选
                     * 
                     */
                    std::vector<int64_t> GetCustomerIdList() const;

                    /**
                     * 设置企业ID列表，可多选
                     * @param _customerIdList 企业ID列表，可多选
                     * 
                     */
                    void SetCustomerIdList(const std::vector<int64_t>& _customerIdList);

                    /**
                     * 判断参数 CustomerIdList 是否已赋值
                     * @return CustomerIdList 是否已赋值
                     * 
                     */
                    bool CustomerIdListHasBeenSet() const;

                    /**
                     * 获取是否聚合数据
                     * @return IsAggregation 是否聚合数据
                     * 
                     */
                    bool GetIsAggregation() const;

                    /**
                     * 设置是否聚合数据
                     * @param _isAggregation 是否聚合数据
                     * 
                     */
                    void SetIsAggregation(const bool& _isAggregation);

                    /**
                     * 判断参数 IsAggregation 是否已赋值
                     * @return IsAggregation 是否已赋值
                     * 
                     */
                    bool IsAggregationHasBeenSet() const;

                    /**
                     * 获取是否显示被忽略的数据
                     * @return Ignored 是否显示被忽略的数据
                     * 
                     */
                    bool GetIgnored() const;

                    /**
                     * 设置是否显示被忽略的数据
                     * @param _ignored 是否显示被忽略的数据
                     * 
                     */
                    void SetIgnored(const bool& _ignored);

                    /**
                     * 判断参数 Ignored 是否已赋值
                     * @return Ignored 是否已赋值
                     * 
                     */
                    bool IgnoredHasBeenSet() const;

                    /**
                     * 获取是否忽略全部
                     * @return IsAffectOther 是否忽略全部
                     * 
                     */
                    bool GetIsAffectOther() const;

                    /**
                     * 设置是否忽略全部
                     * @param _isAffectOther 是否忽略全部
                     * 
                     */
                    void SetIsAffectOther(const bool& _isAffectOther);

                    /**
                     * 判断参数 IsAffectOther 是否已赋值
                     * @return IsAffectOther 是否已赋值
                     * 
                     */
                    bool IsAffectOtherHasBeenSet() const;

                private:

                    /**
                     * ID列表
                     */
                    std::vector<int64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 模块，包括：enterprise：企业架构，domain：主域名，sub_domain：子域名，asset：IP资产，port：端口服务，http：HTTP资产，vul：漏洞信息，app：APP，wechat_applet：微信小程序，wechat_official_account：微信公众号，github：Github信息泄露，manage：管理后台暴露，config：目录爆破，dark_web：暗网泄露，net_disk：文库网盘泄露，supply_chain：供应链，weak_password：弱口令，sensitive_info：敏感信息泄露
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 企业ID列表，可多选
                     */
                    std::vector<int64_t> m_customerIdList;
                    bool m_customerIdListHasBeenSet;

                    /**
                     * 是否聚合数据
                     */
                    bool m_isAggregation;
                    bool m_isAggregationHasBeenSet;

                    /**
                     * 是否显示被忽略的数据
                     */
                    bool m_ignored;
                    bool m_ignoredHasBeenSet;

                    /**
                     * 是否忽略全部
                     */
                    bool m_isAffectOther;
                    bool m_isAffectOtherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_IGNOREDATAREQUEST_H_
