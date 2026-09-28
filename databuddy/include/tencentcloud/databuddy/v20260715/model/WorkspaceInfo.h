/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/StandardUserInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 工作空间信息
                */
                class WorkspaceInfo : public AbstractModel
                {
                public:
                    WorkspaceInfo();
                    ~WorkspaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作空间ID
                     * @return WorkspaceId 工作空间ID
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间ID
                     * @param _workspaceId 工作空间ID
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取工作空间名称
                     * @return WorkspaceName 工作空间名称
                     * 
                     */
                    std::string GetWorkspaceName() const;

                    /**
                     * 设置工作空间名称
                     * @param _workspaceName 工作空间名称
                     * 
                     */
                    void SetWorkspaceName(const std::string& _workspaceName);

                    /**
                     * 判断参数 WorkspaceName 是否已赋值
                     * @return WorkspaceName 是否已赋值
                     * 
                     */
                    bool WorkspaceNameHasBeenSet() const;

                    /**
                     * 获取工作空间描述
                     * @return Description 工作空间描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置工作空间描述
                     * @param _description 工作空间描述
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
                     * 获取工作空间地域（如 ap-guangzhou）
                     * @return WorkspaceRegion 工作空间地域（如 ap-guangzhou）
                     * 
                     */
                    std::string GetWorkspaceRegion() const;

                    /**
                     * 设置工作空间地域（如 ap-guangzhou）
                     * @param _workspaceRegion 工作空间地域（如 ap-guangzhou）
                     * 
                     */
                    void SetWorkspaceRegion(const std::string& _workspaceRegion);

                    /**
                     * 判断参数 WorkspaceRegion 是否已赋值
                     * @return WorkspaceRegion 是否已赋值
                     * 
                     */
                    bool WorkspaceRegionHasBeenSet() const;

                    /**
                     * 获取工作空间状态：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除
                     * @return Status 工作空间状态：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置工作空间状态：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除
                     * @param _status 工作空间状态：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除
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
                     * 获取失败原因（Status=2 创建失败时有值）
                     * @return ErrorReason 失败原因（Status=2 创建失败时有值）
                     * 
                     */
                    std::string GetErrorReason() const;

                    /**
                     * 设置失败原因（Status=2 创建失败时有值）
                     * @param _errorReason 失败原因（Status=2 创建失败时有值）
                     * 
                     */
                    void SetErrorReason(const std::string& _errorReason);

                    /**
                     * 判断参数 ErrorReason 是否已赋值
                     * @return ErrorReason 是否已赋值
                     * 
                     */
                    bool ErrorReasonHasBeenSet() const;

                    /**
                     * 获取创建者信息
                     * @return Creator 创建者信息
                     * 
                     */
                    StandardUserInfo GetCreator() const;

                    /**
                     * 设置创建者信息
                     * @param _creator 创建者信息
                     * 
                     */
                    void SetCreator(const StandardUserInfo& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取创建时间，毫秒时间戳
                     * @return CreateTime 创建时间，毫秒时间戳
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，毫秒时间戳
                     * @param _createTime 创建时间，毫秒时间戳
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
                     * 获取更新时间，毫秒时间戳
                     * @return UpdateTime 更新时间，毫秒时间戳
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间，毫秒时间戳
                     * @param _updateTime 更新时间，毫秒时间戳
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取当前用户是否拥有该工作空间的访问权限
                     * @return HasAccess 当前用户是否拥有该工作空间的访问权限
                     * 
                     */
                    bool GetHasAccess() const;

                    /**
                     * 设置当前用户是否拥有该工作空间的访问权限
                     * @param _hasAccess 当前用户是否拥有该工作空间的访问权限
                     * 
                     */
                    void SetHasAccess(const bool& _hasAccess);

                    /**
                     * 判断参数 HasAccess 是否已赋值
                     * @return HasAccess 是否已赋值
                     * 
                     */
                    bool HasAccessHasBeenSet() const;

                private:

                    /**
                     * 工作空间ID
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 工作空间名称
                     */
                    std::string m_workspaceName;
                    bool m_workspaceNameHasBeenSet;

                    /**
                     * 工作空间描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 工作空间地域（如 ap-guangzhou）
                     */
                    std::string m_workspaceRegion;
                    bool m_workspaceRegionHasBeenSet;

                    /**
                     * 工作空间状态：0=未指定 1=创建中 2=创建失败 3=正常运行中 4=已删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败原因（Status=2 创建失败时有值）
                     */
                    std::string m_errorReason;
                    bool m_errorReasonHasBeenSet;

                    /**
                     * 创建者信息
                     */
                    StandardUserInfo m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 创建时间，毫秒时间戳
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间，毫秒时间戳
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 当前用户是否拥有该工作空间的访问权限
                     */
                    bool m_hasAccess;
                    bool m_hasAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_WORKSPACEINFO_H_
