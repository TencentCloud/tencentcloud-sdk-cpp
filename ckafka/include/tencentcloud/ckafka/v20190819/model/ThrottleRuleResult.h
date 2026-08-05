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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_THROTTLERULERESULT_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_THROTTLERULERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/ThrottleRuleDetail.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 限流规则列表返回
                */
                class ThrottleRuleResult : public AbstractModel
                {
                public:
                    ThrottleRuleResult();
                    ~ThrottleRuleResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数量
                     * @return TotalCount 总数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置总数量
                     * @param _totalCount 总数量
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
                     * 获取规则列表
                     * @return ThrottleRuleList 规则列表
                     * 
                     */
                    std::vector<ThrottleRuleDetail> GetThrottleRuleList() const;

                    /**
                     * 设置规则列表
                     * @param _throttleRuleList 规则列表
                     * 
                     */
                    void SetThrottleRuleList(const std::vector<ThrottleRuleDetail>& _throttleRuleList);

                    /**
                     * 判断参数 ThrottleRuleList 是否已赋值
                     * @return ThrottleRuleList 是否已赋值
                     * 
                     */
                    bool ThrottleRuleListHasBeenSet() const;

                private:

                    /**
                     * 总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<ThrottleRuleDetail> m_throttleRuleList;
                    bool m_throttleRuleListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_THROTTLERULERESULT_H_
