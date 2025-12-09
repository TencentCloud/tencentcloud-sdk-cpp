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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ASSETDIM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ASSETDIM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DimTableLink.h>
#include <tencentcloud/wedata/v20210820/model/Pair.h>
#include <tencentcloud/wedata/v20210820/model/AssetDimTableColumn.h>
#include <tencentcloud/wedata/v20210820/model/IndicatorBaseSimpleInfo.h>
#include <tencentcloud/wedata/v20210820/model/PermissionStatus.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 资产维度信息结构定义
                */
                class AssetDim : public AbstractModel
                {
                public:
                    AssetDim();
                    ~AssetDim() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件夹 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId 文件夹 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFolderId() const;

                    /**
                     * 设置文件夹 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId 文件夹 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolderId(const uint64_t& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取维度编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimCode 维度编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimCode() const;

                    /**
                     * 设置维度编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimCode 维度编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimCode(const std::string& _dimCode);

                    /**
                     * 判断参数 DimCode 是否已赋值
                     * @return DimCode 是否已赋值
                     * 
                     */
                    bool DimCodeHasBeenSet() const;

                    /**
                     * 获取维度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimName 维度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimName() const;

                    /**
                     * 设置维度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimName 维度名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimName(const std::string& _dimName);

                    /**
                     * 判断参数 DimName 是否已赋值
                     * @return DimName 是否已赋值
                     * 
                     */
                    bool DimNameHasBeenSet() const;

                    /**
                     * 获取维度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 维度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置维度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 维度描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取维度负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerAccount 维度负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOwnerAccount() const;

                    /**
                     * 设置维度负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerAccount 维度负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerAccount(const uint64_t& _ownerAccount);

                    /**
                     * 判断参数 OwnerAccount 是否已赋值
                     * @return OwnerAccount 是否已赋值
                     * 
                     */
                    bool OwnerAccountHasBeenSet() const;

                    /**
                     * 获取维度负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 维度负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置维度负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 维度负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwner(const std::string& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取变更人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyUserId 变更人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetModifyUserId() const;

                    /**
                     * 设置变更人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyUserId 变更人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyUserId(const int64_t& _modifyUserId);

                    /**
                     * 判断参数 ModifyUserId 是否已赋值
                     * @return ModifyUserId 是否已赋值
                     * 
                     */
                    bool ModifyUserIdHasBeenSet() const;

                    /**
                     * 获取维度最近修改人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyUser 维度最近修改人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyUser() const;

                    /**
                     * 设置维度最近修改人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyUser 维度最近修改人名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyUser(const std::string& _modifyUser);

                    /**
                     * 判断参数 ModifyUser 是否已赋值
                     * @return ModifyUser 是否已赋值
                     * 
                     */
                    bool ModifyUserHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取维度录入方式， 取值：manual-手动录入；dict-关联字典表；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimType 维度录入方式， 取值：manual-手动录入；dict-关联字典表；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDimType() const;

                    /**
                     * 设置维度录入方式， 取值：manual-手动录入；dict-关联字典表；
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimType 维度录入方式， 取值：manual-手动录入；dict-关联字典表；
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimType(const std::string& _dimType);

                    /**
                     * 判断参数 DimType 是否已赋值
                     * @return DimType 是否已赋值
                     * 
                     */
                    bool DimTypeHasBeenSet() const;

                    /**
                     * 获取枚举值数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValuePairCount 枚举值数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetValuePairCount() const;

                    /**
                     * 设置枚举值数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valuePairCount 枚举值数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValuePairCount(const uint64_t& _valuePairCount);

                    /**
                     * 判断参数 ValuePairCount 是否已赋值
                     * @return ValuePairCount 是否已赋值
                     * 
                     */
                    bool ValuePairCountHasBeenSet() const;

                    /**
                     * 获取关联指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorPairCount 关联指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetIndicatorPairCount() const;

                    /**
                     * 设置关联指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorPairCount 关联指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorPairCount(const uint64_t& _indicatorPairCount);

                    /**
                     * 判断参数 IndicatorPairCount 是否已赋值
                     * @return IndicatorPairCount 是否已赋值
                     * 
                     */
                    bool IndicatorPairCountHasBeenSet() const;

                    /**
                     * 获取关联字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableColumnCount 关联字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTableColumnCount() const;

                    /**
                     * 设置关联字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableColumnCount 关联字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableColumnCount(const uint64_t& _tableColumnCount);

                    /**
                     * 判断参数 TableColumnCount 是否已赋值
                     * @return TableColumnCount 是否已赋值
                     * 
                     */
                    bool TableColumnCountHasBeenSet() const;

                    /**
                     * 获取维度 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimId 维度 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDimId() const;

                    /**
                     * 设置维度 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimId 维度 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimId(const uint64_t& _dimId);

                    /**
                     * 判断参数 DimId 是否已赋值
                     * @return DimId 是否已赋值
                     * 
                     */
                    bool DimIdHasBeenSet() const;

                    /**
                     * 获取维度关联表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimTableLink 维度关联表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DimTableLink GetDimTableLink() const;

                    /**
                     * 设置维度关联表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimTableLink 维度关联表字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimTableLink(const DimTableLink& _dimTableLink);

                    /**
                     * 判断参数 DimTableLink 是否已赋值
                     * @return DimTableLink 是否已赋值
                     * 
                     */
                    bool DimTableLinkHasBeenSet() const;

                    /**
                     * 获取枚举值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValuePairs 枚举值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Pair> GetValuePairs() const;

                    /**
                     * 设置枚举值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valuePairs 枚举值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValuePairs(const std::vector<Pair>& _valuePairs);

                    /**
                     * 判断参数 ValuePairs 是否已赋值
                     * @return ValuePairs 是否已赋值
                     * 
                     */
                    bool ValuePairsHasBeenSet() const;

                    /**
                     * 获取维度关联字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableColumns 维度关联字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssetDimTableColumn> GetTableColumns() const;

                    /**
                     * 设置维度关联字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableColumns 维度关联字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableColumns(const std::vector<AssetDimTableColumn>& _tableColumns);

                    /**
                     * 判断参数 TableColumns 是否已赋值
                     * @return TableColumns 是否已赋值
                     * 
                     */
                    bool TableColumnsHasBeenSet() const;

                    /**
                     * 获取关联指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceIndicatorIds 关联指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IndicatorBaseSimpleInfo> GetSourceIndicatorIds() const;

                    /**
                     * 设置关联指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceIndicatorIds 关联指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceIndicatorIds(const std::vector<IndicatorBaseSimpleInfo>& _sourceIndicatorIds);

                    /**
                     * 判断参数 SourceIndicatorIds 是否已赋值
                     * @return SourceIndicatorIds 是否已赋值
                     * 
                     */
                    bool SourceIndicatorIdsHasBeenSet() const;

                    /**
                     * 获取权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimPermission 权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PermissionStatus GetDimPermission() const;

                    /**
                     * 设置权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimPermission 权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimPermission(const PermissionStatus& _dimPermission);

                    /**
                     * 判断参数 DimPermission 是否已赋值
                     * @return DimPermission 是否已赋值
                     * 
                     */
                    bool DimPermissionHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
                     * @return ProjectName 项目名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
                     * @param _projectName 项目名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * 文件夹 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 维度编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimCode;
                    bool m_dimCodeHasBeenSet;

                    /**
                     * 维度名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimName;
                    bool m_dimNameHasBeenSet;

                    /**
                     * 维度描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 维度负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ownerAccount;
                    bool m_ownerAccountHasBeenSet;

                    /**
                     * 维度负责人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 变更人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_modifyUserId;
                    bool m_modifyUserIdHasBeenSet;

                    /**
                     * 维度最近修改人名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyUser;
                    bool m_modifyUserHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 维度录入方式， 取值：manual-手动录入；dict-关联字典表；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dimType;
                    bool m_dimTypeHasBeenSet;

                    /**
                     * 枚举值数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_valuePairCount;
                    bool m_valuePairCountHasBeenSet;

                    /**
                     * 关联指标数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_indicatorPairCount;
                    bool m_indicatorPairCountHasBeenSet;

                    /**
                     * 关联字段数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tableColumnCount;
                    bool m_tableColumnCountHasBeenSet;

                    /**
                     * 维度 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_dimId;
                    bool m_dimIdHasBeenSet;

                    /**
                     * 维度关联表字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DimTableLink m_dimTableLink;
                    bool m_dimTableLinkHasBeenSet;

                    /**
                     * 枚举值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Pair> m_valuePairs;
                    bool m_valuePairsHasBeenSet;

                    /**
                     * 维度关联字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetDimTableColumn> m_tableColumns;
                    bool m_tableColumnsHasBeenSet;

                    /**
                     * 关联指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IndicatorBaseSimpleInfo> m_sourceIndicatorIds;
                    bool m_sourceIndicatorIdsHasBeenSet;

                    /**
                     * 权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PermissionStatus m_dimPermission;
                    bool m_dimPermissionHasBeenSet;

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ASSETDIM_H_
