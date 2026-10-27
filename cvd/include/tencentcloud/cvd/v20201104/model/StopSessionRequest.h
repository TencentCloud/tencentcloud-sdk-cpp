/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_STOPSESSIONREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_STOPSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * StopSession请求参数结构体
                */
                class StopSessionRequest : public AbstractModel
                {
                public:
                    StopSessionRequest();
                    ~StopSessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>机器所在区域</p>
                     * @return InstanceRegion <p>机器所在区域</p>
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置<p>机器所在区域</p>
                     * @param _instanceRegion <p>机器所在区域</p>
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取<p>机器hostname</p>
                     * @return HostName <p>机器hostname</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>机器hostname</p>
                     * @param _hostName <p>机器hostname</p>
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取<p>IsDisconnect为true，表示断开当前会话<br>IsDisconnect为false，表示注销当前会话</p>
                     * @return IsDisconnect <p>IsDisconnect为true，表示断开当前会话<br>IsDisconnect为false，表示注销当前会话</p>
                     * 
                     */
                    bool GetIsDisconnect() const;

                    /**
                     * 设置<p>IsDisconnect为true，表示断开当前会话<br>IsDisconnect为false，表示注销当前会话</p>
                     * @param _isDisconnect <p>IsDisconnect为true，表示断开当前会话<br>IsDisconnect为false，表示注销当前会话</p>
                     * 
                     */
                    void SetIsDisconnect(const bool& _isDisconnect);

                    /**
                     * 判断参数 IsDisconnect 是否已赋值
                     * @return IsDisconnect 是否已赋值
                     * 
                     */
                    bool IsDisconnectHasBeenSet() const;

                    /**
                     * 获取<p>选填，为多会话预留字段</p>
                     * @return UserId <p>选填，为多会话预留字段</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>选填，为多会话预留字段</p>
                     * @param _userId <p>选填，为多会话预留字段</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>机器所在区域</p>
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * <p>机器hostname</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>IsDisconnect为true，表示断开当前会话<br>IsDisconnect为false，表示注销当前会话</p>
                     */
                    bool m_isDisconnect;
                    bool m_isDisconnectHasBeenSet;

                    /**
                     * <p>选填，为多会话预留字段</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_STOPSESSIONREQUEST_H_
