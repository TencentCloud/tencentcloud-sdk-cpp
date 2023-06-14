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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DELETEWORDSAMPLESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DELETEWORDSAMPLESREQUEST_H_

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
                * DeleteWordSamples请求参数结构体
                */
                class DeleteWordSamplesRequest : public AbstractModel
                {
                public:
                    DeleteWordSamplesRequest();
                    ~DeleteWordSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词，数组长度限制：100 个词。
                     * @return Keywords 关键词，数组长度限制：100 个词。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置关键词，数组长度限制：100 个词。
                     * @param _keywords 关键词，数组长度限制：100 个词。
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                private:

                    /**
                     * 关键词，数组长度限制：100 个词。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DELETEWORDSAMPLESREQUEST_H_
