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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_ACCOUNTGROUP_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_ACCOUNTGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ioa账号组
                */
                class AccountGroup : public AbstractModel
                {
                public:
                    AccountGroup();
                    ~AccountGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号组id
                     * @return Id 账号组id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置账号组id
                     * @param _id 账号组id
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
                     * 获取账号组名称
                     * @return Name 账号组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置账号组名称
                     * @param _name 账号组名称
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
                     * 获取账号组id路径
                     * @return IdPath 账号组id路径
                     * 
                     */
                    std::string GetIdPath() const;

                    /**
                     * 设置账号组id路径
                     * @param _idPath 账号组id路径
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
                     * 获取账号组名称路径
                     * @return NamePath 账号组名称路径
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置账号组名称路径
                     * @param _namePath 账号组名称路径
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
                     * 获取父账号组id
                     * @return ParentId 父账号组id
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父账号组id
                     * @param _parentId 父账号组id
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
                     * 获取账号组来源
                     * @return Source 账号组来源
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置账号组来源
                     * @param _source 账号组来源
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
                     * 获取账号组下用户总数
                     * @return UserTotal 账号组下用户总数
                     * 
                     */
                    int64_t GetUserTotal() const;

                    /**
                     * 设置账号组下用户总数
                     * @param _userTotal 账号组下用户总数
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
                     * 获取是否叶子节点
                     * @return IsLeaf 是否叶子节点
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置是否叶子节点
                     * @param _isLeaf 是否叶子节点
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
                     * 获取账号组导入类型
                     * @return ImportType 账号组导入类型
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置账号组导入类型
                     * @param _importType 账号组导入类型
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
                     * 获取账号组描述
                     * @return Description 账号组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置账号组描述
                     * @param _description 账号组描述
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
                     * 获取父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     * @return ParentOrgId 父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     * 
                     */
                    std::string GetParentOrgId() const;

                    /**
                     * 设置父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     * @param _parentOrgId 父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
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
                     * 获取源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     * @return OrgId 源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     * 
                     */
                    std::string GetOrgId() const;

                    /**
                     * 设置源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     * @param _orgId 源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
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
                     * 获取账号组是否已经接入，0表示未接入，1表示接入
                     * @return Status 账号组是否已经接入，0表示未接入，1表示接入
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置账号组是否已经接入，0表示未接入，1表示接入
                     * @param _status 账号组是否已经接入，0表示未接入，1表示接入
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 账号组id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 账号组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 账号组id路径
                     */
                    std::string m_idPath;
                    bool m_idPathHasBeenSet;

                    /**
                     * 账号组名称路径
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * 父账号组id
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 账号组来源
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 账号组下用户总数
                     */
                    int64_t m_userTotal;
                    bool m_userTotalHasBeenSet;

                    /**
                     * 是否叶子节点
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * 账号组导入类型
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * 账号组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     */
                    std::string m_parentOrgId;
                    bool m_parentOrgIdHasBeenSet;

                    /**
                     * 源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     */
                    std::string m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 账号组是否已经接入，0表示未接入，1表示接入
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_ACCOUNTGROUP_H_
