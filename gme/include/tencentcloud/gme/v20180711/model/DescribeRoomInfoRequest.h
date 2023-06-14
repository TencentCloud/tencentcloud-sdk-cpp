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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEROOMINFOREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEROOMINFOREQUEST_H_

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
                * DescribeRoomInfo请求参数结构体
                */
                class DescribeRoomInfoRequest : public AbstractModel
                {
                public:
                    DescribeRoomInfoRequest();
                    ~DescribeRoomInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @return SdkAppId 应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     * @param _sdkAppId 应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
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
                     * 获取房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     * @return RoomIds 房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     * 
                     */
                    std::vector<uint64_t> GetRoomIds() const;

                    /**
                     * 设置房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     * @param _roomIds 房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     * 
                     */
                    void SetRoomIds(const std::vector<uint64_t>& _roomIds);

                    /**
                     * 判断参数 RoomIds 是否已赋值
                     * @return RoomIds 是否已赋值
                     * 
                     */
                    bool RoomIdsHasBeenSet() const;

                    /**
                     * 获取字符串类型房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     * @return StrRoomIds 字符串类型房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     * 
                     */
                    std::vector<std::string> GetStrRoomIds() const;

                    /**
                     * 设置字符串类型房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     * @param _strRoomIds 字符串类型房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     * 
                     */
                    void SetStrRoomIds(const std::vector<std::string>& _strRoomIds);

                    /**
                     * 判断参数 StrRoomIds 是否已赋值
                     * @return StrRoomIds 是否已赋值
                     * 
                     */
                    bool StrRoomIdsHasBeenSet() const;

                private:

                    /**
                     * 应用ID，登录[控制台 - 服务管理](https://console.cloud.tencent.com/gamegme)创建应用得到的AppID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     */
                    std::vector<uint64_t> m_roomIds;
                    bool m_roomIdsHasBeenSet;

                    /**
                     * 字符串类型房间号列表，最大不能超过10个（RoomIds、StrRoomIds必须填一个）
                     */
                    std::vector<std::string> m_strRoomIds;
                    bool m_strRoomIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEROOMINFOREQUEST_H_
