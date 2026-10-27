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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEPOLICYDETAILRESPONSE_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEPOLICYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/PolicyDetail.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * DescribePolicyDetail返回参数结构体
                */
                class DescribePolicyDetailResponse : public AbstractModel
                {
                public:
                    DescribePolicyDetailResponse();
                    ~DescribePolicyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>策略详细信息列表</p>
                     * @return PolicyList <p>策略详细信息列表</p>
                     * 
                     */
                    std::vector<PolicyDetail> GetPolicyList() const;

                    /**
                     * 判断参数 PolicyList 是否已赋值
                     * @return PolicyList 是否已赋值
                     * 
                     */
                    bool PolicyListHasBeenSet() const;

                    /**
                     * 获取<p>当前查询到的策略总数</p>
                     * @return Total <p>当前查询到的策略总数</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * <p>策略详细信息列表</p>
                     */
                    std::vector<PolicyDetail> m_policyList;
                    bool m_policyListHasBeenSet;

                    /**
                     * <p>当前查询到的策略总数</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_DESCRIBEPOLICYDETAILRESPONSE_H_
