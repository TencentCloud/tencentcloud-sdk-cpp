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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONDATABASEURLRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONDATABASEURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeIpGeolocationDatabaseUrl返回参数结构体
                */
                class DescribeIpGeolocationDatabaseUrlResponse : public AbstractModel
                {
                public:
                    DescribeIpGeolocationDatabaseUrlResponse();
                    ~DescribeIpGeolocationDatabaseUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IP地理位置库下载链接地址。
                     * @return DownLoadUrl IP地理位置库下载链接地址。
                     * 
                     */
                    std::string GetDownLoadUrl() const;

                    /**
                     * 判断参数 DownLoadUrl 是否已赋值
                     * @return DownLoadUrl 是否已赋值
                     * 
                     */
                    bool DownLoadUrlHasBeenSet() const;

                    /**
                     * 获取链接到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。
                     * @return ExpiredAt 链接到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。
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
                     * IP地理位置库下载链接地址。
                     */
                    std::string m_downLoadUrl;
                    bool m_downLoadUrlHasBeenSet;

                    /**
                     * 链接到期时间。按照`ISO8601`标准表示，并且使用`UTC`时间。
                     */
                    std::string m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DESCRIBEIPGEOLOCATIONDATABASEURLRESPONSE_H_
