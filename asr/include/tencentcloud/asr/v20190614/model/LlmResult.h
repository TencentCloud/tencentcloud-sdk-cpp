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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_LLMRESULT_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_LLMRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * 一个能力的名字和结果
                */
                class LlmResult : public AbstractModel
                {
                public:
                    LlmResult();
                    ~LlmResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>能力名</p>
                     * @return Feature <p>能力名</p>
                     * 
                     */
                    std::string GetFeature() const;

                    /**
                     * 设置<p>能力名</p>
                     * @param _feature <p>能力名</p>
                     * 
                     */
                    void SetFeature(const std::string& _feature);

                    /**
                     * 判断参数 Feature 是否已赋值
                     * @return Feature 是否已赋值
                     * 
                     */
                    bool FeatureHasBeenSet() const;

                    /**
                     * 获取<p>结果</p>
                     * @return Result <p>结果</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>结果</p>
                     * @param _result <p>结果</p>
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
                     * 获取<p>这个能力是否成功得到结果</p>
                     * @return Success <p>这个能力是否成功得到结果</p>
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 设置<p>这个能力是否成功得到结果</p>
                     * @param _success <p>这个能力是否成功得到结果</p>
                     * 
                     */
                    void SetSuccess(const bool& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                private:

                    /**
                     * <p>能力名</p>
                     */
                    std::string m_feature;
                    bool m_featureHasBeenSet;

                    /**
                     * <p>结果</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>这个能力是否成功得到结果</p>
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_LLMRESULT_H_
