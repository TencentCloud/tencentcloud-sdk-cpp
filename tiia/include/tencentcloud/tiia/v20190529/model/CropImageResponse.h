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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_CROPIMAGERESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_CROPIMAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * CropImage返回参数结构体
                */
                class CropImageResponse : public AbstractModel
                {
                public:
                    CropImageResponse();
                    ~CropImageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取裁剪区域左上角X坐标值
                     * @return X 裁剪区域左上角X坐标值
                     * 
                     */
                    int64_t GetX() const;

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     * 
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取裁剪区域左上角Y坐标值
                     * @return Y 裁剪区域左上角Y坐标值
                     * 
                     */
                    int64_t GetY() const;

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     * 
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取裁剪区域的宽度，单位为像素
                     * @return Width 裁剪区域的宽度，单位为像素
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取裁剪区域的高度，单位为像素
                     * @return Height 裁剪区域的高度，单位为像素
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取原图宽度，单位为像素
                     * @return OriginalWidth 原图宽度，单位为像素
                     * 
                     */
                    int64_t GetOriginalWidth() const;

                    /**
                     * 判断参数 OriginalWidth 是否已赋值
                     * @return OriginalWidth 是否已赋值
                     * 
                     */
                    bool OriginalWidthHasBeenSet() const;

                    /**
                     * 获取原图高度，单位为像素
                     * @return OriginalHeight 原图高度，单位为像素
                     * 
                     */
                    int64_t GetOriginalHeight() const;

                    /**
                     * 判断参数 OriginalHeight 是否已赋值
                     * @return OriginalHeight 是否已赋值
                     * 
                     */
                    bool OriginalHeightHasBeenSet() const;

                    /**
                     * 获取0：抠图正常；
1：原图过长，指原图的高度是宽度的1.8倍以上；
2：原图过宽，指原图的宽度是高度的1.8倍以上；
3：抠图区域过长，指抠图的高度是主体备选框高度的1.6倍以上；
4：抠图区域过宽，指当没有检测到人脸时，抠图区域宽度是检测出的原图主体区域宽度的1.6倍以上；
5：纯色图，指裁剪区域视觉较为单一、缺乏主体部分 ；
6：宽高比异常，指Width : Height取值超出[1, 2.5]的范围；

以上是辅助决策的参考建议，可以根据业务需求选择采纳或忽视。
                     * @return CropResult 0：抠图正常；
1：原图过长，指原图的高度是宽度的1.8倍以上；
2：原图过宽，指原图的宽度是高度的1.8倍以上；
3：抠图区域过长，指抠图的高度是主体备选框高度的1.6倍以上；
4：抠图区域过宽，指当没有检测到人脸时，抠图区域宽度是检测出的原图主体区域宽度的1.6倍以上；
5：纯色图，指裁剪区域视觉较为单一、缺乏主体部分 ；
6：宽高比异常，指Width : Height取值超出[1, 2.5]的范围；

以上是辅助决策的参考建议，可以根据业务需求选择采纳或忽视。
                     * 
                     */
                    int64_t GetCropResult() const;

                    /**
                     * 判断参数 CropResult 是否已赋值
                     * @return CropResult 是否已赋值
                     * 
                     */
                    bool CropResultHasBeenSet() const;

                private:

                    /**
                     * 裁剪区域左上角X坐标值
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 裁剪区域左上角Y坐标值
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 裁剪区域的宽度，单位为像素
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 裁剪区域的高度，单位为像素
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 原图宽度，单位为像素
                     */
                    int64_t m_originalWidth;
                    bool m_originalWidthHasBeenSet;

                    /**
                     * 原图高度，单位为像素
                     */
                    int64_t m_originalHeight;
                    bool m_originalHeightHasBeenSet;

                    /**
                     * 0：抠图正常；
1：原图过长，指原图的高度是宽度的1.8倍以上；
2：原图过宽，指原图的宽度是高度的1.8倍以上；
3：抠图区域过长，指抠图的高度是主体备选框高度的1.6倍以上；
4：抠图区域过宽，指当没有检测到人脸时，抠图区域宽度是检测出的原图主体区域宽度的1.6倍以上；
5：纯色图，指裁剪区域视觉较为单一、缺乏主体部分 ；
6：宽高比异常，指Width : Height取值超出[1, 2.5]的范围；

以上是辅助决策的参考建议，可以根据业务需求选择采纳或忽视。
                     */
                    int64_t m_cropResult;
                    bool m_cropResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_CROPIMAGERESPONSE_H_
