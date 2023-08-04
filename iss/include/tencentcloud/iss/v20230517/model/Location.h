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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LOCATION_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AI识别结果在画面中坐标
                */
                class Location : public AbstractModel
                {
                public:
                    Location();
                    ~Location() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取左上角 X 坐标轴
                     * @return X 左上角 X 坐标轴
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置左上角 X 坐标轴
                     * @param _x 左上角 X 坐标轴
                     * 
                     */
                    void SetX(const int64_t& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取左上角 Y 坐标轴
                     * @return Y 左上角 Y 坐标轴
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置左上角 Y 坐标轴
                     * @param _y 左上角 Y 坐标轴
                     * 
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取方框宽
                     * @return Width 方框宽
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置方框宽
                     * @param _width 方框宽
                     * 
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取方框高
                     * @return Height 方框高
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置方框高
                     * @param _height 方框高
                     * 
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 左上角 X 坐标轴
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 左上角 Y 坐标轴
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 方框宽
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 方框高
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LOCATION_H_
