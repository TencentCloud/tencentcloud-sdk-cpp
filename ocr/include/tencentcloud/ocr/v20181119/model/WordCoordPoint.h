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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_WORDCOORDPOINT_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_WORDCOORDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/Coord.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 英文OCR识别出的单词在原图中的四点坐标数组
                */
                class WordCoordPoint : public AbstractModel
                {
                public:
                    WordCoordPoint();
                    ~WordCoordPoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取英文OCR识别出的每个单词在原图中的四点坐标。
                     * @return WordCoordinate 英文OCR识别出的每个单词在原图中的四点坐标。
                     * 
                     */
                    std::vector<Coord> GetWordCoordinate() const;

                    /**
                     * 设置英文OCR识别出的每个单词在原图中的四点坐标。
                     * @param _wordCoordinate 英文OCR识别出的每个单词在原图中的四点坐标。
                     * 
                     */
                    void SetWordCoordinate(const std::vector<Coord>& _wordCoordinate);

                    /**
                     * 判断参数 WordCoordinate 是否已赋值
                     * @return WordCoordinate 是否已赋值
                     * 
                     */
                    bool WordCoordinateHasBeenSet() const;

                private:

                    /**
                     * 英文OCR识别出的每个单词在原图中的四点坐标。
                     */
                    std::vector<Coord> m_wordCoordinate;
                    bool m_wordCoordinateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_WORDCOORDPOINT_H_
