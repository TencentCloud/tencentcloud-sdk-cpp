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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGRULERESPONSE_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/UsgRuleDetail.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeUsgRule返回参数结构体
                */
                class DescribeUsgRuleResponse : public AbstractModel
                {
                public:
                    DescribeUsgRuleResponse();
                    ~DescribeUsgRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组详情
                     * @return SgRules 安全组详情
                     * 
                     */
                    std::vector<UsgRuleDetail> GetSgRules() const;

                    /**
                     * 判断参数 SgRules 是否已赋值
                     * @return SgRules 是否已赋值
                     * 
                     */
                    bool SgRulesHasBeenSet() const;

                    /**
                     * 获取安全组详情数量
                     * @return TotalCount 安全组详情数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 安全组详情
                     */
                    std::vector<UsgRuleDetail> m_sgRules;
                    bool m_sgRulesHasBeenSet;

                    /**
                     * 安全组详情数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGRULERESPONSE_H_
