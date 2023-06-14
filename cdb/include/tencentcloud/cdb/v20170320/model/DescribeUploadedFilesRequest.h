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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEUPLOADEDFILESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEUPLOADEDFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeUploadedFiles请求参数结构体
                */
                class DescribeUploadedFilesRequest : public AbstractModel
                {
                public:
                    DescribeUploadedFilesRequest();
                    ~DescribeUploadedFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件路径。该字段应填用户主账号的OwnerUin信息。
                     * @return Path 文件路径。该字段应填用户主账号的OwnerUin信息。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置文件路径。该字段应填用户主账号的OwnerUin信息。
                     * @param _path 文件路径。该字段应填用户主账号的OwnerUin信息。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取记录偏移量，默认值为0。
                     * @return Offset 记录偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置记录偏移量，默认值为0。
                     * @param _offset 记录偏移量，默认值为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单次请求返回的数量，默认值为20。
                     * @return Limit 单次请求返回的数量，默认值为20。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量，默认值为20。
                     * @param _limit 单次请求返回的数量，默认值为20。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 文件路径。该字段应填用户主账号的OwnerUin信息。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 记录偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单次请求返回的数量，默认值为20。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEUPLOADEDFILESREQUEST_H_
