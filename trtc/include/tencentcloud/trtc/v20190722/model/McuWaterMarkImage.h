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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKIMAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKIMAGE_H_

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
                * 图片水印参数。
                */
                class McuWaterMarkImage : public AbstractModel
                {
                public:
                    McuWaterMarkImage();
                    ~McuWaterMarkImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，水印图片将不会生效。
                     * @return WaterMarkUrl 水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，水印图片将不会生效。
                     * 
                     */
                    std::string GetWaterMarkUrl() const;

                    /**
                     * 设置水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，水印图片将不会生效。
                     * @param _waterMarkUrl 水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，水印图片将不会生效。
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
                     * 获取水印在输出时的宽。单位为像素值。
                     * @return WaterMarkWidth 水印在输出时的宽。单位为像素值。
                     * 
                     */
                    uint64_t GetWaterMarkWidth() const;

                    /**
                     * 设置水印在输出时的宽。单位为像素值。
                     * @param _waterMarkWidth 水印在输出时的宽。单位为像素值。
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
                     * 获取水印在输出时的高。单位为像素值。
                     * @return WaterMarkHeight 水印在输出时的高。单位为像素值。
                     * 
                     */
                    uint64_t GetWaterMarkHeight() const;

                    /**
                     * 设置水印在输出时的高。单位为像素值。
                     * @param _waterMarkHeight 水印在输出时的高。单位为像素值。
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
                     * 获取水印在输出时的X偏移。单位为像素值。
                     * @return LocationX 水印在输出时的X偏移。单位为像素值。
                     * 
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置水印在输出时的X偏移。单位为像素值。
                     * @param _locationX 水印在输出时的X偏移。单位为像素值。
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
                     * 获取水印在输出时的Y偏移。单位为像素值。
                     * @return LocationY 水印在输出时的Y偏移。单位为像素值。
                     * 
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置水印在输出时的Y偏移。单位为像素值。
                     * @param _locationY 水印在输出时的Y偏移。单位为像素值。
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
                     * 获取水印在输出时的层级，不填默认为0。
                     * @return ZOrder 水印在输出时的层级，不填默认为0。
                     * 
                     */
                    uint64_t GetZOrder() const;

                    /**
                     * 设置水印在输出时的层级，不填默认为0。
                     * @param _zOrder 水印在输出时的层级，不填默认为0。
                     * 
                     */
                    void SetZOrder(const uint64_t& _zOrder);

                    /**
                     * 判断参数 ZOrder 是否已赋值
                     * @return ZOrder 是否已赋值
                     * 
                     */
                    bool ZOrderHasBeenSet() const;

                    /**
                     * 获取动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     * @return DynamicPosType 动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     * 
                     */
                    uint64_t GetDynamicPosType() const;

                    /**
                     * 设置动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     * @param _dynamicPosType 动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     * 
                     */
                    void SetDynamicPosType(const uint64_t& _dynamicPosType);

                    /**
                     * 判断参数 DynamicPosType 是否已赋值
                     * @return DynamicPosType 是否已赋值
                     * 
                     */
                    bool DynamicPosTypeHasBeenSet() const;

                private:

                    /**
                     * 水印图片URL地址，支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，水印图片将不会生效。
                     */
                    std::string m_waterMarkUrl;
                    bool m_waterMarkUrlHasBeenSet;

                    /**
                     * 水印在输出时的宽。单位为像素值。
                     */
                    uint64_t m_waterMarkWidth;
                    bool m_waterMarkWidthHasBeenSet;

                    /**
                     * 水印在输出时的高。单位为像素值。
                     */
                    uint64_t m_waterMarkHeight;
                    bool m_waterMarkHeightHasBeenSet;

                    /**
                     * 水印在输出时的X偏移。单位为像素值。
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * 水印在输出时的Y偏移。单位为像素值。
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * 水印在输出时的层级，不填默认为0。
                     */
                    uint64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                    /**
                     * 动态水印类型，默认为0。0:关闭；1:随机位置，每秒变动一次；2:边界扫描反弹，每帧变动一次。
                     */
                    uint64_t m_dynamicPosType;
                    bool m_dynamicPosTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUWATERMARKIMAGE_H_
