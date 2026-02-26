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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_POSITIONS_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_POSITIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 这是OCR在高精度识别下返回的坐标值，采用的是由一个数组表示4个顶点的坐标构成，如[0,1,2,3,4,5,6,7]
- (0,1) 左上角坐标
- (2,3) 右上角坐标
- (4,5) 右下角坐标
- (6,7) 左下角坐标
                */
                class Positions : public AbstractModel
                {
                public:
                    Positions();
                    ~Positions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取这是OCR在高精度识别下返回的坐标值，采用的是由一个数组表示4个顶点的坐标构成，如[0,1,2,3,4,5,6,7]
- (0,1) 左上角坐标
- (2,3) 右上角坐标
- (4,5) 右下角坐标
- (6,7) 左下角坐标
                     * @return Position 这是OCR在高精度识别下返回的坐标值，采用的是由一个数组表示4个顶点的坐标构成，如[0,1,2,3,4,5,6,7]
- (0,1) 左上角坐标
- (2,3) 右上角坐标
- (4,5) 右下角坐标
- (6,7) 左下角坐标
                     * 
                     */
                    std::vector<int64_t> GetPosition() const;

                    /**
                     * 设置这是OCR在高精度识别下返回的坐标值，采用的是由一个数组表示4个顶点的坐标构成，如[0,1,2,3,4,5,6,7]
- (0,1) 左上角坐标
- (2,3) 右上角坐标
- (4,5) 右下角坐标
- (6,7) 左下角坐标
                     * @param _position 这是OCR在高精度识别下返回的坐标值，采用的是由一个数组表示4个顶点的坐标构成，如[0,1,2,3,4,5,6,7]
- (0,1) 左上角坐标
- (2,3) 右上角坐标
- (4,5) 右下角坐标
- (6,7) 左下角坐标
                     * 
                     */
                    void SetPosition(const std::vector<int64_t>& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                private:

                    /**
                     * 这是OCR在高精度识别下返回的坐标值，采用的是由一个数组表示4个顶点的坐标构成，如[0,1,2,3,4,5,6,7]
- (0,1) 左上角坐标
- (2,3) 右上角坐标
- (4,5) 右下角坐标
- (6,7) 左下角坐标
                     */
                    std::vector<int64_t> m_position;
                    bool m_positionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_POSITIONS_H_
