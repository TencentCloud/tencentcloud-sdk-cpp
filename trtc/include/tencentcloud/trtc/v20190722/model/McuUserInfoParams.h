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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MCUUSERINFOPARAMS_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MCUUSERINFOPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/MixUserInfo.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 混流用户参数
                */
                class McuUserInfoParams : public AbstractModel
                {
                public:
                    McuUserInfoParams();
                    ~McuUserInfoParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户参数。
                     * @return UserInfo 用户参数。
                     * 
                     */
                    MixUserInfo GetUserInfo() const;

                    /**
                     * 设置用户参数。
                     * @param _userInfo 用户参数。
                     * 
                     */
                    void SetUserInfo(const MixUserInfo& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取混音的音量调整：取值范围是0到100，100为原始上行音量，不填默认为100，值越小则音量越低。
注：该参数只在音量白名单下配置生效，其他场景配置无效。
                     * @return SoundLevel 混音的音量调整：取值范围是0到100，100为原始上行音量，不填默认为100，值越小则音量越低。
注：该参数只在音量白名单下配置生效，其他场景配置无效。
                     * 
                     */
                    uint64_t GetSoundLevel() const;

                    /**
                     * 设置混音的音量调整：取值范围是0到100，100为原始上行音量，不填默认为100，值越小则音量越低。
注：该参数只在音量白名单下配置生效，其他场景配置无效。
                     * @param _soundLevel 混音的音量调整：取值范围是0到100，100为原始上行音量，不填默认为100，值越小则音量越低。
注：该参数只在音量白名单下配置生效，其他场景配置无效。
                     * 
                     */
                    void SetSoundLevel(const uint64_t& _soundLevel);

                    /**
                     * 判断参数 SoundLevel 是否已赋值
                     * @return SoundLevel 是否已赋值
                     * 
                     */
                    bool SoundLevelHasBeenSet() const;

                private:

                    /**
                     * 用户参数。
                     */
                    MixUserInfo m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 混音的音量调整：取值范围是0到100，100为原始上行音量，不填默认为100，值越小则音量越低。
注：该参数只在音量白名单下配置生效，其他场景配置无效。
                     */
                    uint64_t m_soundLevel;
                    bool m_soundLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MCUUSERINFOPARAMS_H_
