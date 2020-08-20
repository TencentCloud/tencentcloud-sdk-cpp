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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBINSTANCE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ServerlessDBInstanceNetInfo.h>
#include <tencentcloud/postgres/v20170312/model/ServerlessDBAccount.h>
#include <tencentcloud/postgres/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * serverless实例描述
                */
                class ServerlessDBInstance : public AbstractModel
                {
                public:
                    ServerlessDBInstance();
                    ~ServerlessDBInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例id，唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBInstanceId 实例id，唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例id，唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DBInstanceId 实例id，唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBInstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DBInstanceName 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     */
                    bool DBInstanceNameHasBeenSet() const;

                    /**
                     * 获取实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBInstanceStatus 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDBInstanceStatus() const;

                    /**
                     * 设置实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DBInstanceStatus 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDBInstanceStatus(const std::string& _dBInstanceStatus);

                    /**
                     * 判断参数 DBInstanceStatus 是否已赋值
                     * @return DBInstanceStatus 是否已赋值
                     */
                    bool DBInstanceStatusHasBeenSet() const;

                    /**
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Zone 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VpcId 私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBCharset 字符集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDBCharset() const;

                    /**
                     * 设置字符集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DBCharset 字符集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDBCharset(const std::string& _dBCharset);

                    /**
                     * 判断参数 DBCharset 是否已赋值
                     * @return DBCharset 是否已赋值
                     */
                    bool DBCharsetHasBeenSet() const;

                    /**
                     * 获取数据库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBVersion 数据库版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置数据库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DBVersion 数据库版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取实例网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBInstanceNetInfo 实例网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServerlessDBInstanceNetInfo> GetDBInstanceNetInfo() const;

                    /**
                     * 设置实例网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DBInstanceNetInfo 实例网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDBInstanceNetInfo(const std::vector<ServerlessDBInstanceNetInfo>& _dBInstanceNetInfo);

                    /**
                     * 判断参数 DBInstanceNetInfo 是否已赋值
                     * @return DBInstanceNetInfo 是否已赋值
                     */
                    bool DBInstanceNetInfoHasBeenSet() const;

                    /**
                     * 获取实例账户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBAccountSet 实例账户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServerlessDBAccount> GetDBAccountSet() const;

                    /**
                     * 设置实例账户信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DBAccountSet 实例账户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDBAccountSet(const std::vector<ServerlessDBAccount>& _dBAccountSet);

                    /**
                     * 判断参数 DBAccountSet 是否已赋值
                     * @return DBAccountSet 是否已赋值
                     */
                    bool DBAccountSetHasBeenSet() const;

                    /**
                     * 获取实例下的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBDatabaseList 实例下的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetDBDatabaseList() const;

                    /**
                     * 设置实例下的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DBDatabaseList 实例下的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDBDatabaseList(const std::vector<std::string>& _dBDatabaseList);

                    /**
                     * 判断参数 DBDatabaseList 是否已赋值
                     * @return DBDatabaseList 是否已赋值
                     */
                    bool DBDatabaseListHasBeenSet() const;

                    /**
                     * 获取实例绑定的标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 实例绑定的标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置实例绑定的标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagList 实例绑定的标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 实例id，唯一标识符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 实例名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                    /**
                     * 实例状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBInstanceStatus;
                    bool m_dBInstanceStatusHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 私有网络Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 字符集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBCharset;
                    bool m_dBCharsetHasBeenSet;

                    /**
                     * 数据库版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 实例网络信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServerlessDBInstanceNetInfo> m_dBInstanceNetInfo;
                    bool m_dBInstanceNetInfoHasBeenSet;

                    /**
                     * 实例账户信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServerlessDBAccount> m_dBAccountSet;
                    bool m_dBAccountSetHasBeenSet;

                    /**
                     * 实例下的db信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_dBDatabaseList;
                    bool m_dBDatabaseListHasBeenSet;

                    /**
                     * 实例绑定的标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SERVERLESSDBINSTANCE_H_
