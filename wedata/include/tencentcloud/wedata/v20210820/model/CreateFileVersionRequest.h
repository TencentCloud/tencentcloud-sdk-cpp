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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEFILEVERSIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEFILEVERSIONREQUEST_H_

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
                * CreateFileVersion请求参数结构体
                */
                class CreateFileVersionRequest : public AbstractModel
                {
                public:
                    CreateFileVersionRequest();
                    ~CreateFileVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取脚本资源id
                     * @return ResourceId 脚本资源id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置脚本资源id
                     * @param _resourceId 脚本资源id
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
                     * 获取版本创建时间，ISO8601格式
                     * @return CreateTime 版本创建时间，ISO8601格式
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置版本创建时间，ISO8601格式
                     * @param _createTime 版本创建时间，ISO8601格式
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取版本创建人姓名
                     * @return UserName 版本创建人姓名
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置版本创建人姓名
                     * @param _userName 版本创建人姓名
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

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
                     * 获取文件远程存储路径
                     * @return RemotePath 文件远程存储路径
                     * 
                     */
                    std::string GetRemotePath() const;

                    /**
                     * 设置文件远程存储路径
                     * @param _remotePath 文件远程存储路径
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
                     * 获取文件在对象存储的地域
                     * @return ObjectRegion 文件在对象存储的地域
                     * 
                     */
                    std::string GetObjectRegion() const;

                    /**
                     * 设置文件在对象存储的地域
                     * @param _objectRegion 文件在对象存储的地域
                     * 
                     */
                    void SetObjectRegion(const std::string& _objectRegion);

                    /**
                     * 判断参数 ObjectRegion 是否已赋值
                     * @return ObjectRegion 是否已赋值
                     * 
                     */
                    bool ObjectRegionHasBeenSet() const;

                    /**
                     * 获取文件在对象存储的桶名
                     * @return ObjectBucketName 文件在对象存储的桶名
                     * 
                     */
                    std::string GetObjectBucketName() const;

                    /**
                     * 设置文件在对象存储的桶名
                     * @param _objectBucketName 文件在对象存储的桶名
                     * 
                     */
                    void SetObjectBucketName(const std::string& _objectBucketName);

                    /**
                     * 判断参数 ObjectBucketName 是否已赋值
                     * @return ObjectBucketName 是否已赋值
                     * 
                     */
                    bool ObjectBucketNameHasBeenSet() const;

                    /**
                     * 获取请求来源，WEB 前端；CLIENT 客户端
                     * @return RequestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    std::string GetRequestFromSource() const;

                    /**
                     * 设置请求来源，WEB 前端；CLIENT 客户端
                     * @param _requestFromSource 请求来源，WEB 前端；CLIENT 客户端
                     * 
                     */
                    void SetRequestFromSource(const std::string& _requestFromSource);

                    /**
                     * 判断参数 RequestFromSource 是否已赋值
                     * @return RequestFromSource 是否已赋值
                     * 
                     */
                    bool RequestFromSourceHasBeenSet() const;

                    /**
                     * 获取版本变更描述
                     * @return Description 版本变更描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置版本变更描述
                     * @param _description 版本变更描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取编排空间提交版本的任务id
                     * @return TaskId 编排空间提交版本的任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置编排空间提交版本的任务id
                     * @param _taskId 编排空间提交版本的任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取编排空间提交版本的任务版本累加号
                     * @return TaskVersionNum 编排空间提交版本的任务版本累加号
                     * 
                     */
                    std::string GetTaskVersionNum() const;

                    /**
                     * 设置编排空间提交版本的任务版本累加号
                     * @param _taskVersionNum 编排空间提交版本的任务版本累加号
                     * 
                     */
                    void SetTaskVersionNum(const std::string& _taskVersionNum);

                    /**
                     * 判断参数 TaskVersionNum 是否已赋值
                     * @return TaskVersionNum 是否已赋值
                     * 
                     */
                    bool TaskVersionNumHasBeenSet() const;

                    /**
                     * 获取编排空间提交版本的任务版本id,格式yyyyMMddHHmmssSSS
                     * @return TaskVersionId 编排空间提交版本的任务版本id,格式yyyyMMddHHmmssSSS
                     * 
                     */
                    std::string GetTaskVersionId() const;

                    /**
                     * 设置编排空间提交版本的任务版本id,格式yyyyMMddHHmmssSSS
                     * @param _taskVersionId 编排空间提交版本的任务版本id,格式yyyyMMddHHmmssSSS
                     * 
                     */
                    void SetTaskVersionId(const std::string& _taskVersionId);

                    /**
                     * 判断参数 TaskVersionId 是否已赋值
                     * @return TaskVersionId 是否已赋值
                     * 
                     */
                    bool TaskVersionIdHasBeenSet() const;

                private:

                    /**
                     * 脚本资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 版本创建时间，ISO8601格式
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 版本创建人姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件远程存储路径
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 文件在对象存储的地域
                     */
                    std::string m_objectRegion;
                    bool m_objectRegionHasBeenSet;

                    /**
                     * 文件在对象存储的桶名
                     */
                    std::string m_objectBucketName;
                    bool m_objectBucketNameHasBeenSet;

                    /**
                     * 请求来源，WEB 前端；CLIENT 客户端
                     */
                    std::string m_requestFromSource;
                    bool m_requestFromSourceHasBeenSet;

                    /**
                     * 版本变更描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 编排空间提交版本的任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 编排空间提交版本的任务版本累加号
                     */
                    std::string m_taskVersionNum;
                    bool m_taskVersionNumHasBeenSet;

                    /**
                     * 编排空间提交版本的任务版本id,格式yyyyMMddHHmmssSSS
                     */
                    std::string m_taskVersionId;
                    bool m_taskVersionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEFILEVERSIONREQUEST_H_
