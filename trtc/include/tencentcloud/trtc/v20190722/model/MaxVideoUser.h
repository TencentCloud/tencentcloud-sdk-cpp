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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_MAXVIDEOUSER_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_MAXVIDEOUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/UserMediaStream.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 指定动态布局中悬浮布局和屏幕分享布局的大画面信息，只在悬浮布局和屏幕分享布局有效。
                */
                class MaxVideoUser : public AbstractModel
                {
                public:
                    MaxVideoUser();
                    ~MaxVideoUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户媒体流参数。
                     * @return UserMediaStream 用户媒体流参数。
                     * 
                     */
                    UserMediaStream GetUserMediaStream() const;

                    /**
                     * 设置用户媒体流参数。
                     * @param _userMediaStream 用户媒体流参数。
                     * 
                     */
                    void SetUserMediaStream(const UserMediaStream& _userMediaStream);

                    /**
                     * 判断参数 UserMediaStream 是否已赋值
                     * @return UserMediaStream 是否已赋值
                     * 
                     */
                    bool UserMediaStreamHasBeenSet() const;

                private:

                    /**
                     * 用户媒体流参数。
                     */
                    UserMediaStream m_userMediaStream;
                    bool m_userMediaStreamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_MAXVIDEOUSER_H_
