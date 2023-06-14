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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPRULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPRULERESPONSE_H_

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
                * ModifySecurityGroupRule返回参数结构体
                */
                class ModifySecurityGroupRuleResponse : public AbstractModel
                {
                public:
                    ModifySecurityGroupRuleResponse();
                    ~ModifySecurityGroupRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取状态值，0：编辑成功，非0：编辑失败
                     * @return Status 状态值，0：编辑成功，非0：编辑失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取编辑后新生成规则的Id
                     * @return NewRuleId 编辑后新生成规则的Id
                     * 
                     */
                    uint64_t GetNewRuleId() const;

                    /**
                     * 判断参数 NewRuleId 是否已赋值
                     * @return NewRuleId 是否已赋值
                     * 
                     */
                    bool NewRuleIdHasBeenSet() const;

                private:

                    /**
                     * 状态值，0：编辑成功，非0：编辑失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 编辑后新生成规则的Id
                     */
                    uint64_t m_newRuleId;
                    bool m_newRuleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYSECURITYGROUPRULERESPONSE_H_
