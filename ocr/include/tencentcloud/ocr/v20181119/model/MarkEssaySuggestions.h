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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_MARKESSAYSUGGESTIONS_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_MARKESSAYSUGGESTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Positions.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 作文批改建议
                */
                class MarkEssaySuggestions : public AbstractModel
                {
                public:
                    MarkEssaySuggestions();
                    ~MarkEssaySuggestions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作文批改序号
                     * @return ID 作文批改序号
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置作文批改序号
                     * @param _iD 作文批改序号
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取批改类型：主要包括：词汇、语句
                     * @return Type 批改类型：主要包括：词汇、语句
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置批改类型：主要包括：词汇、语句
                     * @param _type 批改类型：主要包括：词汇、语句
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
                     * 获取子类型，基于Type返回二级类型

词汇： 错别字、使用拼音、词语误用、词语冗余、词汇贫乏、多字/漏字

语句：语法硬伤、逻辑问题、表达不佳、标点误用、优美句子
                     * @return SubType 子类型，基于Type返回二级类型

词汇： 错别字、使用拼音、词语误用、词语冗余、词汇贫乏、多字/漏字

语句：语法硬伤、逻辑问题、表达不佳、标点误用、优美句子
                     * 
                     */
                    std::string GetSubType() const;

                    /**
                     * 设置子类型，基于Type返回二级类型

词汇： 错别字、使用拼音、词语误用、词语冗余、词汇贫乏、多字/漏字

语句：语法硬伤、逻辑问题、表达不佳、标点误用、优美句子
                     * @param _subType 子类型，基于Type返回二级类型

词汇： 错别字、使用拼音、词语误用、词语冗余、词汇贫乏、多字/漏字

语句：语法硬伤、逻辑问题、表达不佳、标点误用、优美句子
                     * 
                     */
                    void SetSubType(const std::string& _subType);

                    /**
                     * 判断参数 SubType 是否已赋值
                     * @return SubType 是否已赋值
                     * 
                     */
                    bool SubTypeHasBeenSet() const;

                    /**
                     * 获取原文内容
                     * @return Origin 原文内容
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置原文内容
                     * @param _origin 原文内容
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
                     * 获取批改后的内容
                     * @return Replace 批改后的内容
                     * 
                     */
                    std::string GetReplace() const;

                    /**
                     * 设置批改后的内容
                     * @param _replace 批改后的内容
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
                     * 获取点评内容
                     * @return Message 点评内容
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置点评内容
                     * @param _message 点评内容
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
                     * 获取array[][]二维数组，原文内容可能存在跨行的句子，会有多组坐标返回

切图区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
                     * @return Positions array[][]二维数组，原文内容可能存在跨行的句子，会有多组坐标返回

切图区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
                     * 
                     */
                    std::vector<Positions> GetPositions() const;

                    /**
                     * 设置array[][]二维数组，原文内容可能存在跨行的句子，会有多组坐标返回

切图区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
                     * @param _positions array[][]二维数组，原文内容可能存在跨行的句子，会有多组坐标返回

切图区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
                     * 
                     */
                    void SetPositions(const std::vector<Positions>& _positions);

                    /**
                     * 判断参数 Positions 是否已赋值
                     * @return Positions 是否已赋值
                     * 
                     */
                    bool PositionsHasBeenSet() const;

                private:

                    /**
                     * 作文批改序号
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 批改类型：主要包括：词汇、语句
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 子类型，基于Type返回二级类型

词汇： 错别字、使用拼音、词语误用、词语冗余、词汇贫乏、多字/漏字

语句：语法硬伤、逻辑问题、表达不佳、标点误用、优美句子
                     */
                    std::string m_subType;
                    bool m_subTypeHasBeenSet;

                    /**
                     * 原文内容
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 批改后的内容
                     */
                    std::string m_replace;
                    bool m_replaceHasBeenSet;

                    /**
                     * 点评内容
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * array[][]二维数组，原文内容可能存在跨行的句子，会有多组坐标返回

切图区域的4个角点坐标, 是个长度为8的数组

[0,1,2,3,4,5,6,7]

(0,1) 左上角坐标
(2,3) 右上角坐标
(4,5) 右下角坐标
(6,7) 左下角坐标
                     */
                    std::vector<Positions> m_positions;
                    bool m_positionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_MARKESSAYSUGGESTIONS_H_
