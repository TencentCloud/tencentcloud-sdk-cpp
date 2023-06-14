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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATEOFFLINERECORDREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATEOFFLINERECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/MixStream.h>
#include <tencentcloud/tiw/v20190919/model/Whiteboard.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateOfflineRecord请求参数结构体
                */
                class CreateOfflineRecordRequest : public AbstractModel
                {
                public:
                    CreateOfflineRecordRequest();
                    ~CreateOfflineRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param _sdkAppId 客户的SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取录制任务对应的房间号
                     * @return RoomId 录制任务对应的房间号
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置录制任务对应的房间号
                     * @param _roomId 录制任务对应的房间号
                     * 
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取录制任务对应的群组Id
                     * @return GroupId 录制任务对应的群组Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置录制任务对应的群组Id
                     * @param _groupId 录制任务对应的群组Id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取混流参数配置
目前课后录制暂未支持自定义混流布局Custom参数
                     * @return MixStream 混流参数配置
目前课后录制暂未支持自定义混流布局Custom参数
                     * 
                     */
                    MixStream GetMixStream() const;

                    /**
                     * 设置混流参数配置
目前课后录制暂未支持自定义混流布局Custom参数
                     * @param _mixStream 混流参数配置
目前课后录制暂未支持自定义混流布局Custom参数
                     * 
                     */
                    void SetMixStream(const MixStream& _mixStream);

                    /**
                     * 判断参数 MixStream 是否已赋值
                     * @return MixStream 是否已赋值
                     * 
                     */
                    bool MixStreamHasBeenSet() const;

                    /**
                     * 获取白板参数配置
                     * @return Whiteboard 白板参数配置
                     * 
                     */
                    Whiteboard GetWhiteboard() const;

                    /**
                     * 设置白板参数配置
                     * @param _whiteboard 白板参数配置
                     * 
                     */
                    void SetWhiteboard(const Whiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     * 
                     */
                    bool WhiteboardHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 录制任务对应的房间号
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 录制任务对应的群组Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 混流参数配置
目前课后录制暂未支持自定义混流布局Custom参数
                     */
                    MixStream m_mixStream;
                    bool m_mixStreamHasBeenSet;

                    /**
                     * 白板参数配置
                     */
                    Whiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATEOFFLINERECORDREQUEST_H_
