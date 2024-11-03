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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACRULERESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACRULERESPONSE_H_

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
                * RemoveAcRule返回参数结构体
                */
                class RemoveAcRuleResponse : public AbstractModel
                {
                public:
                    RemoveAcRuleResponse();
                    ~RemoveAcRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取删除成功后返回被删除策略的uuid
                     * @return RuleUuid 删除成功后返回被删除策略的uuid
                     * 
                     */
                    int64_t GetRuleUuid() const;

                    /**
                     * 判断参数 RuleUuid 是否已赋值
                     * @return RuleUuid 是否已赋值
                     * 
                     */
                    bool RuleUuidHasBeenSet() const;

                    /**
                     * 获取0代表成功，-1代表失败
                     * @return ReturnCode 0代表成功，-1代表失败
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取success代表成功，failed代表失败
                     * @return ReturnMsg success代表成功，failed代表失败
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * 删除成功后返回被删除策略的uuid
                     */
                    int64_t m_ruleUuid;
                    bool m_ruleUuidHasBeenSet;

                    /**
                     * 0代表成功，-1代表失败
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * success代表成功，failed代表失败
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_REMOVEACRULERESPONSE_H_
