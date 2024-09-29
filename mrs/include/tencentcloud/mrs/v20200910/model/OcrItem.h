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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_OCRITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_OCRITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Coordinate.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 图片进行OCR之后,包含字符块的信息，包含字符与坐标，一个图片进行OCR之后可能分为多个这样的块
                */
                class OcrItem : public AbstractModel
                {
                public:
                    OcrItem();
                    ~OcrItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取图片中文字的字符串
                     * @return Words 图片中文字的字符串
                     * 
                     */
                    std::string GetWords() const;

                    /**
                     * 设置图片中文字的字符串
                     * @param _words 图片中文字的字符串
                     * 
                     */
                    void SetWords(const std::string& _words);

                    /**
                     * 判断参数 Words 是否已赋值
                     * @return Words 是否已赋值
                     * 
                     */
                    bool WordsHasBeenSet() const;

                    /**
                     * 获取Words 中每个文字的坐标数组，顺序与Words中的字符顺序一致
                     * @return Coords Words 中每个文字的坐标数组，顺序与Words中的字符顺序一致
                     * 
                     */
                    std::vector<Coordinate> GetCoords() const;

                    /**
                     * 设置Words 中每个文字的坐标数组，顺序与Words中的字符顺序一致
                     * @param _coords Words 中每个文字的坐标数组，顺序与Words中的字符顺序一致
                     * 
                     */
                    void SetCoords(const std::vector<Coordinate>& _coords);

                    /**
                     * 判断参数 Coords 是否已赋值
                     * @return Coords 是否已赋值
                     * 
                     */
                    bool CoordsHasBeenSet() const;

                    /**
                     * 获取整个字符块的坐标信息
                     * @return WordCoords 整个字符块的坐标信息
                     * 
                     */
                    Coordinate GetWordCoords() const;

                    /**
                     * 设置整个字符块的坐标信息
                     * @param _wordCoords 整个字符块的坐标信息
                     * 
                     */
                    void SetWordCoords(const Coordinate& _wordCoords);

                    /**
                     * 判断参数 WordCoords 是否已赋值
                     * @return WordCoords 是否已赋值
                     * 
                     */
                    bool WordCoordsHasBeenSet() const;

                private:

                    /**
                     * 图片中文字的字符串
                     */
                    std::string m_words;
                    bool m_wordsHasBeenSet;

                    /**
                     * Words 中每个文字的坐标数组，顺序与Words中的字符顺序一致
                     */
                    std::vector<Coordinate> m_coords;
                    bool m_coordsHasBeenSet;

                    /**
                     * 整个字符块的坐标信息
                     */
                    Coordinate m_wordCoords;
                    bool m_wordCoordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_OCRITEM_H_
