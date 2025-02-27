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
                     * 获取输入源Index。
范围[1, 24]
                     * @return InputIndex 输入源Index。
范围[1, 24]
                     * 
                     */
                    int64_t GetInputIndex() const;

                    /**
                     * 设置输入源Index。
范围[1, 24]
                     * @param _inputIndex 输入源Index。
范围[1, 24]
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
                     * 获取输入源类型。
范围[0,1,2,3,4]。
0：推流地址。
1：点播文件地址。
2：直播拉流地址。
3：图片地址。
4：webrtc协议推流地址。
                     * @return InputType 输入源类型。
范围[0,1,2,3,4]。
0：推流地址。
1：点播文件地址。
2：直播拉流地址。
3：图片地址。
4：webrtc协议推流地址。
                     * 
                     */
                    int64_t GetInputType() const;

                    /**
                     * 设置输入源类型。
范围[0,1,2,3,4]。
0：推流地址。
1：点播文件地址。
2：直播拉流地址。
3：图片地址。
4：webrtc协议推流地址。
                     * @param _inputType 输入源类型。
范围[0,1,2,3,4]。
0：推流地址。
1：点播文件地址。
2：直播拉流地址。
3：图片地址。
4：webrtc协议推流地址。
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
                     * 获取输入源的源地址。
最大允许长度512。
当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。

                     * @return InputUrl 输入源的源地址。
最大允许长度512。
当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。

                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置输入源的源地址。
最大允许长度512。
当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。

                     * @param _inputUrl 输入源的源地址。
最大允许长度512。
当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。

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
                     * 获取输入源描述。
最大允许长度256字符。
                     * @return Description 输入源描述。
最大允许长度256字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置输入源描述。
最大允许长度256字符。
                     * @param _description 输入源描述。
最大允许长度256字符。
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
                     * 获取点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。
单个地址最大允许长度512字符。
最多允许同时填入5个地址。
注：此时需保持InputUrl字段为空。
                     * @return InputUrls 点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。
单个地址最大允许长度512字符。
最多允许同时填入5个地址。
注：此时需保持InputUrl字段为空。
                     * 
                     */
                    std::vector<std::string> GetInputUrls() const;

                    /**
                     * 设置点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。
单个地址最大允许长度512字符。
最多允许同时填入5个地址。
注：此时需保持InputUrl字段为空。
                     * @param _inputUrls 点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。
单个地址最大允许长度512字符。
最多允许同时填入5个地址。
注：此时需保持InputUrl字段为空。
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
                     * 获取是否启用点播无限循环播放。
注：当前该字段未生效，默认为True。
                     * @return LoopEnable 是否启用点播无限循环播放。
注：当前该字段未生效，默认为True。
                     * 
                     */
                    bool GetLoopEnable() const;

                    /**
                     * 设置是否启用点播无限循环播放。
注：当前该字段未生效，默认为True。
                     * @param _loopEnable 是否启用点播无限循环播放。
注：当前该字段未生效，默认为True。
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
                     * 获取点播循环次数。
允许值-1或正整数。
当值为-1时，表示无限循环。
当值为其他正整数时，表示循环对应次数。
注：该字段暂未生效。
                     * @return LoopNumber 点播循环次数。
允许值-1或正整数。
当值为-1时，表示无限循环。
当值为其他正整数时，表示循环对应次数。
注：该字段暂未生效。
                     * 
                     */
                    int64_t GetLoopNumber() const;

                    /**
                     * 设置点播循环次数。
允许值-1或正整数。
当值为-1时，表示无限循环。
当值为其他正整数时，表示循环对应次数。
注：该字段暂未生效。
                     * @param _loopNumber 点播循环次数。
允许值-1或正整数。
当值为-1时，表示无限循环。
当值为其他正整数时，表示循环对应次数。
注：该字段暂未生效。
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
                     * 获取是否启用拉取到导播台。
注：该字段默认强制为true。
                     * @return PullPushEnable 是否启用拉取到导播台。
注：该字段默认强制为true。
                     * 
                     */
                    bool GetPullPushEnable() const;

                    /**
                     * 设置是否启用拉取到导播台。
注：该字段默认强制为true。
                     * @param _pullPushEnable 是否启用拉取到导播台。
注：该字段默认强制为true。
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
                     * 获取输入源音量百分比。
默认为100。表示音量为原始大小。
允许值[0,200]。
                     * @return Volume 输入源音量百分比。
默认为100。表示音量为原始大小。
允许值[0,200]。
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置输入源音量百分比。
默认为100。表示音量为原始大小。
允许值[0,200]。
                     * @param _volume 输入源音量百分比。
默认为100。表示音量为原始大小。
允许值[0,200]。
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
                     * 输入源Index。
范围[1, 24]
                     */
                    int64_t m_inputIndex;
                    bool m_inputIndexHasBeenSet;

                    /**
                     * 输入源类型。
范围[0,1,2,3,4]。
0：推流地址。
1：点播文件地址。
2：直播拉流地址。
3：图片地址。
4：webrtc协议推流地址。
                     */
                    int64_t m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 输入源的源地址。
最大允许长度512。
当InputType为0（推流地址），2（直播拉流地址），3（图片地址）,4（webrtc推流地址）这几种类型时，URL需填入该字段。

                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                    /**
                     * 输入源描述。
最大允许长度256字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 点播地址列表。仅当input type为1（点播地址）时，将一个或多个点播地址，填入该字段。
单个地址最大允许长度512字符。
最多允许同时填入5个地址。
注：此时需保持InputUrl字段为空。
                     */
                    std::vector<std::string> m_inputUrls;
                    bool m_inputUrlsHasBeenSet;

                    /**
                     * 是否启用点播无限循环播放。
注：当前该字段未生效，默认为True。
                     */
                    bool m_loopEnable;
                    bool m_loopEnableHasBeenSet;

                    /**
                     * 点播循环次数。
允许值-1或正整数。
当值为-1时，表示无限循环。
当值为其他正整数时，表示循环对应次数。
注：该字段暂未生效。
                     */
                    int64_t m_loopNumber;
                    bool m_loopNumberHasBeenSet;

                    /**
                     * 是否启用拉取到导播台。
注：该字段默认强制为true。
                     */
                    bool m_pullPushEnable;
                    bool m_pullPushEnableHasBeenSet;

                    /**
                     * 输入源音量百分比。
默认为100。表示音量为原始大小。
允许值[0,200]。
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERINPUTINFO_H_
