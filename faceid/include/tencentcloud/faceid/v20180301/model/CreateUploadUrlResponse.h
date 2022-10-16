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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEUPLOADURLRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEUPLOADURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * CreateUploadUrl返回参数结构体
                */
                class CreateUploadUrlResponse : public AbstractModel
                {
                public:
                    CreateUploadUrlResponse();
                    ~CreateUploadUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用于上传内容的链接，使用HTTP PUT方法上传。
                     * @return UploadUrl 用于上传内容的链接，使用HTTP PUT方法上传。
                     */
                    std::string GetUploadUrl() const;

                    /**
                     * 判断参数 UploadUrl 是否已赋值
                     * @return UploadUrl 是否已赋值
                     */
                    bool UploadUrlHasBeenSet() const;

                    /**
                     * 获取完成上传后将该链接用于后续需要传入资源URL的地方。
                     * @return ResourceUrl 完成上传后将该链接用于后续需要传入资源URL的地方。
                     */
                    std::string GetResourceUrl() const;

                    /**
                     * 判断参数 ResourceUrl 是否已赋值
                     * @return ResourceUrl 是否已赋值
                     */
                    bool ResourceUrlHasBeenSet() const;

                    /**
                     * 获取上传和下载链接过期时间点，10位unix时间戳。
                     * @return ExpiredTimestamp 上传和下载链接过期时间点，10位unix时间戳。
                     */
                    int64_t GetExpiredTimestamp() const;

                    /**
                     * 判断参数 ExpiredTimestamp 是否已赋值
                     * @return ExpiredTimestamp 是否已赋值
                     */
                    bool ExpiredTimestampHasBeenSet() const;

                private:

                    /**
                     * 用于上传内容的链接，使用HTTP PUT方法上传。
                     */
                    std::string m_uploadUrl;
                    bool m_uploadUrlHasBeenSet;

                    /**
                     * 完成上传后将该链接用于后续需要传入资源URL的地方。
                     */
                    std::string m_resourceUrl;
                    bool m_resourceUrlHasBeenSet;

                    /**
                     * 上传和下载链接过期时间点，10位unix时间戳。
                     */
                    int64_t m_expiredTimestamp;
                    bool m_expiredTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_CREATEUPLOADURLRESPONSE_H_
