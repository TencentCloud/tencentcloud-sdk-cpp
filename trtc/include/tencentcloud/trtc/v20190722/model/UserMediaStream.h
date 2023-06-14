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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_USERMEDIASTREAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_USERMEDIASTREAM_H_

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
                * 用户媒体流参数。
                */
                class UserMediaStream : public AbstractModel
                {
                public:
                    UserMediaStream();
                    ~UserMediaStream() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TRTC用户参数。
                     * @return UserInfo TRTC用户参数。
                     * 
                     */
                    MixUserInfo GetUserInfo() const;

                    /**
                     * 设置TRTC用户参数。
                     * @param _userInfo TRTC用户参数。
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
                     * 获取主辅路流类型，0为摄像头，1为屏幕分享，不填默认为0。
                     * @return StreamType 主辅路流类型，0为摄像头，1为屏幕分享，不填默认为0。
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置主辅路流类型，0为摄像头，1为屏幕分享，不填默认为0。
                     * @param _streamType 主辅路流类型，0为摄像头，1为屏幕分享，不填默认为0。
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                private:

                    /**
                     * TRTC用户参数。
                     */
                    MixUserInfo m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 主辅路流类型，0为摄像头，1为屏幕分享，不填默认为0。
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_USERMEDIASTREAM_H_
