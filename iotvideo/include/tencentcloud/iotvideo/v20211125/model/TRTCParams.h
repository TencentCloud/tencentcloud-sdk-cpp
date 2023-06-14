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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_TRTCPARAMS_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_TRTCPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * TRTC调用参数
                */
                class TRTCParams : public AbstractModel
                {
                public:
                    TRTCParams();
                    ~TRTCParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SDKAppId 应用id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSDKAppId() const;

                    /**
                     * 设置应用id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sDKAppId 应用id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSDKAppId(const int64_t& _sDKAppId);

                    /**
                     * 判断参数 SDKAppId 是否已赋值
                     * @return SDKAppId 是否已赋值
                     * 
                     */
                    bool SDKAppIdHasBeenSet() const;

                    /**
                     * 获取用户id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 用户id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取用户id签名，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserSig 用户id签名，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置用户id签名，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userSig 用户id签名，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserSig(const std::string& _userSig);

                    /**
                     * 判断参数 UserSig 是否已赋值
                     * @return UserSig 是否已赋值
                     * 
                     */
                    bool UserSigHasBeenSet() const;

                    /**
                     * 获取房间id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrRoomId 房间id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrRoomId() const;

                    /**
                     * 设置房间id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strRoomId 房间id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrRoomId(const std::string& _strRoomId);

                    /**
                     * 判断参数 StrRoomId 是否已赋值
                     * @return StrRoomId 是否已赋值
                     * 
                     */
                    bool StrRoomIdHasBeenSet() const;

                    /**
                     * 获取权限票据，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateMapKey 权限票据，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPrivateMapKey() const;

                    /**
                     * 设置权限票据，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateMapKey 权限票据，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateMapKey(const std::string& _privateMapKey);

                    /**
                     * 判断参数 PrivateMapKey 是否已赋值
                     * @return PrivateMapKey 是否已赋值
                     * 
                     */
                    bool PrivateMapKeyHasBeenSet() const;

                private:

                    /**
                     * 应用id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_sDKAppId;
                    bool m_sDKAppIdHasBeenSet;

                    /**
                     * 用户id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户id签名，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * 房间id，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strRoomId;
                    bool m_strRoomIdHasBeenSet;

                    /**
                     * 权限票据，供TRTC SDK使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateMapKey;
                    bool m_privateMapKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_TRTCPARAMS_H_
