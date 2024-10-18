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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERALLPOLICIESRESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERALLPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/AttachedUserPolicy.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListAttachedUserAllPolicies返回参数结构体
                */
                class ListAttachedUserAllPoliciesResponse : public AbstractModel
                {
                public:
                    ListAttachedUserAllPoliciesResponse();
                    ~ListAttachedUserAllPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略列表数据。
                     * @return PolicyList 策略列表数据。
                     * 
                     */
                    std::vector<AttachedUserPolicy> GetPolicyList() const;

                    /**
                     * 判断参数 PolicyList 是否已赋值
                     * @return PolicyList 是否已赋值
                     * 
                     */
                    bool PolicyListHasBeenSet() const;

                    /**
                     * 获取策略总数。
                     * @return TotalNum 策略总数。
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * 策略列表数据。
                     */
                    std::vector<AttachedUserPolicy> m_policyList;
                    bool m_policyListHasBeenSet;

                    /**
                     * 策略总数。
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTATTACHEDUSERALLPOLICIESRESPONSE_H_
