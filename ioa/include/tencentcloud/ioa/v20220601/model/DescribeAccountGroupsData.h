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
                     * 获取<p>账号分组名全路径，点分格式</p>
                     * @return NamePath <p>账号分组名全路径，点分格式</p>
                     * 
                     */
                    std::string GetNamePath() const;

                    /**
                     * 设置<p>账号分组名全路径，点分格式</p>
                     * @param _namePath <p>账号分组名全路径，点分格式</p>
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
                     * 获取<p>账号分组ID全路径，数组格式</p>
                     * @return IdPathArr <p>账号分组ID全路径，数组格式</p>
                     * 
                     */
                    std::vector<int64_t> GetIdPathArr() const;

                    /**
                     * 设置<p>账号分组ID全路径，数组格式</p>
                     * @param _idPathArr <p>账号分组ID全路径，数组格式</p>
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
                     * 获取<p>扩展信息</p>
                     * @return ExtraInfo <p>扩展信息</p>
                     * 
                     */
                    std::string GetExtraInfo() const;

                    /**
                     * 设置<p>扩展信息</p>
                     * @param _extraInfo <p>扩展信息</p>
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
                     * 获取<p>最后更新时间</p>
                     * @return Utime <p>最后更新时间</p>
                     * 
                     */
                    std::string GetUtime() const;

                    /**
                     * 设置<p>最后更新时间</p>
                     * @param _utime <p>最后更新时间</p>
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
                     * 获取<p>父分组ID</p>
                     * @return ParentId <p>父分组ID</p>
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置<p>父分组ID</p>
                     * @param _parentId <p>父分组ID</p>
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
                     * 获取<p>源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
                     * @return OrgId <p>源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
                     * 
                     */
                    std::string GetOrgId() const;

                    /**
                     * 设置<p>源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
                     * @param _orgId <p>源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
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
                     * 获取<p>分组名称</p>
                     * @return Name <p>分组名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>分组名称</p>
                     * @param _name <p>分组名称</p>
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
                     * 获取<p>分组ID</p>
                     * @return Id <p>分组ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>分组ID</p>
                     * @param _id <p>分组ID</p>
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
                     * 获取<p>分组描述</p>
                     * @return Description <p>分组描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>分组描述</p>
                     * @param _description <p>分组描述</p>
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
                     * 获取<p>同步数据源</p>
                     * @return Source <p>同步数据源</p>
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置<p>同步数据源</p>
                     * @param _source <p>同步数据源</p>
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
                     * 获取<p>账号分组ID全路径，点分格式</p>
                     * @return IdPath <p>账号分组ID全路径，点分格式</p>
                     * 
                     */
                    std::string GetIdPath() const;

                    /**
                     * 设置<p>账号分组ID全路径，点分格式</p>
                     * @param _idPath <p>账号分组ID全路径，点分格式</p>
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
                     * 获取<p>创建时间</p>
                     * @return Itime <p>创建时间</p>
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _itime <p>创建时间</p>
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
                     * 获取<p>父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
                     * @return ParentOrgId <p>父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
                     * 
                     */
                    std::string GetParentOrgId() const;

                    /**
                     * 设置<p>父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
                     * @param _parentOrgId <p>父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
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
                     * 获取<p>导入类型</p>
                     * @return ImportType <p>导入类型</p>
                     * 
                     */
                    std::string GetImportType() const;

                    /**
                     * 设置<p>导入类型</p>
                     * @param _importType <p>导入类型</p>
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
                     * 获取<p>miniIAM id</p>
                     * @return MiniIamId <p>miniIAM id</p>
                     * 
                     */
                    std::string GetMiniIamId() const;

                    /**
                     * 设置<p>miniIAM id</p>
                     * @param _miniIamId <p>miniIAM id</p>
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
                     * 获取<p>该分组下含子组的所有用户总数</p>
                     * @return UserTotal <p>该分组下含子组的所有用户总数</p>
                     * 
                     */
                    int64_t GetUserTotal() const;

                    /**
                     * 设置<p>该分组下含子组的所有用户总数</p>
                     * @param _userTotal <p>该分组下含子组的所有用户总数</p>
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
                     * 获取<p>是否叶子节点</p>
                     * @return IsLeaf <p>是否叶子节点</p>
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置<p>是否叶子节点</p>
                     * @param _isLeaf <p>是否叶子节点</p>
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
                     * 获取<p>是否该账户的直接权限</p>
                     * @return ReadOnly <p>是否该账户的直接权限</p>
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置<p>是否该账户的直接权限</p>
                     * @param _readOnly <p>是否该账户的直接权限</p>
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
                     * 获取<p>最新一次同步任务的结果</p>
                     * @return LatestSyncResult <p>最新一次同步任务的结果</p>
                     * 
                     */
                    std::string GetLatestSyncResult() const;

                    /**
                     * 设置<p>最新一次同步任务的结果</p>
                     * @param _latestSyncResult <p>最新一次同步任务的结果</p>
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
                     * 获取<p>最新一次同步任务的结束时间</p>
                     * @return LatestSyncTime <p>最新一次同步任务的结束时间</p>
                     * 
                     */
                    std::string GetLatestSyncTime() const;

                    /**
                     * 设置<p>最新一次同步任务的结束时间</p>
                     * @param _latestSyncTime <p>最新一次同步任务的结束时间</p>
                     * 
                     */
                    void SetLatestSyncTime(const std::string& _latestSyncTime);

                    /**
                     * 判断参数 LatestSyncTime 是否已赋值
                     * @return LatestSyncTime 是否已赋值
                     * 
                     */
                    bool LatestSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>分组名称数组</p>
                     * @return NamePathArr <p>分组名称数组</p>
                     * 
                     */
                    std::vector<std::string> GetNamePathArr() const;

                    /**
                     * 设置<p>分组名称数组</p>
                     * @param _namePathArr <p>分组名称数组</p>
                     * 
                     */
                    void SetNamePathArr(const std::vector<std::string>& _namePathArr);

                    /**
                     * 判断参数 NamePathArr 是否已赋值
                     * @return NamePathArr 是否已赋值
                     * 
                     */
                    bool NamePathArrHasBeenSet() const;

                private:

                    /**
                     * <p>账号分组名全路径，点分格式</p>
                     */
                    std::string m_namePath;
                    bool m_namePathHasBeenSet;

                    /**
                     * <p>账号分组ID全路径，数组格式</p>
                     */
                    std::vector<int64_t> m_idPathArr;
                    bool m_idPathArrHasBeenSet;

                    /**
                     * <p>扩展信息</p>
                     */
                    std::string m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                    /**
                     * <p>最后更新时间</p>
                     */
                    std::string m_utime;
                    bool m_utimeHasBeenSet;

                    /**
                     * <p>父分组ID</p>
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * <p>源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
                     */
                    std::string m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * <p>分组名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>分组ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>分组描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>同步数据源</p>
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>账号分组ID全路径，点分格式</p>
                     */
                    std::string m_idPath;
                    bool m_idPathHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * <p>父源账号组织ID。使用第三方导入用户源时，记录该分组在源组织架构下的分组ID</p>
                     */
                    std::string m_parentOrgId;
                    bool m_parentOrgIdHasBeenSet;

                    /**
                     * <p>导入类型</p>
                     */
                    std::string m_importType;
                    bool m_importTypeHasBeenSet;

                    /**
                     * <p>miniIAM id</p>
                     */
                    std::string m_miniIamId;
                    bool m_miniIamIdHasBeenSet;

                    /**
                     * <p>该分组下含子组的所有用户总数</p>
                     */
                    int64_t m_userTotal;
                    bool m_userTotalHasBeenSet;

                    /**
                     * <p>是否叶子节点</p>
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * <p>是否该账户的直接权限</p>
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * <p>最新一次同步任务的结果</p>
                     */
                    std::string m_latestSyncResult;
                    bool m_latestSyncResultHasBeenSet;

                    /**
                     * <p>最新一次同步任务的结束时间</p>
                     */
                    std::string m_latestSyncTime;
                    bool m_latestSyncTimeHasBeenSet;

                    /**
                     * <p>分组名称数组</p>
                     */
                    std::vector<std::string> m_namePathArr;
                    bool m_namePathArrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DESCRIBEACCOUNTGROUPSDATA_H_
