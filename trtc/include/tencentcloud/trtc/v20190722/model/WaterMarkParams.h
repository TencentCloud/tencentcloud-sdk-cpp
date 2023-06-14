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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKPARAMS_H_

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
                * MCU混流水印参数
                */
                class WaterMarkParams : public AbstractModel
                {
                public:
                    WaterMarkParams();
                    ~WaterMarkParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取混流-水印图片ID。取值为实时音视频控制台上传的图片ID。
                     * @return WaterMarkId 混流-水印图片ID。取值为实时音视频控制台上传的图片ID。
                     * 
                     */
                    uint64_t GetWaterMarkId() const;

                    /**
                     * 设置混流-水印图片ID。取值为实时音视频控制台上传的图片ID。
                     * @param _waterMarkId 混流-水印图片ID。取值为实时音视频控制台上传的图片ID。
                     * 
                     */
                    void SetWaterMarkId(const uint64_t& _waterMarkId);

                    /**
                     * 判断参数 WaterMarkId 是否已赋值
                     * @return WaterMarkId 是否已赋值
                     * 
                     */
                    bool WaterMarkIdHasBeenSet() const;

                    /**
                     * 获取混流-水印宽。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     * @return WaterMarkWidth 混流-水印宽。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     * 
                     */
                    uint64_t GetWaterMarkWidth() const;

                    /**
                     * 设置混流-水印宽。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     * @param _waterMarkWidth 混流-水印宽。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     * 
                     */
                    void SetWaterMarkWidth(const uint64_t& _waterMarkWidth);

                    /**
                     * 判断参数 WaterMarkWidth 是否已赋值
                     * @return WaterMarkWidth 是否已赋值
                     * 
                     */
                    bool WaterMarkWidthHasBeenSet() const;

                    /**
                     * 获取混流-水印高。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     * @return WaterMarkHeight 混流-水印高。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     * 
                     */
                    uint64_t GetWaterMarkHeight() const;

                    /**
                     * 设置混流-水印高。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     * @param _waterMarkHeight 混流-水印高。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     * 
                     */
                    void SetWaterMarkHeight(const uint64_t& _waterMarkHeight);

                    /**
                     * 判断参数 WaterMarkHeight 是否已赋值
                     * @return WaterMarkHeight 是否已赋值
                     * 
                     */
                    bool WaterMarkHeightHasBeenSet() const;

                    /**
                     * 获取水印在输出时的X偏移。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     * @return LocationX 水印在输出时的X偏移。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     * 
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置水印在输出时的X偏移。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     * @param _locationX 水印在输出时的X偏移。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     * 
                     */
                    void SetLocationX(const uint64_t& _locationX);

                    /**
                     * 判断参数 LocationX 是否已赋值
                     * @return LocationX 是否已赋值
                     * 
                     */
                    bool LocationXHasBeenSet() const;

                    /**
                     * 获取水印在输出时的Y偏移。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     * @return LocationY 水印在输出时的Y偏移。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     * 
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置水印在输出时的Y偏移。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     * @param _locationY 水印在输出时的Y偏移。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     * 
                     */
                    void SetLocationY(const uint64_t& _locationY);

                    /**
                     * 判断参数 LocationY 是否已赋值
                     * @return LocationY 是否已赋值
                     * 
                     */
                    bool LocationYHasBeenSet() const;

                    /**
                     * 获取混流-水印图片URL地址，支持png、jpg、jpeg、bmp格式，暂不支持透明通道。URL链接长度限制为512字节。WaterMarkUrl和WaterMarkId参数都填时，以WaterMarkUrl为准。图片大小限制不超过2MB。
                     * @return WaterMarkUrl 混流-水印图片URL地址，支持png、jpg、jpeg、bmp格式，暂不支持透明通道。URL链接长度限制为512字节。WaterMarkUrl和WaterMarkId参数都填时，以WaterMarkUrl为准。图片大小限制不超过2MB。
                     * 
                     */
                    std::string GetWaterMarkUrl() const;

                    /**
                     * 设置混流-水印图片URL地址，支持png、jpg、jpeg、bmp格式，暂不支持透明通道。URL链接长度限制为512字节。WaterMarkUrl和WaterMarkId参数都填时，以WaterMarkUrl为准。图片大小限制不超过2MB。
                     * @param _waterMarkUrl 混流-水印图片URL地址，支持png、jpg、jpeg、bmp格式，暂不支持透明通道。URL链接长度限制为512字节。WaterMarkUrl和WaterMarkId参数都填时，以WaterMarkUrl为准。图片大小限制不超过2MB。
                     * 
                     */
                    void SetWaterMarkUrl(const std::string& _waterMarkUrl);

                    /**
                     * 判断参数 WaterMarkUrl 是否已赋值
                     * @return WaterMarkUrl 是否已赋值
                     * 
                     */
                    bool WaterMarkUrlHasBeenSet() const;

                private:

                    /**
                     * 混流-水印图片ID。取值为实时音视频控制台上传的图片ID。
                     */
                    uint64_t m_waterMarkId;
                    bool m_waterMarkIdHasBeenSet;

                    /**
                     * 混流-水印宽。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     */
                    uint64_t m_waterMarkWidth;
                    bool m_waterMarkWidthHasBeenSet;

                    /**
                     * 混流-水印高。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     */
                    uint64_t m_waterMarkHeight;
                    bool m_waterMarkHeightHasBeenSet;

                    /**
                     * 水印在输出时的X偏移。单位为像素值。水印宽+X偏移不能超过整个画布宽。
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * 水印在输出时的Y偏移。单位为像素值。水印高+Y偏移不能超过整个画布高。
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * 混流-水印图片URL地址，支持png、jpg、jpeg、bmp格式，暂不支持透明通道。URL链接长度限制为512字节。WaterMarkUrl和WaterMarkId参数都填时，以WaterMarkUrl为准。图片大小限制不超过2MB。
                     */
                    std::string m_waterMarkUrl;
                    bool m_waterMarkUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKPARAMS_H_
