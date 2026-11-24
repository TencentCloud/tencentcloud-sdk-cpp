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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEPROMPTTEMPLATERESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEPROMPTTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreatePromptTemplate返回参数结构体
                */
                class CreatePromptTemplateResponse : public AbstractModel
                {
                public:
                    CreatePromptTemplateResponse();
                    ~CreatePromptTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>提示词模板ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PromptTemplateId <p>提示词模板ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPromptTemplateId() const;

                    /**
                     * 判断参数 PromptTemplateId 是否已赋值
                     * @return PromptTemplateId 是否已赋值
                     * 
                     */
                    bool PromptTemplateIdHasBeenSet() const;

                private:

                    /**
                     * <p>提示词模板ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_promptTemplateId;
                    bool m_promptTemplateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEPROMPTTEMPLATERESPONSE_H_
