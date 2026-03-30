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
                     * 获取检测结果
                     * @return Result 检测结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置检测结果
                     * @param _result 检测结果
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
                     * 获取置信度
                     * @return Confidence 置信度
                     * 
                     */
                    uint64_t GetConfidence() const;

                    /**
                     * 设置置信度
                     * @param _confidence 置信度
                     * 
                     */
                    void SetConfidence(const uint64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * 检测结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 置信度
                     */
                    uint64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PROMPTDETECTRESULT_H_
