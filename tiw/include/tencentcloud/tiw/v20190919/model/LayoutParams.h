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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_LAYOUTPARAMS_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_LAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 自定义混流配置布局参数
                */
                class LayoutParams : public AbstractModel
                {
                public:
                    LayoutParams();
                    ~LayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流画面宽，取值范围[2,3000]
                     * @return Width 流画面宽，取值范围[2,3000]
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置流画面宽，取值范围[2,3000]
                     * @param _width 流画面宽，取值范围[2,3000]
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
                     * 获取流画面高，取值范围[2,3000]
                     * @return Height 流画面高，取值范围[2,3000]
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置流画面高，取值范围[2,3000]
                     * @param _height 流画面高，取值范围[2,3000]
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取当前画面左上角顶点相对于Canvas左上角顶点的x轴偏移量，默认为0，取值范围[0,3000]
                     * @return X 当前画面左上角顶点相对于Canvas左上角顶点的x轴偏移量，默认为0，取值范围[0,3000]
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置当前画面左上角顶点相对于Canvas左上角顶点的x轴偏移量，默认为0，取值范围[0,3000]
                     * @param _x 当前画面左上角顶点相对于Canvas左上角顶点的x轴偏移量，默认为0，取值范围[0,3000]
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
                     * 获取当前画面左上角顶点相对于Canvas左上角顶点的y轴偏移量，默认为0， 取值范围[0,3000]
                     * @return Y 当前画面左上角顶点相对于Canvas左上角顶点的y轴偏移量，默认为0， 取值范围[0,3000]
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置当前画面左上角顶点相对于Canvas左上角顶点的y轴偏移量，默认为0， 取值范围[0,3000]
                     * @param _y 当前画面左上角顶点相对于Canvas左上角顶点的y轴偏移量，默认为0， 取值范围[0,3000]
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
                     * 获取画面z轴位置，默认为0
z轴确定了重叠画面的遮盖顺序，z轴值大的画面处于顶层
                     * @return ZOrder 画面z轴位置，默认为0
z轴确定了重叠画面的遮盖顺序，z轴值大的画面处于顶层
                     * 
                     */
                    int64_t GetZOrder() const;

                    /**
                     * 设置画面z轴位置，默认为0
z轴确定了重叠画面的遮盖顺序，z轴值大的画面处于顶层
                     * @param _zOrder 画面z轴位置，默认为0
z轴确定了重叠画面的遮盖顺序，z轴值大的画面处于顶层
                     * 
                     */
                    void SetZOrder(const int64_t& _zOrder);

                    /**
                     * 判断参数 ZOrder 是否已赋值
                     * @return ZOrder 是否已赋值
                     * 
                     */
                    bool ZOrderHasBeenSet() const;

                private:

                    /**
                     * 流画面宽，取值范围[2,3000]
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 流画面高，取值范围[2,3000]
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 当前画面左上角顶点相对于Canvas左上角顶点的x轴偏移量，默认为0，取值范围[0,3000]
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 当前画面左上角顶点相对于Canvas左上角顶点的y轴偏移量，默认为0， 取值范围[0,3000]
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 画面z轴位置，默认为0
z轴确定了重叠画面的遮盖顺序，z轴值大的画面处于顶层
                     */
                    int64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_LAYOUTPARAMS_H_
