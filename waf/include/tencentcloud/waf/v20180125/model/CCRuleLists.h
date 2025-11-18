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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CCRULELISTS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CCRULELISTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/CCRuleItems.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * CC规则总览
                */
                class CCRuleLists : public AbstractModel
                {
                public:
                    CCRuleLists();
                    ~CCRuleLists() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
                     * @return TotalCount 总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总数
                     * @param _totalCount 总数
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取规则
                     * @return Res 规则
                     * 
                     */
                    std::vector<CCRuleItems> GetRes() const;

                    /**
                     * 设置规则
                     * @param _res 规则
                     * 
                     */
                    void SetRes(const std::vector<CCRuleItems>& _res);

                    /**
                     * 判断参数 Res 是否已赋值
                     * @return Res 是否已赋值
                     * 
                     */
                    bool ResHasBeenSet() const;

                    /**
                     * 获取规则限制总数
                     * @return Limit 规则限制总数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置规则限制总数
                     * @param _limit 规则限制总数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取规则剩余多少可用
                     * @return Available 规则剩余多少可用
                     * 
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置规则剩余多少可用
                     * @param _available 规则剩余多少可用
                     * 
                     */
                    void SetAvailable(const int64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * 总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 规则
                     */
                    std::vector<CCRuleItems> m_res;
                    bool m_resHasBeenSet;

                    /**
                     * 规则限制总数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 规则剩余多少可用
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CCRULELISTS_H_
