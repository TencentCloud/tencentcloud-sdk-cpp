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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANBASELINEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANBASELINEREQUEST_H_

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
                * ScanBaseline请求参数结构体
                */
                class ScanBaselineRequest : public AbstractModel
                {
                public:
                    ScanBaselineRequest();
                    ~ScanBaselineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * @return StrategyIdList 策略id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * 
                     */
                    std::vector<uint64_t> GetStrategyIdList() const;

                    /**
                     * 设置策略id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * @param _strategyIdList 策略id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * 
                     */
                    void SetStrategyIdList(const std::vector<uint64_t>& _strategyIdList);

                    /**
                     * 判断参数 StrategyIdList 是否已赋值
                     * @return StrategyIdList 是否已赋值
                     * 
                     */
                    bool StrategyIdListHasBeenSet() const;

                    /**
                     * 获取基线id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * @return CategoryIdList 基线id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * 
                     */
                    std::vector<uint64_t> GetCategoryIdList() const;

                    /**
                     * 设置基线id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * @param _categoryIdList 基线id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * 
                     */
                    void SetCategoryIdList(const std::vector<uint64_t>& _categoryIdList);

                    /**
                     * 判断参数 CategoryIdList 是否已赋值
                     * @return CategoryIdList 是否已赋值
                     * 
                     */
                    bool CategoryIdListHasBeenSet() const;

                    /**
                     * 获取检测项id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * @return RuleIdList 检测项id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * 
                     */
                    std::vector<uint64_t> GetRuleIdList() const;

                    /**
                     * 设置检测项id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * @param _ruleIdList 检测项id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     * 
                     */
                    void SetRuleIdList(const std::vector<uint64_t>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                    /**
                     * 获取选择StrategyIdList时，不需要填写，其他情况必填
                     * @return QuuidList 选择StrategyIdList时，不需要填写，其他情况必填
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置选择StrategyIdList时，不需要填写，其他情况必填
                     * @param _quuidList 选择StrategyIdList时，不需要填写，其他情况必填
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取主机Uuid数组
                     * @return UuidList 主机Uuid数组
                     * 
                     */
                    std::vector<std::string> GetUuidList() const;

                    /**
                     * 设置主机Uuid数组
                     * @param _uuidList 主机Uuid数组
                     * 
                     */
                    void SetUuidList(const std::vector<std::string>& _uuidList);

                    /**
                     * 判断参数 UuidList 是否已赋值
                     * @return UuidList 是否已赋值
                     * 
                     */
                    bool UuidListHasBeenSet() const;

                private:

                    /**
                     * 策略id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     */
                    std::vector<uint64_t> m_strategyIdList;
                    bool m_strategyIdListHasBeenSet;

                    /**
                     * 基线id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     */
                    std::vector<uint64_t> m_categoryIdList;
                    bool m_categoryIdListHasBeenSet;

                    /**
                     * 检测项id数组(StrategyIdList与CategoryIdList和RuleIdList三选一)
                     */
                    std::vector<uint64_t> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                    /**
                     * 选择StrategyIdList时，不需要填写，其他情况必填
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * 主机Uuid数组
                     */
                    std::vector<std::string> m_uuidList;
                    bool m_uuidListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANBASELINEREQUEST_H_
