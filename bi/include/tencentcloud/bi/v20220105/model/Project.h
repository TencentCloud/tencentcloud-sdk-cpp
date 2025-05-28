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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PROJECT_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ProjectConfigList.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 项目信息描述
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目ID
                     * @return Id 项目ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置项目ID
                     * @param _id 项目ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取项目Logo
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Logo 项目Logo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogo() const;

                    /**
                     * 设置项目Logo
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logo 项目Logo
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogo(const std::string& _logo);

                    /**
                     * 判断参数 Logo 是否已赋值
                     * @return Logo 是否已赋值
                     * 
                     */
                    bool LogoHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 项目名称
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
                     * 获取logo底色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColorCode logo底色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColorCode() const;

                    /**
                     * 设置logo底色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _colorCode logo底色
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColorCode(const std::string& _colorCode);

                    /**
                     * 判断参数 ColorCode 是否已赋值
                     * @return ColorCode 是否已赋值
                     * 
                     */
                    bool ColorCodeHasBeenSet() const;

                    /**
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedUser() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdUser 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedUser(const std::string& _createdUser);

                    /**
                     * 判断参数 CreatedUser 是否已赋值
                     * @return CreatedUser 是否已赋值
                     * 
                     */
                    bool CreatedUserHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取成员个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemberCount 成员个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置成员个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memberCount 成员个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                    /**
                     * 获取页面个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PageCount 页面个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPageCount() const;

                    /**
                     * 设置页面个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pageCount 页面个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPageCount(const int64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取最后修改报表、简报名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyName 最后修改报表、简报名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifyName() const;

                    /**
                     * 设置最后修改报表、简报名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifyName 最后修改报表、简报名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifyName(const std::string& _lastModifyName);

                    /**
                     * 判断参数 LastModifyName 是否已赋值
                     * @return LastModifyName 是否已赋值
                     * 
                     */
                    bool LastModifyNameHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Source ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _source ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Apply ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetApply() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apply ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApply(const bool& _apply);

                    /**
                     * 判断参数 Apply 是否已赋值
                     * @return Apply 是否已赋值
                     * 
                     */
                    bool ApplyHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedUser ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedUser() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedUser ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedUser(const std::string& _updatedUser);

                    /**
                     * 判断参数 UpdatedUser 是否已赋值
                     * @return UpdatedUser 是否已赋值
                     * 
                     */
                    bool UpdatedUserHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdatedAt ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updatedAt ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpId ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCorpId() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _corpId ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCorpId(const std::string& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mark ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMark() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mark ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMark(const std::string& _mark);

                    /**
                     * 判断参数 Mark 是否已赋值
                     * @return Mark 是否已赋值
                     * 
                     */
                    bool MarkHasBeenSet() const;

                    /**
                     * 获取""
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seed ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置""
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seed ""
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeed(const std::string& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取项目内权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthList 项目内权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAuthList() const;

                    /**
                     * 设置项目内权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authList 项目内权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthList(const std::vector<std::string>& _authList);

                    /**
                     * 判断参数 AuthList 是否已赋值
                     * @return AuthList 是否已赋值
                     * 
                     */
                    bool AuthListHasBeenSet() const;

                    /**
                     * 获取默认看板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PanelScope 默认看板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPanelScope() const;

                    /**
                     * 设置默认看板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _panelScope 默认看板
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPanelScope(const std::string& _panelScope);

                    /**
                     * 判断参数 PanelScope 是否已赋值
                     * @return PanelScope 是否已赋值
                     * 
                     */
                    bool PanelScopeHasBeenSet() const;

                    /**
                     * 获取是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsExternalManage 是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsExternalManage() const;

                    /**
                     * 设置是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isExternalManage 是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsExternalManage(const bool& _isExternalManage);

                    /**
                     * 判断参数 IsExternalManage 是否已赋值
                     * @return IsExternalManage 是否已赋值
                     * 
                     */
                    bool IsExternalManageHasBeenSet() const;

                    /**
                     * 获取托管平台名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ManagePlatform 托管平台名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetManagePlatform() const;

                    /**
                     * 设置托管平台名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _managePlatform 托管平台名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetManagePlatform(const std::string& _managePlatform);

                    /**
                     * 判断参数 ManagePlatform 是否已赋值
                     * @return ManagePlatform 是否已赋值
                     * 
                     */
                    bool ManagePlatformHasBeenSet() const;

                    /**
                     * 获取定制化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConfigList 定制化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProjectConfigList> GetConfigList() const;

                    /**
                     * 设置定制化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _configList 定制化参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConfigList(const std::vector<ProjectConfigList>& _configList);

                    /**
                     * 判断参数 ConfigList 是否已赋值
                     * @return ConfigList 是否已赋值
                     * 
                     */
                    bool ConfigListHasBeenSet() const;

                    /**
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedUserName 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedUserName() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdUserName 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedUserName(const std::string& _createdUserName);

                    /**
                     * 判断参数 CreatedUserName 是否已赋值
                     * @return CreatedUserName 是否已赋值
                     * 
                     */
                    bool CreatedUserNameHasBeenSet() const;

                    /**
                     * 获取所属人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Owner 所属人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwner() const;

                    /**
                     * 设置所属人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _owner 所属人id
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
                     * 获取所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerName 所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerName() const;

                    /**
                     * 设置所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerName 所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerName(const std::string& _ownerName);

                    /**
                     * 判断参数 OwnerName 是否已赋值
                     * @return OwnerName 是否已赋值
                     * 
                     */
                    bool OwnerNameHasBeenSet() const;

                    /**
                     * 获取仪表盘页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NormalCount 仪表盘页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNormalCount() const;

                    /**
                     * 设置仪表盘页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _normalCount 仪表盘页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNormalCount(const int64_t& _normalCount);

                    /**
                     * 判断参数 NormalCount 是否已赋值
                     * @return NormalCount 是否已赋值
                     * 
                     */
                    bool NormalCountHasBeenSet() const;

                    /**
                     * 获取自由画布页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreeCount 自由画布页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFreeCount() const;

                    /**
                     * 设置自由画布页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _freeCount 自由画布页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFreeCount(const int64_t& _freeCount);

                    /**
                     * 判断参数 FreeCount 是否已赋值
                     * @return FreeCount 是否已赋值
                     * 
                     */
                    bool FreeCountHasBeenSet() const;

                    /**
                     * 获取即席分析页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdhocCount 即席分析页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAdhocCount() const;

                    /**
                     * 设置即席分析页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _adhocCount 即席分析页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdhocCount(const int64_t& _adhocCount);

                    /**
                     * 判断参数 AdhocCount 是否已赋值
                     * @return AdhocCount 是否已赋值
                     * 
                     */
                    bool AdhocCountHasBeenSet() const;

                    /**
                     * 获取简报页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BriefingCount 简报页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBriefingCount() const;

                    /**
                     * 设置简报页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _briefingCount 简报页面数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBriefingCount(const int64_t& _briefingCount);

                    /**
                     * 判断参数 BriefingCount 是否已赋值
                     * @return BriefingCount 是否已赋值
                     * 
                     */
                    bool BriefingCountHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 项目Logo
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logo;
                    bool m_logoHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * logo底色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_colorCode;
                    bool m_colorCodeHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdUser;
                    bool m_createdUserHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 成员个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                    /**
                     * 页面个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * 最后修改报表、简报名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifyName;
                    bool m_lastModifyNameHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_apply;
                    bool m_applyHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedUser;
                    bool m_updatedUserHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mark;
                    bool m_markHasBeenSet;

                    /**
                     * ""
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 项目内权限列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_authList;
                    bool m_authListHasBeenSet;

                    /**
                     * 默认看板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_panelScope;
                    bool m_panelScopeHasBeenSet;

                    /**
                     * 是否被托管
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isExternalManage;
                    bool m_isExternalManageHasBeenSet;

                    /**
                     * 托管平台名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_managePlatform;
                    bool m_managePlatformHasBeenSet;

                    /**
                     * 定制化参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProjectConfigList> m_configList;
                    bool m_configListHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdUserName;
                    bool m_createdUserNameHasBeenSet;

                    /**
                     * 所属人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 所属人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerName;
                    bool m_ownerNameHasBeenSet;

                    /**
                     * 仪表盘页面数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_normalCount;
                    bool m_normalCountHasBeenSet;

                    /**
                     * 自由画布页面数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_freeCount;
                    bool m_freeCountHasBeenSet;

                    /**
                     * 即席分析页面数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_adhocCount;
                    bool m_adhocCountHasBeenSet;

                    /**
                     * 简报页面数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_briefingCount;
                    bool m_briefingCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PROJECT_H_
