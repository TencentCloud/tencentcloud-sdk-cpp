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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_QUERYPOLICYRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_QUERYPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * QueryPolicy返回参数结构体
                */
                class QueryPolicyResponse : public AbstractModel
                {
                public:
                    QueryPolicyResponse();
                    ~QueryPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取披露策略索引
                     * @return Id 披露策略索引
                     */
                    uint64_t GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取披露策略ID
                     * @return PolicyId 披露策略ID
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取凭证模板ID
                     * @return CptId 凭证模板ID
                     */
                    uint64_t GetCptId() const;

                    /**
                     * 判断参数 CptId 是否已赋值
                     * @return CptId 是否已赋值
                     */
                    bool CptIdHasBeenSet() const;

                    /**
                     * 获取披露策略的具体信息
                     * @return PolicyData 披露策略的具体信息
                     */
                    std::string GetPolicyData() const;

                    /**
                     * 判断参数 PolicyData 是否已赋值
                     * @return PolicyData 是否已赋值
                     */
                    bool PolicyDataHasBeenSet() const;

                private:

                    /**
                     * 披露策略索引
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 披露策略ID
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 凭证模板ID
                     */
                    uint64_t m_cptId;
                    bool m_cptIdHasBeenSet;

                    /**
                     * 披露策略的具体信息
                     */
                    std::string m_policyData;
                    bool m_policyDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_QUERYPOLICYRESPONSE_H_
