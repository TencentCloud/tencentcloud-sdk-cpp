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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_STARTLIVEAVATARROOMREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_STARTLIVEAVATARROOMREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * StartLiveAvatarRoom请求参数结构体
                */
                class StartLiveAvatarRoomRequest : public AbstractModel
                {
                public:
                    StartLiveAvatarRoomRequest();
                    ~StartLiveAvatarRoomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数字人直播间 ID。</p>
                     * @return RoomId <p>数字人直播间 ID。</p>
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置<p>数字人直播间 ID。</p>
                     * @param _roomId <p>数字人直播间 ID。</p>
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
                     * 获取<p>目标地址描述。</p>
                     * @return Comment <p>目标地址描述。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>目标地址描述。</p>
                     * @param _comment <p>目标地址描述。</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取<p>推流目标地址。</p>
                     * @return ToUrl <p>推流目标地址。</p>
                     * 
                     */
                    std::string GetToUrl() const;

                    /**
                     * 设置<p>推流目标地址。</p>
                     * @param _toUrl <p>推流目标地址。</p>
                     * 
                     */
                    void SetToUrl(const std::string& _toUrl);

                    /**
                     * 判断参数 ToUrl 是否已赋值
                     * @return ToUrl 是否已赋值
                     * 
                     */
                    bool ToUrlHasBeenSet() const;

                    /**
                     * 获取<p>操作者。</p>
                     * @return Operator <p>操作者。</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作者。</p>
                     * @param _operator <p>操作者。</p>
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     * @return RoomType <p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     * 
                     */
                    std::string GetRoomType() const;

                    /**
                     * 设置<p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     * @param _roomType <p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     * 
                     */
                    void SetRoomType(const std::string& _roomType);

                    /**
                     * 判断参数 RoomType 是否已赋值
                     * @return RoomType 是否已赋值
                     * 
                     */
                    bool RoomTypeHasBeenSet() const;

                    /**
                     * 获取<p>交互模式下的协议，支持rtmp和trtc，默认是rtmp</p>
                     * @return SessionProtocol <p>交互模式下的协议，支持rtmp和trtc，默认是rtmp</p>
                     * 
                     */
                    std::string GetSessionProtocol() const;

                    /**
                     * 设置<p>交互模式下的协议，支持rtmp和trtc，默认是rtmp</p>
                     * @param _sessionProtocol <p>交互模式下的协议，支持rtmp和trtc，默认是rtmp</p>
                     * 
                     */
                    void SetSessionProtocol(const std::string& _sessionProtocol);

                    /**
                     * 判断参数 SessionProtocol 是否已赋值
                     * @return SessionProtocol 是否已赋值
                     * 
                     */
                    bool SessionProtocolHasBeenSet() const;

                    /**
                     * 获取<p>使用trtc协议时，在trtc的appid</p>
                     * @return TrtcSdkAppId <p>使用trtc协议时，在trtc的appid</p>
                     * 
                     */
                    std::string GetTrtcSdkAppId() const;

                    /**
                     * 设置<p>使用trtc协议时，在trtc的appid</p>
                     * @param _trtcSdkAppId <p>使用trtc协议时，在trtc的appid</p>
                     * 
                     */
                    void SetTrtcSdkAppId(const std::string& _trtcSdkAppId);

                    /**
                     * 判断参数 TrtcSdkAppId 是否已赋值
                     * @return TrtcSdkAppId 是否已赋值
                     * 
                     */
                    bool TrtcSdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>进入房间时需要用UserSign来校验权限</p>
                     * @return TrtcUserSig <p>进入房间时需要用UserSign来校验权限</p>
                     * 
                     */
                    std::string GetTrtcUserSig() const;

                    /**
                     * 设置<p>进入房间时需要用UserSign来校验权限</p>
                     * @param _trtcUserSig <p>进入房间时需要用UserSign来校验权限</p>
                     * 
                     */
                    void SetTrtcUserSig(const std::string& _trtcUserSig);

                    /**
                     * 判断参数 TrtcUserSig 是否已赋值
                     * @return TrtcUserSig 是否已赋值
                     * 
                     */
                    bool TrtcUserSigHasBeenSet() const;

                    /**
                     * 获取<p>要进入的房间</p>
                     * @return TrtcRoomId <p>要进入的房间</p>
                     * 
                     */
                    std::string GetTrtcRoomId() const;

                    /**
                     * 设置<p>要进入的房间</p>
                     * @param _trtcRoomId <p>要进入的房间</p>
                     * 
                     */
                    void SetTrtcRoomId(const std::string& _trtcRoomId);

                    /**
                     * 判断参数 TrtcRoomId 是否已赋值
                     * @return TrtcRoomId 是否已赋值
                     * 
                     */
                    bool TrtcRoomIdHasBeenSet() const;

                private:

                    /**
                     * <p>数字人直播间 ID。</p>
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * <p>目标地址描述。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>推流目标地址。</p>
                     */
                    std::string m_toUrl;
                    bool m_toUrlHasBeenSet;

                    /**
                     * <p>操作者。</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>房间类型。AIGC：AIGC形象房间；PRESET：预设形象房间</p><p>枚举值：</p><ul><li>AIGC： AIGC形象房间</li><li>PRESET： 预设形象房间</li></ul>
                     */
                    std::string m_roomType;
                    bool m_roomTypeHasBeenSet;

                    /**
                     * <p>交互模式下的协议，支持rtmp和trtc，默认是rtmp</p>
                     */
                    std::string m_sessionProtocol;
                    bool m_sessionProtocolHasBeenSet;

                    /**
                     * <p>使用trtc协议时，在trtc的appid</p>
                     */
                    std::string m_trtcSdkAppId;
                    bool m_trtcSdkAppIdHasBeenSet;

                    /**
                     * <p>进入房间时需要用UserSign来校验权限</p>
                     */
                    std::string m_trtcUserSig;
                    bool m_trtcUserSigHasBeenSet;

                    /**
                     * <p>要进入的房间</p>
                     */
                    std::string m_trtcRoomId;
                    bool m_trtcRoomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_STARTLIVEAVATARROOMREQUEST_H_
