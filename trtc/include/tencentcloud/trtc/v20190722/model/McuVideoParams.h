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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUVIDEOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUVIDEOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VideoEncode.h>
#include <tencentcloud/trtc/v20190722/model/McuLayoutParams.h>
#include <tencentcloud/trtc/v20190722/model/McuWaterMarkParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 混流转推的视频相关参数。
                */
                class McuVideoParams : public AbstractModel
                {
                public:
                    McuVideoParams();
                    ~McuVideoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出流视频编码参数。
                     * @return VideoEncode 输出流视频编码参数。
                     * 
                     */
                    VideoEncode GetVideoEncode() const;

                    /**
                     * 设置输出流视频编码参数。
                     * @param _videoEncode 输出流视频编码参数。
                     * 
                     */
                    void SetVideoEncode(const VideoEncode& _videoEncode);

                    /**
                     * 判断参数 VideoEncode 是否已赋值
                     * @return VideoEncode 是否已赋值
                     * 
                     */
                    bool VideoEncodeHasBeenSet() const;

                    /**
                     * 获取混流布局参数。
                     * @return LayoutParams 混流布局参数。
                     * 
                     */
                    McuLayoutParams GetLayoutParams() const;

                    /**
                     * 设置混流布局参数。
                     * @param _layoutParams 混流布局参数。
                     * 
                     */
                    void SetLayoutParams(const McuLayoutParams& _layoutParams);

                    /**
                     * 判断参数 LayoutParams 是否已赋值
                     * @return LayoutParams 是否已赋值
                     * 
                     */
                    bool LayoutParamsHasBeenSet() const;

                    /**
                     * 获取整个画布背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * @return BackGroundColor 整个画布背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * 
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置整个画布背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * @param _backGroundColor 整个画布背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     * 
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     * 
                     */
                    bool BackGroundColorHasBeenSet() const;

                    /**
                     * 获取整个画布的背景图url，优先级高于BackGroundColor。支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，背景图将不会生效。
                     * @return BackgroundImageUrl 整个画布的背景图url，优先级高于BackGroundColor。支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，背景图将不会生效。
                     * 
                     */
                    std::string GetBackgroundImageUrl() const;

                    /**
                     * 设置整个画布的背景图url，优先级高于BackGroundColor。支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，背景图将不会生效。
                     * @param _backgroundImageUrl 整个画布的背景图url，优先级高于BackGroundColor。支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，背景图将不会生效。
                     * 
                     */
                    void SetBackgroundImageUrl(const std::string& _backgroundImageUrl);

                    /**
                     * 判断参数 BackgroundImageUrl 是否已赋值
                     * @return BackgroundImageUrl 是否已赋值
                     * 
                     */
                    bool BackgroundImageUrlHasBeenSet() const;

                    /**
                     * 获取混流布局的水印参数。
                     * @return WaterMarkList 混流布局的水印参数。
                     * 
                     */
                    std::vector<McuWaterMarkParams> GetWaterMarkList() const;

                    /**
                     * 设置混流布局的水印参数。
                     * @param _waterMarkList 混流布局的水印参数。
                     * 
                     */
                    void SetWaterMarkList(const std::vector<McuWaterMarkParams>& _waterMarkList);

                    /**
                     * 判断参数 WaterMarkList 是否已赋值
                     * @return WaterMarkList 是否已赋值
                     * 
                     */
                    bool WaterMarkListHasBeenSet() const;

                    /**
                     * 获取背景图在输出时的显示模式：0为裁剪，1为缩放并显示黑底，2为变比例伸缩。后台默认为变比例伸缩。
                     * @return BackgroundRenderMode 背景图在输出时的显示模式：0为裁剪，1为缩放并显示黑底，2为变比例伸缩。后台默认为变比例伸缩。
                     * 
                     */
                    uint64_t GetBackgroundRenderMode() const;

                    /**
                     * 设置背景图在输出时的显示模式：0为裁剪，1为缩放并显示黑底，2为变比例伸缩。后台默认为变比例伸缩。
                     * @param _backgroundRenderMode 背景图在输出时的显示模式：0为裁剪，1为缩放并显示黑底，2为变比例伸缩。后台默认为变比例伸缩。
                     * 
                     */
                    void SetBackgroundRenderMode(const uint64_t& _backgroundRenderMode);

                    /**
                     * 判断参数 BackgroundRenderMode 是否已赋值
                     * @return BackgroundRenderMode 是否已赋值
                     * 
                     */
                    bool BackgroundRenderModeHasBeenSet() const;

                private:

                    /**
                     * 输出流视频编码参数。
                     */
                    VideoEncode m_videoEncode;
                    bool m_videoEncodeHasBeenSet;

                    /**
                     * 混流布局参数。
                     */
                    McuLayoutParams m_layoutParams;
                    bool m_layoutParamsHasBeenSet;

                    /**
                     * 整个画布背景颜色，常用的颜色有：
红色：0xcc0033。
黄色：0xcc9900。
绿色：0xcccc33。
蓝色：0x99CCFF。
黑色：0x000000。
白色：0xFFFFFF。
灰色：0x999999。
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                    /**
                     * 整个画布的背景图url，优先级高于BackGroundColor。支持png、jpg、jpeg格式。图片大小限制不超过5MB。
注：您需要确保图片链接的可访问性，后台单次下载超时时间为10秒，最多重试3次，若最终图片下载失败，背景图将不会生效。
                     */
                    std::string m_backgroundImageUrl;
                    bool m_backgroundImageUrlHasBeenSet;

                    /**
                     * 混流布局的水印参数。
                     */
                    std::vector<McuWaterMarkParams> m_waterMarkList;
                    bool m_waterMarkListHasBeenSet;

                    /**
                     * 背景图在输出时的显示模式：0为裁剪，1为缩放并显示黑底，2为变比例伸缩。后台默认为变比例伸缩。
                     */
                    uint64_t m_backgroundRenderMode;
                    bool m_backgroundRenderModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUVIDEOPARAMS_H_
