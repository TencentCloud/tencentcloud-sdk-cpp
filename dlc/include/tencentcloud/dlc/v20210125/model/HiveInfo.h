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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_HIVEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_HIVEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatasourceConnectionLocation.h>
#include <tencentcloud/dlc/v20210125/model/MysqlInfo.h>
#include <tencentcloud/dlc/v20210125/model/KerberosInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * hive类型数据源的信息
                */
                class HiveInfo : public AbstractModel
                {
                public:
                    HiveInfo();
                    ~HiveInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取hive metastore的地址
                     * @return MetaStoreUrl hive metastore的地址
                     * 
                     */
                    std::string GetMetaStoreUrl() const;

                    /**
                     * 设置hive metastore的地址
                     * @param _metaStoreUrl hive metastore的地址
                     * 
                     */
                    void SetMetaStoreUrl(const std::string& _metaStoreUrl);

                    /**
                     * 判断参数 MetaStoreUrl 是否已赋值
                     * @return MetaStoreUrl 是否已赋值
                     * 
                     */
                    bool MetaStoreUrlHasBeenSet() const;

                    /**
                     * 获取hive数据源类型，代表数据储存的位置，COS或者HDFS
                     * @return Type hive数据源类型，代表数据储存的位置，COS或者HDFS
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置hive数据源类型，代表数据储存的位置，COS或者HDFS
                     * @param _type hive数据源类型，代表数据储存的位置，COS或者HDFS
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
                     * 获取数据源所在的私有网络信息
                     * @return Location 数据源所在的私有网络信息
                     * 
                     */
                    DatasourceConnectionLocation GetLocation() const;

                    /**
                     * 设置数据源所在的私有网络信息
                     * @param _location 数据源所在的私有网络信息
                     * 
                     */
                    void SetLocation(const DatasourceConnectionLocation& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取如果类型为HDFS，需要传一个用户名
                     * @return User 如果类型为HDFS，需要传一个用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置如果类型为HDFS，需要传一个用户名
                     * @param _user 如果类型为HDFS，需要传一个用户名
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取如果类型为HDFS，需要选择是否高可用
                     * @return HighAvailability 如果类型为HDFS，需要选择是否高可用
                     * 
                     */
                    bool GetHighAvailability() const;

                    /**
                     * 设置如果类型为HDFS，需要选择是否高可用
                     * @param _highAvailability 如果类型为HDFS，需要选择是否高可用
                     * 
                     */
                    void SetHighAvailability(const bool& _highAvailability);

                    /**
                     * 判断参数 HighAvailability 是否已赋值
                     * @return HighAvailability 是否已赋值
                     * 
                     */
                    bool HighAvailabilityHasBeenSet() const;

                    /**
                     * 获取如果类型为COS，需要填写COS桶连接
                     * @return BucketUrl 如果类型为COS，需要填写COS桶连接
                     * 
                     */
                    std::string GetBucketUrl() const;

                    /**
                     * 设置如果类型为COS，需要填写COS桶连接
                     * @param _bucketUrl 如果类型为COS，需要填写COS桶连接
                     * 
                     */
                    void SetBucketUrl(const std::string& _bucketUrl);

                    /**
                     * 判断参数 BucketUrl 是否已赋值
                     * @return BucketUrl 是否已赋值
                     * 
                     */
                    bool BucketUrlHasBeenSet() const;

                    /**
                     * 获取json字符串。如果类型为HDFS，需要填写该字段
                     * @return HdfsProperties json字符串。如果类型为HDFS，需要填写该字段
                     * 
                     */
                    std::string GetHdfsProperties() const;

                    /**
                     * 设置json字符串。如果类型为HDFS，需要填写该字段
                     * @param _hdfsProperties json字符串。如果类型为HDFS，需要填写该字段
                     * 
                     */
                    void SetHdfsProperties(const std::string& _hdfsProperties);

                    /**
                     * 判断参数 HdfsProperties 是否已赋值
                     * @return HdfsProperties 是否已赋值
                     * 
                     */
                    bool HdfsPropertiesHasBeenSet() const;

                    /**
                     * 获取Hive的元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mysql Hive的元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MysqlInfo GetMysql() const;

                    /**
                     * 设置Hive的元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mysql Hive的元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMysql(const MysqlInfo& _mysql);

                    /**
                     * 判断参数 Mysql 是否已赋值
                     * @return Mysql 是否已赋值
                     * 
                     */
                    bool MysqlHasBeenSet() const;

                    /**
                     * 获取emr集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId emr集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置emr集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId emr集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取emr集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName emr集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置emr集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName emr集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取EMR集群中hive组件的版本号
                     * @return HiveVersion EMR集群中hive组件的版本号
                     * 
                     */
                    std::string GetHiveVersion() const;

                    /**
                     * 设置EMR集群中hive组件的版本号
                     * @param _hiveVersion EMR集群中hive组件的版本号
                     * 
                     */
                    void SetHiveVersion(const std::string& _hiveVersion);

                    /**
                     * 判断参数 HiveVersion 是否已赋值
                     * @return HiveVersion 是否已赋值
                     * 
                     */
                    bool HiveVersionHasBeenSet() const;

                    /**
                     * 获取Kerberos详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KerberosInfo Kerberos详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    KerberosInfo GetKerberosInfo() const;

                    /**
                     * 设置Kerberos详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kerberosInfo Kerberos详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKerberosInfo(const KerberosInfo& _kerberosInfo);

                    /**
                     * 判断参数 KerberosInfo 是否已赋值
                     * @return KerberosInfo 是否已赋值
                     * 
                     */
                    bool KerberosInfoHasBeenSet() const;

                    /**
                     * 获取是否开启Kerberos
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KerberosEnable 是否开启Kerberos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetKerberosEnable() const;

                    /**
                     * 设置是否开启Kerberos
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _kerberosEnable 是否开启Kerberos
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKerberosEnable(const bool& _kerberosEnable);

                    /**
                     * 判断参数 KerberosEnable 是否已赋值
                     * @return KerberosEnable 是否已赋值
                     * 
                     */
                    bool KerberosEnableHasBeenSet() const;

                private:

                    /**
                     * hive metastore的地址
                     */
                    std::string m_metaStoreUrl;
                    bool m_metaStoreUrlHasBeenSet;

                    /**
                     * hive数据源类型，代表数据储存的位置，COS或者HDFS
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数据源所在的私有网络信息
                     */
                    DatasourceConnectionLocation m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 如果类型为HDFS，需要传一个用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 如果类型为HDFS，需要选择是否高可用
                     */
                    bool m_highAvailability;
                    bool m_highAvailabilityHasBeenSet;

                    /**
                     * 如果类型为COS，需要填写COS桶连接
                     */
                    std::string m_bucketUrl;
                    bool m_bucketUrlHasBeenSet;

                    /**
                     * json字符串。如果类型为HDFS，需要填写该字段
                     */
                    std::string m_hdfsProperties;
                    bool m_hdfsPropertiesHasBeenSet;

                    /**
                     * Hive的元数据库信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MysqlInfo m_mysql;
                    bool m_mysqlHasBeenSet;

                    /**
                     * emr集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * emr集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * EMR集群中hive组件的版本号
                     */
                    std::string m_hiveVersion;
                    bool m_hiveVersionHasBeenSet;

                    /**
                     * Kerberos详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    KerberosInfo m_kerberosInfo;
                    bool m_kerberosInfoHasBeenSet;

                    /**
                     * 是否开启Kerberos
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_kerberosEnable;
                    bool m_kerberosEnableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_HIVEINFO_H_
