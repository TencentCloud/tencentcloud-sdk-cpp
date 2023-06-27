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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_COMPOSECOUPLETRESPONSE_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_COMPOSECOUPLETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Nlp
    {
        namespace V20190408
        {
            namespace Model
            {
                /**
                * ComposeCouplet返回参数结构体
                */
                class ComposeCoupletResponse : public AbstractModel
                {
                public:
                    ComposeCoupletResponse();
                    ~ComposeCoupletResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取横批。
                     * @return TopScroll 横批。
                     * 
                     */
                    std::string GetTopScroll() const;

                    /**
                     * 判断参数 TopScroll 是否已赋值
                     * @return TopScroll 是否已赋值
                     * 
                     */
                    bool TopScrollHasBeenSet() const;

                    /**
                     * 获取上联与下联。
                     * @return Content 上联与下联。
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取当对联随机生成时，展示随机生成原因。
                     * @return RandomCause 当对联随机生成时，展示随机生成原因。
                     * 
                     */
                    std::string GetRandomCause() const;

                    /**
                     * 判断参数 RandomCause 是否已赋值
                     * @return RandomCause 是否已赋值
                     * 
                     */
                    bool RandomCauseHasBeenSet() const;

                private:

                    /**
                     * 横批。
                     */
                    std::string m_topScroll;
                    bool m_topScrollHasBeenSet;

                    /**
                     * 上联与下联。
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 当对联随机生成时，展示随机生成原因。
                     */
                    std::string m_randomCause;
                    bool m_randomCauseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_COMPOSECOUPLETRESPONSE_H_
