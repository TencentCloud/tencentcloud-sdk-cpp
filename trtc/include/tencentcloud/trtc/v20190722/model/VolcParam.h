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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_VOLCPARAM_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_VOLCPARAM_H_

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
                * VolcParam 火山引擎(VolcEngineRTC / ByteRTC)房间拉流参数。
                */
                class VolcParam : public AbstractModel
                {
                public:
                    VolcParam();
                    ~VolcParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>火山引擎 AppID。</p>
                     * @return AppId <p>火山引擎 AppID。</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>火山引擎 AppID。</p>
                     * @param _appId <p>火山引擎 AppID。</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>房间号。</p>
                     * @return RoomId <p>房间号。</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>房间号。</p>
                     * @param _roomId <p>房间号。</p>
                     * 
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取<p>进房 Token。</p><p>需要开启鉴权，生成 Token时，注意RoomId 、UserId 需要对应上。详见：https://www.volcengine.com/docs/6348/70121</p>
                     * @return Token <p>进房 Token。</p><p>需要开启鉴权，生成 Token时，注意RoomId 、UserId 需要对应上。详见：https://www.volcengine.com/docs/6348/70121</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>进房 Token。</p><p>需要开启鉴权，生成 Token时，注意RoomId 、UserId 需要对应上。详见：https://www.volcengine.com/docs/6348/70121</p>
                     * @param _token <p>进房 Token。</p><p>需要开启鉴权，生成 Token时，注意RoomId 、UserId 需要对应上。详见：https://www.volcengine.com/docs/6348/70121</p>
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取<p>分配给拉流端的UserId。</p>
                     * @return UserId <p>分配给拉流端的UserId。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>分配给拉流端的UserId。</p>
                     * @param _userId <p>分配给拉流端的UserId。</p>
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
                     * 获取<p>订阅用户名单。</p><p>当前名单列表为空时，默认为全订阅；当名单列表有用户id,则只会订阅列表中用户。</p>
                     * @return TrustedUserIdList <p>订阅用户名单。</p><p>当前名单列表为空时，默认为全订阅；当名单列表有用户id,则只会订阅列表中用户。</p>
                     * 
                     */
                    std::string GetTrustedUserIdList() const;

                    /**
                     * 设置<p>订阅用户名单。</p><p>当前名单列表为空时，默认为全订阅；当名单列表有用户id,则只会订阅列表中用户。</p>
                     * @param _trustedUserIdList <p>订阅用户名单。</p><p>当前名单列表为空时，默认为全订阅；当名单列表有用户id,则只会订阅列表中用户。</p>
                     * 
                     */
                    void SetTrustedUserIdList(const std::string& _trustedUserIdList);

                    /**
                     * 判断参数 TrustedUserIdList 是否已赋值
                     * @return TrustedUserIdList 是否已赋值
                     * 
                     */
                    bool TrustedUserIdListHasBeenSet() const;

                    /**
                     * 获取<p>不订阅用户名单</p>
                     * @return UntrustedUserIdList <p>不订阅用户名单</p>
                     * 
                     */
                    std::string GetUntrustedUserIdList() const;

                    /**
                     * 设置<p>不订阅用户名单</p>
                     * @param _untrustedUserIdList <p>不订阅用户名单</p>
                     * 
                     */
                    void SetUntrustedUserIdList(const std::string& _untrustedUserIdList);

                    /**
                     * 判断参数 UntrustedUserIdList 是否已赋值
                     * @return UntrustedUserIdList 是否已赋值
                     * 
                     */
                    bool UntrustedUserIdListHasBeenSet() const;

                private:

                    /**
                     * <p>火山引擎 AppID。</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>房间号。</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>进房 Token。</p><p>需要开启鉴权，生成 Token时，注意RoomId 、UserId 需要对应上。详见：https://www.volcengine.com/docs/6348/70121</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * <p>分配给拉流端的UserId。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>订阅用户名单。</p><p>当前名单列表为空时，默认为全订阅；当名单列表有用户id,则只会订阅列表中用户。</p>
                     */
                    std::string m_trustedUserIdList;
                    bool m_trustedUserIdListHasBeenSet;

                    /**
                     * <p>不订阅用户名单</p>
                     */
                    std::string m_untrustedUserIdList;
                    bool m_untrustedUserIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_VOLCPARAM_H_
