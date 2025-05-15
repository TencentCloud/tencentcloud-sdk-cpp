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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_BOUNDINGBOX_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_BOUNDINGBOX_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 段落文本框位置：x，y代表左上顶点，width和height代表宽高
                */
                class BoundingBox : public AbstractModel
                {
                public:
                    BoundingBox();
                    ~BoundingBox() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取左上顶点x坐标
                     * @return X 左上顶点x坐标
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置左上顶点x坐标
                     * @param _x 左上顶点x坐标
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
                     * 获取左上顶点y坐标
                     * @return Y 左上顶点y坐标
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置左上顶点y坐标
                     * @param _y 左上顶点y坐标
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
                     * 获取宽
                     * @return Width 宽
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽
                     * @param _width 宽
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取高
                     * @return Height 高
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高
                     * @param _height 高
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                private:

                    /**
                     * 左上顶点x坐标
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 左上顶点y坐标
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 宽
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_BOUNDINGBOX_H_
