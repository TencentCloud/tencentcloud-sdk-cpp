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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYTDEMFIELDTRANSFORMRULERESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYTDEMFIELDTRANSFORMRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/FieldTransformRuleItem.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyTDEMFieldTransformRule返回参数结构体
                */
                class ModifyTDEMFieldTransformRuleResponse : public AbstractModel
                {
                public:
                    ModifyTDEMFieldTransformRuleResponse();
                    ~ModifyTDEMFieldTransformRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>修改后的规则</p>
                     * @return Rule <p>修改后的规则</p>
                     * 
                     */
                    FieldTransformRuleItem GetRule() const;

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     * 
                     */
                    bool RuleHasBeenSet() const;

                private:

                    /**
                     * <p>修改后的规则</p>
                     */
                    FieldTransformRuleItem m_rule;
                    bool m_ruleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYTDEMFIELDTRANSFORMRULERESPONSE_H_
