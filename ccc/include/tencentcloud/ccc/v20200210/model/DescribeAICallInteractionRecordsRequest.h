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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAICALLINTERACTIONRECORDSREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAICALLINTERACTIONRECORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeAICallInteractionRecords请求参数结构体
                */
                class DescribeAICallInteractionRecordsRequest : public AbstractModel
                {
                public:
                    DescribeAICallInteractionRecordsRequest();
                    ~DescribeAICallInteractionRecordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID，可以查看 https://console.cloud.tencent.com/ccc。</p>
                     * @return SdkAppId <p>应用 ID，可以查看 https://console.cloud.tencent.com/ccc。</p>
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置<p>应用 ID，可以查看 https://console.cloud.tencent.com/ccc。</p>
                     * @param _sdkAppId <p>应用 ID，可以查看 https://console.cloud.tencent.com/ccc。</p>
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
                     * 获取<p>查询的会话SessionID</p>
                     * @return SessionId <p>查询的会话SessionID</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>查询的会话SessionID</p>
                     * @param _sessionId <p>查询的会话SessionID</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID，可以查看 https://console.cloud.tencent.com/ccc。</p>
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>查询的会话SessionID</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAICALLINTERACTIONRECORDSREQUEST_H_
