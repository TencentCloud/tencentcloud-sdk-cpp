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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEHOURREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ParamInfo.h>
#include <tencentcloud/cdb/v20170320/model/RoGroup.h>
#include <tencentcloud/cdb/v20170320/model/TagInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateDBInstanceHour请求参数结构体
                */
                class CreateDBInstanceHourRequest : public AbstractModel
                {
                public:
                    CreateDBInstanceHourRequest();
                    ~CreateDBInstanceHourRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例数量，默认值为1, 最小值1，最大值为100
                     * @return GoodsNum 实例数量，默认值为1, 最小值1，最大值为100
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置实例数量，默认值为1, 最小值1，最大值为100
                     * @param GoodsNum 实例数量，默认值为1, 最小值1，最大值为100
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取实例内存大小，单位：MB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的内存规格
                     * @return Memory 实例内存大小，单位：MB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的内存规格
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位：MB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的内存规格
                     * @param Memory 实例内存大小，单位：MB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的内存规格
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例硬盘大小，单位：GB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的硬盘范围
                     * @return Volume 实例硬盘大小，单位：GB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的硬盘范围
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置实例硬盘大小，单位：GB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的硬盘范围
                     * @param Volume 实例硬盘大小，单位：GB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的硬盘范围
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取MySQL版本，值包括：5.5、5.6和5.7，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的实例版本
                     * @return EngineVersion MySQL版本，值包括：5.5、5.6和5.7，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的实例版本
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置MySQL版本，值包括：5.5、5.6和5.7，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的实例版本
                     * @param EngineVersion MySQL版本，值包括：5.5、5.6和5.7，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的实例版本
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取私有网络ID，如果不传则默认选择基础网络，请使用[查询私有网络列表](/document/api/215/15778)
                     * @return UniqVpcId 私有网络ID，如果不传则默认选择基础网络，请使用[查询私有网络列表](/document/api/215/15778)
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置私有网络ID，如果不传则默认选择基础网络，请使用[查询私有网络列表](/document/api/215/15778)
                     * @param UniqVpcId 私有网络ID，如果不传则默认选择基础网络，请使用[查询私有网络列表](/document/api/215/15778)
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络下的子网ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用[查询子网列表](/document/api/215/15784)
                     * @return UniqSubnetId 私有网络下的子网ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用[查询子网列表](/document/api/215/15784)
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置私有网络下的子网ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用[查询子网列表](/document/api/215/15784)
                     * @param UniqSubnetId 私有网络下的子网ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用[查询子网列表](/document/api/215/15784)
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取项目ID，不填为默认项目。请使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口获取项目ID
                     * @return ProjectId 项目ID，不填为默认项目。请使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口获取项目ID
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID，不填为默认项目。请使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口获取项目ID
                     * @param ProjectId 项目ID，不填为默认项目。请使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口获取项目ID
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取可用区信息，该参数缺省时，系统会自动选择一个可用区，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的可用区
                     * @return Zone 可用区信息，该参数缺省时，系统会自动选择一个可用区，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区信息，该参数缺省时，系统会自动选择一个可用区，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的可用区
                     * @param Zone 可用区信息，该参数缺省时，系统会自动选择一个可用区，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例ID，请使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872)接口查询云数据库实例ID
                     * @return MasterInstanceId 实例ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例ID，请使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872)接口查询云数据库实例ID
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置实例ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例ID，请使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872)接口查询云数据库实例ID
                     * @param MasterInstanceId 实例ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例ID，请使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872)接口查询云数据库实例ID
                     */
                    void SetMasterInstanceId(const std::string& _masterInstanceId);

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                    /**
                     * 获取实例类型，默认为 master，支持值包括：master-表示主实例，dr-表示灾备实例，ro-表示只读实例
                     * @return InstanceRole 实例类型，默认为 master，支持值包括：master-表示主实例，dr-表示灾备实例，ro-表示只读实例
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置实例类型，默认为 master，支持值包括：master-表示主实例，dr-表示灾备实例，ro-表示只读实例
                     * @param InstanceRole 实例类型，默认为 master，支持值包括：master-表示主实例，dr-表示灾备实例，ro-表示只读实例
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取主实例的可用区信息，购买灾备实例时必填
                     * @return MasterRegion 主实例的可用区信息，购买灾备实例时必填
                     */
                    std::string GetMasterRegion() const;

                    /**
                     * 设置主实例的可用区信息，购买灾备实例时必填
                     * @param MasterRegion 主实例的可用区信息，购买灾备实例时必填
                     */
                    void SetMasterRegion(const std::string& _masterRegion);

                    /**
                     * 判断参数 MasterRegion 是否已赋值
                     * @return MasterRegion 是否已赋值
                     */
                    bool MasterRegionHasBeenSet() const;

                    /**
                     * 获取自定义端口，端口支持范围：[ 1024-65535 ]
                     * @return Port 自定义端口，端口支持范围：[ 1024-65535 ]
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置自定义端口，端口支持范围：[ 1024-65535 ]
                     * @param Port 自定义端口，端口支持范围：[ 1024-65535 ]
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取设置root帐号密码，密码规则：8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @return Password 设置root帐号密码，密码规则：8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置设置root帐号密码，密码规则：8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @param Password 设置root帐号密码，密码规则：8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取参数列表，参数格式如ParamList.0.Name=auto_increment&ParamList.0.Value=1。可通过[查询实例的可设置参数列表](https://cloud.tencent.com/document/api/236/20411)查询支持设置的参数
                     * @return ParamList 参数列表，参数格式如ParamList.0.Name=auto_increment&ParamList.0.Value=1。可通过[查询实例的可设置参数列表](https://cloud.tencent.com/document/api/236/20411)查询支持设置的参数
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置参数列表，参数格式如ParamList.0.Name=auto_increment&ParamList.0.Value=1。可通过[查询实例的可设置参数列表](https://cloud.tencent.com/document/api/236/20411)查询支持设置的参数
                     * @param ParamList 参数列表，参数格式如ParamList.0.Name=auto_increment&ParamList.0.Value=1。可通过[查询实例的可设置参数列表](https://cloud.tencent.com/document/api/236/20411)查询支持设置的参数
                     */
                    void SetParamList(const std::vector<ParamInfo>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @return ProtectMode 数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @param ProtectMode 数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取多可用区域，默认为0，支持值包括：0-表示单可用区，1-表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @return DeployMode 多可用区域，默认为0，支持值包括：0-表示单可用区，1-表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置多可用区域，默认为0，支持值包括：0-表示单可用区，1-表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @param DeployMode 多可用区域，默认为0，支持值包括：0-表示单可用区，1-表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    void SetDeployMode(const int64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取备库1的可用区ID，默认为zoneId的值，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @return SlaveZone 备库1的可用区ID，默认为zoneId的值，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置备库1的可用区ID，默认为zoneId的值，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @param SlaveZone 备库1的可用区ID，默认为zoneId的值，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取备库2的可用区ID，默认为0，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @return BackupZone 备库2的可用区ID，默认为0，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置备库2的可用区ID，默认为0，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     * @param BackupZone 备库2的可用区ID，默认为0，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    void SetBackupZone(const std::string& _backupZone);

                    /**
                     * 判断参数 BackupZone 是否已赋值
                     * @return BackupZone 是否已赋值
                     */
                    bool BackupZoneHasBeenSet() const;

                    /**
                     * 获取安全组参数，可使用[查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850)接口查询某个项目的安全组详情
                     * @return SecurityGroup 安全组参数，可使用[查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850)接口查询某个项目的安全组详情
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置安全组参数，可使用[查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850)接口查询某个项目的安全组详情
                     * @param SecurityGroup 安全组参数，可使用[查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850)接口查询某个项目的安全组详情
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取只读实例信息
                     * @return RoGroup 只读实例信息
                     */
                    RoGroup GetRoGroup() const;

                    /**
                     * 设置只读实例信息
                     * @param RoGroup 只读实例信息
                     */
                    void SetRoGroup(const RoGroup& _roGroup);

                    /**
                     * 判断参数 RoGroup 是否已赋值
                     * @return RoGroup 是否已赋值
                     */
                    bool RoGroupHasBeenSet() const;

                    /**
                     * 获取自动续费标记，值为0或1。购买按量计费实例该字段无意义
                     * @return AutoRenewFlag 自动续费标记，值为0或1。购买按量计费实例该字段无意义
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记，值为0或1。购买按量计费实例该字段无意义
                     * @param AutoRenewFlag 自动续费标记，值为0或1。购买按量计费实例该字段无意义
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例标签
                     * @return ResourceTags 实例标签
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置实例标签
                     * @param ResourceTags 实例标签
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * 实例数量，默认值为1, 最小值1，最大值为100
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * 实例内存大小，单位：MB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的内存规格
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例硬盘大小，单位：GB，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的硬盘范围
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * MySQL版本，值包括：5.5、5.6和5.7，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的实例版本
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 私有网络ID，如果不传则默认选择基础网络，请使用[查询私有网络列表](/document/api/215/15778)
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 私有网络下的子网ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用[查询子网列表](/document/api/215/15784)
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 项目ID，不填为默认项目。请使用[查询项目列表](https://cloud.tencent.com/document/product/378/4400)接口获取项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 可用区信息，该参数缺省时，系统会自动选择一个可用区，请使用[获取云数据库可售卖规格](https://cloud.tencent.com/document/api/236/17229)接口获取可创建的可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例ID，请使用[查询实例列表](https://cloud.tencent.com/document/api/236/15872)接口查询云数据库实例ID
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * 实例类型，默认为 master，支持值包括：master-表示主实例，dr-表示灾备实例，ro-表示只读实例
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * 主实例的可用区信息，购买灾备实例时必填
                     */
                    std::string m_masterRegion;
                    bool m_masterRegionHasBeenSet;

                    /**
                     * 自定义端口，端口支持范围：[ 1024-65535 ]
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 设置root帐号密码，密码规则：8-64个字符，至少包含字母、数字、字符（支持的字符：_+-&=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 参数列表，参数格式如ParamList.0.Name=auto_increment&ParamList.0.Value=1。可通过[查询实例的可设置参数列表](https://cloud.tencent.com/document/api/236/20411)查询支持设置的参数
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * 数据复制方式，默认为0，支持值包括：0-表示异步复制，1-表示半同步复制，2-表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * 多可用区域，默认为0，支持值包括：0-表示单可用区，1-表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 备库1的可用区ID，默认为zoneId的值，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * 备库2的可用区ID，默认为0，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * 安全组参数，可使用[查询项目安全组信息](https://cloud.tencent.com/document/api/236/15850)接口查询某个项目的安全组详情
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * 只读实例信息
                     */
                    RoGroup m_roGroup;
                    bool m_roGroupHasBeenSet;

                    /**
                     * 自动续费标记，值为0或1。购买按量计费实例该字段无意义
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例标签
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
