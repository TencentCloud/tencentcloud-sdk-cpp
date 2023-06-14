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

#ifndef TENCENTCLOUD_NLP_V20190408_MODEL_WRITING_H_
#define TENCENTCLOUD_NLP_V20190408_MODEL_WRITING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 文本续写结果
                */
                class Writing : public AbstractModel
                {
                public:
                    Writing();
                    ~Writing() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取续写的文本。
                     * @return TargetText 续写的文本。
                     * 
                     */
                    std::string GetTargetText() const;

                    /**
                     * 设置续写的文本。
                     * @param _targetText 续写的文本。
                     * 
                     */
                    void SetTargetText(const std::string& _targetText);

                    /**
                     * 判断参数 TargetText 是否已赋值
                     * @return TargetText 是否已赋值
                     * 
                     */
                    bool TargetTextHasBeenSet() const;

                    /**
                     * 获取续写的前缀。
                     * @return PrefixText 续写的前缀。
                     * 
                     */
                    std::string GetPrefixText() const;

                    /**
                     * 设置续写的前缀。
                     * @param _prefixText 续写的前缀。
                     * 
                     */
                    void SetPrefixText(const std::string& _prefixText);

                    /**
                     * 判断参数 PrefixText 是否已赋值
                     * @return PrefixText 是否已赋值
                     * 
                     */
                    bool PrefixTextHasBeenSet() const;

                private:

                    /**
                     * 续写的文本。
                     */
                    std::string m_targetText;
                    bool m_targetTextHasBeenSet;

                    /**
                     * 续写的前缀。
                     */
                    std::string m_prefixText;
                    bool m_prefixTextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_NLP_V20190408_MODEL_WRITING_H_
