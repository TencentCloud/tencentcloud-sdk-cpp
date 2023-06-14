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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFILEURLSRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFILEURLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/FileUrl.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * DescribeFileUrls返回参数结构体
                */
                class DescribeFileUrlsResponse : public AbstractModel
                {
                public:
                    DescribeFileUrlsResponse();
                    ~DescribeFileUrlsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件下载URL数组
                     * @return FileUrls 文件下载URL数组
                     * 
                     */
                    std::vector<FileUrl> GetFileUrls() const;

                    /**
                     * 判断参数 FileUrls 是否已赋值
                     * @return FileUrls 是否已赋值
                     * 
                     */
                    bool FileUrlsHasBeenSet() const;

                    /**
                     * 获取URL数量
                     * @return TotalCount URL数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 文件下载URL数组
                     */
                    std::vector<FileUrl> m_fileUrls;
                    bool m_fileUrlsHasBeenSet;

                    /**
                     * URL数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_DESCRIBEFILEURLSRESPONSE_H_
