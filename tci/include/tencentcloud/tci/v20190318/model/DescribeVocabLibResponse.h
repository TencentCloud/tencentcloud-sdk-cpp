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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEVOCABLIBRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEVOCABLIBRESPONSE_H_

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
                * DescribeVocabLib返回参数结构体
                */
                class DescribeVocabLibResponse : public AbstractModel
                {
                public:
                    DescribeVocabLibResponse();
                    ~DescribeVocabLibResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回该appid下的所有词汇库名
                     * @return VocabLibNameSet 返回该appid下的所有词汇库名
                     * 
                     */
                    std::vector<std::string> GetVocabLibNameSet() const;

                    /**
                     * 判断参数 VocabLibNameSet 是否已赋值
                     * @return VocabLibNameSet 是否已赋值
                     * 
                     */
                    bool VocabLibNameSetHasBeenSet() const;

                private:

                    /**
                     * 返回该appid下的所有词汇库名
                     */
                    std::vector<std::string> m_vocabLibNameSet;
                    bool m_vocabLibNameSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEVOCABLIBRESPONSE_H_
