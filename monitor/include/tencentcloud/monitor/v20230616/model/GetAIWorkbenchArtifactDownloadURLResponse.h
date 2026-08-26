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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_GETAIWORKBENCHARTIFACTDOWNLOADURLRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_GETAIWORKBENCHARTIFACTDOWNLOADURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * GetAIWorkbenchArtifactDownloadURL返回参数结构体
                */
                class GetAIWorkbenchArtifactDownloadURLResponse : public AbstractModel
                {
                public:
                    GetAIWorkbenchArtifactDownloadURLResponse();
                    ~GetAIWorkbenchArtifactDownloadURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>COS 预签名 HTTPS 下载 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadURL <p>COS 预签名 HTTPS 下载 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownloadURL() const;

                    /**
                     * 判断参数 DownloadURL 是否已赋值
                     * @return DownloadURL 是否已赋值
                     * 
                     */
                    bool DownloadURLHasBeenSet() const;

                    /**
                     * 获取<p>URL 过期时间（RFC3339 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredAt <p>URL 过期时间（RFC3339 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpiredAt() const;

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     * 
                     */
                    bool ExpiredAtHasBeenSet() const;

                private:

                    /**
                     * <p>COS 预签名 HTTPS 下载 URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                    /**
                     * <p>URL 过期时间（RFC3339 格式）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_GETAIWORKBENCHARTIFACTDOWNLOADURLRESPONSE_H_
