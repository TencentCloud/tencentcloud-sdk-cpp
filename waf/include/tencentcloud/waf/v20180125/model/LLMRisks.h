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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMRISKS_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMRISKS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ClawRiskItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * LLMRisks
                */
                class LLMRisks : public AbstractModel
                {
                public:
                    LLMRisks();
                    ~LLMRisks() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分数
                     * @return Risks 分数
                     * 
                     */
                    std::vector<ClawRiskItem> GetRisks() const;

                    /**
                     * 设置分数
                     * @param _risks 分数
                     * 
                     */
                    void SetRisks(const std::vector<ClawRiskItem>& _risks);

                    /**
                     * 判断参数 Risks 是否已赋值
                     * @return Risks 是否已赋值
                     * 
                     */
                    bool RisksHasBeenSet() const;

                private:

                    /**
                     * 分数
                     */
                    std::vector<ClawRiskItem> m_risks;
                    bool m_risksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMRISKS_H_
