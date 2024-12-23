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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEIDENTIFYRULEANOTHERNAMERESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEIDENTIFYRULEANOTHERNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * CreateIdentifyRuleAnotherName返回参数结构体
                */
                class CreateIdentifyRuleAnotherNameResponse : public AbstractModel
                {
                public:
                    CreateIdentifyRuleAnotherNameResponse();
                    ~CreateIdentifyRuleAnotherNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建的别名规则id
                     * @return AliasRuleId 创建的别名规则id
                     * 
                     */
                    int64_t GetAliasRuleId() const;

                    /**
                     * 判断参数 AliasRuleId 是否已赋值
                     * @return AliasRuleId 是否已赋值
                     * 
                     */
                    bool AliasRuleIdHasBeenSet() const;

                    /**
                     * 获取别名规则名称
                     * @return AliasRuleName 别名规则名称
                     * 
                     */
                    std::string GetAliasRuleName() const;

                    /**
                     * 判断参数 AliasRuleName 是否已赋值
                     * @return AliasRuleName 是否已赋值
                     * 
                     */
                    bool AliasRuleNameHasBeenSet() const;

                private:

                    /**
                     * 创建的别名规则id
                     */
                    int64_t m_aliasRuleId;
                    bool m_aliasRuleIdHasBeenSet;

                    /**
                     * 别名规则名称
                     */
                    std::string m_aliasRuleName;
                    bool m_aliasRuleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEIDENTIFYRULEANOTHERNAMERESPONSE_H_
