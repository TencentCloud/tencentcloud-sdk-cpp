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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DELETEDISPENSEEXTERNALRULEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DELETEDISPENSEEXTERNALRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DeleteDispenseExternalRule请求参数结构体
                */
                class DeleteDispenseExternalRuleRequest : public AbstractModel
                {
                public:
                    DeleteDispenseExternalRuleRequest();
                    ~DeleteDispenseExternalRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的规则Id
                     * @return RuleIdList 需要删除的规则Id
                     * 
                     */
                    std::vector<int64_t> GetRuleIdList() const;

                    /**
                     * 设置需要删除的规则Id
                     * @param _ruleIdList 需要删除的规则Id
                     * 
                     */
                    void SetRuleIdList(const std::vector<int64_t>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                private:

                    /**
                     * 需要删除的规则Id
                     */
                    std::vector<int64_t> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DELETEDISPENSEEXTERNALRULEREQUEST_H_
