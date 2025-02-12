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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_CONTENTINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_CONTENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 卡证字段信息返回值
                */
                class ContentInfo : public AbstractModel
                {
                public:
                    ContentInfo();
                    ~ContentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段内容
                     * @return Content 字段内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置字段内容
                     * @param _content 字段内容
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取结果置信度
                     * @return Confidence 结果置信度
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置结果置信度
                     * @param _confidence 结果置信度
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取字段是否不完整（value内容）
0 字段正常
1 字段不完整
                     * @return IsInComplete 字段是否不完整（value内容）
0 字段正常
1 字段不完整
                     * 
                     */
                    int64_t GetIsInComplete() const;

                    /**
                     * 设置字段是否不完整（value内容）
0 字段正常
1 字段不完整
                     * @param _isInComplete 字段是否不完整（value内容）
0 字段正常
1 字段不完整
                     * 
                     */
                    void SetIsInComplete(const int64_t& _isInComplete);

                    /**
                     * 判断参数 IsInComplete 是否已赋值
                     * @return IsInComplete 是否已赋值
                     * 
                     */
                    bool IsInCompleteHasBeenSet() const;

                    /**
                     * 获取字段反光（value内容）
0 字段正常
1 字段有反光
                     * @return IsReflect 字段反光（value内容）
0 字段正常
1 字段有反光
                     * 
                     */
                    int64_t GetIsReflect() const;

                    /**
                     * 设置字段反光（value内容）
0 字段正常
1 字段有反光
                     * @param _isReflect 字段反光（value内容）
0 字段正常
1 字段有反光
                     * 
                     */
                    void SetIsReflect(const int64_t& _isReflect);

                    /**
                     * 判断参数 IsReflect 是否已赋值
                     * @return IsReflect 是否已赋值
                     * 
                     */
                    bool IsReflectHasBeenSet() const;

                    /**
                     * 获取字段是否不完整（key内容）
0 字段正常
1 字段不完整
                     * @return IsKeyInComplete 字段是否不完整（key内容）
0 字段正常
1 字段不完整
                     * 
                     */
                    int64_t GetIsKeyInComplete() const;

                    /**
                     * 设置字段是否不完整（key内容）
0 字段正常
1 字段不完整
                     * @param _isKeyInComplete 字段是否不完整（key内容）
0 字段正常
1 字段不完整
                     * 
                     */
                    void SetIsKeyInComplete(const int64_t& _isKeyInComplete);

                    /**
                     * 判断参数 IsKeyInComplete 是否已赋值
                     * @return IsKeyInComplete 是否已赋值
                     * 
                     */
                    bool IsKeyInCompleteHasBeenSet() const;

                    /**
                     * 获取字段反光（key内容）
0 字段正常
1 字段有反光
                     * @return IsKeyReflect 字段反光（key内容）
0 字段正常
1 字段有反光
                     * 
                     */
                    int64_t GetIsKeyReflect() const;

                    /**
                     * 设置字段反光（key内容）
0 字段正常
1 字段有反光
                     * @param _isKeyReflect 字段反光（key内容）
0 字段正常
1 字段有反光
                     * 
                     */
                    void SetIsKeyReflect(const int64_t& _isKeyReflect);

                    /**
                     * 判断参数 IsKeyReflect 是否已赋值
                     * @return IsKeyReflect 是否已赋值
                     * 
                     */
                    bool IsKeyReflectHasBeenSet() const;

                private:

                    /**
                     * 字段内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 结果置信度
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 字段是否不完整（value内容）
0 字段正常
1 字段不完整
                     */
                    int64_t m_isInComplete;
                    bool m_isInCompleteHasBeenSet;

                    /**
                     * 字段反光（value内容）
0 字段正常
1 字段有反光
                     */
                    int64_t m_isReflect;
                    bool m_isReflectHasBeenSet;

                    /**
                     * 字段是否不完整（key内容）
0 字段正常
1 字段不完整
                     */
                    int64_t m_isKeyInComplete;
                    bool m_isKeyInCompleteHasBeenSet;

                    /**
                     * 字段反光（key内容）
0 字段正常
1 字段有反光
                     */
                    int64_t m_isKeyReflect;
                    bool m_isKeyReflectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_CONTENTINFO_H_
