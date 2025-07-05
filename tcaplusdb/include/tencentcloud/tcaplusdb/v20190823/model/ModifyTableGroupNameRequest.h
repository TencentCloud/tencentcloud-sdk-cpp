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

#ifndef TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEGROUPNAMEREQUEST_H_
#define TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEGROUPNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcaplusdb
    {
        namespace V20190823
        {
            namespace Model
            {
                /**
                * ModifyTableGroupName请求参数结构体
                */
                class ModifyTableGroupNameRequest : public AbstractModel
                {
                public:
                    ModifyTableGroupNameRequest();
                    ~ModifyTableGroupNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取表格组所属的集群ID
                     * @return ClusterId 表格组所属的集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置表格组所属的集群ID
                     * @param _clusterId 表格组所属的集群ID
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
                     * 获取待修改名称的表格组ID
                     * @return TableGroupId 待修改名称的表格组ID
                     * 
                     */
                    std::string GetTableGroupId() const;

                    /**
                     * 设置待修改名称的表格组ID
                     * @param _tableGroupId 待修改名称的表格组ID
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
                     * 获取新的表格组名称，可以使用中英文字符和符号
                     * @return TableGroupName 新的表格组名称，可以使用中英文字符和符号
                     * 
                     */
                    std::string GetTableGroupName() const;

                    /**
                     * 设置新的表格组名称，可以使用中英文字符和符号
                     * @param _tableGroupName 新的表格组名称，可以使用中英文字符和符号
                     * 
                     */
                    void SetTableGroupName(const std::string& _tableGroupName);

                    /**
                     * 判断参数 TableGroupName 是否已赋值
                     * @return TableGroupName 是否已赋值
                     * 
                     */
                    bool TableGroupNameHasBeenSet() const;

                private:

                    /**
                     * 表格组所属的集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 待修改名称的表格组ID
                     */
                    std::string m_tableGroupId;
                    bool m_tableGroupIdHasBeenSet;

                    /**
                     * 新的表格组名称，可以使用中英文字符和符号
                     */
                    std::string m_tableGroupName;
                    bool m_tableGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCAPLUSDB_V20190823_MODEL_MODIFYTABLEGROUPNAMEREQUEST_H_
