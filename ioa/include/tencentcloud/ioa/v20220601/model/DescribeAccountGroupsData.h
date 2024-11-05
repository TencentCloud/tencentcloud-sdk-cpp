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
                * 账号分组信息
                */
                class DescribeAccountGroupsData : public AbstractModel
                {
                public:
                    DescribeAccountGroupsData();
                    ~DescribeAccountGroupsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号分组名全路径，点分格式
                     * @return NamePath 账号分组名全路径，点分格式
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置账号分组名全路径，点分格式
                     * @param _namePath 账号分组名全路径，点分格式
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
                     * 获取账号分组ID全路径，数组格式
                     * @return IdPathArr 账号分组ID全路径，数组格式
                     * 
                     */
                    std::vector<int64_t> GetIdPathArr() const;

                    /**
                     * 设置账号分组ID全路径，数组格式
                     * @param _idPathArr 账号分组ID全路径，数组格式
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
                     * 获取扩展信息
                     * @return ExtraInfo 扩展信息
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置扩展信息
                     * @param _extraInfo 扩展信息
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
                     * 获取最后更新时间
                     * @return Utime 最后更新时间
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置最后更新时间
                     * @param _utime 最后更新时间
                     * 
                     */
                    void SetUtime(const std::string& _utime);

                    /**
                     * 判断参数 Utime 是否已赋值
                     * @return Utime 是否已赋值
                     * 
                     */
                    bool UtimeHasBeenSet() const;

                    /**
                     * 获取父分组ID
                     * @return ParentId 父分组ID
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父分组ID
                     * @param _parentId 父分组ID
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
                     * 获取分组名称
                     * @return Name 分组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分组名称
                     * @param _name 分组名称
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
                     * 获取分组ID
                     * @return Id 分组ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置分组ID
                     * @param _id 分组ID
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
                     * 获取分组描述
                     * @return Description 分组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置分组描述
                     * @param _description 分组描述
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
                     * @return Source 同步数据源
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置同步数据源
                     * @param _source 同步数据源
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
                     * 获取账号分组ID全路径，点分格式
                     * @return IdPath 账号分组ID全路径，点分格式
                     * 
                     */
                    std::string GetIdPath() const;

                    /**
                     * 设置账号分组ID全路径，点分格式
                     * @param _idPath 账号分组ID全路径，点分格式
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
                     * 获取创建时间
                     * @return Itime 创建时间
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置创建时间
                     * @param _itime 创建时间
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
                     * 获取导入类型
                     * @return ImportType 导入类型
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置导入类型
                     * @param _importType 导入类型
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
                     * 获取miniIAM id
                     * @return MiniIamId miniIAM id
                     * 
                     */
                    std::string GetMiniIamId() const;

                    /**
                     * 设置miniIAM id
                     * @param _miniIamId miniIAM id
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
                     * 获取该分组下含子组的所有用户总数
                     * @return UserTotal 该分组下含子组的所有用户总数
                     * 
                     */
                    int64_t GetUserTotal() const;

                    /**
                     * 设置该分组下含子组的所有用户总数
                     * @param _userTotal 该分组下含子组的所有用户总数
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
                     * 获取是否该账户的直接权限
                     * @return ReadOnly 是否该账户的直接权限
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否该账户的直接权限
                     * @param _readOnly 是否该账户的直接权限
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
                     * 获取最新一次同步任务的结果
                     * @return LatestSyncResult 最新一次同步任务的结果
                     * 
                     */
                    std::string GetLatestSyncResult() const;

                    /**
                     * 设置最新一次同步任务的结果
                     * @param _latestSyncResult 最新一次同步任务的结果
                     * 
                     */
                    void SetLatestSyncResult(const std::string& _latestSyncResult);

                    /**
                     * 判断参数 LatestSyncResult 是否已赋值
                     * @return LatestSyncResult 是否已赋值
                     * 
                     */
                    bool LatestSyncResultHasBeenSet() const;

                    /**
                     * 获取最新一次同步任务的结束时间
                     * @return LatestSyncTime 最新一次同步任务的结束时间
                     * 
                     */
                    std::string GetLatestSyncTime() const;

                    /**
                     * 设置最新一次同步任务的结束时间
                     * @param _latestSyncTime 最新一次同步任务的结束时间
                     * 
                     */
                    void SetLatestSyncTime(const std::string& _latestSyncTime);

                    /**
                     * 判断参数 LatestSyncTime 是否已赋值
                     * @return LatestSyncTime 是否已赋值
                     * 
                     */
                    bool LatestSyncTimeHasBeenSet() const;

                private:

                    /**
                     * 账号分组名全路径，点分格式
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * 账号分组ID全路径，数组格式
                     */
                    std::vector<int64_t> m_idPathArr;
                    bool m_idPathArrHasBeenSet;

                    /**
                     * 扩展信息
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                    /**
                     * 父分组ID
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     */
                    std::string m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 分组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分组ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 分组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 同步数据源
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 账号分组ID全路径，点分格式
                     */
                    std::string m_idPath;
                    bool m_idPathHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * 父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID
                     */
                    std::string m_parentOrgId;
                    bool m_parentOrgIdHasBeenSet;

                    /**
                     * 导入类型
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * miniIAM id
                     */
                    std::string m_miniIamId;
                    bool m_miniIamIdHasBeenSet;

                    /**
                     * 该分组下含子组的所有用户总数
                     */
                    int64_t m_userTotal;
                    bool m_userTotalHasBeenSet;

                    /**
                     * 是否叶子节点
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * 是否该账户的直接权限
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 最新一次同步任务的结果
                     */
                    std::string m_latestSyncResult;
                    bool m_latestSyncResultHasBeenSet;

                    /**
                     * 最新一次同步任务的结束时间
                     */
                    std::string m_latestSyncTime;
                    bool m_latestSyncTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSDATA_H_
