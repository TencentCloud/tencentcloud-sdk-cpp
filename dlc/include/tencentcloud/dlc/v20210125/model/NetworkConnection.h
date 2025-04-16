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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_NETWORKCONNECTION_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_NETWORKCONNECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 网络配置
                */
                class NetworkConnection : public AbstractModel
                {
                public:
                    NetworkConnection();
                    ~NetworkConnection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网络配置id
                     * @return Id 网络配置id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置网络配置id
                     * @param _id 网络配置id
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
                     * 获取网络配置唯一标志符
                     * @return AssociateId 网络配置唯一标志符
                     * 
                     */
                    std::string GetAssociateId() const;

                    /**
                     * 设置网络配置唯一标志符
                     * @param _associateId 网络配置唯一标志符
                     * 
                     */
                    void SetAssociateId(const std::string& _associateId);

                    /**
                     * 判断参数 AssociateId 是否已赋值
                     * @return AssociateId 是否已赋值
                     * 
                     */
                    bool AssociateIdHasBeenSet() const;

                    /**
                     * 获取计算引擎id
                     * @return HouseId 计算引擎id
                     * 
                     */
                    std::string GetHouseId() const;

                    /**
                     * 设置计算引擎id
                     * @param _houseId 计算引擎id
                     * 
                     */
                    void SetHouseId(const std::string& _houseId);

                    /**
                     * 判断参数 HouseId 是否已赋值
                     * @return HouseId 是否已赋值
                     * 
                     */
                    bool HouseIdHasBeenSet() const;

                    /**
                     * 获取数据源id(已废弃)
                     * @return DatasourceConnectionId 数据源id(已废弃)
                     * 
                     */
                    std::string GetDatasourceConnectionId() const;

                    /**
                     * 设置数据源id(已废弃)
                     * @param _datasourceConnectionId 数据源id(已废弃)
                     * 
                     */
                    void SetDatasourceConnectionId(const std::string& _datasourceConnectionId);

                    /**
                     * 判断参数 DatasourceConnectionId 是否已赋值
                     * @return DatasourceConnectionId 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionIdHasBeenSet() const;

                    /**
                     * 获取网络配置状态（0-初始化，1-正常）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State 网络配置状态（0-初始化，1-正常）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置网络配置状态（0-初始化，1-正常）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state 网络配置状态（0-初始化，1-正常）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取创建用户Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Appid 创建用户Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppid() const;

                    /**
                     * 设置创建用户Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appid 创建用户Appid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppid(const int64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取计算引擎名称
                     * @return HouseName 计算引擎名称
                     * 
                     */
                    std::string GetHouseName() const;

                    /**
                     * 设置计算引擎名称
                     * @param _houseName 计算引擎名称
                     * 
                     */
                    void SetHouseName(const std::string& _houseName);

                    /**
                     * 判断参数 HouseName 是否已赋值
                     * @return HouseName 是否已赋值
                     * 
                     */
                    bool HouseNameHasBeenSet() const;

                    /**
                     * 获取网络配置名称
                     * @return DatasourceConnectionName 网络配置名称
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置网络配置名称
                     * @param _datasourceConnectionName 网络配置名称
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                    /**
                     * 获取网络配置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkConnectionType 网络配置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNetworkConnectionType() const;

                    /**
                     * 设置网络配置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkConnectionType 网络配置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkConnectionType(const int64_t& _networkConnectionType);

                    /**
                     * 判断参数 NetworkConnectionType 是否已赋值
                     * @return NetworkConnectionType 是否已赋值
                     * 
                     */
                    bool NetworkConnectionTypeHasBeenSet() const;

                    /**
                     * 获取创建用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 创建用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置创建用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 创建用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取创建用户SubAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 创建用户SubAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置创建用户SubAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 创建用户SubAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取网络配置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkConnectionDesc 网络配置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNetworkConnectionDesc() const;

                    /**
                     * 设置网络配置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkConnectionDesc 网络配置描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkConnectionDesc(const std::string& _networkConnectionDesc);

                    /**
                     * 判断参数 NetworkConnectionDesc 是否已赋值
                     * @return NetworkConnectionDesc 是否已赋值
                     * 
                     */
                    bool NetworkConnectionDescHasBeenSet() const;

                    /**
                     * 获取数据源vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceConnectionVpcId 数据源vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceConnectionVpcId() const;

                    /**
                     * 设置数据源vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceConnectionVpcId 数据源vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceConnectionVpcId(const std::string& _datasourceConnectionVpcId);

                    /**
                     * 判断参数 DatasourceConnectionVpcId 是否已赋值
                     * @return DatasourceConnectionVpcId 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionVpcIdHasBeenSet() const;

                    /**
                     * 获取数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceConnectionSubnetId 数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceConnectionSubnetId() const;

                    /**
                     * 设置数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceConnectionSubnetId 数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceConnectionSubnetId(const std::string& _datasourceConnectionSubnetId);

                    /**
                     * 判断参数 DatasourceConnectionSubnetId 是否已赋值
                     * @return DatasourceConnectionSubnetId 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionSubnetIdHasBeenSet() const;

                    /**
                     * 获取数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceConnectionCidrBlock 数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceConnectionCidrBlock() const;

                    /**
                     * 设置数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceConnectionCidrBlock 数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceConnectionCidrBlock(const std::string& _datasourceConnectionCidrBlock);

                    /**
                     * 判断参数 DatasourceConnectionCidrBlock 是否已赋值
                     * @return DatasourceConnectionCidrBlock 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionCidrBlockHasBeenSet() const;

                    /**
                     * 获取数据源SubnetCidrBlock
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceConnectionSubnetCidrBlock 数据源SubnetCidrBlock
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDatasourceConnectionSubnetCidrBlock() const;

                    /**
                     * 设置数据源SubnetCidrBlock
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceConnectionSubnetCidrBlock 数据源SubnetCidrBlock
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceConnectionSubnetCidrBlock(const std::string& _datasourceConnectionSubnetCidrBlock);

                    /**
                     * 判断参数 DatasourceConnectionSubnetCidrBlock 是否已赋值
                     * @return DatasourceConnectionSubnetCidrBlock 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionSubnetCidrBlockHasBeenSet() const;

                private:

                    /**
                     * 网络配置id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 网络配置唯一标志符
                     */
                    std::string m_associateId;
                    bool m_associateIdHasBeenSet;

                    /**
                     * 计算引擎id
                     */
                    std::string m_houseId;
                    bool m_houseIdHasBeenSet;

                    /**
                     * 数据源id(已废弃)
                     */
                    std::string m_datasourceConnectionId;
                    bool m_datasourceConnectionIdHasBeenSet;

                    /**
                     * 网络配置状态（0-初始化，1-正常）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 创建用户Appid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 计算引擎名称
                     */
                    std::string m_houseName;
                    bool m_houseNameHasBeenSet;

                    /**
                     * 网络配置名称
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 网络配置类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_networkConnectionType;
                    bool m_networkConnectionTypeHasBeenSet;

                    /**
                     * 创建用户uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 创建用户SubAccountUin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 网络配置描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_networkConnectionDesc;
                    bool m_networkConnectionDescHasBeenSet;

                    /**
                     * 数据源vpcid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceConnectionVpcId;
                    bool m_datasourceConnectionVpcIdHasBeenSet;

                    /**
                     * 数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceConnectionSubnetId;
                    bool m_datasourceConnectionSubnetIdHasBeenSet;

                    /**
                     * 数据源SubnetId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceConnectionCidrBlock;
                    bool m_datasourceConnectionCidrBlockHasBeenSet;

                    /**
                     * 数据源SubnetCidrBlock
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceConnectionSubnetCidrBlock;
                    bool m_datasourceConnectionSubnetCidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_NETWORKCONNECTION_H_
