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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GENERATECLOUDSTORAGEAISERVICETASKFILEURLRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GENERATECLOUDSTORAGEAISERVICETASKFILEURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GenerateCloudStorageAIServiceTaskFileURL返回参数结构体
                */
                class GenerateCloudStorageAIServiceTaskFileURLResponse : public AbstractModel
                {
                public:
                    GenerateCloudStorageAIServiceTaskFileURLResponse();
                    ~GenerateCloudStorageAIServiceTaskFileURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件下载 URL
                     * @return FileURL 文件下载 URL
                     * 
                     */
                    std::string GetFileURL() const;

                    /**
                     * 判断参数 FileURL 是否已赋值
                     * @return FileURL 是否已赋值
                     * 
                     */
                    bool FileURLHasBeenSet() const;

                    /**
                     * 获取过期时间 UNIX 时间戳（最大不超过文件所属任务的过期时间）
                     * @return ExpireTime 过期时间 UNIX 时间戳（最大不超过文件所属任务的过期时间）
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 文件下载 URL
                     */
                    std::string m_fileURL;
                    bool m_fileURLHasBeenSet;

                    /**
                     * 过期时间 UNIX 时间戳（最大不超过文件所属任务的过期时间）
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GENERATECLOUDSTORAGEAISERVICETASKFILEURLRESPONSE_H_
