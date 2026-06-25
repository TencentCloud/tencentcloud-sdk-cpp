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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/McuLayout.h>
#include <tencentcloud/trtc/v20190722/model/MaxVideoUser.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 混流布局参数。
                */
                class McuLayoutParams : public AbstractModel
                {
                public:
                    McuLayoutParams();
                    ~McuLayoutParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>布局模式：动态布局（1：悬浮布局（默认），2：屏幕分享布局，3：九宫格布局），静态布局（4：自定义布局）。最多支持混入16路音视频流，如果用户只上行音频，也会被算作一路；自定义布局中，如果子画面只设置占位图，也被算作一路。</p>
                     * @return MixLayoutMode <p>布局模式：动态布局（1：悬浮布局（默认），2：屏幕分享布局，3：九宫格布局），静态布局（4：自定义布局）。最多支持混入16路音视频流，如果用户只上行音频，也会被算作一路；自定义布局中，如果子画面只设置占位图，也被算作一路。</p>
                     * 
                     */
                    uint64_t GetMixLayoutMode() const;

                    /**
                     * 设置<p>布局模式：动态布局（1：悬浮布局（默认），2：屏幕分享布局，3：九宫格布局），静态布局（4：自定义布局）。最多支持混入16路音视频流，如果用户只上行音频，也会被算作一路；自定义布局中，如果子画面只设置占位图，也被算作一路。</p>
                     * @param _mixLayoutMode <p>布局模式：动态布局（1：悬浮布局（默认），2：屏幕分享布局，3：九宫格布局），静态布局（4：自定义布局）。最多支持混入16路音视频流，如果用户只上行音频，也会被算作一路；自定义布局中，如果子画面只设置占位图，也被算作一路。</p>
                     * 
                     */
                    void SetMixLayoutMode(const uint64_t& _mixLayoutMode);

                    /**
                     * 判断参数 MixLayoutMode 是否已赋值
                     * @return MixLayoutMode 是否已赋值
                     * 
                     */
                    bool MixLayoutModeHasBeenSet() const;

                    /**
                     * 获取<p>纯音频上行是否占布局位置，只在动态布局中有效。0表示纯音频不占布局位置，1表示纯音频占布局位置，不填默认为0。</p>
                     * @return PureAudioHoldPlaceMode <p>纯音频上行是否占布局位置，只在动态布局中有效。0表示纯音频不占布局位置，1表示纯音频占布局位置，不填默认为0。</p>
                     * 
                     */
                    uint64_t GetPureAudioHoldPlaceMode() const;

                    /**
                     * 设置<p>纯音频上行是否占布局位置，只在动态布局中有效。0表示纯音频不占布局位置，1表示纯音频占布局位置，不填默认为0。</p>
                     * @param _pureAudioHoldPlaceMode <p>纯音频上行是否占布局位置，只在动态布局中有效。0表示纯音频不占布局位置，1表示纯音频占布局位置，不填默认为0。</p>
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
                     * 获取<p>自定义模板中有效，指定用户视频在混合画面中的位置，最多支持设置16个输入流。</p>
                     * @return MixLayoutList <p>自定义模板中有效，指定用户视频在混合画面中的位置，最多支持设置16个输入流。</p>
                     * 
                     */
                    std::vector<McuLayout> GetMixLayoutList() const;

                    /**
                     * 设置<p>自定义模板中有效，指定用户视频在混合画面中的位置，最多支持设置16个输入流。</p>
                     * @param _mixLayoutList <p>自定义模板中有效，指定用户视频在混合画面中的位置，最多支持设置16个输入流。</p>
                     * 
                     */
                    void SetMixLayoutList(const std::vector<McuLayout>& _mixLayoutList);

                    /**
                     * 判断参数 MixLayoutList 是否已赋值
                     * @return MixLayoutList 是否已赋值
                     * 
                     */
                    bool MixLayoutListHasBeenSet() const;

                    /**
                     * 获取<p>指定动态布局中悬浮布局和屏幕分享布局的大画面信息，只在悬浮布局和屏幕分享布局有效。</p>
                     * @return MaxVideoUser <p>指定动态布局中悬浮布局和屏幕分享布局的大画面信息，只在悬浮布局和屏幕分享布局有效。</p>
                     * 
                     */
                    MaxVideoUser GetMaxVideoUser() const;

                    /**
                     * 设置<p>指定动态布局中悬浮布局和屏幕分享布局的大画面信息，只在悬浮布局和屏幕分享布局有效。</p>
                     * @param _maxVideoUser <p>指定动态布局中悬浮布局和屏幕分享布局的大画面信息，只在悬浮布局和屏幕分享布局有效。</p>
                     * 
                     */
                    void SetMaxVideoUser(const MaxVideoUser& _maxVideoUser);

                    /**
                     * 判断参数 MaxVideoUser 是否已赋值
                     * @return MaxVideoUser 是否已赋值
                     * 
                     */
                    bool MaxVideoUserHasBeenSet() const;

                    /**
                     * 获取<p>屏幕分享模板、悬浮模板、九宫格模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底</p>
                     * @return RenderMode <p>屏幕分享模板、悬浮模板、九宫格模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底</p>
                     * 
                     */
                    uint64_t GetRenderMode() const;

                    /**
                     * 设置<p>屏幕分享模板、悬浮模板、九宫格模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底</p>
                     * @param _renderMode <p>屏幕分享模板、悬浮模板、九宫格模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底</p>
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
                     * 获取<p>是否保留上行sei，1：保留 0：不保留，只对动态布局生效，自定义布局不生效</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
                     * @return EnableStreamSEI <p>是否保留上行sei，1：保留 0：不保留，只对动态布局生效，自定义布局不生效</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
                     * 
                     */
                    uint64_t GetEnableStreamSEI() const;

                    /**
                     * 设置<p>是否保留上行sei，1：保留 0：不保留，只对动态布局生效，自定义布局不生效</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
                     * @param _enableStreamSEI <p>是否保留上行sei，1：保留 0：不保留，只对动态布局生效，自定义布局不生效</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
                     * 
                     */
                    void SetEnableStreamSEI(const uint64_t& _enableStreamSEI);

                    /**
                     * 判断参数 EnableStreamSEI 是否已赋值
                     * @return EnableStreamSEI 是否已赋值
                     * 
                     */
                    bool EnableStreamSEIHasBeenSet() const;

                private:

                    /**
                     * <p>布局模式：动态布局（1：悬浮布局（默认），2：屏幕分享布局，3：九宫格布局），静态布局（4：自定义布局）。最多支持混入16路音视频流，如果用户只上行音频，也会被算作一路；自定义布局中，如果子画面只设置占位图，也被算作一路。</p>
                     */
                    uint64_t m_mixLayoutMode;
                    bool m_mixLayoutModeHasBeenSet;

                    /**
                     * <p>纯音频上行是否占布局位置，只在动态布局中有效。0表示纯音频不占布局位置，1表示纯音频占布局位置，不填默认为0。</p>
                     */
                    uint64_t m_pureAudioHoldPlaceMode;
                    bool m_pureAudioHoldPlaceModeHasBeenSet;

                    /**
                     * <p>自定义模板中有效，指定用户视频在混合画面中的位置，最多支持设置16个输入流。</p>
                     */
                    std::vector<McuLayout> m_mixLayoutList;
                    bool m_mixLayoutListHasBeenSet;

                    /**
                     * <p>指定动态布局中悬浮布局和屏幕分享布局的大画面信息，只在悬浮布局和屏幕分享布局有效。</p>
                     */
                    MaxVideoUser m_maxVideoUser;
                    bool m_maxVideoUserHasBeenSet;

                    /**
                     * <p>屏幕分享模板、悬浮模板、九宫格模版有效，画面在输出时的显示模式：0为裁剪，1为缩放，2为缩放并显示黑底</p>
                     */
                    uint64_t m_renderMode;
                    bool m_renderModeHasBeenSet;

                    /**
                     * <p>是否保留上行sei，1：保留 0：不保留，只对动态布局生效，自定义布局不生效</p><p>取值范围：[0, 1]</p><p>默认值：1</p>
                     */
                    uint64_t m_enableStreamSEI;
                    bool m_enableStreamSEIHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCULAYOUTPARAMS_H_
