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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTSRESULTDETAILLOCATION_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTSRESULTDETAILLOCATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * 图片详情位置信息
                */
                class ImageResultsResultDetailLocation : public AbstractModel
                {
                public:
                    ImageResultsResultDetailLocation();
                    ~ImageResultsResultDetailLocation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取x坐标
                     * @return X x坐标
                     * 
                     */
                    double GetX() const;

                    /**
                     * 设置x坐标
                     * @param _x x坐标
                     * 
                     */
                    void SetX(const double& _x);

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
                    double GetY() const;

                    /**
                     * 设置y坐标
                     * @param _y y坐标
                     * 
                     */
                    void SetY(const double& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取宽度
                     * @return Width 宽度
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置宽度
                     * @param _width 宽度
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
                     * 获取高度
                     * @return Height 高度
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置高度
                     * @param _height 高度
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
                     * 获取旋转角度
                     * @return Rotate 旋转角度
                     * 
                     */
                    double GetRotate() const;

                    /**
                     * 设置旋转角度
                     * @param _rotate 旋转角度
                     * 
                     */
                    void SetRotate(const double& _rotate);

                    /**
                     * 判断参数 Rotate 是否已赋值
                     * @return Rotate 是否已赋值
                     * 
                     */
                    bool RotateHasBeenSet() const;

                private:

                    /**
                     * x坐标
                     */
                    double m_x;
                    bool m_xHasBeenSet;

                    /**
                     * y坐标
                     */
                    double m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 宽度
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 高度
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 旋转角度
                     */
                    double m_rotate;
                    bool m_rotateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_IMAGERESULTSRESULTDETAILLOCATION_H_
