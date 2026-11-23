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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeSessionArtifactDownloadUrl请求参数结构体
                */
                class DescribeSessionArtifactDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeSessionArtifactDownloadUrlRequest();
                    ~DescribeSessionArtifactDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>物料ID</p>
                     * @return ArtifactId <p>物料ID</p>
                     * 
                     */
                    std::string GetArtifactId() const;

                    /**
                     * 设置<p>物料ID</p>
                     * @param _artifactId <p>物料ID</p>
                     * 
                     */
                    void SetArtifactId(const std::string& _artifactId);

                    /**
                     * 判断参数 ArtifactId 是否已赋值
                     * @return ArtifactId 是否已赋值
                     * 
                     */
                    bool ArtifactIdHasBeenSet() const;

                    /**
                     * 获取<p>产物过期时间</p><p>单位：s</p>
                     * @return ExpiredSeconds <p>产物过期时间</p><p>单位：s</p>
                     * 
                     */
                    int64_t GetExpiredSeconds() const;

                    /**
                     * 设置<p>产物过期时间</p><p>单位：s</p>
                     * @param _expiredSeconds <p>产物过期时间</p><p>单位：s</p>
                     * 
                     */
                    void SetExpiredSeconds(const int64_t& _expiredSeconds);

                    /**
                     * 判断参数 ExpiredSeconds 是否已赋值
                     * @return ExpiredSeconds 是否已赋值
                     * 
                     */
                    bool ExpiredSecondsHasBeenSet() const;

                private:

                    /**
                     * <p>物料ID</p>
                     */
                    std::string m_artifactId;
                    bool m_artifactIdHasBeenSet;

                    /**
                     * <p>产物过期时间</p><p>单位：s</p>
                     */
                    int64_t m_expiredSeconds;
                    bool m_expiredSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTDOWNLOADURLREQUEST_H_
