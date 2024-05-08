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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRTCPARAMS_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRTCPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TRTC 的参数 可以用来加入房间
                */
                class TRTCParams : public AbstractModel
                {
                public:
                    TRTCParams();
                    ~TRTCParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TRTC入参: TRTC的实例ID
                     * @return SdkAppId TRTC入参: TRTC的实例ID
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC入参: TRTC的实例ID
                     * @param _sdkAppId TRTC入参: TRTC的实例ID
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
                     * 获取TRTC入参: 用户加入房间的ID
                     * @return UserId TRTC入参: 用户加入房间的ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置TRTC入参: 用户加入房间的ID
                     * @param _userId TRTC入参: 用户加入房间的ID
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
                     * 获取TRTC入参: 用户的签名用来鉴权
                     * @return UserSig TRTC入参: 用户的签名用来鉴权
                     * 
                     */
                    std::string GetUserSig() const;

                    /**
                     * 设置TRTC入参: 用户的签名用来鉴权
                     * @param _userSig TRTC入参: 用户的签名用来鉴权
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
                     * 获取TRTC入参: 加入的TRTC房间名称
                     * @return StrRoomId TRTC入参: 加入的TRTC房间名称
                     * 
                     */
                    std::string GetStrRoomId() const;

                    /**
                     * 设置TRTC入参: 加入的TRTC房间名称
                     * @param _strRoomId TRTC入参: 加入的TRTC房间名称
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
                     * 获取TRTC入参: 校验TRTC的KEY
                     * @return PrivateKey TRTC入参: 校验TRTC的KEY
                     * 
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置TRTC入参: 校验TRTC的KEY
                     * @param _privateKey TRTC入参: 校验TRTC的KEY
                     * 
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     * 
                     */
                    bool PrivateKeyHasBeenSet() const;

                private:

                    /**
                     * TRTC入参: TRTC的实例ID
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * TRTC入参: 用户加入房间的ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * TRTC入参: 用户的签名用来鉴权
                     */
                    std::string m_userSig;
                    bool m_userSigHasBeenSet;

                    /**
                     * TRTC入参: 加入的TRTC房间名称
                     */
                    std::string m_strRoomId;
                    bool m_strRoomIdHasBeenSet;

                    /**
                     * TRTC入参: 校验TRTC的KEY
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TRTCPARAMS_H_
