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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUAUDIOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUAUDIOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AudioEncode.h>
#include <tencentcloud/trtc/v20190722/model/McuUserInfoParams.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 混流转推的音频相关参数。
                */
                class McuAudioParams : public AbstractModel
                {
                public:
                    McuAudioParams();
                    ~McuAudioParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音频编码参数。
                     * @return AudioEncode 音频编码参数。
                     * 
                     */
                    AudioEncode GetAudioEncode() const;

                    /**
                     * 设置音频编码参数。
                     * @param _audioEncode 音频编码参数。
                     * 
                     */
                    void SetAudioEncode(const AudioEncode& _audioEncode);

                    /**
                     * 判断参数 AudioEncode 是否已赋值
                     * @return AudioEncode 是否已赋值
                     * 
                     */
                    bool AudioEncodeHasBeenSet() const;

                    /**
                     * 获取音频用户白名单，start时，为空或不填表示混所有主播音频，填具体值表示混指定主播音频；update时，不填表示不更新，为空表示更新为混所有主播音频，填具体值表示更新为混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
注：如果是跨房pk时，跨房混流需要指定音频白名单，否则pk主播的的音频上行会被拉到两次，产生重音。
                     * @return SubscribeAudioList 音频用户白名单，start时，为空或不填表示混所有主播音频，填具体值表示混指定主播音频；update时，不填表示不更新，为空表示更新为混所有主播音频，填具体值表示更新为混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
注：如果是跨房pk时，跨房混流需要指定音频白名单，否则pk主播的的音频上行会被拉到两次，产生重音。
                     * 
                     */
                    std::vector<McuUserInfoParams> GetSubscribeAudioList() const;

                    /**
                     * 设置音频用户白名单，start时，为空或不填表示混所有主播音频，填具体值表示混指定主播音频；update时，不填表示不更新，为空表示更新为混所有主播音频，填具体值表示更新为混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
注：如果是跨房pk时，跨房混流需要指定音频白名单，否则pk主播的的音频上行会被拉到两次，产生重音。
                     * @param _subscribeAudioList 音频用户白名单，start时，为空或不填表示混所有主播音频，填具体值表示混指定主播音频；update时，不填表示不更新，为空表示更新为混所有主播音频，填具体值表示更新为混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
注：如果是跨房pk时，跨房混流需要指定音频白名单，否则pk主播的的音频上行会被拉到两次，产生重音。
                     * 
                     */
                    void SetSubscribeAudioList(const std::vector<McuUserInfoParams>& _subscribeAudioList);

                    /**
                     * 判断参数 SubscribeAudioList 是否已赋值
                     * @return SubscribeAudioList 是否已赋值
                     * 
                     */
                    bool SubscribeAudioListHasBeenSet() const;

                    /**
                     * 获取音频用户黑名单，为空或不填表示无黑名单，填具体值表示不混指定主播音频。update时，不填表示不更新，为空表示更新为清空黑名单，填具体值表示更新为不混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
                     * @return UnSubscribeAudioList 音频用户黑名单，为空或不填表示无黑名单，填具体值表示不混指定主播音频。update时，不填表示不更新，为空表示更新为清空黑名单，填具体值表示更新为不混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
                     * 
                     */
                    std::vector<McuUserInfoParams> GetUnSubscribeAudioList() const;

                    /**
                     * 设置音频用户黑名单，为空或不填表示无黑名单，填具体值表示不混指定主播音频。update时，不填表示不更新，为空表示更新为清空黑名单，填具体值表示更新为不混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
                     * @param _unSubscribeAudioList 音频用户黑名单，为空或不填表示无黑名单，填具体值表示不混指定主播音频。update时，不填表示不更新，为空表示更新为清空黑名单，填具体值表示更新为不混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
                     * 
                     */
                    void SetUnSubscribeAudioList(const std::vector<McuUserInfoParams>& _unSubscribeAudioList);

                    /**
                     * 判断参数 UnSubscribeAudioList 是否已赋值
                     * @return UnSubscribeAudioList 是否已赋值
                     * 
                     */
                    bool UnSubscribeAudioListHasBeenSet() const;

                private:

                    /**
                     * 音频编码参数。
                     */
                    AudioEncode m_audioEncode;
                    bool m_audioEncodeHasBeenSet;

                    /**
                     * 音频用户白名单，start时，为空或不填表示混所有主播音频，填具体值表示混指定主播音频；update时，不填表示不更新，为空表示更新为混所有主播音频，填具体值表示更新为混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
注：如果是跨房pk时，跨房混流需要指定音频白名单，否则pk主播的的音频上行会被拉到两次，产生重音。
                     */
                    std::vector<McuUserInfoParams> m_subscribeAudioList;
                    bool m_subscribeAudioListHasBeenSet;

                    /**
                     * 音频用户黑名单，为空或不填表示无黑名单，填具体值表示不混指定主播音频。update时，不填表示不更新，为空表示更新为清空黑名单，填具体值表示更新为不混指定主播音频。
使用黑白名单时，黑白名单必须同时填写。都不填写时表示不更新。同一个用户同时在黑白名单时，以黑名单为主。
                     */
                    std::vector<McuUserInfoParams> m_unSubscribeAudioList;
                    bool m_unSubscribeAudioListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUAUDIOPARAMS_H_
