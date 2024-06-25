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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 账户分响应对象集合
                */
                class DescribeAccountGroupsData : public AbstractModel
                {
                public:
                    DescribeAccountGroupsData();
                    ~DescribeAccountGroupsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Itime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItime(const std::string& _itime);

                    /**
                     * 判断参数 Itime 是否已赋值
                     * @return Itime 是否已赋值
                     * 
                     */
                    bool ItimeHasBeenSet() const;

                    /**
                     * 获取账户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 账户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 账户组名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取id patch数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdPathArr id patch数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetIdPathArr() const;

                    /**
                     * 设置id patch数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idPathArr id patch数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdPathArr(const std::vector<int64_t>& _idPathArr);

                    /**
                     * 判断参数 IdPathArr 是否已赋值
                     * @return IdPathArr 是否已赋值
                     * 
                     */
                    bool IdPathArrHasBeenSet() const;

                    /**
                     * 获取该分组下用户总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserTotal 该分组下用户总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUserTotal() const;

                    /**
                     * 设置该分组下用户总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userTotal 该分组下用户总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserTotal(const int64_t& _userTotal);

                    /**
                     * 判断参数 UserTotal 是否已赋值
                     * @return UserTotal 是否已赋值
                     * 
                     */
                    bool UserTotalHasBeenSet() const;

                    /**
                     * 获取扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraInfo 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraInfo 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExtraInfo(const std::string& _extraInfo);

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                    /**
                     * 获取导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportType 导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importType 导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImportType(const std::string& _importType);

                    /**
                     * 判断参数 ImportType 是否已赋值
                     * @return ImportType 是否已赋值
                     * 
                     */
                    bool ImportTypeHasBeenSet() const;

                    /**
                     * 获取描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述
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
                     * 获取同步数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source 同步数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置同步数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source 同步数据源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取miniIAM id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MiniIamId miniIAM id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMiniIamId() const;

                    /**
                     * 设置miniIAM id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _miniIamId miniIAM id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMiniIamId(const std::string& _miniIamId);

                    /**
                     * 判断参数 MiniIamId 是否已赋值
                     * @return MiniIamId 是否已赋值
                     * 
                     */
                    bool MiniIamIdHasBeenSet() const;

                    /**
                     * 获取组织id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgId 组织id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrgId() const;

                    /**
                     * 设置组织id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgId 组织id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgId(const std::string& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取是否该账户的直接权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadOnly 是否该账户的直接权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否该账户的直接权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readOnly 是否该账户的直接权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                    /**
                     * 获取父id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 父id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取名称path
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamePath 名称path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置名称path
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namePath 名称path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamePath(const std::string& _namePath);

                    /**
                     * 判断参数 NamePath 是否已赋值
                     * @return NamePath 是否已赋值
                     * 
                     */
                    bool NamePathHasBeenSet() const;

                    /**
                     * 获取父组织id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentOrgId 父组织id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentOrgId() const;

                    /**
                     * 设置父组织id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentOrgId 父组织id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentOrgId(const std::string& _parentOrgId);

                    /**
                     * 判断参数 ParentOrgId 是否已赋值
                     * @return ParentOrgId 是否已赋值
                     * 
                     */
                    bool ParentOrgIdHasBeenSet() const;

                    /**
                     * 获取id path
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdPath id path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdPath() const;

                    /**
                     * 设置id path
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idPath id path
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdPath(const std::string& _idPath);

                    /**
                     * 判断参数 IdPath 是否已赋值
                     * @return IdPath 是否已赋值
                     * 
                     */
                    bool IdPathHasBeenSet() const;

                    /**
                     * 获取自增id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 自增id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置自增id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 自增id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLeaf 是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLeaf 是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Utime 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _utime 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUtime(const std::string& _utime);

                    /**
                     * 判断参数 Utime 是否已赋值
                     * @return Utime 是否已赋值
                     * 
                     */
                    bool UtimeHasBeenSet() const;

                private:

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * 账户组名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * id patch数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_idPathArr;
                    bool m_idPathArrHasBeenSet;

                    /**
                     * 该分组下用户总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_userTotal;
                    bool m_userTotalHasBeenSet;

                    /**
                     * 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 导入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * 描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 同步数据源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * miniIAM id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_miniIamId;
                    bool m_miniIamIdHasBeenSet;

                    /**
                     * 组织id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 是否该账户的直接权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 父id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 名称path
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * 父组织id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentOrgId;
                    bool m_parentOrgIdHasBeenSet;

                    /**
                     * id path
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idPath;
                    bool m_idPathHasBeenSet;

                    /**
                     * 自增id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * 最后更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSDATA_H_
