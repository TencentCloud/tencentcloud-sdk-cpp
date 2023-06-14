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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEDEPLOYEDINSTANCEMC_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEDEPLOYEDINSTANCEMC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * 运行时部署的应用实例详情
                */
                class RuntimeDeployedInstanceMC : public AbstractModel
                {
                public:
                    RuntimeDeployedInstanceMC();
                    ~RuntimeDeployedInstanceMC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目id
                     * @return GroupId 项目id
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置项目id
                     * @param _groupId 项目id
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return GroupName 项目名称
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置项目名称
                     * @param _groupName 项目名称
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取应用id
                     * @return ProjectId 应用id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置应用id
                     * @param _projectId 应用id
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return ProjectName 应用名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置应用名称
                     * @param _projectName 应用名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取应用实例id
                     * @return InstanceId 应用实例id
                     * 
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置应用实例id
                     * @param _instanceId 应用实例id
                     * 
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取应用实例版本
                     * @return InstanceVersion 应用实例版本
                     * 
                     */
                    int64_t GetInstanceVersion() const;

                    /**
                     * 设置应用实例版本
                     * @param _instanceVersion 应用实例版本
                     * 
                     */
                    void SetInstanceVersion(const int64_t& _instanceVersion);

                    /**
                     * 判断参数 InstanceVersion 是否已赋值
                     * @return InstanceVersion 是否已赋值
                     * 
                     */
                    bool InstanceVersionHasBeenSet() const;

                    /**
                     * 获取应用实例创建时间
                     * @return InstanceCreatedAt 应用实例创建时间
                     * 
                     */
                    int64_t GetInstanceCreatedAt() const;

                    /**
                     * 设置应用实例创建时间
                     * @param _instanceCreatedAt 应用实例创建时间
                     * 
                     */
                    void SetInstanceCreatedAt(const int64_t& _instanceCreatedAt);

                    /**
                     * 判断参数 InstanceCreatedAt 是否已赋值
                     * @return InstanceCreatedAt 是否已赋值
                     * 
                     */
                    bool InstanceCreatedAtHasBeenSet() const;

                    /**
                     * 获取应用实例部署状态. 0:running, 1:deleting
                     * @return Status 应用实例部署状态. 0:running, 1:deleting
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置应用实例部署状态. 0:running, 1:deleting
                     * @param _status 应用实例部署状态. 0:running, 1:deleting
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取应用实例部署创建时间
                     * @return CreatedAt 应用实例部署创建时间
                     * 
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 设置应用实例部署创建时间
                     * @param _createdAt 应用实例部署创建时间
                     * 
                     */
                    void SetCreatedAt(const int64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取应用实例部署更新时间
                     * @return UpdatedAt 应用实例部署更新时间
                     * 
                     */
                    int64_t GetUpdatedAt() const;

                    /**
                     * 设置应用实例部署更新时间
                     * @param _updatedAt 应用实例部署更新时间
                     * 
                     */
                    void SetUpdatedAt(const int64_t& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取应用类型：0:NormalApp普通应用 1:TemplateApp模板应用 2:LightApp轻应用 3:MicroConnTemplate微连接模板 4:MicroConnApp微连接应用
                     * @return ProjectType 应用类型：0:NormalApp普通应用 1:TemplateApp模板应用 2:LightApp轻应用 3:MicroConnTemplate微连接模板 4:MicroConnApp微连接应用
                     * 
                     */
                    int64_t GetProjectType() const;

                    /**
                     * 设置应用类型：0:NormalApp普通应用 1:TemplateApp模板应用 2:LightApp轻应用 3:MicroConnTemplate微连接模板 4:MicroConnApp微连接应用
                     * @param _projectType 应用类型：0:NormalApp普通应用 1:TemplateApp模板应用 2:LightApp轻应用 3:MicroConnTemplate微连接模板 4:MicroConnApp微连接应用
                     * 
                     */
                    void SetProjectType(const int64_t& _projectType);

                    /**
                     * 判断参数 ProjectType 是否已赋值
                     * @return ProjectType 是否已赋值
                     * 
                     */
                    bool ProjectTypeHasBeenSet() const;

                    /**
                     * 获取应用版本：0:旧版 1:3.0新控制台
                     * @return ProjectVersion 应用版本：0:旧版 1:3.0新控制台
                     * 
                     */
                    int64_t GetProjectVersion() const;

                    /**
                     * 设置应用版本：0:旧版 1:3.0新控制台
                     * @param _projectVersion 应用版本：0:旧版 1:3.0新控制台
                     * 
                     */
                    void SetProjectVersion(const int64_t& _projectVersion);

                    /**
                     * 判断参数 ProjectVersion 是否已赋值
                     * @return ProjectVersion 是否已赋值
                     * 
                     */
                    bool ProjectVersionHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 应用id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 应用实例id
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 应用实例版本
                     */
                    int64_t m_instanceVersion;
                    bool m_instanceVersionHasBeenSet;

                    /**
                     * 应用实例创建时间
                     */
                    int64_t m_instanceCreatedAt;
                    bool m_instanceCreatedAtHasBeenSet;

                    /**
                     * 应用实例部署状态. 0:running, 1:deleting
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 应用实例部署创建时间
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 应用实例部署更新时间
                     */
                    int64_t m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 应用类型：0:NormalApp普通应用 1:TemplateApp模板应用 2:LightApp轻应用 3:MicroConnTemplate微连接模板 4:MicroConnApp微连接应用
                     */
                    int64_t m_projectType;
                    bool m_projectTypeHasBeenSet;

                    /**
                     * 应用版本：0:旧版 1:3.0新控制台
                     */
                    int64_t m_projectVersion;
                    bool m_projectVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEDEPLOYEDINSTANCEMC_H_
