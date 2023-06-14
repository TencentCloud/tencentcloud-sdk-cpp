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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_RECORDCONTROL_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_RECORDCONTROL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/StreamControl.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 录制控制参数， 用于指定全局录制控制及具体流录制控制参数，比如设置需要对哪些流进行录制，是否只录制小画面等
                */
                class RecordControl : public AbstractModel
                {
                public:
                    RecordControl();
                    ~RecordControl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设置是否开启录制控制参数，只有设置为true的时候，录制控制参数才生效。
                     * @return Enabled 设置是否开启录制控制参数，只有设置为true的时候，录制控制参数才生效。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置设置是否开启录制控制参数，只有设置为true的时候，录制控制参数才生效。
                     * @param _enabled 设置是否开启录制控制参数，只有设置为true的时候，录制控制参数才生效。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取设置是否禁用录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都不录制。
false - 所有流都录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * @return DisableRecord 设置是否禁用录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都不录制。
false - 所有流都录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * 
                     */
                    bool GetDisableRecord() const;

                    /**
                     * 设置设置是否禁用录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都不录制。
false - 所有流都录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * @param _disableRecord 设置是否禁用录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都不录制。
false - 所有流都录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * 
                     */
                    void SetDisableRecord(const bool& _disableRecord);

                    /**
                     * 判断参数 DisableRecord 是否已赋值
                     * @return DisableRecord 是否已赋值
                     * 
                     */
                    bool DisableRecordHasBeenSet() const;

                    /**
                     * 获取设置是否禁用所有流的音频录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流的录制都不对音频进行录制。
false - 所有流的录制都需要对音频进行录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * @return DisableAudio 设置是否禁用所有流的音频录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流的录制都不对音频进行录制。
false - 所有流的录制都需要对音频进行录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * 
                     */
                    bool GetDisableAudio() const;

                    /**
                     * 设置设置是否禁用所有流的音频录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流的录制都不对音频进行录制。
false - 所有流的录制都需要对音频进行录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * @param _disableAudio 设置是否禁用所有流的音频录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流的录制都不对音频进行录制。
false - 所有流的录制都需要对音频进行录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * 
                     */
                    void SetDisableAudio(const bool& _disableAudio);

                    /**
                     * 判断参数 DisableAudio 是否已赋值
                     * @return DisableAudio 是否已赋值
                     * 
                     */
                    bool DisableAudioHasBeenSet() const;

                    /**
                     * 获取设置是否所有流都只录制小画面的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都只录制小画面。设置为true时，请确保上行端在推流的时候同时上行了小画面，否则录制视频可能是黑屏。
false - 所有流都录制大画面，默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * @return PullSmallVideo 设置是否所有流都只录制小画面的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都只录制小画面。设置为true时，请确保上行端在推流的时候同时上行了小画面，否则录制视频可能是黑屏。
false - 所有流都录制大画面，默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * 
                     */
                    bool GetPullSmallVideo() const;

                    /**
                     * 设置设置是否所有流都只录制小画面的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都只录制小画面。设置为true时，请确保上行端在推流的时候同时上行了小画面，否则录制视频可能是黑屏。
false - 所有流都录制大画面，默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * @param _pullSmallVideo 设置是否所有流都只录制小画面的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都只录制小画面。设置为true时，请确保上行端在推流的时候同时上行了小画面，否则录制视频可能是黑屏。
false - 所有流都录制大画面，默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     * 
                     */
                    void SetPullSmallVideo(const bool& _pullSmallVideo);

                    /**
                     * 判断参数 PullSmallVideo 是否已赋值
                     * @return PullSmallVideo 是否已赋值
                     * 
                     */
                    bool PullSmallVideoHasBeenSet() const;

                    /**
                     * 获取针对具体流指定控制参数，如果列表为空，则所有流采用全局配置的控制参数进行录制。列表不为空，则列表中指定的流将优先按此列表指定的控制参数进行录制。
                     * @return StreamControls 针对具体流指定控制参数，如果列表为空，则所有流采用全局配置的控制参数进行录制。列表不为空，则列表中指定的流将优先按此列表指定的控制参数进行录制。
                     * 
                     */
                    std::vector<StreamControl> GetStreamControls() const;

                    /**
                     * 设置针对具体流指定控制参数，如果列表为空，则所有流采用全局配置的控制参数进行录制。列表不为空，则列表中指定的流将优先按此列表指定的控制参数进行录制。
                     * @param _streamControls 针对具体流指定控制参数，如果列表为空，则所有流采用全局配置的控制参数进行录制。列表不为空，则列表中指定的流将优先按此列表指定的控制参数进行录制。
                     * 
                     */
                    void SetStreamControls(const std::vector<StreamControl>& _streamControls);

                    /**
                     * 判断参数 StreamControls 是否已赋值
                     * @return StreamControls 是否已赋值
                     * 
                     */
                    bool StreamControlsHasBeenSet() const;

                private:

                    /**
                     * 设置是否开启录制控制参数，只有设置为true的时候，录制控制参数才生效。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 设置是否禁用录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都不录制。
false - 所有流都录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     */
                    bool m_disableRecord;
                    bool m_disableRecordHasBeenSet;

                    /**
                     * 设置是否禁用所有流的音频录制的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流的录制都不对音频进行录制。
false - 所有流的录制都需要对音频进行录制。默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     */
                    bool m_disableAudio;
                    bool m_disableAudioHasBeenSet;

                    /**
                     * 设置是否所有流都只录制小画面的全局控制参数。一般与`StreamControls`参数配合使用。

true - 所有流都只录制小画面。设置为true时，请确保上行端在推流的时候同时上行了小画面，否则录制视频可能是黑屏。
false - 所有流都录制大画面，默认为false。

这里的设置对所有流都生效，如果同时在 `StreamControls` 列表中针对指定流设置了控制参数，则优先采用`StreamControls`中设置的控制参数。
                     */
                    bool m_pullSmallVideo;
                    bool m_pullSmallVideoHasBeenSet;

                    /**
                     * 针对具体流指定控制参数，如果列表为空，则所有流采用全局配置的控制参数进行录制。列表不为空，则列表中指定的流将优先按此列表指定的控制参数进行录制。
                     */
                    std::vector<StreamControl> m_streamControls;
                    bool m_streamControlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_RECORDCONTROL_H_
