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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATENEWL7RULESREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATENEWL7RULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/L7RuleEntry.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * CreateNewL7Rules请求参数结构体
                */
                class CreateNewL7RulesRequest : public AbstractModel
                {
                public:
                    CreateNewL7RulesRequest();
                    ~CreateNewL7RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则列表
                     * @return Rules 规则列表
                     * 
                     */
                    std::vector<L7RuleEntry> GetRules() const;

                    /**
                     * 设置规则列表
                     * @param _rules 规则列表
                     * 
                     */
                    void SetRules(const std::vector<L7RuleEntry>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取DDoS防护子产品代号（bgpip表示高防IP）
                     * @return Business DDoS防护子产品代号（bgpip表示高防IP）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置DDoS防护子产品代号（bgpip表示高防IP）
                     * @param _business DDoS防护子产品代号（bgpip表示高防IP）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源ID列表
                     * @return IdList 资源ID列表
                     * 
                     */
                    std::vector<std::string> GetIdList() const;

                    /**
                     * 设置资源ID列表
                     * @param _idList 资源ID列表
                     * 
                     */
                    void SetIdList(const std::vector<std::string>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                    /**
                     * 获取资源IP列表
                     * @return VipList 资源IP列表
                     * 
                     */
                    std::vector<std::string> GetVipList() const;

                    /**
                     * 设置资源IP列表
                     * @param _vipList 资源IP列表
                     * 
                     */
                    void SetVipList(const std::vector<std::string>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     * 
                     */
                    bool VipListHasBeenSet() const;

                private:

                    /**
                     * 规则列表
                     */
                    std::vector<L7RuleEntry> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * DDoS防护子产品代号（bgpip表示高防IP）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源ID列表
                     */
                    std::vector<std::string> m_idList;
                    bool m_idListHasBeenSet;

                    /**
                     * 资源IP列表
                     */
                    std::vector<std::string> m_vipList;
                    bool m_vipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CREATENEWL7RULESREQUEST_H_
