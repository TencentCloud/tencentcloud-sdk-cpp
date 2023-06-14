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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBECONFIGREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * DescribeConfig请求参数结构体
                */
                class DescribeConfigRequest : public AbstractModel
                {
                public:
                    DescribeConfigRequest();
                    ~DescribeConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _sessionId 会话ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取摄像头签名
                     * @return CameraSign 摄像头签名
                     * 
                     */
                    std::string GetCameraSign() const;

                    /**
                     * 设置摄像头签名
                     * @param _cameraSign 摄像头签名
                     * 
                     */
                    void SetCameraSign(const std::string& _cameraSign);

                    /**
                     * 判断参数 CameraSign 是否已赋值
                     * @return CameraSign 是否已赋值
                     * 
                     */
                    bool CameraSignHasBeenSet() const;

                    /**
                     * 获取摄像头app id
                     * @return CameraAppId 摄像头app id
                     * 
                     */
                    std::string GetCameraAppId() const;

                    /**
                     * 设置摄像头app id
                     * @param _cameraAppId 摄像头app id
                     * 
                     */
                    void SetCameraAppId(const std::string& _cameraAppId);

                    /**
                     * 判断参数 CameraAppId 是否已赋值
                     * @return CameraAppId 是否已赋值
                     * 
                     */
                    bool CameraAppIdHasBeenSet() const;

                    /**
                     * 获取摄像头时间戳，毫秒
                     * @return CameraTimestamp 摄像头时间戳，毫秒
                     * 
                     */
                    int64_t GetCameraTimestamp() const;

                    /**
                     * 设置摄像头时间戳，毫秒
                     * @param _cameraTimestamp 摄像头时间戳，毫秒
                     * 
                     */
                    void SetCameraTimestamp(const int64_t& _cameraTimestamp);

                    /**
                     * 判断参数 CameraTimestamp 是否已赋值
                     * @return CameraTimestamp 是否已赋值
                     * 
                     */
                    bool CameraTimestampHasBeenSet() const;

                    /**
                     * 获取MAC地址，字母大写
                     * @return ServerMac MAC地址，字母大写
                     * 
                     */
                    std::string GetServerMac() const;

                    /**
                     * 设置MAC地址，字母大写
                     * @param _serverMac MAC地址，字母大写
                     * 
                     */
                    void SetServerMac(const std::string& _serverMac);

                    /**
                     * 判断参数 ServerMac 是否已赋值
                     * @return ServerMac 是否已赋值
                     * 
                     */
                    bool ServerMacHasBeenSet() const;

                    /**
                     * 获取集团编码
                     * @return GroupCode 集团编码
                     * 
                     */
                    std::string GetGroupCode() const;

                    /**
                     * 设置集团编码
                     * @param _groupCode 集团编码
                     * 
                     */
                    void SetGroupCode(const std::string& _groupCode);

                    /**
                     * 判断参数 GroupCode 是否已赋值
                     * @return GroupCode 是否已赋值
                     * 
                     */
                    bool GroupCodeHasBeenSet() const;

                    /**
                     * 获取广场ID
                     * @return MallId 广场ID
                     * 
                     */
                    uint64_t GetMallId() const;

                    /**
                     * 设置广场ID
                     * @param _mallId 广场ID
                     * 
                     */
                    void SetMallId(const uint64_t& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     * 
                     */
                    bool MallIdHasBeenSet() const;

                private:

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 摄像头签名
                     */
                    std::string m_cameraSign;
                    bool m_cameraSignHasBeenSet;

                    /**
                     * 摄像头app id
                     */
                    std::string m_cameraAppId;
                    bool m_cameraAppIdHasBeenSet;

                    /**
                     * 摄像头时间戳，毫秒
                     */
                    int64_t m_cameraTimestamp;
                    bool m_cameraTimestampHasBeenSet;

                    /**
                     * MAC地址，字母大写
                     */
                    std::string m_serverMac;
                    bool m_serverMacHasBeenSet;

                    /**
                     * 集团编码
                     */
                    std::string m_groupCode;
                    bool m_groupCodeHasBeenSet;

                    /**
                     * 广场ID
                     */
                    uint64_t m_mallId;
                    bool m_mallIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBECONFIGREQUEST_H_
