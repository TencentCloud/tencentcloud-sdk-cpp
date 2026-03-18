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
                     * 获取<p>左上顶点x坐标</p>
                     * @return X <p>左上顶点x坐标</p>
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置<p>左上顶点x坐标</p>
                     * @param _x <p>左上顶点x坐标</p>
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
                     * 获取<p>左上顶点y坐标</p>
                     * @return Y <p>左上顶点y坐标</p>
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置<p>左上顶点y坐标</p>
                     * @param _y <p>左上顶点y坐标</p>
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
                     * 获取<p>宽</p><p>单位：px</p>
                     * @return Width <p>宽</p><p>单位：px</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>宽</p><p>单位：px</p>
                     * @param _width <p>宽</p><p>单位：px</p>
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
                     * 获取<p>高</p><p>单位：px</p>
                     * @return Height <p>高</p><p>单位：px</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>高</p><p>单位：px</p>
                     * @param _height <p>高</p><p>单位：px</p>
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
                     * <p>左上顶点x坐标</p>
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * <p>左上顶点y坐标</p>
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * <p>宽</p><p>单位：px</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>高</p><p>单位：px</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_BOUNDINGBOX_H_
