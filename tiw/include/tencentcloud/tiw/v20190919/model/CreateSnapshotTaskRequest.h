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
                     * 
                     */
                    SnapshotWhiteboard GetWhiteboard() const;

                    /**
                     * 设置白板相关参数
                     * @param _whiteboard 白板相关参数
                     * 
                     */
                    void SetWhiteboard(const SnapshotWhiteboard& _whiteboard);

                    /**
                     * 判断参数 Whiteboard 是否已赋值
                     * @return Whiteboard 是否已赋值
                     * 
                     */
                    bool WhiteboardHasBeenSet() const;

                    /**
                     * 获取白板房间 `SdkAppId`
                     * @return SdkAppId 白板房间 `SdkAppId`
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置白板房间 `SdkAppId`
                     * @param _sdkAppId 白板房间 `SdkAppId`
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
                     * 获取白板房间号
                     * @return RoomId 白板房间号
                     * 
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置白板房间号
                     * @param _roomId 白板房间号
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
                     * 获取白板板书生成结果通知回调地址
                     * @return CallbackURL 白板板书生成结果通知回调地址
                     * 
                     */
                    std::string GetCallbackURL() const;

                    /**
                     * 设置白板板书生成结果通知回调地址
                     * @param _callbackURL 白板板书生成结果通知回调地址
                     * 
                     */
                    void SetCallbackURL(const std::string& _callbackURL);

                    /**
                     * 判断参数 CallbackURL 是否已赋值
                     * @return CallbackURL 是否已赋值
                     * 
                     */
                    bool CallbackURLHasBeenSet() const;

                    /**
                     * 获取白板板书文件 `COS` 存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     * @return COS 白板板书文件 `COS` 存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     * 
                     */
                    SnapshotCOS GetCOS() const;

                    /**
                     * 设置白板板书文件 `COS` 存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     * @param _cOS 白板板书文件 `COS` 存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     * 
                     */
                    void SetCOS(const SnapshotCOS& _cOS);

                    /**
                     * 判断参数 COS 是否已赋值
                     * @return COS 是否已赋值
                     * 
                     */
                    bool COSHasBeenSet() const;

                    /**
                     * 获取白板板书生成模式，默认为 `AllMarks`。取值说明如下：

`AllMarks` - 全量模式，即对于客户端每一次调用 `addSnapshotMark` 接口打上的白板板书生成标志全部都会生成对应的白板板书图片。

`LatestMarksOnly` - 单页去重模式，即对于客户端在同一页白板上多次调用 `addSnapshotMark` 打上的白板板书生成标志仅保留最新一次标志来生成对应白板页的白板板书图片。

（**注意：`LatestMarksOnly` 模式只有客户端使用v2.6.8及以上版本的白板SDK调用 `addSnapshotMark` 时才生效，否则即使在调用本API是指定了 `LatestMarksOnly` 模式，服务后台会使用默认的 `AllMarks` 模式生成白板板书**）
                     * @return SnapshotMode 白板板书生成模式，默认为 `AllMarks`。取值说明如下：

`AllMarks` - 全量模式，即对于客户端每一次调用 `addSnapshotMark` 接口打上的白板板书生成标志全部都会生成对应的白板板书图片。

`LatestMarksOnly` - 单页去重模式，即对于客户端在同一页白板上多次调用 `addSnapshotMark` 打上的白板板书生成标志仅保留最新一次标志来生成对应白板页的白板板书图片。

（**注意：`LatestMarksOnly` 模式只有客户端使用v2.6.8及以上版本的白板SDK调用 `addSnapshotMark` 时才生效，否则即使在调用本API是指定了 `LatestMarksOnly` 模式，服务后台会使用默认的 `AllMarks` 模式生成白板板书**）
                     * 
                     */
                    std::string GetSnapshotMode() const;

                    /**
                     * 设置白板板书生成模式，默认为 `AllMarks`。取值说明如下：

`AllMarks` - 全量模式，即对于客户端每一次调用 `addSnapshotMark` 接口打上的白板板书生成标志全部都会生成对应的白板板书图片。

`LatestMarksOnly` - 单页去重模式，即对于客户端在同一页白板上多次调用 `addSnapshotMark` 打上的白板板书生成标志仅保留最新一次标志来生成对应白板页的白板板书图片。

（**注意：`LatestMarksOnly` 模式只有客户端使用v2.6.8及以上版本的白板SDK调用 `addSnapshotMark` 时才生效，否则即使在调用本API是指定了 `LatestMarksOnly` 模式，服务后台会使用默认的 `AllMarks` 模式生成白板板书**）
                     * @param _snapshotMode 白板板书生成模式，默认为 `AllMarks`。取值说明如下：

`AllMarks` - 全量模式，即对于客户端每一次调用 `addSnapshotMark` 接口打上的白板板书生成标志全部都会生成对应的白板板书图片。

`LatestMarksOnly` - 单页去重模式，即对于客户端在同一页白板上多次调用 `addSnapshotMark` 打上的白板板书生成标志仅保留最新一次标志来生成对应白板页的白板板书图片。

（**注意：`LatestMarksOnly` 模式只有客户端使用v2.6.8及以上版本的白板SDK调用 `addSnapshotMark` 时才生效，否则即使在调用本API是指定了 `LatestMarksOnly` 模式，服务后台会使用默认的 `AllMarks` 模式生成白板板书**）
                     * 
                     */
                    void SetSnapshotMode(const std::string& _snapshotMode);

                    /**
                     * 判断参数 SnapshotMode 是否已赋值
                     * @return SnapshotMode 是否已赋值
                     * 
                     */
                    bool SnapshotModeHasBeenSet() const;

                private:

                    /**
                     * 白板相关参数
                     */
                    SnapshotWhiteboard m_whiteboard;
                    bool m_whiteboardHasBeenSet;

                    /**
                     * 白板房间 `SdkAppId`
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
                     * 白板板书文件 `COS` 存储参数， 不填默认存储在公共存储桶，公共存储桶的数据仅保存3天
                     */
                    SnapshotCOS m_cOS;
                    bool m_cOSHasBeenSet;

                    /**
                     * 白板板书生成模式，默认为 `AllMarks`。取值说明如下：

`AllMarks` - 全量模式，即对于客户端每一次调用 `addSnapshotMark` 接口打上的白板板书生成标志全部都会生成对应的白板板书图片。

`LatestMarksOnly` - 单页去重模式，即对于客户端在同一页白板上多次调用 `addSnapshotMark` 打上的白板板书生成标志仅保留最新一次标志来生成对应白板页的白板板书图片。

（**注意：`LatestMarksOnly` 模式只有客户端使用v2.6.8及以上版本的白板SDK调用 `addSnapshotMark` 时才生效，否则即使在调用本API是指定了 `LatestMarksOnly` 模式，服务后台会使用默认的 `AllMarks` 模式生成白板板书**）
                     */
                    std::string m_snapshotMode;
                    bool m_snapshotModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_CREATESNAPSHOTTASKREQUEST_H_
