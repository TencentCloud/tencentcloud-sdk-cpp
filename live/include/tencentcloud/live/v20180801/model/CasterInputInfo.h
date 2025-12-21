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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERINPUTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 导播台输入信息参数
                */
                class CasterInputInfo : public AbstractModel
                {
                public:
                    CasterInputInfo();
                    ~CasterInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入源Index。范围[1, 24]</p>
                     * @return InputIndex <p>输入源Index。范围[1, 24]</p>
                     * 
                     */
                    int64_t GetInputIndex() const;

                    /**
                     * 设置<p>输入源Index。范围[1, 24]</p>
                     * @param _inputIndex <p>输入源Index。范围[1, 24]</p>
                     * 
                     */
                    void SetInputIndex(const int64_t& _inputIndex);

                    /**
                     * 判断参数 InputIndex 是否已赋值
                     * @return InputIndex 是否已赋值
                     * 
                     */
                    bool InputIndexHasBeenSet() const;

                    /**
                     * 获取<p>输入源类型。范围[0,1,2,3,4]。0：推流地址。1：点播文件地址。2：直播拉流地址。3：图片地址。4：webrtc协议推流地址。</p>
                     * @return InputType <p>输入源类型。范围[0,1,2,3,4]。0：推流地址。1：点播文件地址。2：直播拉流地址。3：图片地址。4：webrtc协议推流地址。</p>
                     * 
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置<p>输入源类型。范围[0,1,2,3,4]。0：推流地址。1：点播文件地址。2：直播拉流地址。3：图片地址。4：webrtc协议推流地址。</p>
                     * @param _inputType <p>输入源类型。范围[0,1,2,3,4]。0：推流地址。1：点播文件地址。2：直播拉流地址。3：图片地址。4：webrtc协议推流地址。</p>
                     * 
                     */
                    void SetInputType(const int64_t& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取<p>输入源的源地址。最大允许长度512。当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。</p>
                     * @return InputUrl <p>输入源的源地址。最大允许长度512。当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。</p>
                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置<p>输入源的源地址。最大允许长度512。当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。</p>
                     * @param _inputUrl <p>输入源的源地址。最大允许长度512。当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。</p>
                     * 
                     */
                    void SetInputUrl(const std::string& _inputUrl);

                    /**
                     * 判断参数 InputUrl 是否已赋值
                     * @return InputUrl 是否已赋值
                     * 
                     */
                    bool InputUrlHasBeenSet() const;

                    /**
                     * 获取<p>输入源描述。最大允许长度256字符。</p>
                     * @return Description <p>输入源描述。最大允许长度256字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>输入源描述。最大允许长度256字符。</p>
                     * @param _description <p>输入源描述。最大允许长度256字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。单个地址最大允许长度512字符。最多允许同时填入5个地址。注：此时需保持InputUrl字段为空。</p>
                     * @return InputUrls <p>点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。单个地址最大允许长度512字符。最多允许同时填入5个地址。注：此时需保持InputUrl字段为空。</p>
                     * 
                     */
                    std::vector<std::string> GetInputUrls() const;

                    /**
                     * 设置<p>点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。单个地址最大允许长度512字符。最多允许同时填入5个地址。注：此时需保持InputUrl字段为空。</p>
                     * @param _inputUrls <p>点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。单个地址最大允许长度512字符。最多允许同时填入5个地址。注：此时需保持InputUrl字段为空。</p>
                     * 
                     */
                    void SetInputUrls(const std::vector<std::string>& _inputUrls);

                    /**
                     * 判断参数 InputUrls 是否已赋值
                     * @return InputUrls 是否已赋值
                     * 
                     */
                    bool InputUrlsHasBeenSet() const;

                    /**
                     * 获取<p>是否启用点播无限循环播放。注：当前该字段未生效，默认为True。</p>
                     * @return LoopEnable <p>是否启用点播无限循环播放。注：当前该字段未生效，默认为True。</p>
                     * 
                     */
                    bool GetLoopEnable() const;

                    /**
                     * 设置<p>是否启用点播无限循环播放。注：当前该字段未生效，默认为True。</p>
                     * @param _loopEnable <p>是否启用点播无限循环播放。注：当前该字段未生效，默认为True。</p>
                     * 
                     */
                    void SetLoopEnable(const bool& _loopEnable);

                    /**
                     * 判断参数 LoopEnable 是否已赋值
                     * @return LoopEnable 是否已赋值
                     * 
                     */
                    bool LoopEnableHasBeenSet() const;

                    /**
                     * 获取<p>点播循环次数。允许值-1或正整数。当值为-1时，表示无限循环。当值为其他正整数时，表示循环对应次数。注：该字段暂未生效。</p>
                     * @return LoopNumber <p>点播循环次数。允许值-1或正整数。当值为-1时，表示无限循环。当值为其他正整数时，表示循环对应次数。注：该字段暂未生效。</p>
                     * 
                     */
                    int64_t GetLoopNumber() const;

                    /**
                     * 设置<p>点播循环次数。允许值-1或正整数。当值为-1时，表示无限循环。当值为其他正整数时，表示循环对应次数。注：该字段暂未生效。</p>
                     * @param _loopNumber <p>点播循环次数。允许值-1或正整数。当值为-1时，表示无限循环。当值为其他正整数时，表示循环对应次数。注：该字段暂未生效。</p>
                     * 
                     */
                    void SetLoopNumber(const int64_t& _loopNumber);

                    /**
                     * 判断参数 LoopNumber 是否已赋值
                     * @return LoopNumber 是否已赋值
                     * 
                     */
                    bool LoopNumberHasBeenSet() const;

                    /**
                     * 获取<p>是否启用拉取到导播台。注：该字段默认强制为true。</p>
                     * @return PullPushEnable <p>是否启用拉取到导播台。注：该字段默认强制为true。</p>
                     * 
                     */
                    bool GetPullPushEnable() const;

                    /**
                     * 设置<p>是否启用拉取到导播台。注：该字段默认强制为true。</p>
                     * @param _pullPushEnable <p>是否启用拉取到导播台。注：该字段默认强制为true。</p>
                     * 
                     */
                    void SetPullPushEnable(const bool& _pullPushEnable);

                    /**
                     * 判断参数 PullPushEnable 是否已赋值
                     * @return PullPushEnable 是否已赋值
                     * 
                     */
                    bool PullPushEnableHasBeenSet() const;

                    /**
                     * 获取<p>输入源音量百分比。默认为100。表示音量为原始大小。允许值[0,200]。</p>
                     * @return Volume <p>输入源音量百分比。默认为100。表示音量为原始大小。允许值[0,200]。</p>
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置<p>输入源音量百分比。默认为100。表示音量为原始大小。允许值[0,200]。</p>
                     * @param _volume <p>输入源音量百分比。默认为100。表示音量为原始大小。允许值[0,200]。</p>
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                private:

                    /**
                     * <p>输入源Index。范围[1, 24]</p>
                     */
                    int64_t m_inputIndex;
                    bool m_inputIndexHasBeenSet;

                    /**
                     * <p>输入源类型。范围[0,1,2,3,4]。0：推流地址。1：点播文件地址。2：直播拉流地址。3：图片地址。4：webrtc协议推流地址。</p>
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * <p>输入源的源地址。最大允许长度512。当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。</p>
                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                    /**
                     * <p>输入源描述。最大允许长度256字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。单个地址最大允许长度512字符。最多允许同时填入5个地址。注：此时需保持InputUrl字段为空。</p>
                     */
                    std::vector<std::string> m_inputUrls;
                    bool m_inputUrlsHasBeenSet;

                    /**
                     * <p>是否启用点播无限循环播放。注：当前该字段未生效，默认为True。</p>
                     */
                    bool m_loopEnable;
                    bool m_loopEnableHasBeenSet;

                    /**
                     * <p>点播循环次数。允许值-1或正整数。当值为-1时，表示无限循环。当值为其他正整数时，表示循环对应次数。注：该字段暂未生效。</p>
                     */
                    int64_t m_loopNumber;
                    bool m_loopNumberHasBeenSet;

                    /**
                     * <p>是否启用拉取到导播台。注：该字段默认强制为true。</p>
                     */
                    bool m_pullPushEnable;
                    bool m_pullPushEnableHasBeenSet;

                    /**
                     * <p>输入源音量百分比。默认为100。表示音量为原始大小。允许值[0,200]。</p>
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERINPUTINFO_H_
