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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITINTEGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITINTEGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * SubmitIntegrationTask请求参数结构体
                */
                class SubmitIntegrationTaskRequest : public AbstractModel
                {
                public:
                    SubmitIntegrationTaskRequest();
                    ~SubmitIntegrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组Id
                     * @return GroupId 资源组Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置资源组Id
                     * @param _groupId 资源组Id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取资源所属region
                     * @return ResourceRegion 资源所属region
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源所属region
                     * @param _resourceRegion 资源所属region
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取资源所属bucket
                     * @return RemotePath 资源所属bucket
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置资源所属bucket
                     * @param _remotePath 资源所属bucket
                     * 
                     */
                    void SetRemotePath(const std::string& _remotePath);

                    /**
                     * 判断参数 RemotePath 是否已赋值
                     * @return RemotePath 是否已赋值
                     * 
                     */
                    bool RemotePathHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取资源所属bucket
                     * @return ResourceBucket 资源所属bucket
                     * 
                     */
                    std::string GetResourceBucket() const;

                    /**
                     * 设置资源所属bucket
                     * @param _resourceBucket 资源所属bucket
                     * 
                     */
                    void SetResourceBucket(const std::string& _resourceBucket);

                    /**
                     * 判断参数 ResourceBucket 是否已赋值
                     * @return ResourceBucket 是否已赋值
                     * 
                     */
                    bool ResourceBucketHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceId 资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源id
                     * @param _resourceId 资源id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取高级运行临时参数
                     * @return RunParams 高级运行临时参数
                     * 
                     */
                    std::string GetRunParams() const;

                    /**
                     * 设置高级运行临时参数
                     * @param _runParams 高级运行临时参数
                     * 
                     */
                    void SetRunParams(const std::string& _runParams);

                    /**
                     * 判断参数 RunParams 是否已赋值
                     * @return RunParams 是否已赋值
                     * 
                     */
                    bool RunParamsHasBeenSet() const;

                private:

                    /**
                     * 资源组Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 资源所属region
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源所属bucket
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 资源所属bucket
                     */
                    std::string m_resourceBucket;
                    bool m_resourceBucketHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 高级运行临时参数
                     */
                    std::string m_runParams;
                    bool m_runParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SUBMITINTEGRATIONTASKREQUEST_H_
