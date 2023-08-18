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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_TEXTGENERATIONCHOICES_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_TEXTGENERATIONCHOICES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/nlp/v20190408/model/TextGenerationMessage.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * TextGenerationChoices
                */
                class TextGenerationChoices : public AbstractModel
                {
                public:
                    TextGenerationChoices();
                    ~TextGenerationChoices() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextGenerationMessage GetMessage() const;

                    /**
                     * 设置内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const TextGenerationMessage& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextGenerationMessage m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_TEXTGENERATIONCHOICES_H_
