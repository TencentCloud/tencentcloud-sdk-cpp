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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/SnapshotWhiteboard.h>
#include <tencentcloud/tiw/v20190919/model/SnapshotCOS.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * CreateSnapshotTask请求参数结构体
                */
                class CreateSnapshotTaskRequest : public AbstractModel
                {
                public:
                    CreateSnapshotTaskRequest();
                    ~CreateSnapshotTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取白板相关参数
                     * @return Whiteboard 白板相关参数
                     */
                    SnapshotWhiteboard GetWhiteboard() const;

                    /**
                     * 设置白板相关参数
                     * @param Whiteboard 白板相关参数
                     */
                    void SetWhiteboard(const SnapshotWhiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取白板房间SdkAppId
                     * @return SdkAppId 白板房间SdkAppId
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置白板房间SdkAppId
                     * @param SdkAppId 白板房间SdkAppId
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取白板房间号
                     * @return RoomId 白板房间号
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置白板房间号
                     * @param RoomId 白板房间号
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取白板板书生成结果通知回调地址
                     * @return CallbackURL 白板板书生成结果通知回调地址
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置白板板书生成结果通知回调地址
                     * @param CallbackURL 白板板书生成结果通知回调地址
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     */
                    bool CallbackURLHasBeenSet() const;

                    /**
                     * 获取白板板书文件COS存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     * @return COS 白板板书文件COS存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     */
                    SnapshotCOS GetCOS() const;

                    /**
                     * 设置白板板书文件COS存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     * @param COS 白板板书文件COS存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     */
                    void SetCOS(const SnapshotCOS& _cOS);

                    /**
                     * 判断参数 COS 是否已赋值
                     * @return COS 是否已赋值
                     */
                    bool COSHasBeenSet() const;

                private:

                    /**
                     * 白板相关参数
                     */
                    SnapshotWhiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * 白板房间SdkAppId
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 白板房间号
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 白板板书生成结果通知回调地址
                     */
                    std::string m_callbackURL;
                    bool m_callbackURLHasBeenSet;

                    /**
                     * 白板板书文件COS存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     */
                    SnapshotCOS m_cOS;
                    bool m_cOSHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKREQUEST_H_
