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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DETECTSTATEREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DETECTSTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * DetectState请求参数结构体
                */
                class DetectStateRequest : public AbstractModel
                {
                public:
                    DetectStateRequest();
                    ~DetectStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IP
                     * @return ClientIP IP
                     */
                    std::string GetClientIP() const;

                    /**
                     * 设置IP
                     * @param ClientIP IP
                     */
                    void SetClientIP(const std::string& _clientIP);

                    /**
                     * 判断参数 ClientIP 是否已赋值
                     * @return ClientIP 是否已赋值
                     */
                    bool ClientIPHasBeenSet() const;

                    /**
                     * 获取浏览器UA
                     * @return ClientUA 浏览器UA
                     */
                    std::string GetClientUA() const;

                    /**
                     * 设置浏览器UA
                     * @param ClientUA 浏览器UA
                     */
                    void SetClientUA(const std::string& _clientUA);

                    /**
                     * 判断参数 ClientUA 是否已赋值
                     * @return ClientUA 是否已赋值
                     */
                    bool ClientUAHasBeenSet() const;

                    /**
                     * 获取token
                     * @return FaceIdToken token
                     */
                    std::string GetFaceIdToken() const;

                    /**
                     * 设置token
                     * @param FaceIdToken token
                     */
                    void SetFaceIdToken(const std::string& _faceIdToken);

                    /**
                     * 判断参数 FaceIdToken 是否已赋值
                     * @return FaceIdToken 是否已赋值
                     */
                    bool FaceIdTokenHasBeenSet() const;

                private:

                    /**
                     * IP
                     */
                    std::string m_clientIP;
                    bool m_clientIPHasBeenSet;

                    /**
                     * 浏览器UA
                     */
                    std::string m_clientUA;
                    bool m_clientUAHasBeenSet;

                    /**
                     * token
                     */
                    std::string m_faceIdToken;
                    bool m_faceIdTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DETECTSTATEREQUEST_H_
