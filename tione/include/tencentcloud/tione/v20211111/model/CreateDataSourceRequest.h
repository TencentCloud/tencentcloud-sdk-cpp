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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEDATASOURCEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/MountConfigureInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * CreateDataSource请求参数结构体
                */
                class CreateDataSourceRequest : public AbstractModel
                {
                public:
                    CreateDataSourceRequest();
                    ~CreateDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @return TiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * 
                     */
                    std::string GetTiProjectId() const;

                    /**
                     * 设置<p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     * @param _tiProjectId <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
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
                     * 获取<p>数据源名称</p>
                     * @return Name <p>数据源名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>数据源名称</p>
                     * @param _name <p>数据源名称</p>
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
                     * 获取<p>数据源类型英文名</p>
                     * @return Type <p>数据源类型英文名</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>数据源类型英文名</p>
                     * @param _type <p>数据源类型英文名</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>数据源权限，取值有RW RO</p>
                     * @return Permission <p>数据源权限，取值有RW RO</p>
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置<p>数据源权限，取值有RW RO</p>
                     * @param _permission <p>数据源权限，取值有RW RO</p>
                     * 
                     */
                    void SetPermission(const std::string& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>存储实例ID</p>
                     * @return StorageId <p>存储实例ID</p>
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置<p>存储实例ID</p>
                     * @param _storageId <p>存储实例ID</p>
                     * 
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     * 
                     */
                    bool StorageIdHasBeenSet() const;

                    /**
                     * 获取<p>数据源挂载配置</p>
                     * @return MountConfigure <p>数据源挂载配置</p>
                     * 
                     */
                    MountConfigureInfo GetMountConfigure() const;

                    /**
                     * 设置<p>数据源挂载配置</p>
                     * @param _mountConfigure <p>数据源挂载配置</p>
                     * 
                     */
                    void SetMountConfigure(const MountConfigureInfo& _mountConfigure);

                    /**
                     * 判断参数 MountConfigure 是否已赋值
                     * @return MountConfigure 是否已赋值
                     * 
                     */
                    bool MountConfigureHasBeenSet() const;

                    /**
                     * 获取<p>标签配置</p>
                     * @return Tags <p>标签配置</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签配置</p>
                     * @param _tags <p>标签配置</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>挂载数据源时默认填充的容器内路径</p>
                     * @return ContainerPath <p>挂载数据源时默认填充的容器内路径</p>
                     * 
                     */
                    std::string GetContainerPath() const;

                    /**
                     * 设置<p>挂载数据源时默认填充的容器内路径</p>
                     * @param _containerPath <p>挂载数据源时默认填充的容器内路径</p>
                     * 
                     */
                    void SetContainerPath(const std::string& _containerPath);

                    /**
                     * 判断参数 ContainerPath 是否已赋值
                     * @return ContainerPath 是否已赋值
                     * 
                     */
                    bool ContainerPathHasBeenSet() const;

                private:

                    /**
                     * <p>TI工作空间ID</p><p>使用非默认空间必须填写工作空间ID，使用默认空间无需填写工作空间ID。</p>
                     */
                    std::string m_tiProjectId;
                    bool m_tiProjectIdHasBeenSet;

                    /**
                     * <p>数据源名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>数据源类型英文名</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>数据源权限，取值有RW RO</p>
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>存储实例ID</p>
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                    /**
                     * <p>数据源挂载配置</p>
                     */
                    MountConfigureInfo m_mountConfigure;
                    bool m_mountConfigureHasBeenSet;

                    /**
                     * <p>标签配置</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>挂载数据源时默认填充的容器内路径</p>
                     */
                    std::string m_containerPath;
                    bool m_containerPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_CREATEDATASOURCEREQUEST_H_
