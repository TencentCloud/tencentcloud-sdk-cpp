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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMWHITERULERESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMWHITERULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ResponseCode.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * AddCustomWhiteRule返回参数结构体
                */
                class AddCustomWhiteRuleResponse : public AbstractModel
                {
                public:
                    AddCustomWhiteRuleResponse();
                    ~AddCustomWhiteRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作的状态码，如果所有的资源操作成功则返回的是成功的状态码，如果有资源操作失败则需要解析Message的内容来查看哪个资源失败
                     * @return Success 操作的状态码，如果所有的资源操作成功则返回的是成功的状态码，如果有资源操作失败则需要解析Message的内容来查看哪个资源失败
                     * 
                     */
                    ResponseCode GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取添加成功的规则ID
                     * @return RuleId 添加成功的规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                private:

                    /**
                     * 操作的状态码，如果所有的资源操作成功则返回的是成功的状态码，如果有资源操作失败则需要解析Message的内容来查看哪个资源失败
                     */
                    ResponseCode m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 添加成功的规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ADDCUSTOMWHITERULERESPONSE_H_
