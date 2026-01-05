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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEQUALITYRULEGROUPRESULTVO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEQUALITYRULEGROUPRESULTVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/QualityRuleGroupResult.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 监控任务
                */
                class CreateQualityRuleGroupResultVO : public AbstractModel
                {
                public:
                    CreateQualityRuleGroupResultVO();
                    ~CreateQualityRuleGroupResultVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务创建结构
                     * @return RuleGroupResultList 任务创建结构
                     * 
                     */
                    std::vector<QualityRuleGroupResult> GetRuleGroupResultList() const;

                    /**
                     * 设置任务创建结构
                     * @param _ruleGroupResultList 任务创建结构
                     * 
                     */
                    void SetRuleGroupResultList(const std::vector<QualityRuleGroupResult>& _ruleGroupResultList);

                    /**
                     * 判断参数 RuleGroupResultList 是否已赋值
                     * @return RuleGroupResultList 是否已赋值
                     * 
                     */
                    bool RuleGroupResultListHasBeenSet() const;

                private:

                    /**
                     * 任务创建结构
                     */
                    std::vector<QualityRuleGroupResult> m_ruleGroupResultList;
                    bool m_ruleGroupResultListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEQUALITYRULEGROUPRESULTVO_H_
