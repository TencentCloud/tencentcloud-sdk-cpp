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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEINFO_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 项目空间详细信息
                */
                class SpaceInfo : public AbstractModel
                {
                public:
                    SpaceInfo();
                    ~SpaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目空间id
                     * @return WorkspaceId 项目空间id
                     * 
                     */
                    uint64_t GetWorkspaceId() const;

                    /**
                     * 设置项目空间id
                     * @param _workspaceId 项目空间id
                     * 
                     */
                    void SetWorkspaceId(const uint64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取租户id
                     * @return TenantId 租户id
                     * 
                     */
                    uint64_t GetTenantId() const;

                    /**
                     * 设置租户id
                     * @param _tenantId 租户id
                     * 
                     */
                    void SetTenantId(const uint64_t& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取英文名
                     * @return EnglishName 英文名
                     * 
                     */
                    std::string GetEnglishName() const;

                    /**
                     * 设置英文名
                     * @param _englishName 英文名
                     * 
                     */
                    void SetEnglishName(const std::string& _englishName);

                    /**
                     * 判断参数 EnglishName 是否已赋值
                     * @return EnglishName 是否已赋值
                     * 
                     */
                    bool EnglishNameHasBeenSet() const;

                    /**
                     * 获取中文名
                     * @return ChineseName 中文名
                     * 
                     */
                    std::string GetChineseName() const;

                    /**
                     * 设置中文名
                     * @param _chineseName 中文名
                     * 
                     */
                    void SetChineseName(const std::string& _chineseName);

                    /**
                     * 判断参数 ChineseName 是否已赋值
                     * @return ChineseName 是否已赋值
                     * 
                     */
                    bool ChineseNameHasBeenSet() const;

                    /**
                     * 获取项目空间描述
                     * @return Description 项目空间描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置项目空间描述
                     * @param _description 项目空间描述
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
                     * 获取项目空间状态:0 启用 1 停用 -1 已删除
                     * @return Status 项目空间状态:0 启用 1 停用 -1 已删除
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置项目空间状态:0 启用 1 停用 -1 已删除
                     * @param _status 项目空间状态:0 启用 1 停用 -1 已删除
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否是公共空间
                     * @return IsCommWorkspace 是否是公共空间
                     * 
                     */
                    bool GetIsCommWorkspace() const;

                    /**
                     * 设置是否是公共空间
                     * @param _isCommWorkspace 是否是公共空间
                     * 
                     */
                    void SetIsCommWorkspace(const bool& _isCommWorkspace);

                    /**
                     * 判断参数 IsCommWorkspace 是否已赋值
                     * @return IsCommWorkspace 是否已赋值
                     * 
                     */
                    bool IsCommWorkspaceHasBeenSet() const;

                    /**
                     * 获取有效期开始时间
                     * @return ValidityStartTime 有效期开始时间
                     * 
                     */
                    std::string GetValidityStartTime() const;

                    /**
                     * 设置有效期开始时间
                     * @param _validityStartTime 有效期开始时间
                     * 
                     */
                    void SetValidityStartTime(const std::string& _validityStartTime);

                    /**
                     * 判断参数 ValidityStartTime 是否已赋值
                     * @return ValidityStartTime 是否已赋值
                     * 
                     */
                    bool ValidityStartTimeHasBeenSet() const;

                    /**
                     * 获取有效期结束时间
                     * @return ValidityEndTime 有效期结束时间
                     * 
                     */
                    std::string GetValidityEndTime() const;

                    /**
                     * 设置有效期结束时间
                     * @param _validityEndTime 有效期结束时间
                     * 
                     */
                    void SetValidityEndTime(const std::string& _validityEndTime);

                    /**
                     * 判断参数 ValidityEndTime 是否已赋值
                     * @return ValidityEndTime 是否已赋值
                     * 
                     */
                    bool ValidityEndTimeHasBeenSet() const;

                    /**
                     * 获取选中状态
                     * @return Selected 选中状态
                     * 
                     */
                    uint64_t GetSelected() const;

                    /**
                     * 设置选中状态
                     * @param _selected 选中状态
                     * 
                     */
                    void SetSelected(const uint64_t& _selected);

                    /**
                     * 判断参数 Selected 是否已赋值
                     * @return Selected 是否已赋值
                     * 
                     */
                    bool SelectedHasBeenSet() const;

                    /**
                     * 获取系统生成状态
                     * @return IsSystem 系统生成状态
                     * 
                     */
                    uint64_t GetIsSystem() const;

                    /**
                     * 设置系统生成状态
                     * @param _isSystem 系统生成状态
                     * 
                     */
                    void SetIsSystem(const uint64_t& _isSystem);

                    /**
                     * 判断参数 IsSystem 是否已赋值
                     * @return IsSystem 是否已赋值
                     * 
                     */
                    bool IsSystemHasBeenSet() const;

                private:

                    /**
                     * 项目空间id
                     */
                    uint64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 租户id
                     */
                    uint64_t m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 英文名
                     */
                    std::string m_englishName;
                    bool m_englishNameHasBeenSet;

                    /**
                     * 中文名
                     */
                    std::string m_chineseName;
                    bool m_chineseNameHasBeenSet;

                    /**
                     * 项目空间描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 项目空间状态:0 启用 1 停用 -1 已删除
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否是公共空间
                     */
                    bool m_isCommWorkspace;
                    bool m_isCommWorkspaceHasBeenSet;

                    /**
                     * 有效期开始时间
                     */
                    std::string m_validityStartTime;
                    bool m_validityStartTimeHasBeenSet;

                    /**
                     * 有效期结束时间
                     */
                    std::string m_validityEndTime;
                    bool m_validityEndTimeHasBeenSet;

                    /**
                     * 选中状态
                     */
                    uint64_t m_selected;
                    bool m_selectedHasBeenSet;

                    /**
                     * 系统生成状态
                     */
                    uint64_t m_isSystem;
                    bool m_isSystemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_SPACEINFO_H_
