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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_USERFILEVERSIONDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_USERFILEVERSIONDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 数据开发脚本文件版本dto
                */
                class UserFileVersionDto : public AbstractModel
                {
                public:
                    UserFileVersionDto();
                    ~UserFileVersionDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取版本id,格式yyyyMMddHHmmssSSS
                     * @return VersionId 版本id,格式yyyyMMddHHmmssSSS
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本id,格式yyyyMMddHHmmssSSS
                     * @param _versionId 版本id,格式yyyyMMddHHmmssSSS
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

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
                     * 获取版本名称
                     * @return VersionName 版本名称
                     * 
                     */
                    std::string GetVersionName() const;

                    /**
                     * 设置版本名称
                     * @param _versionName 版本名称
                     * 
                     */
                    void SetVersionName(const std::string& _versionName);

                    /**
                     * 判断参数 VersionName 是否已赋值
                     * @return VersionName 是否已赋值
                     * 
                     */
                    bool VersionNameHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 编排空间提交版本的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置编排空间提交版本的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 编排空间提交版本的任务id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取编排空间提交版本的任务版本累加号，如V3
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskVersionNum 编排空间提交版本的任务版本累加号，如V3
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskVersionNum() const;

                    /**
                     * 设置编排空间提交版本的任务版本累加号，如V3
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskVersionNum 编排空间提交版本的任务版本累加号，如V3
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取编排空间提交版本的任务版本id，,格式yyyyMMddHHmmssSSS
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskVersionId 编排空间提交版本的任务版本id，,格式yyyyMMddHHmmssSSS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskVersionId() const;

                    /**
                     * 设置编排空间提交版本的任务版本id，,格式yyyyMMddHHmmssSSS
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskVersionId 编排空间提交版本的任务版本id，,格式yyyyMMddHHmmssSSS
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskVersionId(const std::string& _taskVersionId);

                    /**
                     * 判断参数 TaskVersionId 是否已赋值
                     * @return TaskVersionId 是否已赋值
                     * 
                     */
                    bool TaskVersionIdHasBeenSet() const;

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
                     * 获取版本创建人uin
                     * @return UserUin 版本创建人uin
                     * 
                     */
                    std::string GetUserUin() const;

                    /**
                     * 设置版本创建人uin
                     * @param _userUin 版本创建人uin
                     * 
                     */
                    void SetUserUin(const std::string& _userUin);

                    /**
                     * 判断参数 UserUin 是否已赋值
                     * @return UserUin 是否已赋值
                     * 
                     */
                    bool UserUinHasBeenSet() const;

                    /**
                     * 获取主账号uin
                     * @return OwnerUin 主账号uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置主账号uin
                     * @param _ownerUin 主账号uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

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
                     * 获取租户id
                     * @return AppId 租户id
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置租户id
                     * @param _appId 租户id
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectRegion 文件在对象存储的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectRegion() const;

                    /**
                     * 设置文件在对象存储的地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectRegion 文件在对象存储的地域
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectBucketName 文件在对象存储的桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetObjectBucketName() const;

                    /**
                     * 设置文件在对象存储的桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectBucketName 文件在对象存储的桶名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectBucketName(const std::string& _objectBucketName);

                    /**
                     * 判断参数 ObjectBucketName 是否已赋值
                     * @return ObjectBucketName 是否已赋值
                     * 
                     */
                    bool ObjectBucketNameHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 版本id,格式yyyyMMddHHmmssSSS
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 脚本资源id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 版本名称
                     */
                    std::string m_versionName;
                    bool m_versionNameHasBeenSet;

                    /**
                     * 版本创建时间，ISO8601格式
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 版本变更描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 编排空间提交版本的任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 编排空间提交版本的任务版本累加号，如V3
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskVersionNum;
                    bool m_taskVersionNumHasBeenSet;

                    /**
                     * 编排空间提交版本的任务版本id，,格式yyyyMMddHHmmssSSS
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskVersionId;
                    bool m_taskVersionIdHasBeenSet;

                    /**
                     * 版本创建人姓名
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 版本创建人uin
                     */
                    std::string m_userUin;
                    bool m_userUinHasBeenSet;

                    /**
                     * 主账号uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 租户id
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 文件远程存储路径
                     */
                    std::string m_remotePath;
                    bool m_remotePathHasBeenSet;

                    /**
                     * 文件在对象存储的地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectRegion;
                    bool m_objectRegionHasBeenSet;

                    /**
                     * 文件在对象存储的桶名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_objectBucketName;
                    bool m_objectBucketNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_USERFILEVERSIONDTO_H_
