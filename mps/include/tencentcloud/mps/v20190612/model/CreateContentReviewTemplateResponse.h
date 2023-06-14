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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATECONTENTREVIEWTEMPLATERESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATECONTENTREVIEWTEMPLATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateContentReviewTemplate返回参数结构体
                */
                class CreateContentReviewTemplateResponse : public AbstractModel
                {
                public:
                    CreateContentReviewTemplateResponse();
                    ~CreateContentReviewTemplateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取内容审核模板唯一标识。
                     * @return Definition 内容审核模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * 内容审核模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATECONTENTREVIEWTEMPLATERESPONSE_H_
