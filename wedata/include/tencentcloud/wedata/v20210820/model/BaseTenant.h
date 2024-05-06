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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BASETENANT_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BASETENANT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 租户基础信息
                */
                class BaseTenant : public AbstractModel
                {
                public:
                    BaseTenant();
                    ~BaseTenant() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantId 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取租户标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TenantName 租户标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTenantName() const;

                    /**
                     * 设置租户标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tenantName 租户标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTenantName(const std::string& _tenantName);

                    /**
                     * 判断参数 TenantName 是否已赋值
                     * @return TenantName 是否已赋值
                     * 
                     */
                    bool TenantNameHasBeenSet() const;

                    /**
                     * 获取租户显示名称，一般是中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 租户显示名称，一般是中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置租户显示名称，一般是中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 租户显示名称，一般是中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 备注
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
                     * 获取租户主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OwnerUserId 租户主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOwnerUserId() const;

                    /**
                     * 设置租户主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ownerUserId 租户主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOwnerUserId(const std::string& _ownerUserId);

                    /**
                     * 判断参数 OwnerUserId 是否已赋值
                     * @return OwnerUserId 是否已赋值
                     * 
                     */
                    bool OwnerUserIdHasBeenSet() const;

                    /**
                     * 获取租户的额外配置参数, json格式字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 租户的额外配置参数, json格式字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置租户的额外配置参数, json格式字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 租户的额外配置参数, json格式字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 租户id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 租户标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tenantName;
                    bool m_tenantNameHasBeenSet;

                    /**
                     * 租户显示名称，一般是中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 租户主账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ownerUserId;
                    bool m_ownerUserIdHasBeenSet;

                    /**
                     * 租户的额外配置参数, json格式字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BASETENANT_H_
