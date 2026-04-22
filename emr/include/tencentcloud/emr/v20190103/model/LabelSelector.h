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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_LABELSELECTOR_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_LABELSELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/StringMap.h>
#include <tencentcloud/emr/v20190103/model/LabelSelectorRequirement.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 标签选择器
                */
                class LabelSelector : public AbstractModel
                {
                public:
                    LabelSelector();
                    ~LabelSelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签精确匹配条件</p>
                     * @return MatchLabels <p>标签精确匹配条件</p>
                     * 
                     */
                    std::vector<StringMap> GetMatchLabels() const;

                    /**
                     * 设置<p>标签精确匹配条件</p>
                     * @param _matchLabels <p>标签精确匹配条件</p>
                     * 
                     */
                    void SetMatchLabels(const std::vector<StringMap>& _matchLabels);

                    /**
                     * 判断参数 MatchLabels 是否已赋值
                     * @return MatchLabels 是否已赋值
                     * 
                     */
                    bool MatchLabelsHasBeenSet() const;

                    /**
                     * 获取<p>标签表达式匹配条件</p>
                     * @return MatchExpressions <p>标签表达式匹配条件</p>
                     * 
                     */
                    std::vector<LabelSelectorRequirement> GetMatchExpressions() const;

                    /**
                     * 设置<p>标签表达式匹配条件</p>
                     * @param _matchExpressions <p>标签表达式匹配条件</p>
                     * 
                     */
                    void SetMatchExpressions(const std::vector<LabelSelectorRequirement>& _matchExpressions);

                    /**
                     * 判断参数 MatchExpressions 是否已赋值
                     * @return MatchExpressions 是否已赋值
                     * 
                     */
                    bool MatchExpressionsHasBeenSet() const;

                private:

                    /**
                     * <p>标签精确匹配条件</p>
                     */
                    std::vector<StringMap> m_matchLabels;
                    bool m_matchLabelsHasBeenSet;

                    /**
                     * <p>标签表达式匹配条件</p>
                     */
                    std::vector<LabelSelectorRequirement> m_matchExpressions;
                    bool m_matchExpressionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_LABELSELECTOR_H_
