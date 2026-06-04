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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppOperation.h>
#include <tencentcloud/adp/v20260520/model/AppStatusInfo.h>
#include <tencentcloud/adp/v20260520/model/AppSubStatusInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 应用摘要 - 列表查询返回的应用信息
                */
                class AppSummary : public AbstractModel
                {
                public:
                    AppSummary();
                    ~AppSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用ID
                     * @return AppId 应用ID
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置应用ID
                     * @param _appId 应用ID
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     * @return AppMode 应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     * 
                     */
                    int64_t GetAppMode() const;

                    /**
                     * 设置应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     * @param _appMode 应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     * 
                     */
                    void SetAppMode(const int64_t& _appMode);

                    /**
                     * 判断参数 AppMode 是否已赋值
                     * @return AppMode 是否已赋值
                     * 
                     */
                    bool AppModeHasBeenSet() const;

                    /**
                     * 获取应用头像
                     * @return Avatar 应用头像
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置应用头像
                     * @param _avatar 应用头像
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取应用名称
                     * @return Name 应用名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
                     * @param _name 应用名称
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
                     * 获取操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperationInfo 操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppOperation GetOperationInfo() const;

                    /**
                     * 设置操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operationInfo 操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperationInfo(const AppOperation& _operationInfo);

                    /**
                     * 判断参数 OperationInfo 是否已赋值
                     * @return OperationInfo 是否已赋值
                     * 
                     */
                    bool OperationInfoHasBeenSet() const;

                    /**
                     * 获取状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppStatusInfo GetStatus() const;

                    /**
                     * 设置状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const AppStatusInfo& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubStatus 子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AppSubStatusInfo GetSubStatus() const;

                    /**
                     * 设置子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subStatus 子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubStatus(const AppSubStatusInfo& _subStatus);

                    /**
                     * 判断参数 SubStatus 是否已赋值
                     * @return SubStatus 是否已赋值
                     * 
                     */
                    bool SubStatusHasBeenSet() const;

                    /**
                     * 获取资源操作权限
                     * @return PermissionIdList 资源操作权限
                     * 
                     */
                    std::vector<std::string> GetPermissionIdList() const;

                    /**
                     * 设置资源操作权限
                     * @param _permissionIdList 资源操作权限
                     * 
                     */
                    void SetPermissionIdList(const std::vector<std::string>& _permissionIdList);

                    /**
                     * 判断参数 PermissionIdList 是否已赋值
                     * @return PermissionIdList 是否已赋值
                     * 
                     */
                    bool PermissionIdListHasBeenSet() const;

                private:

                    /**
                     * 应用ID
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 应用模式。枚举值: 1:标准模式, 2:Agent模式, 3:单工作流模式, 4:ClawAgent模式
                     */
                    int64_t m_appMode;
                    bool m_appModeHasBeenSet;

                    /**
                     * 应用头像
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 操作信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppOperation m_operationInfo;
                    bool m_operationInfoHasBeenSet;

                    /**
                     * 状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppStatusInfo m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 子状态信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AppSubStatusInfo m_subStatus;
                    bool m_subStatusHasBeenSet;

                    /**
                     * 资源操作权限
                     */
                    std::vector<std::string> m_permissionIdList;
                    bool m_permissionIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSUMMARY_H_
