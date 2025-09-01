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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_CREATEPERMISSIONRANKSREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_CREATEPERMISSIONRANKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/RowColumnConfig.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * CreatePermissionRanks请求参数结构体
                */
                class CreatePermissionRanksRequest : public AbstractModel
                {
                public:
                    CreatePermissionRanksRequest();
                    ~CreatePermissionRanksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页数
                     * @return TableId 页数
                     * 
                     */
                    int64_t GetTableId() const;

                    /**
                     * 设置页数
                     * @param _tableId 页数
                     * 
                     */
                    void SetTableId(const int64_t& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     * 
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取条数
                     * @return Mode 条数
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置条数
                     * @param _mode 条数
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取角色类型
                     * @return RoleType 角色类型
                     * 
                     */
                    std::string GetRoleType() const;

                    /**
                     * 设置角色类型
                     * @param _roleType 角色类型
                     * 
                     */
                    void SetRoleType(const std::string& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                    /**
                     * 获取所有页码
                     * @return RoleId 所有页码
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置所有页码
                     * @param _roleId 所有页码
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取规则信息
                     * @return RulerInfo 规则信息
                     * 
                     */
                    std::string GetRulerInfo() const;

                    /**
                     * 设置规则信息
                     * @param _rulerInfo 规则信息
                     * 
                     */
                    void SetRulerInfo(const std::string& _rulerInfo);

                    /**
                     * 判断参数 RulerInfo 是否已赋值
                     * @return RulerInfo 是否已赋值
                     * 
                     */
                    bool RulerInfoHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return OpenStatus 状态
                     * 
                     */
                    std::string GetOpenStatus() const;

                    /**
                     * 设置状态
                     * @param _openStatus 状态
                     * 
                     */
                    void SetOpenStatus(const std::string& _openStatus);

                    /**
                     * 判断参数 OpenStatus 是否已赋值
                     * @return OpenStatus 是否已赋值
                     * 
                     */
                    bool OpenStatusHasBeenSet() const;

                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取行列权限配置
                     * @return RowColumnConfigList 行列权限配置
                     * 
                     */
                    std::vector<RowColumnConfig> GetRowColumnConfigList() const;

                    /**
                     * 设置行列权限配置
                     * @param _rowColumnConfigList 行列权限配置
                     * 
                     */
                    void SetRowColumnConfigList(const std::vector<RowColumnConfig>& _rowColumnConfigList);

                    /**
                     * 判断参数 RowColumnConfigList 是否已赋值
                     * @return RowColumnConfigList 是否已赋值
                     * 
                     */
                    bool RowColumnConfigListHasBeenSet() const;

                private:

                    /**
                     * 页数
                     */
                    int64_t m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 条数
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 角色类型
                     */
                    std::string m_roleType;
                    bool m_roleTypeHasBeenSet;

                    /**
                     * 所有页码
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 规则信息
                     */
                    std::string m_rulerInfo;
                    bool m_rulerInfoHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_openStatus;
                    bool m_openStatusHasBeenSet;

                    /**
                     * 项目id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 行列权限配置
                     */
                    std::vector<RowColumnConfig> m_rowColumnConfigList;
                    bool m_rowColumnConfigListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_CREATEPERMISSIONRANKSREQUEST_H_
