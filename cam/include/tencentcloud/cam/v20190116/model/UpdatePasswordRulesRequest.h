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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEPASSWORDRULESREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEPASSWORDRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/PassWordRule.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * UpdatePasswordRules请求参数结构体
                */
                class UpdatePasswordRulesRequest : public AbstractModel
                {
                public:
                    UpdatePasswordRulesRequest();
                    ~UpdatePasswordRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取密码规则
                     * @return Rules 密码规则
                     * 
                     */
                    PassWordRule GetRules() const;

                    /**
                     * 设置密码规则
                     * @param _rules 密码规则
                     * 
                     */
                    void SetRules(const PassWordRule& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 密码规则
                     */
                    PassWordRule m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_UPDATEPASSWORDRULESREQUEST_H_
