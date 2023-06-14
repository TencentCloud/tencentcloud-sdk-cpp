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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_L4DELRULE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_L4DELRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 删除l4规则接口
                */
                class L4DelRule : public AbstractModel
                {
                public:
                    L4DelRule();
                    ~L4DelRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源Id
                     * @return Id 资源Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源Id
                     * @param _id 资源Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取资源IP
                     * @return Ip 资源IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置资源IP
                     * @param _ip 资源IP
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
                     * 获取规则Id
                     * @return RuleIdList 规则Id
                     * 
                     */
                    std::vector<std::string> GetRuleIdList() const;

                    /**
                     * 设置规则Id
                     * @param _ruleIdList 规则Id
                     * 
                     */
                    void SetRuleIdList(const std::vector<std::string>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                private:

                    /**
                     * 资源Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 资源IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 规则Id
                     */
                    std::vector<std::string> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_L4DELRULE_H_
