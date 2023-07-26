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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGETHUMBNAILRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGETHUMBNAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeCloudStorageThumbnail返回参数结构体
                */
                class DescribeCloudStorageThumbnailResponse : public AbstractModel
                {
                public:
                    DescribeCloudStorageThumbnailResponse();
                    ~DescribeCloudStorageThumbnailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取缩略图访问地址
                     * @return ThumbnailURL 缩略图访问地址
                     * 
                     */
                    std::string GetThumbnailURL() const;

                    /**
                     * 判断参数 ThumbnailURL 是否已赋值
                     * @return ThumbnailURL 是否已赋值
                     * 
                     */
                    bool ThumbnailURLHasBeenSet() const;

                    /**
                     * 获取缩略图访问地址的过期时间
                     * @return ExpireTime 缩略图访问地址的过期时间
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 缩略图访问地址
                     */
                    std::string m_thumbnailURL;
                    bool m_thumbnailURLHasBeenSet;

                    /**
                     * 缩略图访问地址的过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBECLOUDSTORAGETHUMBNAILRESPONSE_H_
