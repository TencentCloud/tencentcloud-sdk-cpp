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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_GETSKILLPACKAGEDOWNLOADURLRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_GETSKILLPACKAGEDOWNLOADURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * GetSkillPackageDownloadURL返回参数结构体
                */
                class GetSkillPackageDownloadURLResponse : public AbstractModel
                {
                public:
                    GetSkillPackageDownloadURLResponse();
                    ~GetSkillPackageDownloadURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>COS GET 预签名 URL；带 response-content-disposition；默认 TTL 5 分钟；bearer 凭证禁止持久化。</p>
                     * @return DownloadURL <p>COS GET 预签名 URL；带 response-content-disposition；默认 TTL 5 分钟；bearer 凭证禁止持久化。</p>
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
                     * 获取<p>URL 过期时间。</p>
                     * @return ExpireTime <p>URL 过期时间。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>服务端记录的 SHA-256；下载后应本地自检。</p>
                     * @return SHA256 <p>服务端记录的 SHA-256；下载后应本地自检。</p>
                     * 
                     */
                    std::string GetSHA256() const;

                    /**
                     * 判断参数 SHA256 是否已赋值
                     * @return SHA256 是否已赋值
                     * 
                     */
                    bool SHA256HasBeenSet() const;

                    /**
                     * 获取<p>解析出的 Version ID（Stable Version）。</p>
                     * @return ResolvedVersionId <p>解析出的 Version ID（Stable Version）。</p>
                     * 
                     */
                    std::string GetResolvedVersionId() const;

                    /**
                     * 判断参数 ResolvedVersionId 是否已赋值
                     * @return ResolvedVersionId 是否已赋值
                     * 
                     */
                    bool ResolvedVersionIdHasBeenSet() const;

                private:

                    /**
                     * <p>COS GET 预签名 URL；带 response-content-disposition；默认 TTL 5 分钟；bearer 凭证禁止持久化。</p>
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                    /**
                     * <p>URL 过期时间。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>服务端记录的 SHA-256；下载后应本地自检。</p>
                     */
                    std::string m_sHA256;
                    bool m_sHA256HasBeenSet;

                    /**
                     * <p>解析出的 Version ID（Stable Version）。</p>
                     */
                    std::string m_resolvedVersionId;
                    bool m_resolvedVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_GETSKILLPACKAGEDOWNLOADURLRESPONSE_H_
