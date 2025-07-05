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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DELETEVOCABREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DELETEVOCABREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DeleteVocab请求参数结构体
                */
                class DeleteVocabRequest : public AbstractModel
                {
                public:
                    DeleteVocabRequest();
                    ~DeleteVocabRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除词汇的词汇库名
                     * @return VocabLibName 要删除词汇的词汇库名
                     * 
                     */
                    std::string GetVocabLibName() const;

                    /**
                     * 设置要删除词汇的词汇库名
                     * @param _vocabLibName 要删除词汇的词汇库名
                     * 
                     */
                    void SetVocabLibName(const std::string& _vocabLibName);

                    /**
                     * 判断参数 VocabLibName 是否已赋值
                     * @return VocabLibName 是否已赋值
                     * 
                     */
                    bool VocabLibNameHasBeenSet() const;

                    /**
                     * 获取要删除的词汇列表
                     * @return VocabList 要删除的词汇列表
                     * 
                     */
                    std::vector<std::string> GetVocabList() const;

                    /**
                     * 设置要删除的词汇列表
                     * @param _vocabList 要删除的词汇列表
                     * 
                     */
                    void SetVocabList(const std::vector<std::string>& _vocabList);

                    /**
                     * 判断参数 VocabList 是否已赋值
                     * @return VocabList 是否已赋值
                     * 
                     */
                    bool VocabListHasBeenSet() const;

                private:

                    /**
                     * 要删除词汇的词汇库名
                     */
                    std::string m_vocabLibName;
                    bool m_vocabLibNameHasBeenSet;

                    /**
                     * 要删除的词汇列表
                     */
                    std::vector<std::string> m_vocabList;
                    bool m_vocabListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DELETEVOCABREQUEST_H_
