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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * UploadFiles返回参数结构体
                */
                class UploadFilesResponse : public AbstractModel
                {
                public:
                    UploadFilesResponse();
                    ~UploadFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>上传成功文件数量<br>注: <code>如果一个文件上传失败, 则全部文件皆上传失败</code></p>
                     * @return TotalCount <p>上传成功文件数量<br>注: <code>如果一个文件上传失败, 则全部文件皆上传失败</code></p>
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>文件资源ID数组，每个文件资源ID为32位字符串。<br>建议开发者保存此资源ID，后续创建合同或创建合同流程需此资源ID。<br>注:<code>有效期一个小时（超过一小时后系统不定期清理，会有部分时间差）, 有效期内此文件id可以反复使用, 超过有效期无法使用</code></p>
                     * @return FileIds <p>文件资源ID数组，每个文件资源ID为32位字符串。<br>建议开发者保存此资源ID，后续创建合同或创建合同流程需此资源ID。<br>注:<code>有效期一个小时（超过一小时后系统不定期清理，会有部分时间差）, 有效期内此文件id可以反复使用, 超过有效期无法使用</code></p>
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取<p>对应上传文件的下载链接，过期时间5分钟</p>
                     * @return FileUrls <p>对应上传文件的下载链接，过期时间5分钟</p>
                     * 
                     */
                    std::vector<std::string> GetFileUrls() const;

                    /**
                     * 判断参数 FileUrls 是否已赋值
                     * @return FileUrls 是否已赋值
                     * 
                     */
                    bool FileUrlsHasBeenSet() const;

                    /**
                     * 获取<p>文件的截止有效期，如果超过截止有效期则文件Id会失效，无法再进行使用</p><p>默认过期时间是上传时间加10分钟</p>
                     * @return Deadline <p>文件的截止有效期，如果超过截止有效期则文件Id会失效，无法再进行使用</p><p>默认过期时间是上传时间加10分钟</p>
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                private:

                    /**
                     * <p>上传成功文件数量<br>注: <code>如果一个文件上传失败, 则全部文件皆上传失败</code></p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>文件资源ID数组，每个文件资源ID为32位字符串。<br>建议开发者保存此资源ID，后续创建合同或创建合同流程需此资源ID。<br>注:<code>有效期一个小时（超过一小时后系统不定期清理，会有部分时间差）, 有效期内此文件id可以反复使用, 超过有效期无法使用</code></p>
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * <p>对应上传文件的下载链接，过期时间5分钟</p>
                     */
                    std::vector<std::string> m_fileUrls;
                    bool m_fileUrlsHasBeenSet;

                    /**
                     * <p>文件的截止有效期，如果超过截止有效期则文件Id会失效，无法再进行使用</p><p>默认过期时间是上传时间加10分钟</p>
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_UPLOADFILESRESPONSE_H_
