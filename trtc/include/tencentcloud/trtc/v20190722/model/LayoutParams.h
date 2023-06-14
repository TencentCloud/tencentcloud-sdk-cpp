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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_LAYOUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_LAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/SmallVideoLayoutParams.h>
#include <tencentcloud/trtc/v20190722/model/PresetLayoutConfig.h>
#include <tencentcloud/trtc/v20190722/model/WaterMarkParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * MCU混流布局参数
                */
                class LayoutParams : public AbstractModel
                {
                public:
                    LayoutParams();
                    ~LayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板;4为自定义模板。
                     * @return Template 混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板;4为自定义模板。
                     * 
                     */
                    uint64_t GetTemplate() const;

                    /**
                     * 设置混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板;4为自定义模板。
                     * @param _template 混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板;4为自定义模板。
                     * 
                     */
                    void SetTemplate(const uint64_t& _template);

                    /**
                     * 判断参数 Template 是否已赋值
                     * @return Template 是否已赋值
                     * 
                     */
                    bool TemplateHasBeenSet() const;

                    /**
                     * 获取屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     * @return MainVideoUserId 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     * 
                     */
                    std::string GetMainVideoUserId() const;

                    /**
                     * 设置屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     * @param _mainVideoUserId 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     * 
                     */
                    void SetMainVideoUserId(const std::string& _mainVideoUserId);

                    /**
                     * 判断参数 MainVideoUserId 是否已赋值
                     * @return MainVideoUserId 是否已赋值
                     * 
                     */
                    bool MainVideoUserIdHasBeenSet() const;

                    /**
                     * 获取屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     * @return MainVideoStreamType 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     * 
                     */
                    uint64_t GetMainVideoStreamType() const;

                    /**
                     * 设置屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     * @param _mainVideoStreamType 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     * 
                     */
                    void SetMainVideoStreamType(const uint64_t& _mainVideoStreamType);

                    /**
                     * 判断参数 MainVideoStreamType 是否已赋值
                     * @return MainVideoStreamType 是否已赋值
                     * 
                     */
                    bool MainVideoStreamTypeHasBeenSet() const;

                    /**
                     * 获取画中画模板中有效，代表小画面的布局参数。
                     * @return SmallVideoLayoutParams 画中画模板中有效，代表小画面的布局参数。
                     * 
                     */
                    SmallVideoLayoutParams GetSmallVideoLayoutParams() const;

                    /**
                     * 设置画中画模板中有效，代表小画面的布局参数。
                     * @param _smallVideoLayoutParams 画中画模板中有效，代表小画面的布局参数。
                     * 
                     */
                    void SetSmallVideoLayoutParams(const SmallVideoLayoutParams& _smallVideoLayoutParams);

                    /**
                     * 判断参数 SmallVideoLayoutParams 是否已赋值
                     * @return SmallVideoLayoutParams 是否已赋值
                     * 
                     */
                    bool SmallVideoLayoutParamsHasBeenSet() const;

                    /**
                     * 获取屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     * @return MainVideoRightAlign 屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     * 
                     */
                    uint64_t GetMainVideoRightAlign() const;

                    /**
                     * 设置屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     * @param _mainVideoRightAlign 屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     * 
                     */
                    void SetMainVideoRightAlign(const uint64_t& _mainVideoRightAlign);

                    /**
                     * 判断参数 MainVideoRightAlign 是否已赋值
                     * @return MainVideoRightAlign 是否已赋值
                     * 
                     */
                    bool MainVideoRightAlignHasBeenSet() const;

                    /**
                     * 获取指定混视频的用户ID列表。设置此参数后，输出流混合此参数中包含用户的音视频，以及其他用户的纯音频。悬浮模板、九宫格、屏幕分享模板有效，最多可设置16个用户。
                     * @return MixVideoUids 指定混视频的用户ID列表。设置此参数后，输出流混合此参数中包含用户的音视频，以及其他用户的纯音频。悬浮模板、九宫格、屏幕分享模板有效，最多可设置16个用户。
                     * 
                     */
                    std::vector<std::string> GetMixVideoUids() const;

                    /**
                     * 设置指定混视频的用户ID列表。设置此参数后，输出流混合此参数中包含用户的音视频，以及其他用户的纯音频。悬浮模板、九宫格、屏幕分享模板有效，最多可设置16个用户。
                     * @param _mixVideoUids 指定混视频的用户ID列表。设置此参数后，输出流混合此参数中包含用户的音视频，以及其他用户的纯音频。悬浮模板、九宫格、屏幕分享模板有效，最多可设置16个用户。
                     * 
                     */
                    void SetMixVideoUids(const std::vector<std::string>& _mixVideoUids);

                    /**
                     * 判断参数 MixVideoUids 是否已赋值
                     * @return MixVideoUids 是否已赋值
                     * 
                     */
                    bool MixVideoUidsHasBeenSet() const;

                    /**
                     * 获取自定义模板中有效，指定用户视频在混合画面中的位置。
                     * @return PresetLayoutConfig 自定义模板中有效，指定用户视频在混合画面中的位置。
                     * 
                     */
                    std::vector<PresetLayoutConfig> GetPresetLayoutConfig() const;

                    /**
                     * 设置自定义模板中有效，指定用户视频在混合画面中的位置。
                     * @param _presetLayoutConfig 自定义模板中有效，指定用户视频在混合画面中的位置。
                     * 
                     */
                    void SetPresetLayoutConfig(const std::vector<PresetLayoutConfig>& _presetLayoutConfig);

                    /**
                     * 判断参数 PresetLayoutConfig 是否已赋值
                     * @return PresetLayoutConfig 是否已赋值
                     * 
                     */
                    bool PresetLayoutConfigHasBeenSet() const;

                    /**
                     * 获取自定义模板中有效，设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行视频时可显示对应的占位图。
                     * @return PlaceHolderMode 自定义模板中有效，设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行视频时可显示对应的占位图。
                     * 
                     */
                    uint64_t GetPlaceHolderMode() const;

                    /**
                     * 设置自定义模板中有效，设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行视频时可显示对应的占位图。
                     * @param _placeHolderMode 自定义模板中有效，设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行视频时可显示对应的占位图。
                     * 
                     */
                    void SetPlaceHolderMode(const uint64_t& _placeHolderMode);

                    /**
                     * 判断参数 PlaceHolderMode 是否已赋值
                     * @return PlaceHolderMode 是否已赋值
                     * 
                     */
                    bool PlaceHolderModeHasBeenSet() const;

                    /**
                     * 获取悬浮模板、九宫格、屏幕分享模板生效，用于控制纯音频上行是否占用画面布局位置。设置为0是代表后台默认处理方式，悬浮小画面占布局位置，九宫格画面占布局位置、屏幕分享小画面不占布局位置；设置为1时代表纯音频上行占布局位置；设置为2时代表纯音频上行不占布局位置。默认为0。
                     * @return PureAudioHoldPlaceMode 悬浮模板、九宫格、屏幕分享模板生效，用于控制纯音频上行是否占用画面布局位置。设置为0是代表后台默认处理方式，悬浮小画面占布局位置，九宫格画面占布局位置、屏幕分享小画面不占布局位置；设置为1时代表纯音频上行占布局位置；设置为2时代表纯音频上行不占布局位置。默认为0。
                     * 
                     */
                    uint64_t GetPureAudioHoldPlaceMode() const;

                    /**
                     * 设置悬浮模板、九宫格、屏幕分享模板生效，用于控制纯音频上行是否占用画面布局位置。设置为0是代表后台默认处理方式，悬浮小画面占布局位置，九宫格画面占布局位置、屏幕分享小画面不占布局位置；设置为1时代表纯音频上行占布局位置；设置为2时代表纯音频上行不占布局位置。默认为0。
                     * @param _pureAudioHoldPlaceMode 悬浮模板、九宫格、屏幕分享模板生效，用于控制纯音频上行是否占用画面布局位置。设置为0是代表后台默认处理方式，悬浮小画面占布局位置，九宫格画面占布局位置、屏幕分享小画面不占布局位置；设置为1时代表纯音频上行占布局位置；设置为2时代表纯音频上行不占布局位置。默认为0。
                     * 
                     */
                    void SetPureAudioHoldPlaceMode(const uint64_t& _pureAudioHoldPlaceMode);

                    /**
                     * 判断参数 PureAudioHoldPlaceMode 是否已赋值
                     * @return PureAudioHoldPlaceMode 是否已赋值
                     * 
                     */
                    bool PureAudioHoldPlaceModeHasBeenSet() const;

                    /**
                     * 获取水印参数。
                     * @return WaterMarkParams 水印参数。
                     * 
                     */
                    WaterMarkParams GetWaterMarkParams() const;

                    /**
                     * 设置水印参数。
                     * @param _waterMarkParams 水印参数。
                     * 
                     */
                    void SetWaterMarkParams(const WaterMarkParams& _waterMarkParams);

                    /**
                     * 判断参数 WaterMarkParams 是否已赋值
                     * @return WaterMarkParams 是否已赋值
                     * 
                     */
                    bool WaterMarkParamsHasBeenSet() const;

                    /**
                     * 获取屏幕分享模板、悬浮模板、九宫格模板、画中画模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底，不填采用后台的默认渲染方式（屏幕分享大画面为缩放，其他为裁剪）。若此参数不生效，请提交工单寻求帮助。
                     * @return RenderMode 屏幕分享模板、悬浮模板、九宫格模板、画中画模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底，不填采用后台的默认渲染方式（屏幕分享大画面为缩放，其他为裁剪）。若此参数不生效，请提交工单寻求帮助。
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置屏幕分享模板、悬浮模板、九宫格模板、画中画模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底，不填采用后台的默认渲染方式（屏幕分享大画面为缩放，其他为裁剪）。若此参数不生效，请提交工单寻求帮助。
                     * @param _renderMode 屏幕分享模板、悬浮模板、九宫格模板、画中画模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底，不填采用后台的默认渲染方式（屏幕分享大画面为缩放，其他为裁剪）。若此参数不生效，请提交工单寻求帮助。
                     * 
                     */
                    void SetRenderMode(const uint64_t& _renderMode);

                    /**
                     * 判断参数 RenderMode 是否已赋值
                     * @return RenderMode 是否已赋值
                     * 
                     */
                    bool RenderModeHasBeenSet() const;

                private:

                    /**
                     * 混流布局模板ID，0为悬浮模板(默认);1为九宫格模板;2为屏幕分享模板;3为画中画模板;4为自定义模板。
                     */
                    uint64_t m_template;
                    bool m_templateHasBeenSet;

                    /**
                     * 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的用户ID。
                     */
                    std::string m_mainVideoUserId;
                    bool m_mainVideoUserIdHasBeenSet;

                    /**
                     * 屏幕分享模板、悬浮模板、画中画模板中有效，代表大画面对应的流类型，0为摄像头，1为屏幕分享。左侧大画面为web用户时此值填0。
                     */
                    uint64_t m_mainVideoStreamType;
                    bool m_mainVideoStreamTypeHasBeenSet;

                    /**
                     * 画中画模板中有效，代表小画面的布局参数。
                     */
                    SmallVideoLayoutParams m_smallVideoLayoutParams;
                    bool m_smallVideoLayoutParamsHasBeenSet;

                    /**
                     * 屏幕分享模板有效。设置为1时代表大画面居右，小画面居左布局。默认为0。
                     */
                    uint64_t m_mainVideoRightAlign;
                    bool m_mainVideoRightAlignHasBeenSet;

                    /**
                     * 指定混视频的用户ID列表。设置此参数后，输出流混合此参数中包含用户的音视频，以及其他用户的纯音频。悬浮模板、九宫格、屏幕分享模板有效，最多可设置16个用户。
                     */
                    std::vector<std::string> m_mixVideoUids;
                    bool m_mixVideoUidsHasBeenSet;

                    /**
                     * 自定义模板中有效，指定用户视频在混合画面中的位置。
                     */
                    std::vector<PresetLayoutConfig> m_presetLayoutConfig;
                    bool m_presetLayoutConfigHasBeenSet;

                    /**
                     * 自定义模板中有效，设置为1时代表启用占位图功能，0时代表不启用占位图功能，默认为0。启用占位图功能时，在预设位置的用户没有上行视频时可显示对应的占位图。
                     */
                    uint64_t m_placeHolderMode;
                    bool m_placeHolderModeHasBeenSet;

                    /**
                     * 悬浮模板、九宫格、屏幕分享模板生效，用于控制纯音频上行是否占用画面布局位置。设置为0是代表后台默认处理方式，悬浮小画面占布局位置，九宫格画面占布局位置、屏幕分享小画面不占布局位置；设置为1时代表纯音频上行占布局位置；设置为2时代表纯音频上行不占布局位置。默认为0。
                     */
                    uint64_t m_pureAudioHoldPlaceMode;
                    bool m_pureAudioHoldPlaceModeHasBeenSet;

                    /**
                     * 水印参数。
                     */
                    WaterMarkParams m_waterMarkParams;
                    bool m_waterMarkParamsHasBeenSet;

                    /**
                     * 屏幕分享模板、悬浮模板、九宫格模板、画中画模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底，不填采用后台的默认渲染方式（屏幕分享大画面为缩放，其他为裁剪）。若此参数不生效，请提交工单寻求帮助。
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_LAYOUTPARAMS_H_
