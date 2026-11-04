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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEPERMISSION_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/DataSourceBrief.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 资源级权限记录
                */
                class ResourcePermission : public AbstractModel
                {
                public:
                    ResourcePermission();
                    ~ResourcePermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源类型</p>
                     * @return ResourceType <p>资源类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p>
                     * @param _resourceType <p>资源类型</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>资源ID</p>
                     * @return Id <p>资源ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _id <p>资源ID</p>
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
                     * 获取<p>权限值</p>
                     * @return Permission <p>权限值</p>
                     * 
                     */
                    std::string GetPermission() const;

                    /**
                     * 设置<p>权限值</p>
                     * @param _permission <p>权限值</p>
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
                     * 获取<p>资源名称</p>
                     * @return Name <p>资源名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>资源名称</p>
                     * @param _name <p>资源名称</p>
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
                     * 获取<p>创建者子账号</p>
                     * @return SubUin <p>创建者子账号</p>
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>创建者子账号</p>
                     * @param _subUin <p>创建者子账号</p>
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取<p>创建者昵称</p>
                     * @return SubUinName <p>创建者昵称</p>
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置<p>创建者昵称</p>
                     * @param _subUinName <p>创建者昵称</p>
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                    /**
                     * 获取<p>数据源简要信息</p>
                     * @return DataSourceBrief <p>数据源简要信息</p>
                     * 
                     */
                    DataSourceBrief GetDataSourceBrief() const;

                    /**
                     * 设置<p>数据源简要信息</p>
                     * @param _dataSourceBrief <p>数据源简要信息</p>
                     * 
                     */
                    void SetDataSourceBrief(const DataSourceBrief& _dataSourceBrief);

                    /**
                     * 判断参数 DataSourceBrief 是否已赋值
                     * @return DataSourceBrief 是否已赋值
                     * 
                     */
                    bool DataSourceBriefHasBeenSet() const;

                private:

                    /**
                     * <p>资源类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>资源ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>权限值</p>
                     */
                    std::string m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>资源名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>创建者子账号</p>
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>创建者昵称</p>
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * <p>数据源简要信息</p>
                     */
                    DataSourceBrief m_dataSourceBrief;
                    bool m_dataSourceBriefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_RESOURCEPERMISSION_H_
