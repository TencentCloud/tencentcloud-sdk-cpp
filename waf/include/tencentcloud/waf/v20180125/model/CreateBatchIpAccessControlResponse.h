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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CREATEBATCHIPACCESSCONTROLRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CREATEBATCHIPACCESSCONTROLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/BatchDomainResult.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CreateBatchIpAccessControl返回参数结构体
                */
                class CreateBatchIpAccessControlResponse : public AbstractModel
                {
                public:
                    CreateBatchIpAccessControlResponse();
                    ~CreateBatchIpAccessControlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取添加失败的域名列表，如果非空则表示有域名添加失败，整个批量规则添加失败，否则则表示批量规则添加成功。
                     * @return Failed 添加失败的域名列表，如果非空则表示有域名添加失败，整个批量规则添加失败，否则则表示批量规则添加成功。
                     * 
                     */
                    std::vector<BatchDomainResult> GetFailed() const;

                    /**
                     * 判断参数 Failed 是否已赋值
                     * @return Failed 是否已赋值
                     * 
                     */
                    bool FailedHasBeenSet() const;

                    /**
                     * 获取添加成功的批量规则ID
                     * @return RuleId 添加成功的批量规则ID
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
                     * 添加失败的域名列表，如果非空则表示有域名添加失败，整个批量规则添加失败，否则则表示批量规则添加成功。
                     */
                    std::vector<BatchDomainResult> m_failed;
                    bool m_failedHasBeenSet;

                    /**
                     * 添加成功的批量规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CREATEBATCHIPACCESSCONTROLRESPONSE_H_
