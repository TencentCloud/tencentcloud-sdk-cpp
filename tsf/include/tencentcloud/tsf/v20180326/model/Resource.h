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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_RESOURCE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_RESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * tsf-privilege 模块，资源
                */
                class Resource : public AbstractModel
                {
                public:
                    Resource();
                    ~Resource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceId 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceCode 资源编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceCode() const;

                    /**
                     * 设置资源编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceCode 资源编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceCode(const std::string& _resourceCode);

                    /**
                     * 判断参数 ResourceCode 是否已赋值
                     * @return ResourceCode 是否已赋值
                     */
                    bool ResourceCodeHasBeenSet() const;

                    /**
                     * 获取资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceName 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取资源所属产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCode 资源所属产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceCode() const;

                    /**
                     * 设置资源所属产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceCode 资源所属产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceCode(const std::string& _serviceCode);

                    /**
                     * 判断参数 ServiceCode 是否已赋值
                     * @return ServiceCode 是否已赋值
                     */
                    bool ServiceCodeHasBeenSet() const;

                    /**
                     * 获取选取资源使用的Action
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceAction 选取资源使用的Action
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceAction() const;

                    /**
                     * 设置选取资源使用的Action
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceAction 选取资源使用的Action
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceAction(const std::string& _resourceAction);

                    /**
                     * 判断参数 ResourceAction 是否已赋值
                     * @return ResourceAction 是否已赋值
                     */
                    bool ResourceActionHasBeenSet() const;

                    /**
                     * 获取资源数据查询的ID字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdField 资源数据查询的ID字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIdField() const;

                    /**
                     * 设置资源数据查询的ID字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IdField 资源数据查询的ID字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIdField(const std::string& _idField);

                    /**
                     * 判断参数 IdField 是否已赋值
                     * @return IdField 是否已赋值
                     */
                    bool IdFieldHasBeenSet() const;

                    /**
                     * 获取资源数据查询的名称字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameField 资源数据查询的名称字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNameField() const;

                    /**
                     * 设置资源数据查询的名称字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NameField 资源数据查询的名称字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNameField(const std::string& _nameField);

                    /**
                     * 判断参数 NameField 是否已赋值
                     * @return NameField 是否已赋值
                     */
                    bool NameFieldHasBeenSet() const;

                    /**
                     * 获取资源数据查询的ID过滤字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectIdsField 资源数据查询的ID过滤字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSelectIdsField() const;

                    /**
                     * 设置资源数据查询的ID过滤字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SelectIdsField 资源数据查询的ID过滤字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSelectIdsField(const std::string& _selectIdsField);

                    /**
                     * 判断参数 SelectIdsField 是否已赋值
                     * @return SelectIdsField 是否已赋值
                     */
                    bool SelectIdsFieldHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCreationTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreationTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreationTime(const int64_t& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                    /**
                     * 获取最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastUpdateTime 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLastUpdateTime() const;

                    /**
                     * 设置最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastUpdateTime 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastUpdateTime(const int64_t& _lastUpdateTime);

                    /**
                     * 判断参数 LastUpdateTime 是否已赋值
                     * @return LastUpdateTime 是否已赋值
                     */
                    bool LastUpdateTimeHasBeenSet() const;

                    /**
                     * 获取删除标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteFlag 删除标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDeleteFlag() const;

                    /**
                     * 设置删除标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeleteFlag 删除标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeleteFlag(const bool& _deleteFlag);

                    /**
                     * 判断参数 DeleteFlag 是否已赋值
                     * @return DeleteFlag 是否已赋值
                     */
                    bool DeleteFlagHasBeenSet() const;

                    /**
                     * 获取资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceDesc 资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceDesc() const;

                    /**
                     * 设置资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceDesc 资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceDesc(const std::string& _resourceDesc);

                    /**
                     * 判断参数 ResourceDesc 是否已赋值
                     * @return ResourceDesc 是否已赋值
                     */
                    bool ResourceDescHasBeenSet() const;

                    /**
                     * 获取是否可以选择全部
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CanSelectAll 是否可以选择全部
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetCanSelectAll() const;

                    /**
                     * 设置是否可以选择全部
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CanSelectAll 是否可以选择全部
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCanSelectAll(const bool& _canSelectAll);

                    /**
                     * 判断参数 CanSelectAll 是否已赋值
                     * @return CanSelectAll 是否已赋值
                     */
                    bool CanSelectAllHasBeenSet() const;

                    /**
                     * 获取资源数据查询的模糊查询字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchWordField 资源数据查询的模糊查询字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSearchWordField() const;

                    /**
                     * 设置资源数据查询的模糊查询字段名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SearchWordField 资源数据查询的模糊查询字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSearchWordField(const std::string& _searchWordField);

                    /**
                     * 判断参数 SearchWordField 是否已赋值
                     * @return SearchWordField 是否已赋值
                     */
                    bool SearchWordFieldHasBeenSet() const;

                    /**
                     * 获取排序
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 排序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIndex() const;

                    /**
                     * 设置排序
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Index 排序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIndex(const int64_t& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 资源ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceCode;
                    bool m_resourceCodeHasBeenSet;

                    /**
                     * 资源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 资源所属产品编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceCode;
                    bool m_serviceCodeHasBeenSet;

                    /**
                     * 选取资源使用的Action
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceAction;
                    bool m_resourceActionHasBeenSet;

                    /**
                     * 资源数据查询的ID字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idField;
                    bool m_idFieldHasBeenSet;

                    /**
                     * 资源数据查询的名称字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameField;
                    bool m_nameFieldHasBeenSet;

                    /**
                     * 资源数据查询的ID过滤字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selectIdsField;
                    bool m_selectIdsFieldHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_creationTime;
                    bool m_creationTimeHasBeenSet;

                    /**
                     * 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastUpdateTime;
                    bool m_lastUpdateTimeHasBeenSet;

                    /**
                     * 删除标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deleteFlag;
                    bool m_deleteFlagHasBeenSet;

                    /**
                     * 资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceDesc;
                    bool m_resourceDescHasBeenSet;

                    /**
                     * 是否可以选择全部
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_canSelectAll;
                    bool m_canSelectAllHasBeenSet;

                    /**
                     * 资源数据查询的模糊查询字段名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_searchWordField;
                    bool m_searchWordFieldHasBeenSet;

                    /**
                     * 排序
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_RESOURCE_H_
