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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeReleaseFiles请求参数结构体
                */
                class DescribeReleaseFilesRequest : public AbstractModel
                {
                public:
                    DescribeReleaseFilesRequest();
                    ~DescribeReleaseFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目 id
                     * @return ProjectID 项目 id
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置项目 id
                     * @param _projectID 项目 id
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取文件版本
                     * @return FileVersion 文件版本
                     * 
                     */
                    std::string GetFileVersion() const;

                    /**
                     * 设置文件版本
                     * @param _fileVersion 文件版本
                     * 
                     */
                    void SetFileVersion(const std::string& _fileVersion);

                    /**
                     * 判断参数 FileVersion 是否已赋值
                     * @return FileVersion 是否已赋值
                     * 
                     */
                    bool FileVersionHasBeenSet() const;

                    /**
                     * 获取查询过滤条件（根据sourcemap的文件名模糊匹配）
                     * @return FileName 查询过滤条件（根据sourcemap的文件名模糊匹配）
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置查询过滤条件（根据sourcemap的文件名模糊匹配）
                     * @param _fileName 查询过滤条件（根据sourcemap的文件名模糊匹配）
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * 项目 id
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 文件版本
                     */
                    std::string m_fileVersion;
                    bool m_fileVersionHasBeenSet;

                    /**
                     * 查询过滤条件（根据sourcemap的文件名模糊匹配）
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESREQUEST_H_
