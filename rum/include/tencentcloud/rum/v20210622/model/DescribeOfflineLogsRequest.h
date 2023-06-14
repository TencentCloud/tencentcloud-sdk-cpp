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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGSREQUEST_H_

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
                * DescribeOfflineLogs请求参数结构体
                */
                class DescribeOfflineLogsRequest : public AbstractModel
                {
                public:
                    DescribeOfflineLogsRequest();
                    ~DescribeOfflineLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目唯一上报 key
                     * @return ProjectKey 项目唯一上报 key
                     * 
                     */
                    std::string GetProjectKey() const;

                    /**
                     * 设置项目唯一上报 key
                     * @param _projectKey 项目唯一上报 key
                     * 
                     */
                    void SetProjectKey(const std::string& _projectKey);

                    /**
                     * 判断参数 ProjectKey 是否已赋值
                     * @return ProjectKey 是否已赋值
                     * 
                     */
                    bool ProjectKeyHasBeenSet() const;

                    /**
                     * 获取离线日志文件 id 列表
                     * @return FileIDs 离线日志文件 id 列表
                     * 
                     */
                    std::vector<std::string> GetFileIDs() const;

                    /**
                     * 设置离线日志文件 id 列表
                     * @param _fileIDs 离线日志文件 id 列表
                     * 
                     */
                    void SetFileIDs(const std::vector<std::string>& _fileIDs);

                    /**
                     * 判断参数 FileIDs 是否已赋值
                     * @return FileIDs 是否已赋值
                     * 
                     */
                    bool FileIDsHasBeenSet() const;

                private:

                    /**
                     * 项目唯一上报 key
                     */
                    std::string m_projectKey;
                    bool m_projectKeyHasBeenSet;

                    /**
                     * 离线日志文件 id 列表
                     */
                    std::vector<std::string> m_fileIDs;
                    bool m_fileIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEOFFLINELOGSREQUEST_H_
