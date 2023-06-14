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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLEGROUPREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcaplusdb/v20190823/model/TagInfoUnit.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * CreateTableGroup请求参数结构体
                */
                class CreateTableGroupRequest : public AbstractModel
                {
                public:
                    CreateTableGroupRequest();
                    ~CreateTableGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表格组所属集群ID
                     * @return ClusterId 表格组所属集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置表格组所属集群ID
                     * @param _clusterId 表格组所属集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取表格组名称，可以采用中文、英文或数字字符，最大长度32个字符
                     * @return TableGroupName 表格组名称，可以采用中文、英文或数字字符，最大长度32个字符
                     * 
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置表格组名称，可以采用中文、英文或数字字符，最大长度32个字符
                     * @param _tableGroupName 表格组名称，可以采用中文、英文或数字字符，最大长度32个字符
                     * 
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     * 
                     */
                    bool TableGroupNameHasBeenSet() const;

                    /**
                     * 获取表格组ID，可以由用户指定，但在同一个集群内不能重复，如果不指定则采用自增的模式
                     * @return TableGroupId 表格组ID，可以由用户指定，但在同一个集群内不能重复，如果不指定则采用自增的模式
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置表格组ID，可以由用户指定，但在同一个集群内不能重复，如果不指定则采用自增的模式
                     * @param _tableGroupId 表格组ID，可以由用户指定，但在同一个集群内不能重复，如果不指定则采用自增的模式
                     * 
                     */
                    void SetTableGroupId(const std::string& _tableGroupId);

                    /**
                     * 判断参数 TableGroupId 是否已赋值
                     * @return TableGroupId 是否已赋值
                     * 
                     */
                    bool TableGroupIdHasBeenSet() const;

                    /**
                     * 获取表格组标签列表
                     * @return ResourceTags 表格组标签列表
                     * 
                     */
                    std::vector<TagInfoUnit> GetResourceTags() const;

                    /**
                     * 设置表格组标签列表
                     * @param _resourceTags 表格组标签列表
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfoUnit>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * 表格组所属集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 表格组名称，可以采用中文、英文或数字字符，最大长度32个字符
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                    /**
                     * 表格组ID，可以由用户指定，但在同一个集群内不能重复，如果不指定则采用自增的模式
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 表格组标签列表
                     */
                    std::vector<TagInfoUnit> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_CREATETABLEGROUPREQUEST_H_
