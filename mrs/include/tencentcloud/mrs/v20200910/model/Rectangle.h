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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_RECTANGLE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_RECTANGLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 位置坐标
                */
                class Rectangle : public AbstractModel
                {
                public:
                    Rectangle();
                    ~Rectangle() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取x坐标
                     * @return X x坐标
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置x坐标
                     * @param _x x坐标
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
                     * 获取y坐标
                     * @return Y y坐标
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置y坐标
                     * @param _y y坐标
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
                     * @return W 宽
                     * 
                     */
                    int64_t GetW() const;

                    /**
                     * 设置宽
                     * @param _w 宽
                     * 
                     */
                    void SetW(const int64_t& _w);

                    /**
                     * 判断参数 W 是否已赋值
                     * @return W 是否已赋值
                     * 
                     */
                    bool WHasBeenSet() const;

                    /**
                     * 获取高
                     * @return H 高
                     * 
                     */
                    int64_t GetH() const;

                    /**
                     * 设置高
                     * @param _h 高
                     * 
                     */
                    void SetH(const int64_t& _h);

                    /**
                     * 判断参数 H 是否已赋值
                     * @return H 是否已赋值
                     * 
                     */
                    bool HHasBeenSet() const;

                private:

                    /**
                     * x坐标
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * y坐标
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 宽
                     */
                    int64_t m_w;
                    bool m_wHasBeenSet;

                    /**
                     * 高
                     */
                    int64_t m_h;
                    bool m_hHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_RECTANGLE_H_
