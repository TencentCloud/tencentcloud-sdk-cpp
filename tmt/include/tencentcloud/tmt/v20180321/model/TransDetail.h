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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_TRANSDETAIL_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_TRANSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tmt/v20180321/model/BoundingBox.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 大模型图片翻译详情信息
                */
                class TransDetail : public AbstractModel
                {
                public:
                    TransDetail();
                    ~TransDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前行的原文本
                     * @return SourceLineText 当前行的原文本
                     * 
                     */
                    std::string GetSourceLineText() const;

                    /**
                     * 设置当前行的原文本
                     * @param _sourceLineText 当前行的原文本
                     * 
                     */
                    void SetSourceLineText(const std::string& _sourceLineText);

                    /**
                     * 判断参数 SourceLineText 是否已赋值
                     * @return SourceLineText 是否已赋值
                     * 
                     */
                    bool SourceLineTextHasBeenSet() const;

                    /**
                     * 获取当前行的译文
                     * @return TargetLineText 当前行的译文
                     * 
                     */
                    std::string GetTargetLineText() const;

                    /**
                     * 设置当前行的译文
                     * @param _targetLineText 当前行的译文
                     * 
                     */
                    void SetTargetLineText(const std::string& _targetLineText);

                    /**
                     * 判断参数 TargetLineText 是否已赋值
                     * @return TargetLineText 是否已赋值
                     * 
                     */
                    bool TargetLineTextHasBeenSet() const;

                    /**
                     * 获取段落文本框位置
                     * @return BoundingBox 段落文本框位置
                     * 
                     */
                    BoundingBox GetBoundingBox() const;

                    /**
                     * 设置段落文本框位置
                     * @param _boundingBox 段落文本框位置
                     * 
                     */
                    void SetBoundingBox(const BoundingBox& _boundingBox);

                    /**
                     * 判断参数 BoundingBox 是否已赋值
                     * @return BoundingBox 是否已赋值
                     * 
                     */
                    bool BoundingBoxHasBeenSet() const;

                    /**
                     * 获取行数
                     * @return LinesCount 行数
                     * 
                     */
                    int64_t GetLinesCount() const;

                    /**
                     * 设置行数
                     * @param _linesCount 行数
                     * 
                     */
                    void SetLinesCount(const int64_t& _linesCount);

                    /**
                     * 判断参数 LinesCount 是否已赋值
                     * @return LinesCount 是否已赋值
                     * 
                     */
                    bool LinesCountHasBeenSet() const;

                    /**
                     * 获取行高
                     * @return LineHeight 行高
                     * 
                     */
                    int64_t GetLineHeight() const;

                    /**
                     * 设置行高
                     * @param _lineHeight 行高
                     * 
                     */
                    void SetLineHeight(const int64_t& _lineHeight);

                    /**
                     * 判断参数 LineHeight 是否已赋值
                     * @return LineHeight 是否已赋值
                     * 
                     */
                    bool LineHeightHasBeenSet() const;

                    /**
                     * 获取正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。
                     * @return SpamCode 正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。
                     * 
                     */
                    int64_t GetSpamCode() const;

                    /**
                     * 设置正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。
                     * @param _spamCode 正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。
                     * 
                     */
                    void SetSpamCode(const int64_t& _spamCode);

                    /**
                     * 判断参数 SpamCode 是否已赋值
                     * @return SpamCode 是否已赋值
                     * 
                     */
                    bool SpamCodeHasBeenSet() const;

                private:

                    /**
                     * 当前行的原文本
                     */
                    std::string m_sourceLineText;
                    bool m_sourceLineTextHasBeenSet;

                    /**
                     * 当前行的译文
                     */
                    std::string m_targetLineText;
                    bool m_targetLineTextHasBeenSet;

                    /**
                     * 段落文本框位置
                     */
                    BoundingBox m_boundingBox;
                    bool m_boundingBoxHasBeenSet;

                    /**
                     * 行数
                     */
                    int64_t m_linesCount;
                    bool m_linesCountHasBeenSet;

                    /**
                     * 行高
                     */
                    int64_t m_lineHeight;
                    bool m_lineHeightHasBeenSet;

                    /**
                     * 正常段落spam_code字段为0；如果存在spam_code字段且值大于0（1: 命中垃圾检查；2: 命中安全策略；3: 其他。），则命中安全检查被过滤。
                     */
                    int64_t m_spamCode;
                    bool m_spamCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_TRANSDETAIL_H_
