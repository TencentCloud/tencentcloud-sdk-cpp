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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_COORDINATE_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_COORDINATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 坐标
                */
                class Coordinate : public AbstractModel
                {
                public:
                    Coordinate();
                    ~Coordinate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取左上角横坐标
                     * @return Cx 左上角横坐标
                     */
                    int64_t GetCx() const;

                    /**
                     * 设置左上角横坐标
                     * @param Cx 左上角横坐标
                     */
                    void SetCx(const int64_t& _cx);

                    /**
                     * 判断参数 Cx 是否已赋值
                     * @return Cx 是否已赋值
                     */
                    bool CxHasBeenSet() const;

                    /**
                     * 获取左上角纵坐标
                     * @return Cy 左上角纵坐标
                     */
                    int64_t GetCy() const;

                    /**
                     * 设置左上角纵坐标
                     * @param Cy 左上角纵坐标
                     */
                    void SetCy(const int64_t& _cy);

                    /**
                     * 判断参数 Cy 是否已赋值
                     * @return Cy 是否已赋值
                     */
                    bool CyHasBeenSet() const;

                    /**
                     * 获取高度
                     * @return Height 高度
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高度
                     * @param Height 高度
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取宽度
                     * @return Width 宽度
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽度
                     * @param Width 宽度
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                private:

                    /**
                     * 左上角横坐标
                     */
                    int64_t m_cx;
                    bool m_cxHasBeenSet;

                    /**
                     * 左上角纵坐标
                     */
                    int64_t m_cy;
                    bool m_cyHasBeenSet;

                    /**
                     * 高度
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 宽度
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_COORDINATE_H_
