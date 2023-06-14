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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DELETEBASELINERULEIGNOREREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DELETEBASELINERULEIGNOREREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DeleteBaselineRuleIgnore请求参数结构体
                */
                class DeleteBaselineRuleIgnoreRequest : public AbstractModel
                {
                public:
                    DeleteBaselineRuleIgnoreRequest();
                    ~DeleteBaselineRuleIgnoreRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则Id
                     * @return RuleIds 规则Id
                     * 
                     */
                    std::vector<int64_t> GetRuleIds() const;

                    /**
                     * 设置规则Id
                     * @param _ruleIds 规则Id
                     * 
                     */
                    void SetRuleIds(const std::vector<int64_t>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                private:

                    /**
                     * 规则Id
                     */
                    std::vector<int64_t> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DELETEBASELINERULEIGNOREREQUEST_H_
