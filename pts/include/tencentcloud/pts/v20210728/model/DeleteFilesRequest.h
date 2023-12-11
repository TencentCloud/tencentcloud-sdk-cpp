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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_DELETEFILESREQUEST_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_DELETEFILESREQUEST_H_

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
                * DeleteFiles请求参数结构体
                */
                class DeleteFilesRequest : public AbstractModel
                {
                public:
                    DeleteFilesRequest();
                    ~DeleteFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目 ID
                     * @return ProjectId 项目 ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID
                     * @param _projectId 项目 ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取待删除的文件的 ID（所有文件 ID 可从接口 DescribeFiles 获取）
                     * @return FileIds 待删除的文件的 ID（所有文件 ID 可从接口 DescribeFiles 获取）
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置待删除的文件的 ID（所有文件 ID 可从接口 DescribeFiles 获取）
                     * @param _fileIds 待删除的文件的 ID（所有文件 ID 可从接口 DescribeFiles 获取）
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                private:

                    /**
                     * 项目 ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 待删除的文件的 ID（所有文件 ID 可从接口 DescribeFiles 获取）
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_DELETEFILESREQUEST_H_
