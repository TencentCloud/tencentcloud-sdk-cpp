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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_REPLYMESSAGE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_REPLYMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ReplyContent.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 回复消息
                */
                class ReplyMessage : public AbstractModel
                {
                public:
                    ReplyMessage();
                    ~ReplyMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息数组，包含多个消息对象
                     * @return ContentList 消息数组，包含多个消息对象
                     * 
                     */
                    std::vector<ReplyContent> GetContentList() const;

                    /**
                     * 设置消息数组，包含多个消息对象
                     * @param _contentList 消息数组，包含多个消息对象
                     * 
                     */
                    void SetContentList(const std::vector<ReplyContent>& _contentList);

                    /**
                     * 判断参数 ContentList 是否已赋值
                     * @return ContentList 是否已赋值
                     * 
                     */
                    bool ContentListHasBeenSet() const;

                private:

                    /**
                     * 消息数组，包含多个消息对象
                     */
                    std::vector<ReplyContent> m_contentList;
                    bool m_contentListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_REPLYMESSAGE_H_
