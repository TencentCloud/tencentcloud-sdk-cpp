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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_UPLOADFILESRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_UPLOADFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
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
                     * 获取<p>上传成功文件数量</p>
                     * @return TotalCount <p>上传成功文件数量</p>
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
                     * 获取<p>文件过期时间的时间戳</p><p>单位：秒</p><p>默认值：当前上传时间的一小时内有效</p>
                     * @return Deadline <p>文件过期时间的时间戳</p><p>单位：秒</p><p>默认值：当前上传时间的一小时内有效</p>
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
                     * <p>文件资源ID数组，每个文件资源ID为32位字符串。<br>建议开发者保存此资源ID，后续创建合同或创建合同流程需此资源ID。<br>注:<code>有效期一个小时（超过一小时后系统不定期清理，会有部分时间差）, 有效期内此文件id可以反复使用, 超过有效期无法使用</code></p>
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * <p>上传成功文件数量</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>文件过期时间的时间戳</p><p>单位：秒</p><p>默认值：当前上传时间的一小时内有效</p>
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_UPLOADFILESRESPONSE_H_
