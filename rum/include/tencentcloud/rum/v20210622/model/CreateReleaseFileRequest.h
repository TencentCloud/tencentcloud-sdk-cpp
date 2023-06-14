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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATERELEASEFILEREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATERELEASEFILEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/ReleaseFile.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateReleaseFile请求参数结构体
                */
                class CreateReleaseFileRequest : public AbstractModel
                {
                public:
                    CreateReleaseFileRequest();
                    ~CreateReleaseFileRequest() = default;
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
                     * 获取文件信息列表
                     * @return Files 文件信息列表
                     * 
                     */
                    std::vector<ReleaseFile> GetFiles() const;

                    /**
                     * 设置文件信息列表
                     * @param _files 文件信息列表
                     * 
                     */
                    void SetFiles(const std::vector<ReleaseFile>& _files);

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                private:

                    /**
                     * 项目 id
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 文件信息列表
                     */
                    std::vector<ReleaseFile> m_files;
                    bool m_filesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATERELEASEFILEREQUEST_H_
