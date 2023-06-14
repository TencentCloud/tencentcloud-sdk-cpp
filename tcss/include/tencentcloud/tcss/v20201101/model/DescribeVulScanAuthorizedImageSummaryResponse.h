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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANAUTHORIZEDIMAGESUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANAUTHORIZEDIMAGESUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulScanAuthorizedImageSummary返回参数结构体
                */
                class DescribeVulScanAuthorizedImageSummaryResponse : public AbstractModel
                {
                public:
                    DescribeVulScanAuthorizedImageSummaryResponse();
                    ~DescribeVulScanAuthorizedImageSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取全部已授权的本地镜像数
                     * @return AllAuthorizedImageCount 全部已授权的本地镜像数
                     * 
                     */
                    int64_t GetAllAuthorizedImageCount() const;

                    /**
                     * 判断参数 AllAuthorizedImageCount 是否已赋值
                     * @return AllAuthorizedImageCount 是否已赋值
                     * 
                     */
                    bool AllAuthorizedImageCountHasBeenSet() const;

                    /**
                     * 获取已授权未扫描的本地镜像数
                     * @return UnScanAuthorizedImageCount 已授权未扫描的本地镜像数
                     * 
                     */
                    int64_t GetUnScanAuthorizedImageCount() const;

                    /**
                     * 判断参数 UnScanAuthorizedImageCount 是否已赋值
                     * @return UnScanAuthorizedImageCount 是否已赋值
                     * 
                     */
                    bool UnScanAuthorizedImageCountHasBeenSet() const;

                private:

                    /**
                     * 全部已授权的本地镜像数
                     */
                    int64_t m_allAuthorizedImageCount;
                    bool m_allAuthorizedImageCountHasBeenSet;

                    /**
                     * 已授权未扫描的本地镜像数
                     */
                    int64_t m_unScanAuthorizedImageCount;
                    bool m_unScanAuthorizedImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSCANAUTHORIZEDIMAGESUMMARYRESPONSE_H_
