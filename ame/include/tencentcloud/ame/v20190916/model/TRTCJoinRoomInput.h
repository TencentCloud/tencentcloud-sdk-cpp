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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_TRTCJOINROOMINPUT_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_TRTCJOINROOMINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * TRTC推流进房信息
                */
                class TRTCJoinRoomInput : public AbstractModel
                {
                public:
                    TRTCJoinRoomInput();
                    ~TRTCJoinRoomInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签名。
                     * @return Sign 签名。
                     * 
                     */
                    std::string GetSign() const;

                    /**
                     * 设置签名。
                     * @param _sign 签名。
                     * 
                     */
                    void SetSign(const std::string& _sign);

                    /**
                     * 判断参数 Sign 是否已赋值
                     * @return Sign 是否已赋值
                     * 
                     */
                    bool SignHasBeenSet() const;

                    /**
                     * 获取房间号。
                     * @return RoomId 房间号。
                     * 
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间号。
                     * @param _roomId 房间号。
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
                     * 获取推流应用ID。
                     * @return SdkAppId 推流应用ID。
                     * 
                     */
                    std::string GetSdkAppId() const;

                    /**
                     * 设置推流应用ID。
                     * @param _sdkAppId 推流应用ID。
                     * 
                     */
                    void SetSdkAppId(const std::string& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取用户唯一标识。
                     * @return UserId 用户唯一标识。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户唯一标识。
                     * @param _userId 用户唯一标识。
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
                     * 获取进房钥匙，若需要权限控制请携带该参数。
 [privateMapKey 权限设置](/document/product/647/32240) 
                     * @return PrivateMapKey 进房钥匙，若需要权限控制请携带该参数。
 [privateMapKey 权限设置](/document/product/647/32240) 
                     * 
                     */
                    std::string GetPrivateMapKey() const;

                    /**
                     * 设置进房钥匙，若需要权限控制请携带该参数。
 [privateMapKey 权限设置](/document/product/647/32240) 
                     * @param _privateMapKey 进房钥匙，若需要权限控制请携带该参数。
 [privateMapKey 权限设置](/document/product/647/32240) 
                     * 
                     */
                    void SetPrivateMapKey(const std::string& _privateMapKey);

                    /**
                     * 判断参数 PrivateMapKey 是否已赋值
                     * @return PrivateMapKey 是否已赋值
                     * 
                     */
                    bool PrivateMapKeyHasBeenSet() const;

                    /**
                     * 获取用户角色，目前支持两种角色：
<li>anchor：主播</li>
<li>audience：观众</li>
                     * @return Role 用户角色，目前支持两种角色：
<li>anchor：主播</li>
<li>audience：观众</li>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置用户角色，目前支持两种角色：
<li>anchor：主播</li>
<li>audience：观众</li>
                     * @param _role 用户角色，目前支持两种角色：
<li>anchor：主播</li>
<li>audience：观众</li>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取TRTC房间号的类型：
<li>Integer：数字类型</li>
<li> String：字符串类型</li>
默认为：Integer 。
                     * @return RoomIdType TRTC房间号的类型：
<li>Integer：数字类型</li>
<li> String：字符串类型</li>
默认为：Integer 。
                     * 
                     */
                    std::string GetRoomIdType() const;

                    /**
                     * 设置TRTC房间号的类型：
<li>Integer：数字类型</li>
<li> String：字符串类型</li>
默认为：Integer 。
                     * @param _roomIdType TRTC房间号的类型：
<li>Integer：数字类型</li>
<li> String：字符串类型</li>
默认为：Integer 。
                     * 
                     */
                    void SetRoomIdType(const std::string& _roomIdType);

                    /**
                     * 判断参数 RoomIdType 是否已赋值
                     * @return RoomIdType 是否已赋值
                     * 
                     */
                    bool RoomIdTypeHasBeenSet() const;

                private:

                    /**
                     * 签名。
                     */
                    std::string m_sign;
                    bool m_signHasBeenSet;

                    /**
                     * 房间号。
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 推流应用ID。
                     */
                    std::string m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 用户唯一标识。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 进房钥匙，若需要权限控制请携带该参数。
 [privateMapKey 权限设置](/document/product/647/32240) 
                     */
                    std::string m_privateMapKey;
                    bool m_privateMapKeyHasBeenSet;

                    /**
                     * 用户角色，目前支持两种角色：
<li>anchor：主播</li>
<li>audience：观众</li>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * TRTC房间号的类型：
<li>Integer：数字类型</li>
<li> String：字符串类型</li>
默认为：Integer 。
                     */
                    std::string m_roomIdType;
                    bool m_roomIdTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_TRTCJOINROOMINPUT_H_
