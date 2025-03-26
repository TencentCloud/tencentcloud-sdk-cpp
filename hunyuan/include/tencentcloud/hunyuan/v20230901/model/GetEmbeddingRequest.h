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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETEMBEDDINGREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETEMBEDDINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * GetEmbedding请求参数结构体
                */
                class GetEmbeddingRequest : public AbstractModel
                {
                public:
                    GetEmbeddingRequest();
                    ~GetEmbeddingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入文本。总长度不超过 1024 个 Token，超过则会截断最后面的内容。
                     * @return Input 输入文本。总长度不超过 1024 个 Token，超过则会截断最后面的内容。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置输入文本。总长度不超过 1024 个 Token，超过则会截断最后面的内容。
                     * @param _input 输入文本。总长度不超过 1024 个 Token，超过则会截断最后面的内容。
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取输入文本数组。输入数组总长度不超过 50 。
                     * @return InputList 输入文本数组。输入数组总长度不超过 50 。
                     * 
                     */
                    std::vector<std::string> GetInputList() const;

                    /**
                     * 设置输入文本数组。输入数组总长度不超过 50 。
                     * @param _inputList 输入文本数组。输入数组总长度不超过 50 。
                     * 
                     */
                    void SetInputList(const std::vector<std::string>& _inputList);

                    /**
                     * 判断参数 InputList 是否已赋值
                     * @return InputList 是否已赋值
                     * 
                     */
                    bool InputListHasBeenSet() const;

                private:

                    /**
                     * 输入文本。总长度不超过 1024 个 Token，超过则会截断最后面的内容。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 输入文本数组。输入数组总长度不超过 50 。
                     */
                    std::vector<std::string> m_inputList;
                    bool m_inputListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_GETEMBEDDINGREQUEST_H_
