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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_UPDATEDATASOURCEREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_UPDATEDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/MountConfigureInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * UpdateDataSource请求参数结构体
                */
                class UpdateDataSourceRequest : public AbstractModel
                {
                public:
                    UpdateDataSourceRequest();
                    ~UpdateDataSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源ID
                     * @return Id 数据源ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置数据源ID
                     * @param _id 数据源ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取数据源名称
                     * @return Name 数据源名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据源名称
                     * @param _name 数据源名称
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
                     * 获取数据源权限，取值有RW RO
                     * @return Permission 数据源权限，取值有RW RO
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置数据源权限，取值有RW RO
                     * @param _permission 数据源权限，取值有RW RO
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
                     * 获取数据源挂载配置
                     * @return MountConfigure 数据源挂载配置
                     * 
                     */
                    MountConfigureInfo GetMountConfigure() const;

                    /**
                     * 设置数据源挂载配置
                     * @param _mountConfigure 数据源挂载配置
                     * 
                     */
                    void SetMountConfigure(const MountConfigureInfo& _mountConfigure);

                    /**
                     * 判断参数 MountConfigure 是否已赋值
                     * @return MountConfigure 是否已赋值
                     * 
                     */
                    bool MountConfigureHasBeenSet() const;

                private:

                    /**
                     * 数据源ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据源权限，取值有RW RO
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 数据源挂载配置
                     */
                    MountConfigureInfo m_mountConfigure;
                    bool m_mountConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_UPDATEDATASOURCEREQUEST_H_
