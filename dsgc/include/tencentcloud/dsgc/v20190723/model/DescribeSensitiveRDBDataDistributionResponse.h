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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBESENSITIVERDBDATADISTRIBUTIONRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBESENSITIVERDBDATADISTRIBUTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/Note.h>
#include <tencentcloud/dsgc/v20190723/model/RuleDistribution.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeSensitiveRDBDataDistribution返回参数结构体
                */
                class DescribeSensitiveRDBDataDistributionResponse : public AbstractModel
                {
                public:
                    DescribeSensitiveRDBDataDistributionResponse();
                    ~DescribeSensitiveRDBDataDistributionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分级分布
                     * @return LevelDistribution 分级分布
                     * 
                     */
                    std::vector<Note> GetLevelDistribution() const;

                    /**
                     * 判断参数 LevelDistribution 是否已赋值
                     * @return LevelDistribution 是否已赋值
                     * 
                     */
                    bool LevelDistributionHasBeenSet() const;

                    /**
                     * 获取分类分布
                     * @return CategoryDistribution 分类分布
                     * 
                     */
                    std::vector<Note> GetCategoryDistribution() const;

                    /**
                     * 判断参数 CategoryDistribution 是否已赋值
                     * @return CategoryDistribution 是否已赋值
                     * 
                     */
                    bool CategoryDistributionHasBeenSet() const;

                    /**
                     * 获取敏感规则分布详情列表
                     * @return RuleDistribution 敏感规则分布详情列表
                     * 
                     */
                    std::vector<RuleDistribution> GetRuleDistribution() const;

                    /**
                     * 判断参数 RuleDistribution 是否已赋值
                     * @return RuleDistribution 是否已赋值
                     * 
                     */
                    bool RuleDistributionHasBeenSet() const;

                    /**
                     * 获取计算占比字段
                     * @return SensitiveDataNum 计算占比字段
                     * 
                     */
                    int64_t GetSensitiveDataNum() const;

                    /**
                     * 判断参数 SensitiveDataNum 是否已赋值
                     * @return SensitiveDataNum 是否已赋值
                     * 
                     */
                    bool SensitiveDataNumHasBeenSet() const;

                private:

                    /**
                     * 分级分布
                     */
                    std::vector<Note> m_levelDistribution;
                    bool m_levelDistributionHasBeenSet;

                    /**
                     * 分类分布
                     */
                    std::vector<Note> m_categoryDistribution;
                    bool m_categoryDistributionHasBeenSet;

                    /**
                     * 敏感规则分布详情列表
                     */
                    std::vector<RuleDistribution> m_ruleDistribution;
                    bool m_ruleDistributionHasBeenSet;

                    /**
                     * 计算占比字段
                     */
                    int64_t m_sensitiveDataNum;
                    bool m_sensitiveDataNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBESENSITIVERDBDATADISTRIBUTIONRESPONSE_H_
