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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_PROMPTDETECTRESULT_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_PROMPTDETECTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * prompt注入检测结果结构体
                */
                class PromptDetectResult : public AbstractModel
                {
                public:
                    PromptDetectResult();
                    ~PromptDetectResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检测结果</p>
                     * @return Result <p>检测结果</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>检测结果</p>
                     * @param _result <p>检测结果</p>
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取<p>置信度</p>
                     * @return Confidence <p>置信度</p>
                     * 
                     */
                    uint64_t GetConfidence() const;

                    /**
                     * 设置<p>置信度</p>
                     * @param _confidence <p>置信度</p>
                     * 
                     */
                    void SetConfidence(const uint64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取<p>检出类别</p>
                     * @return Category <p>检出类别</p>
                     * 
                     */
                    std::vector<std::string> GetCategory() const;

                    /**
                     * 设置<p>检出类别</p>
                     * @param _category <p>检出类别</p>
                     * 
                     */
                    void SetCategory(const std::vector<std::string>& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                private:

                    /**
                     * <p>检测结果</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>置信度</p>
                     */
                    uint64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>检出类别</p>
                     */
                    std::vector<std::string> m_category;
                    bool m_categoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PROMPTDETECTRESULT_H_
