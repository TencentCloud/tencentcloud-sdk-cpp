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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKIMAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 水印类型为图片的参数列表
                */
                class WaterMarkImage : public AbstractModel
                {
                public:
                    WaterMarkImage();
                    ~WaterMarkImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下载的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * @return WaterMarkUrl 下载的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * 
                     */
                    std::string GetWaterMarkUrl() const;

                    /**
                     * 设置下载的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * @param _waterMarkUrl 下载的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     * 
                     */
                    void SetWaterMarkUrl(const std::string& _waterMarkUrl);

                    /**
                     * 判断参数 WaterMarkUrl 是否已赋值
                     * @return WaterMarkUrl 是否已赋值
                     * 
                     */
                    bool WaterMarkUrlHasBeenSet() const;

                    /**
                     * 获取画布上该画面左上角的 y 轴坐标，取值范围 [0, 2560]，不能超过画布的高。
                     * @return Top 画布上该画面左上角的 y 轴坐标，取值范围 [0, 2560]，不能超过画布的高。
                     * 
                     */
                    uint64_t GetTop() const;

                    /**
                     * 设置画布上该画面左上角的 y 轴坐标，取值范围 [0, 2560]，不能超过画布的高。
                     * @param _top 画布上该画面左上角的 y 轴坐标，取值范围 [0, 2560]，不能超过画布的高。
                     * 
                     */
                    void SetTop(const uint64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     * 
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取画布上该画面左上角的 x 轴坐标，取值范围 [0, 2560]，不能超过画布的宽。
                     * @return Left 画布上该画面左上角的 x 轴坐标，取值范围 [0, 2560]，不能超过画布的宽。
                     * 
                     */
                    uint64_t GetLeft() const;

                    /**
                     * 设置画布上该画面左上角的 x 轴坐标，取值范围 [0, 2560]，不能超过画布的宽。
                     * @param _left 画布上该画面左上角的 x 轴坐标，取值范围 [0, 2560]，不能超过画布的宽。
                     * 
                     */
                    void SetLeft(const uint64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     * 
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取画布上该画面宽度的相对值，取值范围 [0, 2560]，与Left相加不应超过画布的宽。
                     * @return Width 画布上该画面宽度的相对值，取值范围 [0, 2560]，与Left相加不应超过画布的宽。
                     * 
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置画布上该画面宽度的相对值，取值范围 [0, 2560]，与Left相加不应超过画布的宽。
                     * @param _width 画布上该画面宽度的相对值，取值范围 [0, 2560]，与Left相加不应超过画布的宽。
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
                     * 获取画布上该画面高度的相对值，取值范围 [0, 2560]，与Top相加不应超过画布的高。
                     * @return Height 画布上该画面高度的相对值，取值范围 [0, 2560]，与Top相加不应超过画布的高。
                     * 
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置画布上该画面高度的相对值，取值范围 [0, 2560]，与Top相加不应超过画布的高。
                     * @param _height 画布上该画面高度的相对值，取值范围 [0, 2560]，与Top相加不应超过画布的高。
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
                     * 下载的url地址， 只支持jpg, png, jpeg，大小限制不超过5M。注意，url必须携带格式后缀，url内只支持特定的字符串, 范围是a-z A-Z 0-9 '-', '.', '_', '~', ':', '/', '?', '#', '[', ']' '@', '!', '&', '(', ')', '*', '+', ',', '%', '='
                     */
                    std::string m_waterMarkUrl;
                    bool m_waterMarkUrlHasBeenSet;

                    /**
                     * 画布上该画面左上角的 y 轴坐标，取值范围 [0, 2560]，不能超过画布的高。
                     */
                    uint64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * 画布上该画面左上角的 x 轴坐标，取值范围 [0, 2560]，不能超过画布的宽。
                     */
                    uint64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * 画布上该画面宽度的相对值，取值范围 [0, 2560]，与Left相加不应超过画布的宽。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 画布上该画面高度的相对值，取值范围 [0, 2560]，与Top相加不应超过画布的高。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKIMAGE_H_
