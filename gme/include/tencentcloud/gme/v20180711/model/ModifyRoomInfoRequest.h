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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_MODIFYROOMINFOREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_MODIFYROOMINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * ModifyRoomInfo请求参数结构体
                */
                class ModifyRoomInfoRequest : public AbstractModel
                {
                public:
                    ModifyRoomInfoRequest();
                    ~ModifyRoomInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @return SdkAppId 应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @param SdkAppId 应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取房间id
                     * @return RoomId 房间id
                     */
                    uint64_t GetRoomId() const;

                    /**
                     * 设置房间id
                     * @param RoomId 房间id
                     */
                    void SetRoomId(const uint64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取301 启动推流
302 停止推流
303 重置RTMP连接
                     * @return OperationType 301 启动推流
302 停止推流
303 重置RTMP连接
                     */
                    int64_t GetOperationType() const;

                    /**
                     * 设置301 启动推流
302 停止推流
303 重置RTMP连接
                     * @param OperationType 301 启动推流
302 停止推流
303 重置RTMP连接
                     */
                    void SetOperationType(const int64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     */
                    bool OperationTypeHasBeenSet() const;

                private:

                    /**
                     * 应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 房间id
                     */
                    uint64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 301 启动推流
302 停止推流
303 重置RTMP连接
                     */
                    int64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_MODIFYROOMINFOREQUEST_H_
