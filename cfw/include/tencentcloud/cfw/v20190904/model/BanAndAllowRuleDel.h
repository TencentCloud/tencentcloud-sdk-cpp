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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULEDEL_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULEDEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 封禁列表和放通列表结构体
                */
                class BanAndAllowRuleDel : public AbstractModel
                {
                public:
                    BanAndAllowRuleDel();
                    ~BanAndAllowRuleDel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取封禁和放通对象
                     * @return Ioc 封禁和放通对象
                     * 
                     */
                    std::string GetIoc() const;

                    /**
                     * 设置封禁和放通对象
                     * @param _ioc 封禁和放通对象
                     * 
                     */
                    void SetIoc(const std::string& _ioc);

                    /**
                     * 判断参数 Ioc 是否已赋值
                     * @return Ioc 是否已赋值
                     * 
                     */
                    bool IocHasBeenSet() const;

                    /**
                     * 获取0互联网出站 1互联网入站 5内网访问源 6内网访问目的 （DeleteBlockIgnoreRuleNew接口，该字段无效）
                     * @return DirectionList 0互联网出站 1互联网入站 5内网访问源 6内网访问目的 （DeleteBlockIgnoreRuleNew接口，该字段无效）
                     * 
                     */
                    std::string GetDirectionList() const;

                    /**
                     * 设置0互联网出站 1互联网入站 5内网访问源 6内网访问目的 （DeleteBlockIgnoreRuleNew接口，该字段无效）
                     * @param _directionList 0互联网出站 1互联网入站 5内网访问源 6内网访问目的 （DeleteBlockIgnoreRuleNew接口，该字段无效）
                     * 
                     */
                    void SetDirectionList(const std::string& _directionList);

                    /**
                     * 判断参数 DirectionList 是否已赋值
                     * @return DirectionList 是否已赋值
                     * 
                     */
                    bool DirectionListHasBeenSet() const;

                    /**
                     * 获取规则类型
RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
                     * @return RuleType 规则类型
RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置规则类型
RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
                     * @param _ruleType 规则类型
RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                private:

                    /**
                     * 封禁和放通对象
                     */
                    std::string m_ioc;
                    bool m_iocHasBeenSet;

                    /**
                     * 0互联网出站 1互联网入站 5内网访问源 6内网访问目的 （DeleteBlockIgnoreRuleNew接口，该字段无效）
                     */
                    std::string m_directionList;
                    bool m_directionListHasBeenSet;

                    /**
                     * 规则类型
RuleType: 1黑名单 2外部IP 3域名 4情报 5资产 6自定义规则  7入侵防御规则
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_BANANDALLOWRULEDEL_H_
