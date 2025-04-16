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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPDETAILINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Users.h>
#include <tencentcloud/dlc/v20210125/model/Policys.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 工作组详细信息
                */
                class WorkGroupDetailInfo : public AbstractModel
                {
                public:
                    WorkGroupDetailInfo();
                    ~WorkGroupDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作组Id
                     * @return WorkGroupId 工作组Id
                     * 
                     */
                    int64_t GetWorkGroupId() const;

                    /**
                     * 设置工作组Id
                     * @param _workGroupId 工作组Id
                     * 
                     */
                    void SetWorkGroupId(const int64_t& _workGroupId);

                    /**
                     * 判断参数 WorkGroupId 是否已赋值
                     * @return WorkGroupId 是否已赋值
                     * 
                     */
                    bool WorkGroupIdHasBeenSet() const;

                    /**
                     * 获取工作组名称
                     * @return WorkGroupName 工作组名称
                     * 
                     */
                    std::string GetWorkGroupName() const;

                    /**
                     * 设置工作组名称
                     * @param _workGroupName 工作组名称
                     * 
                     */
                    void SetWorkGroupName(const std::string& _workGroupName);

                    /**
                     * 判断参数 WorkGroupName 是否已赋值
                     * @return WorkGroupName 是否已赋值
                     * 
                     */
                    bool WorkGroupNameHasBeenSet() const;

                    /**
                     * 获取包含的信息类型。User：用户信息；DataAuth：数据权限；EngineAuth:引擎权限
                     * @return Type 包含的信息类型。User：用户信息；DataAuth：数据权限；EngineAuth:引擎权限
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置包含的信息类型。User：用户信息；DataAuth：数据权限；EngineAuth:引擎权限
                     * @param _type 包含的信息类型。User：用户信息；DataAuth：数据权限；EngineAuth:引擎权限
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
                     * 获取工作组上绑定的用户集合
                     * @return UserInfo 工作组上绑定的用户集合
                     * 
                     */
                    Users GetUserInfo() const;

                    /**
                     * 设置工作组上绑定的用户集合
                     * @param _userInfo 工作组上绑定的用户集合
                     * 
                     */
                    void SetUserInfo(const Users& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取数据权限集合
                     * @return DataPolicyInfo 数据权限集合
                     * 
                     */
                    Policys GetDataPolicyInfo() const;

                    /**
                     * 设置数据权限集合
                     * @param _dataPolicyInfo 数据权限集合
                     * 
                     */
                    void SetDataPolicyInfo(const Policys& _dataPolicyInfo);

                    /**
                     * 判断参数 DataPolicyInfo 是否已赋值
                     * @return DataPolicyInfo 是否已赋值
                     * 
                     */
                    bool DataPolicyInfoHasBeenSet() const;

                    /**
                     * 获取引擎权限集合
                     * @return EnginePolicyInfo 引擎权限集合
                     * 
                     */
                    Policys GetEnginePolicyInfo() const;

                    /**
                     * 设置引擎权限集合
                     * @param _enginePolicyInfo 引擎权限集合
                     * 
                     */
                    void SetEnginePolicyInfo(const Policys& _enginePolicyInfo);

                    /**
                     * 判断参数 EnginePolicyInfo 是否已赋值
                     * @return EnginePolicyInfo 是否已赋值
                     * 
                     */
                    bool EnginePolicyInfoHasBeenSet() const;

                    /**
                     * 获取工作组描述信息
                     * @return WorkGroupDescription 工作组描述信息
                     * 
                     */
                    std::string GetWorkGroupDescription() const;

                    /**
                     * 设置工作组描述信息
                     * @param _workGroupDescription 工作组描述信息
                     * 
                     */
                    void SetWorkGroupDescription(const std::string& _workGroupDescription);

                    /**
                     * 判断参数 WorkGroupDescription 是否已赋值
                     * @return WorkGroupDescription 是否已赋值
                     * 
                     */
                    bool WorkGroupDescriptionHasBeenSet() const;

                    /**
                     * 获取行过滤信息集合
                     * @return RowFilterInfo 行过滤信息集合
                     * 
                     */
                    Policys GetRowFilterInfo() const;

                    /**
                     * 设置行过滤信息集合
                     * @param _rowFilterInfo 行过滤信息集合
                     * 
                     */
                    void SetRowFilterInfo(const Policys& _rowFilterInfo);

                    /**
                     * 判断参数 RowFilterInfo 是否已赋值
                     * @return RowFilterInfo 是否已赋值
                     * 
                     */
                    bool RowFilterInfoHasBeenSet() const;

                    /**
                     * 获取数据目录权限集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CatalogPolicyInfo 数据目录权限集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Policy GetCatalogPolicyInfo() const;

                    /**
                     * 设置数据目录权限集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalogPolicyInfo 数据目录权限集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalogPolicyInfo(const Policy& _catalogPolicyInfo);

                    /**
                     * 判断参数 CatalogPolicyInfo 是否已赋值
                     * @return CatalogPolicyInfo 是否已赋值
                     * 
                     */
                    bool CatalogPolicyInfoHasBeenSet() const;

                private:

                    /**
                     * 工作组Id
                     */
                    int64_t m_workGroupId;
                    bool m_workGroupIdHasBeenSet;

                    /**
                     * 工作组名称
                     */
                    std::string m_workGroupName;
                    bool m_workGroupNameHasBeenSet;

                    /**
                     * 包含的信息类型。User：用户信息；DataAuth：数据权限；EngineAuth:引擎权限
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 工作组上绑定的用户集合
                     */
                    Users m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 数据权限集合
                     */
                    Policys m_dataPolicyInfo;
                    bool m_dataPolicyInfoHasBeenSet;

                    /**
                     * 引擎权限集合
                     */
                    Policys m_enginePolicyInfo;
                    bool m_enginePolicyInfoHasBeenSet;

                    /**
                     * 工作组描述信息
                     */
                    std::string m_workGroupDescription;
                    bool m_workGroupDescriptionHasBeenSet;

                    /**
                     * 行过滤信息集合
                     */
                    Policys m_rowFilterInfo;
                    bool m_rowFilterInfoHasBeenSet;

                    /**
                     * 数据目录权限集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Policy m_catalogPolicyInfo;
                    bool m_catalogPolicyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_WORKGROUPDETAILINFO_H_
