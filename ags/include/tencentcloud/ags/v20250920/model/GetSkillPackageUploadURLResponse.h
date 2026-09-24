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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_GETSKILLPACKAGEUPLOADURLRESPONSE_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_GETSKILLPACKAGEUPLOADURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CloudRecordVersion.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * GetSkillPackageUploadURL返回参数结构体
                */
                class GetSkillPackageUploadURLResponse : public AbstractModel
                {
                public:
                    GetSkillPackageUploadURLResponse();
                    ~GetSkillPackageUploadURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Version 详情（Revision 不变）。</p>
                     * @return Version <p>Version 详情（Revision 不变）。</p>
                     * 
                     */
                    CloudRecordVersion GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>新的 COS PUT 预签名 URL。</p>
                     * @return UploadURL <p>新的 COS PUT 预签名 URL。</p>
                     * 
                     */
                    std::string GetUploadURL() const;

                    /**
                     * 判断参数 UploadURL 是否已赋值
                     * @return UploadURL 是否已赋值
                     * 
                     */
                    bool UploadURLHasBeenSet() const;

                    /**
                     * 获取<p>重试后的内容状态。</p>
                     * @return ContentStatus <p>重试后的内容状态。</p>
                     * 
                     */
                    std::string GetContentStatus() const;

                    /**
                     * 判断参数 ContentStatus 是否已赋值
                     * @return ContentStatus 是否已赋值
                     * 
                     */
                    bool ContentStatusHasBeenSet() const;

                    /**
                     * 获取<p>UploadURL 过期时间。</p>
                     * @return ExpireTime <p>UploadURL 过期时间。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Version 详情（Revision 不变）。</p>
                     */
                    CloudRecordVersion m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>新的 COS PUT 预签名 URL。</p>
                     */
                    std::string m_uploadURL;
                    bool m_uploadURLHasBeenSet;

                    /**
                     * <p>重试后的内容状态。</p>
                     */
                    std::string m_contentStatus;
                    bool m_contentStatusHasBeenSet;

                    /**
                     * <p>UploadURL 过期时间。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_GETSKILLPACKAGEUPLOADURLRESPONSE_H_
