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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUOTEINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUOTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * QuoteInfo 参考来源索引信息
                */
                class ConversationQuoteInfo : public AbstractModel
                {
                public:
                    ConversationQuoteInfo();
                    ~ConversationQuoteInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参考来源的索引值</p>
                     * @return Index <p>参考来源的索引值</p>
                     * 
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置<p>参考来源的索引值</p>
                     * @param _index <p>参考来源的索引值</p>
                     * 
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>参考来源位置</p>
                     * @return Position <p>参考来源位置</p>
                     * 
                     */
                    int64_t GetPosition() const;

                    /**
                     * 设置<p>参考来源位置</p>
                     * @param _position <p>参考来源位置</p>
                     * 
                     */
                    void SetPosition(const int64_t& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * <p>参考来源的索引值</p>
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>参考来源位置</p>
                     */
                    int64_t m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONVERSATIONQUOTEINFO_H_
