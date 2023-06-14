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

#ifndef TENCENTCLOUD_ECC_V20181213_MODEL_SENTENCESUGGEST_H_
#define TENCENTCLOUD_ECC_V20181213_MODEL_SENTENCESUGGEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecc/v20181213/model/ErrorCoordinate.h>


namespace TencentCloud
{
    namespace Ecc
    {
        namespace V20181213
        {
            namespace Model
            {
                /**
                * 句子批阅建议
                */
                class SentenceSuggest : public AbstractModel
                {
                public:
                    SentenceSuggest();
                    ~SentenceSuggest() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取错误类型
                     * @return ErrorType 错误类型
                     * 
                     */
                    std::string GetErrorType() const;

                    /**
                     * 设置错误类型
                     * @param _errorType 错误类型
                     * 
                     */
                    void SetErrorType(const std::string& _errorType);

                    /**
                     * 判断参数 ErrorType 是否已赋值
                     * @return ErrorType 是否已赋值
                     * 
                     */
                    bool ErrorTypeHasBeenSet() const;

                    /**
                     * 获取原始单词
                     * @return Origin 原始单词
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置原始单词
                     * @param _origin 原始单词
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取替换成 的单词
                     * @return Replace 替换成 的单词
                     * 
                     */
                    std::string GetReplace() const;

                    /**
                     * 设置替换成 的单词
                     * @param _replace 替换成 的单词
                     * 
                     */
                    void SetReplace(const std::string& _replace);

                    /**
                     * 判断参数 Replace 是否已赋值
                     * @return Replace 是否已赋值
                     * 
                     */
                    bool ReplaceHasBeenSet() const;

                    /**
                     * 获取提示信息
                     * @return Message 提示信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置提示信息
                     * @param _message 提示信息
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取维度单词位置，在句子的第几个到第几个单词之间
                     * @return ErrorPosition 维度单词位置，在句子的第几个到第几个单词之间
                     * 
                     */
                    std::vector<int64_t> GetErrorPosition() const;

                    /**
                     * 设置维度单词位置，在句子的第几个到第几个单词之间
                     * @param _errorPosition 维度单词位置，在句子的第几个到第几个单词之间
                     * 
                     */
                    void SetErrorPosition(const std::vector<int64_t>& _errorPosition);

                    /**
                     * 判断参数 ErrorPosition 是否已赋值
                     * @return ErrorPosition 是否已赋值
                     * 
                     */
                    bool ErrorPositionHasBeenSet() const;

                    /**
                     * 获取维度单词坐标，错误单词在图片中的坐标，只有传图片时正常返回，传文字时返回[ ]
                     * @return ErrorCoordinates 维度单词坐标，错误单词在图片中的坐标，只有传图片时正常返回，传文字时返回[ ]
                     * 
                     */
                    std::vector<ErrorCoordinate> GetErrorCoordinates() const;

                    /**
                     * 设置维度单词坐标，错误单词在图片中的坐标，只有传图片时正常返回，传文字时返回[ ]
                     * @param _errorCoordinates 维度单词坐标，错误单词在图片中的坐标，只有传图片时正常返回，传文字时返回[ ]
                     * 
                     */
                    void SetErrorCoordinates(const std::vector<ErrorCoordinate>& _errorCoordinates);

                    /**
                     * 判断参数 ErrorCoordinates 是否已赋值
                     * @return ErrorCoordinates 是否已赋值
                     * 
                     */
                    bool ErrorCoordinatesHasBeenSet() const;

                private:

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 错误类型
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * 原始单词
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 替换成 的单词
                     */
                    std::string m_replace;
                    bool m_replaceHasBeenSet;

                    /**
                     * 提示信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 维度单词位置，在句子的第几个到第几个单词之间
                     */
                    std::vector<int64_t> m_errorPosition;
                    bool m_errorPositionHasBeenSet;

                    /**
                     * 维度单词坐标，错误单词在图片中的坐标，只有传图片时正常返回，传文字时返回[ ]
                     */
                    std::vector<ErrorCoordinate> m_errorCoordinates;
                    bool m_errorCoordinatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECC_V20181213_MODEL_SENTENCESUGGEST_H_
