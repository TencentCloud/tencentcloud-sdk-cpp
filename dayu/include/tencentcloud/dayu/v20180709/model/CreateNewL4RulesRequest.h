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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATENEWL4RULESREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATENEWL4RULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/L4RuleEntry.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateNewL4Rules请求参数结构体
                */
                class CreateNewL4RulesRequest : public AbstractModel
                {
                public:
                    CreateNewL4RulesRequest();
                    ~CreateNewL4RulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取高防产品代号：bgpip
                     * @return Business 高防产品代号：bgpip
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置高防产品代号：bgpip
                     * @param _business 高防产品代号：bgpip
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
                     * 获取添加规则资源列表
                     * @return IdList 添加规则资源列表
                     * 
                     */
                    std::vector<std::string> GetIdList() const;

                    /**
                     * 设置添加规则资源列表
                     * @param _idList 添加规则资源列表
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
                     * 获取添加规则IP列表
                     * @return VipList 添加规则IP列表
                     * 
                     */
                    std::vector<std::string> GetVipList() const;

                    /**
                     * 设置添加规则IP列表
                     * @param _vipList 添加规则IP列表
                     * 
                     */
                    void SetVipList(const std::vector<std::string>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     * 
                     */
                    bool VipListHasBeenSet() const;

                    /**
                     * 获取规则列表
                     * @return Rules 规则列表
                     * 
                     */
                    std::vector<L4RuleEntry> GetRules() const;

                    /**
                     * 设置规则列表
                     * @param _rules 规则列表
                     * 
                     */
                    void SetRules(const std::vector<L4RuleEntry>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 高防产品代号：bgpip
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 添加规则资源列表
                     */
                    std::vector<std::string> m_idList;
                    bool m_idListHasBeenSet;

                    /**
                     * 添加规则IP列表
                     */
                    std::vector<std::string> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<L4RuleEntry> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATENEWL4RULESREQUEST_H_
