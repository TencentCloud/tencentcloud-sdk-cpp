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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBECONFIGRESPONSE_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/CameraConfig.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * DescribeConfig返回参数结构体
                */
                class DescribeConfigResponse : public AbstractModel
                {
                public:
                    DescribeConfigResponse();
                    ~DescribeConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取配置版本号
                     * @return Version 配置版本号
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取摄像头列表
                     * @return Cameras 摄像头列表
                     * 
                     */
                    std::vector<CameraConfig> GetCameras() const;

                    /**
                     * 判断参数 Cameras 是否已赋值
                     * @return Cameras 是否已赋值
                     * 
                     */
                    bool CamerasHasBeenSet() const;

                private:

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 配置版本号
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 摄像头列表
                     */
                    std::vector<CameraConfig> m_cameras;
                    bool m_camerasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_DESCRIBECONFIGRESPONSE_H_
