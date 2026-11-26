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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_POINT_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_POINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 图像坐标点结构体
                */
                class Point : public AbstractModel
                {
                public:
                    Point();
                    ~Point() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>横坐标，单位像素，取值范围 [0, 图像宽度]</p>
                     * @return X <p>横坐标，单位像素，取值范围 [0, 图像宽度]</p>
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 设置<p>横坐标，单位像素，取值范围 [0, 图像宽度]</p>
                     * @param _x <p>横坐标，单位像素，取值范围 [0, 图像宽度]</p>
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
                     * 获取<p>纵坐标，单位像素，取值范围 [0, 图像高度]</p>
                     * @return Y <p>纵坐标，单位像素，取值范围 [0, 图像高度]</p>
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 设置<p>纵坐标，单位像素，取值范围 [0, 图像高度]</p>
                     * @param _y <p>纵坐标，单位像素，取值范围 [0, 图像高度]</p>
                     * 
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                private:

                    /**
                     * <p>横坐标，单位像素，取值范围 [0, 图像宽度]</p>
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * <p>纵坐标，单位像素，取值范围 [0, 图像高度]</p>
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_POINT_H_
