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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATASOURCECONNECTIONINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATASOURCECONNECTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionConfig.h>
#include <tencentcloud/dlc/v20210125/model/DataEngineInfo.h>
#include <tencentcloud/dlc/v20210125/model/NetworkConnection.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据源信息
                */
                class DatasourceConnectionInfo : public AbstractModel
                {
                public:
                    DatasourceConnectionInfo();
                    ~DatasourceConnectionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据源数字Id
                     * @return Id 数据源数字Id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置数据源数字Id
                     * @param _id 数据源数字Id
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
                     * 获取数据源字符串Id
                     * @return DatasourceConnectionId 数据源字符串Id
                     * 
                     */
                    std::string GetDatasourceConnectionId() const;

                    /**
                     * 设置数据源字符串Id
                     * @param _datasourceConnectionId 数据源字符串Id
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
                     * 获取数据源名称
                     * @return DatasourceConnectionName 数据源名称
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源名称
                     * @param _datasourceConnectionName 数据源名称
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
                     * 获取数据源描述
                     * @return DatasourceConnectionDesc 数据源描述
                     * 
                     */
                    std::string GetDatasourceConnectionDesc() const;

                    /**
                     * 设置数据源描述
                     * @param _datasourceConnectionDesc 数据源描述
                     * 
                     */
                    void SetDatasourceConnectionDesc(const std::string& _datasourceConnectionDesc);

                    /**
                     * 判断参数 DatasourceConnectionDesc 是否已赋值
                     * @return DatasourceConnectionDesc 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionDescHasBeenSet() const;

                    /**
                     * 获取数据源类型，支持DataLakeCatalog、IcebergCatalog、Result、Mysql、HiveCos、HiveHdfs
                     * @return DatasourceConnectionType 数据源类型，支持DataLakeCatalog、IcebergCatalog、Result、Mysql、HiveCos、HiveHdfs
                     * 
                     */
                    std::string GetDatasourceConnectionType() const;

                    /**
                     * 设置数据源类型，支持DataLakeCatalog、IcebergCatalog、Result、Mysql、HiveCos、HiveHdfs
                     * @param _datasourceConnectionType 数据源类型，支持DataLakeCatalog、IcebergCatalog、Result、Mysql、HiveCos、HiveHdfs
                     * 
                     */
                    void SetDatasourceConnectionType(const std::string& _datasourceConnectionType);

                    /**
                     * 判断参数 DatasourceConnectionType 是否已赋值
                     * @return DatasourceConnectionType 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionTypeHasBeenSet() const;

                    /**
                     * 获取数据源属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceConnectionConfig 数据源属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DatasourceConnectionConfig GetDatasourceConnectionConfig() const;

                    /**
                     * 设置数据源属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _datasourceConnectionConfig 数据源属性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatasourceConnectionConfig(const DatasourceConnectionConfig& _datasourceConnectionConfig);

                    /**
                     * 判断参数 DatasourceConnectionConfig 是否已赋值
                     * @return DatasourceConnectionConfig 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionConfigHasBeenSet() const;

                    /**
                     * 获取数据源状态：0（初始化）、1（成功）、-1（已删除）、-2（失败）、-3（删除中）
                     * @return State 数据源状态：0（初始化）、1（成功）、-1（已删除）、-2（失败）、-3（删除中）
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 设置数据源状态：0（初始化）、1（成功）、-1（已删除）、-2（失败）、-3（删除中）
                     * @param _state 数据源状态：0（初始化）、1（成功）、-1（已删除）、-2（失败）、-3（删除中）
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取用户AppId
                     * @return AppId 用户AppId
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置用户AppId
                     * @param _appId 用户AppId
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
                     * 获取数据源创建时间
                     * @return CreateTime 数据源创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置数据源创建时间
                     * @param _createTime 数据源创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取数据源最近一次更新时间
                     * @return UpdateTime 数据源最近一次更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置数据源最近一次更新时间
                     * @param _updateTime 数据源最近一次更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取数据源同步失败原因
                     * @return Message 数据源同步失败原因
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置数据源同步失败原因
                     * @param _message 数据源同步失败原因
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取数据源绑定的计算引擎信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataEngines 数据源绑定的计算引擎信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DataEngineInfo> GetDataEngines() const;

                    /**
                     * 设置数据源绑定的计算引擎信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataEngines 数据源绑定的计算引擎信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataEngines(const std::vector<DataEngineInfo>& _dataEngines);

                    /**
                     * 判断参数 DataEngines 是否已赋值
                     * @return DataEngines 是否已赋值
                     * 
                     */
                    bool DataEnginesHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return UserAlias 创建人
                     * 
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置创建人
                     * @param _userAlias 创建人
                     * 
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     * 
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取网络配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkConnectionSet 网络配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NetworkConnection> GetNetworkConnectionSet() const;

                    /**
                     * 设置网络配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _networkConnectionSet 网络配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetworkConnectionSet(const std::vector<NetworkConnection>& _networkConnectionSet);

                    /**
                     * 判断参数 NetworkConnectionSet 是否已赋值
                     * @return NetworkConnectionSet 是否已赋值
                     * 
                     */
                    bool NetworkConnectionSetHasBeenSet() const;

                    /**
                     * 获取连通性状态：0（未测试，默认）、1（正常）、2（失败）
                     * @return ConnectivityState 连通性状态：0（未测试，默认）、1（正常）、2（失败）
                     * 
                     */
                    uint64_t GetConnectivityState() const;

                    /**
                     * 设置连通性状态：0（未测试，默认）、1（正常）、2（失败）
                     * @param _connectivityState 连通性状态：0（未测试，默认）、1（正常）、2（失败）
                     * 
                     */
                    void SetConnectivityState(const uint64_t& _connectivityState);

                    /**
                     * 判断参数 ConnectivityState 是否已赋值
                     * @return ConnectivityState 是否已赋值
                     * 
                     */
                    bool ConnectivityStateHasBeenSet() const;

                    /**
                     * 获取连通性测试提示信息
                     * @return ConnectivityTips 连通性测试提示信息
                     * 
                     */
                    std::string GetConnectivityTips() const;

                    /**
                     * 设置连通性测试提示信息
                     * @param _connectivityTips 连通性测试提示信息
                     * 
                     */
                    void SetConnectivityTips(const std::string& _connectivityTips);

                    /**
                     * 判断参数 ConnectivityTips 是否已赋值
                     * @return ConnectivityTips 是否已赋值
                     * 
                     */
                    bool ConnectivityTipsHasBeenSet() const;

                private:

                    /**
                     * 数据源数字Id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 数据源字符串Id
                     */
                    std::string m_datasourceConnectionId;
                    bool m_datasourceConnectionIdHasBeenSet;

                    /**
                     * 数据源名称
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                    /**
                     * 数据源描述
                     */
                    std::string m_datasourceConnectionDesc;
                    bool m_datasourceConnectionDescHasBeenSet;

                    /**
                     * 数据源类型，支持DataLakeCatalog、IcebergCatalog、Result、Mysql、HiveCos、HiveHdfs
                     */
                    std::string m_datasourceConnectionType;
                    bool m_datasourceConnectionTypeHasBeenSet;

                    /**
                     * 数据源属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DatasourceConnectionConfig m_datasourceConnectionConfig;
                    bool m_datasourceConnectionConfigHasBeenSet;

                    /**
                     * 数据源状态：0（初始化）、1（成功）、-1（已删除）、-2（失败）、-3（删除中）
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 用户AppId
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 数据源创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 数据源最近一次更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 数据源同步失败原因
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 数据源绑定的计算引擎信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataEngineInfo> m_dataEngines;
                    bool m_dataEnginesHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * 网络配置列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NetworkConnection> m_networkConnectionSet;
                    bool m_networkConnectionSetHasBeenSet;

                    /**
                     * 连通性状态：0（未测试，默认）、1（正常）、2（失败）
                     */
                    uint64_t m_connectivityState;
                    bool m_connectivityStateHasBeenSet;

                    /**
                     * 连通性测试提示信息
                     */
                    std::string m_connectivityTips;
                    bool m_connectivityTipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATASOURCECONNECTIONINFO_H_
