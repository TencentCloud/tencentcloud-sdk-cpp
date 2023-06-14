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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEFILESREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * DescribeFiles请求参数结构体
                */
                class DescribeFilesRequest : public AbstractModel
                {
                public:
                    DescribeFilesRequest();
                    ~DescribeFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目 ID 数组
                     * @return ProjectIds 项目 ID 数组
                     * 
                     */
                    std::vector<std::string> GetProjectIds() const;

                    /**
                     * 设置项目 ID 数组
                     * @param _projectIds 项目 ID 数组
                     * 
                     */
                    void SetProjectIds(const std::vector<std::string>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取文件 ID 数组
                     * @return FileIds 文件 ID 数组
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置文件 ID 数组
                     * @param _fileIds 文件 ID 数组
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取文件名
                     * @return FileName 文件名
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置文件名
                     * @param _fileName 文件名
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为 0
                     * @return Offset 偏移量，默认为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0
                     * @param _offset 偏移量，默认为 0
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
                     * 获取返回数量，默认为 20，最大为 100
                     * @return Limit 返回数量，默认为 20，最大为 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为 20，最大为 100
                     * @param _limit 返回数量，默认为 20，最大为 100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取文件种类，参数文件-1，协议文件-2，请求文件-3
                     * @return Kind 文件种类，参数文件-1，协议文件-2，请求文件-3
                     * 
                     */
                    int64_t GetKind() const;

                    /**
                     * 设置文件种类，参数文件-1，协议文件-2，请求文件-3
                     * @param _kind 文件种类，参数文件-1，协议文件-2，请求文件-3
                     * 
                     */
                    void SetKind(const int64_t& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     * 
                     */
                    bool KindHasBeenSet() const;

                private:

                    /**
                     * 项目 ID 数组
                     */
                    std::vector<std::string> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * 文件 ID 数组
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 偏移量，默认为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为 20，最大为 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 文件种类，参数文件-1，协议文件-2，请求文件-3
                     */
                    int64_t m_kind;
                    bool m_kindHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DESCRIBEFILESREQUEST_H_
