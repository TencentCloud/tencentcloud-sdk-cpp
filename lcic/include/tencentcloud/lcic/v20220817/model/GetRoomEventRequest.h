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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMEVENTREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * GetRoomEvent请求参数结构体
                */
                class GetRoomEventRequest : public AbstractModel
                {
                public:
                    GetRoomEventRequest();
                    ~GetRoomEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取课堂Id。
                     * @return RoomId 课堂Id。
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置课堂Id。
                     * @param _roomId 课堂Id。
                     * 
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取应用Id。
                     * @return SdkAppId 应用Id。
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用Id。
                     * @param _sdkAppId 应用Id。
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取起始页，1开始。keyword为空时有效。
                     * @return Page 起始页，1开始。keyword为空时有效。
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置起始页，1开始。keyword为空时有效。
                     * @param _page 起始页，1开始。keyword为空时有效。
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页个数。keyword为空时有效。一次性最多100条。
                     * @return Limit 每页个数。keyword为空时有效。一次性最多100条。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页个数。keyword为空时有效。一次性最多100条。
                     * @param _limit 每页个数。keyword为空时有效。一次性最多100条。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索事件类型。有以下事件类型:
RoomStart:房间开始
RoomEnd:房间结束
MemberJoin:成员加入
MemberQuit:成员退出
RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     * @return Keyword 搜索事件类型。有以下事件类型:
RoomStart:房间开始
RoomEnd:房间结束
MemberJoin:成员加入
MemberQuit:成员退出
RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索事件类型。有以下事件类型:
RoomStart:房间开始
RoomEnd:房间结束
MemberJoin:成员加入
MemberQuit:成员退出
RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     * @param _keyword 搜索事件类型。有以下事件类型:
RoomStart:房间开始
RoomEnd:房间结束
MemberJoin:成员加入
MemberQuit:成员退出
RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 课堂Id。
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 应用Id。
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 起始页，1开始。keyword为空时有效。
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页个数。keyword为空时有效。一次性最多100条。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索事件类型。有以下事件类型:
RoomStart:房间开始
RoomEnd:房间结束
MemberJoin:成员加入
MemberQuit:成员退出
RecordFinish:录制结束
CameraOn: 摄像头打开
CameraOff: 摄像头关闭
MicOn: 麦克风打开
MicOff: 麦克风关闭
ScreenOn: 屏幕共享打开
ScreenOff: 屏幕共享关闭
VisibleOn: 页面可见
VisibleOff: 页面不可见
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_GETROOMEVENTREQUEST_H_
