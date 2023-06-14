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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYINSTANCEREQUEST_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * ModifyInstance请求参数结构体
                */
                class ModifyInstanceRequest : public AbstractModel
                {
                public:
                    ModifyInstanceRequest();
                    ~ModifyInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取修改实例操作。<ul><li>rename：表示实例重命名。</li><li>modifyProject：修改实例所属项目。</li><li>modifyAutoRenew：修改实例续费模式。</li></ul>
                     * @return Operation 修改实例操作。<ul><li>rename：表示实例重命名。</li><li>modifyProject：修改实例所属项目。</li><li>modifyAutoRenew：修改实例续费模式。</li></ul>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置修改实例操作。<ul><li>rename：表示实例重命名。</li><li>modifyProject：修改实例所属项目。</li><li>modifyAutoRenew：修改实例续费模式。</li></ul>
                     * @param _operation 修改实例操作。<ul><li>rename：表示实例重命名。</li><li>modifyProject：修改实例所属项目。</li><li>modifyAutoRenew：修改实例续费模式。</li></ul>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取实例 ID 数组。
                     * @return InstanceIds 实例 ID 数组。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例 ID 数组。
                     * @param _instanceIds 实例 ID 数组。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取实例的新名称。
                     * @return InstanceNames 实例的新名称。
                     * 
                     */
                    std::vector<std::string> GetInstanceNames() const;

                    /**
                     * 设置实例的新名称。
                     * @param _instanceNames 实例的新名称。
                     * 
                     */
                    void SetInstanceNames(const std::vector<std::string>& _instanceNames);

                    /**
                     * 判断参数 InstanceNames 是否已赋值
                     * @return InstanceNames 是否已赋值
                     * 
                     */
                    bool InstanceNamesHasBeenSet() const;

                    /**
                     * 获取实例新的项目 ID。
                     * @return ProjectId 实例新的项目 ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置实例新的项目 ID。
                     * @param _projectId 实例新的项目 ID。
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
                     * 获取包年包月计费的续费模式。<b>InstanceIds</b>数组和<b>AutoRenews</b>数组中的修改值对应。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     * @return AutoRenews 包年包月计费的续费模式。<b>InstanceIds</b>数组和<b>AutoRenews</b>数组中的修改值对应。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     * 
                     */
                    std::vector<int64_t> GetAutoRenews() const;

                    /**
                     * 设置包年包月计费的续费模式。<b>InstanceIds</b>数组和<b>AutoRenews</b>数组中的修改值对应。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     * @param _autoRenews 包年包月计费的续费模式。<b>InstanceIds</b>数组和<b>AutoRenews</b>数组中的修改值对应。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     * 
                     */
                    void SetAutoRenews(const std::vector<int64_t>& _autoRenews);

                    /**
                     * 判断参数 AutoRenews 是否已赋值
                     * @return AutoRenews 是否已赋值
                     * 
                     */
                    bool AutoRenewsHasBeenSet() const;

                private:

                    /**
                     * 修改实例操作。<ul><li>rename：表示实例重命名。</li><li>modifyProject：修改实例所属项目。</li><li>modifyAutoRenew：修改实例续费模式。</li></ul>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 实例 ID 数组。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 实例的新名称。
                     */
                    std::vector<std::string> m_instanceNames;
                    bool m_instanceNamesHasBeenSet;

                    /**
                     * 实例新的项目 ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 包年包月计费的续费模式。<b>InstanceIds</b>数组和<b>AutoRenews</b>数组中的修改值对应。<ul><li>0：默认状态，指手动续费。</li><li>1：自动续费。</li><li>2：到期不再续费。</ul>
                     */
                    std::vector<int64_t> m_autoRenews;
                    bool m_autoRenewsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_MODIFYINSTANCEREQUEST_H_
