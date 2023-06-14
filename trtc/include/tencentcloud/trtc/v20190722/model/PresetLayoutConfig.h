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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_PRESETLAYOUTCONFIG_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_PRESETLAYOUTCONFIG_H_

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
                * 自定义模板中有效，指定用户视频在混合画面中的位置。
                */
                class PresetLayoutConfig : public AbstractModel
                {
                public:
                    PresetLayoutConfig();
                    ~PresetLayoutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定显示在该画面上的用户ID。如果不指定用户ID，会按照用户加入房间的顺序自动匹配PresetLayoutConfig中的画面设置。
                     * @return UserId 指定显示在该画面上的用户ID。如果不指定用户ID，会按照用户加入房间的顺序自动匹配PresetLayoutConfig中的画面设置。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置指定显示在该画面上的用户ID。如果不指定用户ID，会按照用户加入房间的顺序自动匹配PresetLayoutConfig中的画面设置。
                     * @param _userId 指定显示在该画面上的用户ID。如果不指定用户ID，会按照用户加入房间的顺序自动匹配PresetLayoutConfig中的画面设置。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取当该画面指定用户时，代表用户的流类型。0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     * @return StreamType 当该画面指定用户时，代表用户的流类型。0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置当该画面指定用户时，代表用户的流类型。0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     * @param _streamType 当该画面指定用户时，代表用户的流类型。0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取该画面在输出时的宽度，单位为像素值，不填默认为0。
                     * @return ImageWidth 该画面在输出时的宽度，单位为像素值，不填默认为0。
                     * 
                     */
                    uint64_t GetImageWidth() const;

                    /**
                     * 设置该画面在输出时的宽度，单位为像素值，不填默认为0。
                     * @param _imageWidth 该画面在输出时的宽度，单位为像素值，不填默认为0。
                     * 
                     */
                    void SetImageWidth(const uint64_t& _imageWidth);

                    /**
                     * 判断参数 ImageWidth 是否已赋值
                     * @return ImageWidth 是否已赋值
                     * 
                     */
                    bool ImageWidthHasBeenSet() const;

                    /**
                     * 获取该画面在输出时的高度，单位为像素值，不填默认为0。
                     * @return ImageHeight 该画面在输出时的高度，单位为像素值，不填默认为0。
                     * 
                     */
                    uint64_t GetImageHeight() const;

                    /**
                     * 设置该画面在输出时的高度，单位为像素值，不填默认为0。
                     * @param _imageHeight 该画面在输出时的高度，单位为像素值，不填默认为0。
                     * 
                     */
                    void SetImageHeight(const uint64_t& _imageHeight);

                    /**
                     * 判断参数 ImageHeight 是否已赋值
                     * @return ImageHeight 是否已赋值
                     * 
                     */
                    bool ImageHeightHasBeenSet() const;

                    /**
                     * 获取该画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * @return LocationX 该画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * 
                     */
                    uint64_t GetLocationX() const;

                    /**
                     * 设置该画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     * @param _locationX 该画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
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
                     * 获取该画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * @return LocationY 该画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * 
                     */
                    uint64_t GetLocationY() const;

                    /**
                     * 设置该画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     * @param _locationY 该画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
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
                     * 获取该画面在输出时的层级，不填默认为0。
                     * @return ZOrder 该画面在输出时的层级，不填默认为0。
                     * 
                     */
                    uint64_t GetZOrder() const;

                    /**
                     * 设置该画面在输出时的层级，不填默认为0。
                     * @param _zOrder 该画面在输出时的层级，不填默认为0。
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
                     * 获取该画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底。不填默认为0。
                     * @return RenderMode 该画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底。不填默认为0。
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置该画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底。不填默认为0。
                     * @param _renderMode 该画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底。不填默认为0。
                     * 
                     */
                    void SetRenderMode(const uint64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     * 
                     */
                    bool RenderModeHasBeenSet() const;

                    /**
                     * 获取该当前位置用户混入的流类型：0为混入音视频，1为只混入视频，2为只混入音频。默认为0，建议配合指定用户ID使用。
                     * @return MixInputType 该当前位置用户混入的流类型：0为混入音视频，1为只混入视频，2为只混入音频。默认为0，建议配合指定用户ID使用。
                     * 
                     */
                    uint64_t GetMixInputType() const;

                    /**
                     * 设置该当前位置用户混入的流类型：0为混入音视频，1为只混入视频，2为只混入音频。默认为0，建议配合指定用户ID使用。
                     * @param _mixInputType 该当前位置用户混入的流类型：0为混入音视频，1为只混入视频，2为只混入音频。默认为0，建议配合指定用户ID使用。
                     * 
                     */
                    void SetMixInputType(const uint64_t& _mixInputType);

                    /**
                     * 判断参数 MixInputType 是否已赋值
                     * @return MixInputType 是否已赋值
                     * 
                     */
                    bool MixInputTypeHasBeenSet() const;

                    /**
                     * 获取占位图ID。启用占位图功能时，在当前位置的用户没有上行视频时显示占位图。占位图大小不能超过2M，在实时音视频控制台上传并生成，https://cloud.tencent.com/document/product/647/50769
                     * @return PlaceImageId 占位图ID。启用占位图功能时，在当前位置的用户没有上行视频时显示占位图。占位图大小不能超过2M，在实时音视频控制台上传并生成，https://cloud.tencent.com/document/product/647/50769
                     * 
                     */
                    uint64_t GetPlaceImageId() const;

                    /**
                     * 设置占位图ID。启用占位图功能时，在当前位置的用户没有上行视频时显示占位图。占位图大小不能超过2M，在实时音视频控制台上传并生成，https://cloud.tencent.com/document/product/647/50769
                     * @param _placeImageId 占位图ID。启用占位图功能时，在当前位置的用户没有上行视频时显示占位图。占位图大小不能超过2M，在实时音视频控制台上传并生成，https://cloud.tencent.com/document/product/647/50769
                     * 
                     */
                    void SetPlaceImageId(const uint64_t& _placeImageId);

                    /**
                     * 判断参数 PlaceImageId 是否已赋值
                     * @return PlaceImageId 是否已赋值
                     * 
                     */
                    bool PlaceImageIdHasBeenSet() const;

                private:

                    /**
                     * 指定显示在该画面上的用户ID。如果不指定用户ID，会按照用户加入房间的顺序自动匹配PresetLayoutConfig中的画面设置。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 当该画面指定用户时，代表用户的流类型。0为摄像头，1为屏幕分享。小画面为web用户时此值填0。
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * 该画面在输出时的宽度，单位为像素值，不填默认为0。
                     */
                    uint64_t m_imageWidth;
                    bool m_imageWidthHasBeenSet;

                    /**
                     * 该画面在输出时的高度，单位为像素值，不填默认为0。
                     */
                    uint64_t m_imageHeight;
                    bool m_imageHeightHasBeenSet;

                    /**
                     * 该画面在输出时的X偏移，单位为像素值，LocationX与ImageWidth之和不能超过混流输出的总宽度，不填默认为0。
                     */
                    uint64_t m_locationX;
                    bool m_locationXHasBeenSet;

                    /**
                     * 该画面在输出时的Y偏移，单位为像素值，LocationY与ImageHeight之和不能超过混流输出的总高度，不填默认为0。
                     */
                    uint64_t m_locationY;
                    bool m_locationYHasBeenSet;

                    /**
                     * 该画面在输出时的层级，不填默认为0。
                     */
                    uint64_t m_zOrder;
                    bool m_zOrderHasBeenSet;

                    /**
                     * 该画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底。不填默认为0。
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * 该当前位置用户混入的流类型：0为混入音视频，1为只混入视频，2为只混入音频。默认为0，建议配合指定用户ID使用。
                     */
                    uint64_t m_mixInputType;
                    bool m_mixInputTypeHasBeenSet;

                    /**
                     * 占位图ID。启用占位图功能时，在当前位置的用户没有上行视频时显示占位图。占位图大小不能超过2M，在实时音视频控制台上传并生成，https://cloud.tencent.com/document/product/647/50769
                     */
                    uint64_t m_placeImageId;
                    bool m_placeImageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_PRESETLAYOUTCONFIG_H_
