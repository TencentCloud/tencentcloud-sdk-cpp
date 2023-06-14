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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATACRULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATACRULERESPONSE_H_

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
                * ModifyNatAcRule返回参数结构体
                */
                class ModifyNatAcRuleResponse : public AbstractModel
                {
                public:
                    ModifyNatAcRuleResponse();
                    ~ModifyNatAcRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取编辑成功后返回新策略ID列表
                     * @return RuleUuid 编辑成功后返回新策略ID列表
                     * 
                     */
                    std::vector<int64_t> GetRuleUuid() const;

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                private:

                    /**
                     * 编辑成功后返回新策略ID列表
                     */
                    std::vector<int64_t> m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATACRULERESPONSE_H_
