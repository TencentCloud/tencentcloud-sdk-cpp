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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACLRULEREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACLRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * RemoveAclRule请求参数结构体
                */
                class RemoveAclRuleRequest : public AbstractModel
                {
                public:
                    RemoveAclRuleRequest();
                    ~RemoveAclRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则
                     * @return RuleUuid 规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则
                     * 
                     */
                    std::vector<int64_t> GetRuleUuid() const;

                    /**
                     * 设置规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则
                     * @param _ruleUuid 规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则
                     * 
                     */
                    void SetRuleUuid(const std::vector<int64_t>& _ruleUuid);

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取规则方向：1，入站；0，出站
                     * @return Direction 规则方向：1，入站；0，出站
                     * 
                     */
                    uint64_t GetDirection() const;

                    /**
                     * 设置规则方向：1，入站；0，出站
                     * @param _direction 规则方向：1，入站；0，出站
                     * 
                     */
                    void SetDirection(const uint64_t& _direction);

                    /**
                     * 判断参数 Direction 是否已赋值
                     * @return Direction 是否已赋值
                     * 
                     */
                    bool DirectionHasBeenSet() const;

                private:

                    /**
                     * 规则的uuid列表，可通过查询规则列表获取，注意：如果传入的是[-1]将删除所有规则
                     */
                    std::vector<int64_t> m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * 规则方向：1，入站；0，出站
                     */
                    uint64_t m_direction;
                    bool m_directionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACLRULEREQUEST_H_
