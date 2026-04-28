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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_WORKSPACE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_WORKSPACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ResourceGroupInWorkspace.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 工作空间
                */
                class Workspace : public AbstractModel
                {
                public:
                    Workspace();
                    ~Workspace() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>项目ID</p>
                     * @return TiProjectId <p>项目ID</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>项目ID</p>
                     * @param _tiProjectId <p>项目ID</p>
                     * 
                     */
                    void SetTiProjectId(const std::string& _tiProjectId);

                    /**
                     * 判断参数 TiProjectId 是否已赋值
                     * @return TiProjectId 是否已赋值
                     * 
                     */
                    bool TiProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>绑定的资源组信息</p>
                     * @return ResourceGroups <p>绑定的资源组信息</p>
                     * 
                     */
                    std::vector<ResourceGroupInWorkspace> GetResourceGroups() const;

                    /**
                     * 设置<p>绑定的资源组信息</p>
                     * @param _resourceGroups <p>绑定的资源组信息</p>
                     * 
                     */
                    void SetResourceGroups(const std::vector<ResourceGroupInWorkspace>& _resourceGroups);

                    /**
                     * 判断参数 ResourceGroups 是否已赋值
                     * @return ResourceGroups 是否已赋值
                     * 
                     */
                    bool ResourceGroupsHasBeenSet() const;

                    /**
                     * 获取<p>当前用户对此空间拥有的权限</p>
                     * @return ActionType <p>当前用户对此空间拥有的权限</p>
                     * 
                     */
                    std::vector<std::string> GetActionType() const;

                    /**
                     * 设置<p>当前用户对此空间拥有的权限</p>
                     * @param _actionType <p>当前用户对此空间拥有的权限</p>
                     * 
                     */
                    void SetActionType(const std::vector<std::string>& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取<p>工作空间状态</p>
                     * @return Status <p>工作空间状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>工作空间状态</p>
                     * @param _status <p>工作空间状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>项目ID</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>绑定的资源组信息</p>
                     */
                    std::vector<ResourceGroupInWorkspace> m_resourceGroups;
                    bool m_resourceGroupsHasBeenSet;

                    /**
                     * <p>当前用户对此空间拥有的权限</p>
                     */
                    std::vector<std::string> m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * <p>工作空间状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_WORKSPACE_H_
