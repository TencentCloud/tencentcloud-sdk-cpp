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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEHOURREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/ParamInfo.h>
#include <tencentcloud/cdb/v20170320/model/RoGroup.h>
#include <tencentcloud/cdb/v20170320/model/TagInfo.h>
#include <tencentcloud/cdb/v20170320/model/ClusterTopology.h>


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
                     * 获取<p>实例数量，默认值为 1，最小值 1，最大值为 100。</p>
                     * @return GoodsNum <p>实例数量，默认值为 1，最小值 1，最大值为 100。</p>
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置<p>实例数量，默认值为 1，最小值 1，最大值为 100。</p>
                     * @param _goodsNum <p>实例数量，默认值为 1，最小值 1，最大值为 100。</p>
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取<p>实例内存大小，单位：MB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的内存规格。</p>
                     * @return Memory <p>实例内存大小，单位：MB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的内存规格。</p>
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置<p>实例内存大小，单位：MB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的内存规格。</p>
                     * @param _memory <p>实例内存大小，单位：MB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的内存规格。</p>
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取<p>实例硬盘大小，单位：GB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的硬盘范围。</p>
                     * @return Volume <p>实例硬盘大小，单位：GB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的硬盘范围。</p>
                     * 
                     */
                    int64_t GetVolume() const;

                    /**
                     * 设置<p>实例硬盘大小，单位：GB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的硬盘范围。</p>
                     * @param _volume <p>实例硬盘大小，单位：GB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的硬盘范围。</p>
                     * 
                     */
                    void SetVolume(const int64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取<p>MySQL 版本，值包括：5.5、5.6、5.7和8.0，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的实例版本。<br>说明：创建非云盘版实例时，请根据需要指定实例版本（推荐5.7或8.0），若此参数不填，则默认值为8.0；若创建的是云盘版实例，则此参数仅能指定为5.7或8.0。</p>
                     * @return EngineVersion <p>MySQL 版本，值包括：5.5、5.6、5.7和8.0，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的实例版本。<br>说明：创建非云盘版实例时，请根据需要指定实例版本（推荐5.7或8.0），若此参数不填，则默认值为8.0；若创建的是云盘版实例，则此参数仅能指定为5.7或8.0。</p>
                     * 
                     */
                    std::string GetEngineVersion() const;

                    /**
                     * 设置<p>MySQL 版本，值包括：5.5、5.6、5.7和8.0，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的实例版本。<br>说明：创建非云盘版实例时，请根据需要指定实例版本（推荐5.7或8.0），若此参数不填，则默认值为8.0；若创建的是云盘版实例，则此参数仅能指定为5.7或8.0。</p>
                     * @param _engineVersion <p>MySQL 版本，值包括：5.5、5.6、5.7和8.0，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的实例版本。<br>说明：创建非云盘版实例时，请根据需要指定实例版本（推荐5.7或8.0），若此参数不填，则默认值为8.0；若创建的是云盘版实例，则此参数仅能指定为5.7或8.0。</p>
                     * 
                     */
                    void SetEngineVersion(const std::string& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取<p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。<br>说明：如果创建的是云盘版实例，此参数为必填且为私有网络类型。若此项不填，则系统会选择默认的 VPC。</p>
                     * @return UniqVpcId <p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。<br>说明：如果创建的是云盘版实例，此参数为必填且为私有网络类型。若此项不填，则系统会选择默认的 VPC。</p>
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置<p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。<br>说明：如果创建的是云盘版实例，此参数为必填且为私有网络类型。若此项不填，则系统会选择默认的 VPC。</p>
                     * @param _uniqVpcId <p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。<br>说明：如果创建的是云盘版实例，此参数为必填且为私有网络类型。若此项不填，则系统会选择默认的 VPC。</p>
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取<p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。<br>说明：若此项不填，则系统会选择默认 VPC 下的默认子网。</p>
                     * @return UniqSubnetId <p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。<br>说明：若此项不填，则系统会选择默认 VPC 下的默认子网。</p>
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置<p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。<br>说明：若此项不填，则系统会选择默认 VPC 下的默认子网。</p>
                     * @param _uniqSubnetId <p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。<br>说明：若此项不填，则系统会选择默认 VPC 下的默认子网。</p>
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>项目 ID，不填为默认项目。</p>
                     * @return ProjectId <p>项目 ID，不填为默认项目。</p>
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置<p>项目 ID，不填为默认项目。</p>
                     * @param _projectId <p>项目 ID，不填为默认项目。</p>
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
                     * 获取<p>可用区信息，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的可用区。<br>说明：若您创建单节点、双节点、三节点实例，此参数为必填项，请指定可用区，若不指定可用区，则系统会自动选择一个可用区（可能不是您希望部署的可用区）；若您创建云盘版实例，此参数不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置。</p>
                     * @return Zone <p>可用区信息，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的可用区。<br>说明：若您创建单节点、双节点、三节点实例，此参数为必填项，请指定可用区，若不指定可用区，则系统会自动选择一个可用区（可能不是您希望部署的可用区）；若您创建云盘版实例，此参数不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区信息，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的可用区。<br>说明：若您创建单节点、双节点、三节点实例，此参数为必填项，请指定可用区，若不指定可用区，则系统会自动选择一个可用区（可能不是您希望部署的可用区）；若您创建云盘版实例，此参数不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置。</p>
                     * @param _zone <p>可用区信息，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的可用区。<br>说明：若您创建单节点、双节点、三节点实例，此参数为必填项，请指定可用区，若不指定可用区，则系统会自动选择一个可用区（可能不是您希望部署的可用区）；若您创建云盘版实例，此参数不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置。</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例 ID，请使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口查询云数据库实例 ID。</p>
                     * @return MasterInstanceId <p>实例 ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例 ID，请使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口查询云数据库实例 ID。</p>
                     * 
                     */
                    std::string GetMasterInstanceId() const;

                    /**
                     * 设置<p>实例 ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例 ID，请使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口查询云数据库实例 ID。</p>
                     * @param _masterInstanceId <p>实例 ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例 ID，请使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口查询云数据库实例 ID。</p>
                     * 
                     */
                    void SetMasterInstanceId(const std::string& _masterInstanceId);

                    /**
                     * 判断参数 MasterInstanceId 是否已赋值
                     * @return MasterInstanceId 是否已赋值
                     * 
                     */
                    bool MasterInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例类型，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。<br>说明：请选择实例类型，不填会默认选择 master。</p>
                     * @return InstanceRole <p>实例类型，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。<br>说明：请选择实例类型，不填会默认选择 master。</p>
                     * 
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置<p>实例类型，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。<br>说明：请选择实例类型，不填会默认选择 master。</p>
                     * @param _instanceRole <p>实例类型，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。<br>说明：请选择实例类型，不填会默认选择 master。</p>
                     * 
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     * 
                     */
                    bool InstanceRoleHasBeenSet() const;

                    /**
                     * 获取<p>主实例地域信息，购买灾备、RO实例时，该字段必填。</p>
                     * @return MasterRegion <p>主实例地域信息，购买灾备、RO实例时，该字段必填。</p>
                     * 
                     */
                    std::string GetMasterRegion() const;

                    /**
                     * 设置<p>主实例地域信息，购买灾备、RO实例时，该字段必填。</p>
                     * @param _masterRegion <p>主实例地域信息，购买灾备、RO实例时，该字段必填。</p>
                     * 
                     */
                    void SetMasterRegion(const std::string& _masterRegion);

                    /**
                     * 判断参数 MasterRegion 是否已赋值
                     * @return MasterRegion 是否已赋值
                     * 
                     */
                    bool MasterRegionHasBeenSet() const;

                    /**
                     * 获取<p>自定义端口，端口支持范围：[1024 - 65535]。<br>说明：不填则默认为3306。</p>
                     * @return Port <p>自定义端口，端口支持范围：[1024 - 65535]。<br>说明：不填则默认为3306。</p>
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置<p>自定义端口，端口支持范围：[1024 - 65535]。<br>说明：不填则默认为3306。</p>
                     * @param _port <p>自定义端口，端口支持范围：[1024 - 65535]。<br>说明：不填则默认为3306。</p>
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取<p>设置 root 账号密码，密码规则：8 - 64 个字符，至少包含字母、数字、字符（支持的字符：_+-&amp;=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * @return Password <p>设置 root 账号密码，密码规则：8 - 64 个字符，至少包含字母、数字、字符（支持的字符：_+-&amp;=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>设置 root 账号密码，密码规则：8 - 64 个字符，至少包含字母、数字、字符（支持的字符：_+-&amp;=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * @param _password <p>设置 root 账号密码，密码规则：8 - 64 个字符，至少包含字母、数字、字符（支持的字符：_+-&amp;=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>参数列表，参数格式如 ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1。</p><p>可通过 <a href="https://cloud.tencent.com/document/api/236/32662">查询默认的可设置参数列表</a> 查询支持设置的参数。<br>说明：表名大小写敏感的开启和关闭可通过参数 lower_case_table_names 进行设置，参数值为0表示开启，参数值为1表示关闭，若不设置则此参数默认值为0。若您创建的是 MySQL 8.0 版本的实例，则需要在创建实例时通过设置 lower_case_table_names 参数来开启或关闭表名大小写敏感，创建实例后无法修改参数，即创建后无法修改表名大小写敏感。其他数据库版本的实例支持在创建实例后修改 lower_case_table_names 参数。创建实例时设置表名大小写敏感的 API 调用方法请参见本文中的示例。</p>
                     * @return ParamList <p>参数列表，参数格式如 ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1。</p><p>可通过 <a href="https://cloud.tencent.com/document/api/236/32662">查询默认的可设置参数列表</a> 查询支持设置的参数。<br>说明：表名大小写敏感的开启和关闭可通过参数 lower_case_table_names 进行设置，参数值为0表示开启，参数值为1表示关闭，若不设置则此参数默认值为0。若您创建的是 MySQL 8.0 版本的实例，则需要在创建实例时通过设置 lower_case_table_names 参数来开启或关闭表名大小写敏感，创建实例后无法修改参数，即创建后无法修改表名大小写敏感。其他数据库版本的实例支持在创建实例后修改 lower_case_table_names 参数。创建实例时设置表名大小写敏感的 API 调用方法请参见本文中的示例。</p>
                     * 
                     */
                    std::vector<ParamInfo> GetParamList() const;

                    /**
                     * 设置<p>参数列表，参数格式如 ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1。</p><p>可通过 <a href="https://cloud.tencent.com/document/api/236/32662">查询默认的可设置参数列表</a> 查询支持设置的参数。<br>说明：表名大小写敏感的开启和关闭可通过参数 lower_case_table_names 进行设置，参数值为0表示开启，参数值为1表示关闭，若不设置则此参数默认值为0。若您创建的是 MySQL 8.0 版本的实例，则需要在创建实例时通过设置 lower_case_table_names 参数来开启或关闭表名大小写敏感，创建实例后无法修改参数，即创建后无法修改表名大小写敏感。其他数据库版本的实例支持在创建实例后修改 lower_case_table_names 参数。创建实例时设置表名大小写敏感的 API 调用方法请参见本文中的示例。</p>
                     * @param _paramList <p>参数列表，参数格式如 ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1。</p><p>可通过 <a href="https://cloud.tencent.com/document/api/236/32662">查询默认的可设置参数列表</a> 查询支持设置的参数。<br>说明：表名大小写敏感的开启和关闭可通过参数 lower_case_table_names 进行设置，参数值为0表示开启，参数值为1表示关闭，若不设置则此参数默认值为0。若您创建的是 MySQL 8.0 版本的实例，则需要在创建实例时通过设置 lower_case_table_names 参数来开启或关闭表名大小写敏感，创建实例后无法修改参数，即创建后无法修改表名大小写敏感。其他数据库版本的实例支持在创建实例后修改 lower_case_table_names 参数。创建实例时设置表名大小写敏感的 API 调用方法请参见本文中的示例。</p>
                     * 
                     */
                    void SetParamList(const std::vector<ParamInfo>& _paramList);

                    /**
                     * 判断参数 ParamList 是否已赋值
                     * @return ParamList 是否已赋值
                     * 
                     */
                    bool ParamListHasBeenSet() const;

                    /**
                     * 获取<p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * @return ProtectMode <p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    int64_t GetProtectMode() const;

                    /**
                     * 设置<p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * @param _protectMode <p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    void SetProtectMode(const int64_t& _protectMode);

                    /**
                     * 判断参数 ProtectMode 是否已赋值
                     * @return ProtectMode 是否已赋值
                     * 
                     */
                    bool ProtectModeHasBeenSet() const;

                    /**
                     * 获取<p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * @return DeployMode <p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置<p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * @param _deployMode <p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     * 
                     */
                    void SetDeployMode(const int64_t& _deployMode);

                    /**
                     * 判断参数 DeployMode 是否已赋值
                     * @return DeployMode 是否已赋值
                     * 
                     */
                    bool DeployModeHasBeenSet() const;

                    /**
                     * 获取<p>备库 1 的可用区信息。<br>说明：双节点、三节点实例请指定此参数值，若不指定，则默认为 Zone 的值；云盘版实例此参数可不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置；单节点实例为单可用区，无需指定此参数。</p>
                     * @return SlaveZone <p>备库 1 的可用区信息。<br>说明：双节点、三节点实例请指定此参数值，若不指定，则默认为 Zone 的值；云盘版实例此参数可不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置；单节点实例为单可用区，无需指定此参数。</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>备库 1 的可用区信息。<br>说明：双节点、三节点实例请指定此参数值，若不指定，则默认为 Zone 的值；云盘版实例此参数可不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置；单节点实例为单可用区，无需指定此参数。</p>
                     * @param _slaveZone <p>备库 1 的可用区信息。<br>说明：双节点、三节点实例请指定此参数值，若不指定，则默认为 Zone 的值；云盘版实例此参数可不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置；单节点实例为单可用区，无需指定此参数。</p>
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取<p>备库 2 的可用区信息，默认为空，购买三节点主实例时可指定该参数。</p>
                     * @return BackupZone <p>备库 2 的可用区信息，默认为空，购买三节点主实例时可指定该参数。</p>
                     * 
                     */
                    std::string GetBackupZone() const;

                    /**
                     * 设置<p>备库 2 的可用区信息，默认为空，购买三节点主实例时可指定该参数。</p>
                     * @param _backupZone <p>备库 2 的可用区信息，默认为空，购买三节点主实例时可指定该参数。</p>
                     * 
                     */
                    void SetBackupZone(const std::string& _backupZone);

                    /**
                     * 判断参数 BackupZone 是否已赋值
                     * @return BackupZone 是否已赋值
                     * 
                     */
                    bool BackupZoneHasBeenSet() const;

                    /**
                     * 获取<p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
                     * @return SecurityGroup <p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
                     * 
                     */
                    std::vector<std::string> GetSecurityGroup() const;

                    /**
                     * 设置<p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
                     * @param _securityGroup <p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
                     * 
                     */
                    void SetSecurityGroup(const std::vector<std::string>& _securityGroup);

                    /**
                     * 判断参数 SecurityGroup 是否已赋值
                     * @return SecurityGroup 是否已赋值
                     * 
                     */
                    bool SecurityGroupHasBeenSet() const;

                    /**
                     * 获取<p>只读实例信息。购买只读实例时，该参数必传。</p>
                     * @return RoGroup <p>只读实例信息。购买只读实例时，该参数必传。</p>
                     * 
                     */
                    RoGroup GetRoGroup() const;

                    /**
                     * 设置<p>只读实例信息。购买只读实例时，该参数必传。</p>
                     * @param _roGroup <p>只读实例信息。购买只读实例时，该参数必传。</p>
                     * 
                     */
                    void SetRoGroup(const RoGroup& _roGroup);

                    /**
                     * 判断参数 RoGroup 是否已赋值
                     * @return RoGroup 是否已赋值
                     * 
                     */
                    bool RoGroupHasBeenSet() const;

                    /**
                     * 获取<p>购买按量计费实例该字段无意义。</p>
                     * @return AutoRenewFlag <p>购买按量计费实例该字段无意义。</p>
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置<p>购买按量计费实例该字段无意义。</p>
                     * @param _autoRenewFlag <p>购买按量计费实例该字段无意义。</p>
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>实例名称。一次购买多个实例命名会用后缀数字区分，例instanceName=db，goodsNum=3，实例命名分别为db1，db2，db3。</p>
                     * @return InstanceName <p>实例名称。一次购买多个实例命名会用后缀数字区分，例instanceName=db，goodsNum=3，实例命名分别为db1，db2，db3。</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称。一次购买多个实例命名会用后缀数字区分，例instanceName=db，goodsNum=3，实例命名分别为db1，db2，db3。</p>
                     * @param _instanceName <p>实例名称。一次购买多个实例命名会用后缀数字区分，例instanceName=db，goodsNum=3，实例命名分别为db1，db2，db3。</p>
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
                     * 获取<p>实例标签信息。</p>
                     * @return ResourceTags <p>实例标签信息。</p>
                     * 
                     */
                    std::vector<TagInfo> GetResourceTags() const;

                    /**
                     * 设置<p>实例标签信息。</p>
                     * @param _resourceTags <p>实例标签信息。</p>
                     * 
                     */
                    void SetResourceTags(const std::vector<TagInfo>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                    /**
                     * 获取<p>置放群组 ID。</p>
                     * @return DeployGroupId <p>置放群组 ID。</p>
                     * 
                     */
                    std::string GetDeployGroupId() const;

                    /**
                     * 设置<p>置放群组 ID。</p>
                     * @param _deployGroupId <p>置放群组 ID。</p>
                     * 
                     */
                    void SetDeployGroupId(const std::string& _deployGroupId);

                    /**
                     * 判断参数 DeployGroupId 是否已赋值
                     * @return DeployGroupId 是否已赋值
                     * 
                     */
                    bool DeployGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间在48小时内唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @return ClientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间在48小时内唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置<p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间在48小时内唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * @param _clientToken <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间在48小时内唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取<p>实例隔离类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;BASIC_V2&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型实例。<br>说明：如果创建的是云盘版实例，此参数为必填。</p>
                     * @return DeviceType <p>实例隔离类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;BASIC_V2&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型实例。<br>说明：如果创建的是云盘版实例，此参数为必填。</p>
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置<p>实例隔离类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;BASIC_V2&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型实例。<br>说明：如果创建的是云盘版实例，此参数为必填。</p>
                     * @param _deviceType <p>实例隔离类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;BASIC_V2&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型实例。<br>说明：如果创建的是云盘版实例，此参数为必填。</p>
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取<p>参数模板 id。<br>备注：如您使用自定义参数模板 id，可传入自定义参数模板 id；如您计划使用默认参数模板，该参数模板 id 传入 id 无效，需设置 ParamTemplateType。</p>
                     * @return ParamTemplateId <p>参数模板 id。<br>备注：如您使用自定义参数模板 id，可传入自定义参数模板 id；如您计划使用默认参数模板，该参数模板 id 传入 id 无效，需设置 ParamTemplateType。</p>
                     * 
                     */
                    int64_t GetParamTemplateId() const;

                    /**
                     * 设置<p>参数模板 id。<br>备注：如您使用自定义参数模板 id，可传入自定义参数模板 id；如您计划使用默认参数模板，该参数模板 id 传入 id 无效，需设置 ParamTemplateType。</p>
                     * @param _paramTemplateId <p>参数模板 id。<br>备注：如您使用自定义参数模板 id，可传入自定义参数模板 id；如您计划使用默认参数模板，该参数模板 id 传入 id 无效，需设置 ParamTemplateType。</p>
                     * 
                     */
                    void SetParamTemplateId(const int64_t& _paramTemplateId);

                    /**
                     * 判断参数 ParamTemplateId 是否已赋值
                     * @return ParamTemplateId 是否已赋值
                     * 
                     */
                    bool ParamTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>告警策略id数组。腾讯云可观测平台DescribeAlarmPolicy接口返回的OriginId。</p>
                     * @return AlarmPolicyList <p>告警策略id数组。腾讯云可观测平台DescribeAlarmPolicy接口返回的OriginId。</p>
                     * 
                     */
                    std::vector<int64_t> GetAlarmPolicyList() const;

                    /**
                     * 设置<p>告警策略id数组。腾讯云可观测平台DescribeAlarmPolicy接口返回的OriginId。</p>
                     * @param _alarmPolicyList <p>告警策略id数组。腾讯云可观测平台DescribeAlarmPolicy接口返回的OriginId。</p>
                     * 
                     */
                    void SetAlarmPolicyList(const std::vector<int64_t>& _alarmPolicyList);

                    /**
                     * 判断参数 AlarmPolicyList 是否已赋值
                     * @return AlarmPolicyList 是否已赋值
                     * 
                     */
                    bool AlarmPolicyListHasBeenSet() const;

                    /**
                     * 获取<p>实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要购买三节点实例， 请将该值设置为3 或指定 BackupZone 参数。当购买主实例，且未指定该参数和 BackupZone 参数时，该值默认是 2， 即购买两节点实例。</p>
                     * @return InstanceNodes <p>实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要购买三节点实例， 请将该值设置为3 或指定 BackupZone 参数。当购买主实例，且未指定该参数和 BackupZone 参数时，该值默认是 2， 即购买两节点实例。</p>
                     * 
                     */
                    int64_t GetInstanceNodes() const;

                    /**
                     * 设置<p>实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要购买三节点实例， 请将该值设置为3 或指定 BackupZone 参数。当购买主实例，且未指定该参数和 BackupZone 参数时，该值默认是 2， 即购买两节点实例。</p>
                     * @param _instanceNodes <p>实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要购买三节点实例， 请将该值设置为3 或指定 BackupZone 参数。当购买主实例，且未指定该参数和 BackupZone 参数时，该值默认是 2， 即购买两节点实例。</p>
                     * 
                     */
                    void SetInstanceNodes(const int64_t& _instanceNodes);

                    /**
                     * 判断参数 InstanceNodes 是否已赋值
                     * @return InstanceNodes 是否已赋值
                     * 
                     */
                    bool InstanceNodesHasBeenSet() const;

                    /**
                     * 获取<p>实例 Cpu 核数。</p><p>当内存规格 Memory 存在多种 Cpu 配置时（如 64000MB 内存对应 8核/16核/32核），必须传入 Cpu 参数。</p>
                     * @return Cpu <p>实例 Cpu 核数。</p><p>当内存规格 Memory 存在多种 Cpu 配置时（如 64000MB 内存对应 8核/16核/32核），必须传入 Cpu 参数。</p>
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置<p>实例 Cpu 核数。</p><p>当内存规格 Memory 存在多种 Cpu 配置时（如 64000MB 内存对应 8核/16核/32核），必须传入 Cpu 参数。</p>
                     * @param _cpu <p>实例 Cpu 核数。</p><p>当内存规格 Memory 存在多种 Cpu 配置时（如 64000MB 内存对应 8核/16核/32核），必须传入 Cpu 参数。</p>
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>是否自动发起灾备同步功能。该参数仅对购买灾备实例生效。 可选值为：0 - 不自动发起灾备同步；1 - 自动发起灾备同步。该值默认为0。</p>
                     * @return AutoSyncFlag <p>是否自动发起灾备同步功能。该参数仅对购买灾备实例生效。 可选值为：0 - 不自动发起灾备同步；1 - 自动发起灾备同步。该值默认为0。</p>
                     * 
                     */
                    int64_t GetAutoSyncFlag() const;

                    /**
                     * 设置<p>是否自动发起灾备同步功能。该参数仅对购买灾备实例生效。 可选值为：0 - 不自动发起灾备同步；1 - 自动发起灾备同步。该值默认为0。</p>
                     * @param _autoSyncFlag <p>是否自动发起灾备同步功能。该参数仅对购买灾备实例生效。 可选值为：0 - 不自动发起灾备同步；1 - 自动发起灾备同步。该值默认为0。</p>
                     * 
                     */
                    void SetAutoSyncFlag(const int64_t& _autoSyncFlag);

                    /**
                     * 判断参数 AutoSyncFlag 是否已赋值
                     * @return AutoSyncFlag 是否已赋值
                     * 
                     */
                    bool AutoSyncFlagHasBeenSet() const;

                    /**
                     * 获取<p>金融围拢 ID 。</p>
                     * @return CageId <p>金融围拢 ID 。</p>
                     * 
                     */
                    std::string GetCageId() const;

                    /**
                     * 设置<p>金融围拢 ID 。</p>
                     * @param _cageId <p>金融围拢 ID 。</p>
                     * 
                     */
                    void SetCageId(const std::string& _cageId);

                    /**
                     * 判断参数 CageId 是否已赋值
                     * @return CageId 是否已赋值
                     * 
                     */
                    bool CageIdHasBeenSet() const;

                    /**
                     * 获取<p>默认参数模板类型。支持值包括：&quot;HIGH_STABILITY&quot; - 高稳定模板，&quot;HIGH_PERFORMANCE&quot; - 高性能模板，默认值是：&quot;HIGH_STABILITY&quot;。<br>备注：如您需使用云数据库 MySQL 默认参数模板，请设置 ParamTemplateType。</p>
                     * @return ParamTemplateType <p>默认参数模板类型。支持值包括：&quot;HIGH_STABILITY&quot; - 高稳定模板，&quot;HIGH_PERFORMANCE&quot; - 高性能模板，默认值是：&quot;HIGH_STABILITY&quot;。<br>备注：如您需使用云数据库 MySQL 默认参数模板，请设置 ParamTemplateType。</p>
                     * 
                     */
                    std::string GetParamTemplateType() const;

                    /**
                     * 设置<p>默认参数模板类型。支持值包括：&quot;HIGH_STABILITY&quot; - 高稳定模板，&quot;HIGH_PERFORMANCE&quot; - 高性能模板，默认值是：&quot;HIGH_STABILITY&quot;。<br>备注：如您需使用云数据库 MySQL 默认参数模板，请设置 ParamTemplateType。</p>
                     * @param _paramTemplateType <p>默认参数模板类型。支持值包括：&quot;HIGH_STABILITY&quot; - 高稳定模板，&quot;HIGH_PERFORMANCE&quot; - 高性能模板，默认值是：&quot;HIGH_STABILITY&quot;。<br>备注：如您需使用云数据库 MySQL 默认参数模板，请设置 ParamTemplateType。</p>
                     * 
                     */
                    void SetParamTemplateType(const std::string& _paramTemplateType);

                    /**
                     * 判断参数 ParamTemplateType 是否已赋值
                     * @return ParamTemplateType 是否已赋值
                     * 
                     */
                    bool ParamTemplateTypeHasBeenSet() const;

                    /**
                     * 获取<p>告警策略名数组，例如:[&quot;policy-uyoee9wg&quot;]，AlarmPolicyList不为空时该参数无效。</p>
                     * @return AlarmPolicyIdList <p>告警策略名数组，例如:[&quot;policy-uyoee9wg&quot;]，AlarmPolicyList不为空时该参数无效。</p>
                     * 
                     */
                    std::vector<std::string> GetAlarmPolicyIdList() const;

                    /**
                     * 设置<p>告警策略名数组，例如:[&quot;policy-uyoee9wg&quot;]，AlarmPolicyList不为空时该参数无效。</p>
                     * @param _alarmPolicyIdList <p>告警策略名数组，例如:[&quot;policy-uyoee9wg&quot;]，AlarmPolicyList不为空时该参数无效。</p>
                     * 
                     */
                    void SetAlarmPolicyIdList(const std::vector<std::string>& _alarmPolicyIdList);

                    /**
                     * 判断参数 AlarmPolicyIdList 是否已赋值
                     * @return AlarmPolicyIdList 是否已赋值
                     * 
                     */
                    bool AlarmPolicyIdListHasBeenSet() const;

                    /**
                     * 获取<p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
                     * @return DryRun <p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
                     * 
                     */
                    bool GetDryRun() const;

                    /**
                     * 设置<p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
                     * @param _dryRun <p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
                     * 
                     */
                    void SetDryRun(const bool& _dryRun);

                    /**
                     * 判断参数 DryRun 是否已赋值
                     * @return DryRun 是否已赋值
                     * 
                     */
                    bool DryRunHasBeenSet() const;

                    /**
                     * 获取<p>实例引擎类型，默认为&quot;InnoDB&quot;，支持值包括：&quot;InnoDB&quot;，&quot;RocksDB&quot;。</p>
                     * @return EngineType <p>实例引擎类型，默认为&quot;InnoDB&quot;，支持值包括：&quot;InnoDB&quot;，&quot;RocksDB&quot;。</p>
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置<p>实例引擎类型，默认为&quot;InnoDB&quot;，支持值包括：&quot;InnoDB&quot;，&quot;RocksDB&quot;。</p>
                     * @param _engineType <p>实例引擎类型，默认为&quot;InnoDB&quot;，支持值包括：&quot;InnoDB&quot;，&quot;RocksDB&quot;。</p>
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取<p>指定实例的IP列表。仅支持主实例指定，按实例顺序，不足则按未指定处理。</p>
                     * @return Vips <p>指定实例的IP列表。仅支持主实例指定，按实例顺序，不足则按未指定处理。</p>
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置<p>指定实例的IP列表。仅支持主实例指定，按实例顺序，不足则按未指定处理。</p>
                     * @param _vips <p>指定实例的IP列表。仅支持主实例指定，按实例顺序，不足则按未指定处理。</p>
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取<p>云盘版实例的数据保护空间大小，单位 GB，设置范围1 - 10。</p>
                     * @return DataProtectVolume <p>云盘版实例的数据保护空间大小，单位 GB，设置范围1 - 10。</p>
                     * 
                     */
                    int64_t GetDataProtectVolume() const;

                    /**
                     * 设置<p>云盘版实例的数据保护空间大小，单位 GB，设置范围1 - 10。</p>
                     * @param _dataProtectVolume <p>云盘版实例的数据保护空间大小，单位 GB，设置范围1 - 10。</p>
                     * 
                     */
                    void SetDataProtectVolume(const int64_t& _dataProtectVolume);

                    /**
                     * 判断参数 DataProtectVolume 是否已赋值
                     * @return DataProtectVolume 是否已赋值
                     * 
                     */
                    bool DataProtectVolumeHasBeenSet() const;

                    /**
                     * 获取<p>云盘版节点拓扑配置。<br>说明：若购买的是云盘版实例，此参数为必填，需设置云盘版实例的 RW 和 RO 节点拓扑，RO 节点范围是1 - 5个，请至少设置1个 RO 节点。</p>
                     * @return ClusterTopology <p>云盘版节点拓扑配置。<br>说明：若购买的是云盘版实例，此参数为必填，需设置云盘版实例的 RW 和 RO 节点拓扑，RO 节点范围是1 - 5个，请至少设置1个 RO 节点。</p>
                     * 
                     */
                    ClusterTopology GetClusterTopology() const;

                    /**
                     * 设置<p>云盘版节点拓扑配置。<br>说明：若购买的是云盘版实例，此参数为必填，需设置云盘版实例的 RW 和 RO 节点拓扑，RO 节点范围是1 - 5个，请至少设置1个 RO 节点。</p>
                     * @param _clusterTopology <p>云盘版节点拓扑配置。<br>说明：若购买的是云盘版实例，此参数为必填，需设置云盘版实例的 RW 和 RO 节点拓扑，RO 节点范围是1 - 5个，请至少设置1个 RO 节点。</p>
                     * 
                     */
                    void SetClusterTopology(const ClusterTopology& _clusterTopology);

                    /**
                     * 判断参数 ClusterTopology 是否已赋值
                     * @return ClusterTopology 是否已赋值
                     * 
                     */
                    bool ClusterTopologyHasBeenSet() const;

                    /**
                     * 获取<p>硬盘类型，单节点（云盘）或者云盘版实例可以指定此参数。CLOUD_SSD 表示 SSD 云硬盘，CLOUD_HSSD 表示增强型 SSD 云硬盘，CLOUD_PREMIUM 表示高性能云硬盘。<br>说明：单节点（云盘）、云盘版实例硬盘类型所支持的地域略有不同，具体支持情况请参考 <a href="https://cloud.tencent.com/document/product/236/8458">地域和可用区</a>。</p>
                     * @return DiskType <p>硬盘类型，单节点（云盘）或者云盘版实例可以指定此参数。CLOUD_SSD 表示 SSD 云硬盘，CLOUD_HSSD 表示增强型 SSD 云硬盘，CLOUD_PREMIUM 表示高性能云硬盘。<br>说明：单节点（云盘）、云盘版实例硬盘类型所支持的地域略有不同，具体支持情况请参考 <a href="https://cloud.tencent.com/document/product/236/8458">地域和可用区</a>。</p>
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置<p>硬盘类型，单节点（云盘）或者云盘版实例可以指定此参数。CLOUD_SSD 表示 SSD 云硬盘，CLOUD_HSSD 表示增强型 SSD 云硬盘，CLOUD_PREMIUM 表示高性能云硬盘。<br>说明：单节点（云盘）、云盘版实例硬盘类型所支持的地域略有不同，具体支持情况请参考 <a href="https://cloud.tencent.com/document/product/236/8458">地域和可用区</a>。</p>
                     * @param _diskType <p>硬盘类型，单节点（云盘）或者云盘版实例可以指定此参数。CLOUD_SSD 表示 SSD 云硬盘，CLOUD_HSSD 表示增强型 SSD 云硬盘，CLOUD_PREMIUM 表示高性能云硬盘。<br>说明：单节点（云盘）、云盘版实例硬盘类型所支持的地域略有不同，具体支持情况请参考 <a href="https://cloud.tencent.com/document/product/236/8458">地域和可用区</a>。</p>
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群类型:cage——金融围拢，cdc——CDB ON CDC；dedicate——独享集群</p>
                     * @return ClusterType <p>集群类型:cage——金融围拢，cdc——CDB ON CDC；dedicate——独享集群</p>
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置<p>集群类型:cage——金融围拢，cdc——CDB ON CDC；dedicate——独享集群</p>
                     * @param _clusterType <p>集群类型:cage——金融围拢，cdc——CDB ON CDC；dedicate——独享集群</p>
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取<p>开启或关闭实例销毁保护。on-开启，off-关闭</p>
                     * @return DestroyProtect <p>开启或关闭实例销毁保护。on-开启，off-关闭</p>
                     * 
                     */
                    std::string GetDestroyProtect() const;

                    /**
                     * 设置<p>开启或关闭实例销毁保护。on-开启，off-关闭</p>
                     * @param _destroyProtect <p>开启或关闭实例销毁保护。on-开启，off-关闭</p>
                     * 
                     */
                    void SetDestroyProtect(const std::string& _destroyProtect);

                    /**
                     * 判断参数 DestroyProtect 是否已赋值
                     * @return DestroyProtect 是否已赋值
                     * 
                     */
                    bool DestroyProtectHasBeenSet() const;

                private:

                    /**
                     * <p>实例数量，默认值为 1，最小值 1，最大值为 100。</p>
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * <p>实例内存大小，单位：MB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的内存规格。</p>
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * <p>实例硬盘大小，单位：GB，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的硬盘范围。</p>
                     */
                    int64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * <p>MySQL 版本，值包括：5.5、5.6、5.7和8.0，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的实例版本。<br>说明：创建非云盘版实例时，请根据需要指定实例版本（推荐5.7或8.0），若此参数不填，则默认值为8.0；若创建的是云盘版实例，则此参数仅能指定为5.7或8.0。</p>
                     */
                    std::string m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * <p>私有网络 ID，请使用 <a href="/document/api/215/15778">查询私有网络列表</a>。<br>说明：如果创建的是云盘版实例，此参数为必填且为私有网络类型。若此项不填，则系统会选择默认的 VPC。</p>
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * <p>私有网络下的子网 ID，如果设置了 UniqVpcId，则 UniqSubnetId 必填，请使用 <a href="/document/api/215/15784">查询子网列表</a>。<br>说明：若此项不填，则系统会选择默认 VPC 下的默认子网。</p>
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * <p>项目 ID，不填为默认项目。</p>
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>可用区信息，请使用 <a href="https://cloud.tencent.com/document/api/236/17229">获取云数据库可售卖规格</a> 接口获取可创建的可用区。<br>说明：若您创建单节点、双节点、三节点实例，此参数为必填项，请指定可用区，若不指定可用区，则系统会自动选择一个可用区（可能不是您希望部署的可用区）；若您创建云盘版实例，此参数不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>实例 ID，购买只读实例或者灾备实例时必填，该字段表示只读实例或者灾备实例的主实例 ID，请使用 <a href="https://cloud.tencent.com/document/api/236/15872">查询实例列表</a> 接口查询云数据库实例 ID。</p>
                     */
                    std::string m_masterInstanceId;
                    bool m_masterInstanceIdHasBeenSet;

                    /**
                     * <p>实例类型，支持值包括：master - 表示主实例，dr - 表示灾备实例，ro - 表示只读实例。<br>说明：请选择实例类型，不填会默认选择 master。</p>
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                    /**
                     * <p>主实例地域信息，购买灾备、RO实例时，该字段必填。</p>
                     */
                    std::string m_masterRegion;
                    bool m_masterRegionHasBeenSet;

                    /**
                     * <p>自定义端口，端口支持范围：[1024 - 65535]。<br>说明：不填则默认为3306。</p>
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * <p>设置 root 账号密码，密码规则：8 - 64 个字符，至少包含字母、数字、字符（支持的字符：_+-&amp;=!@#$%^*()）中的两种，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>参数列表，参数格式如 ParamList.0.Name=auto_increment&amp;ParamList.0.Value=1。</p><p>可通过 <a href="https://cloud.tencent.com/document/api/236/32662">查询默认的可设置参数列表</a> 查询支持设置的参数。<br>说明：表名大小写敏感的开启和关闭可通过参数 lower_case_table_names 进行设置，参数值为0表示开启，参数值为1表示关闭，若不设置则此参数默认值为0。若您创建的是 MySQL 8.0 版本的实例，则需要在创建实例时通过设置 lower_case_table_names 参数来开启或关闭表名大小写敏感，创建实例后无法修改参数，即创建后无法修改表名大小写敏感。其他数据库版本的实例支持在创建实例后修改 lower_case_table_names 参数。创建实例时设置表名大小写敏感的 API 调用方法请参见本文中的示例。</p>
                     */
                    std::vector<ParamInfo> m_paramList;
                    bool m_paramListHasBeenSet;

                    /**
                     * <p>数据复制方式，默认为 0，支持值包括：0 - 表示异步复制，1 - 表示半同步复制，2 - 表示强同步复制，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     */
                    int64_t m_protectMode;
                    bool m_protectModeHasBeenSet;

                    /**
                     * <p>多可用区域，默认为 0，支持值包括：0 - 表示单可用区，1 - 表示多可用区，购买主实例时可指定该参数，购买只读实例或者灾备实例时指定该参数无意义。</p>
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * <p>备库 1 的可用区信息。<br>说明：双节点、三节点实例请指定此参数值，若不指定，则默认为 Zone 的值；云盘版实例此参数可不填，请通过参数 ClusterTopology 进行读写节点和只读节点的可用区配置；单节点实例为单可用区，无需指定此参数。</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>备库 2 的可用区信息，默认为空，购买三节点主实例时可指定该参数。</p>
                     */
                    std::string m_backupZone;
                    bool m_backupZoneHasBeenSet;

                    /**
                     * <p>安全组参数，可使用 <a href="https://cloud.tencent.com/document/api/236/15850">查询项目安全组信息</a> 接口查询某个项目的安全组详情。</p>
                     */
                    std::vector<std::string> m_securityGroup;
                    bool m_securityGroupHasBeenSet;

                    /**
                     * <p>只读实例信息。购买只读实例时，该参数必传。</p>
                     */
                    RoGroup m_roGroup;
                    bool m_roGroupHasBeenSet;

                    /**
                     * <p>购买按量计费实例该字段无意义。</p>
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * <p>实例名称。一次购买多个实例命名会用后缀数字区分，例instanceName=db，goodsNum=3，实例命名分别为db1，db2，db3。</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>实例标签信息。</p>
                     */
                    std::vector<TagInfo> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                    /**
                     * <p>置放群组 ID。</p>
                     */
                    std::string m_deployGroupId;
                    bool m_deployGroupIdHasBeenSet;

                    /**
                     * <p>用于保证请求幂等性的字符串。该字符串由客户生成，需保证不同请求之间在48小时内唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。</p>
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * <p>实例隔离类型。支持值包括：&quot;UNIVERSAL&quot; - 通用型实例，&quot;EXCLUSIVE&quot; - 独享型实例，&quot;BASIC_V2&quot; - ONTKE 单节点实例，&quot;CLOUD_NATIVE_CLUSTER&quot; - 云盘版标准型，&quot;CLOUD_NATIVE_CLUSTER_EXCLUSIVE&quot; - 云盘版加强型。不指定则默认为通用型实例。<br>说明：如果创建的是云盘版实例，此参数为必填。</p>
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * <p>参数模板 id。<br>备注：如您使用自定义参数模板 id，可传入自定义参数模板 id；如您计划使用默认参数模板，该参数模板 id 传入 id 无效，需设置 ParamTemplateType。</p>
                     */
                    int64_t m_paramTemplateId;
                    bool m_paramTemplateIdHasBeenSet;

                    /**
                     * <p>告警策略id数组。腾讯云可观测平台DescribeAlarmPolicy接口返回的OriginId。</p>
                     */
                    std::vector<int64_t> m_alarmPolicyList;
                    bool m_alarmPolicyListHasBeenSet;

                    /**
                     * <p>实例节点数。对于 RO 和 基础版实例， 该值默认为1。 如果需要购买三节点实例， 请将该值设置为3 或指定 BackupZone 参数。当购买主实例，且未指定该参数和 BackupZone 参数时，该值默认是 2， 即购买两节点实例。</p>
                     */
                    int64_t m_instanceNodes;
                    bool m_instanceNodesHasBeenSet;

                    /**
                     * <p>实例 Cpu 核数。</p><p>当内存规格 Memory 存在多种 Cpu 配置时（如 64000MB 内存对应 8核/16核/32核），必须传入 Cpu 参数。</p>
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>是否自动发起灾备同步功能。该参数仅对购买灾备实例生效。 可选值为：0 - 不自动发起灾备同步；1 - 自动发起灾备同步。该值默认为0。</p>
                     */
                    int64_t m_autoSyncFlag;
                    bool m_autoSyncFlagHasBeenSet;

                    /**
                     * <p>金融围拢 ID 。</p>
                     */
                    std::string m_cageId;
                    bool m_cageIdHasBeenSet;

                    /**
                     * <p>默认参数模板类型。支持值包括：&quot;HIGH_STABILITY&quot; - 高稳定模板，&quot;HIGH_PERFORMANCE&quot; - 高性能模板，默认值是：&quot;HIGH_STABILITY&quot;。<br>备注：如您需使用云数据库 MySQL 默认参数模板，请设置 ParamTemplateType。</p>
                     */
                    std::string m_paramTemplateType;
                    bool m_paramTemplateTypeHasBeenSet;

                    /**
                     * <p>告警策略名数组，例如:[&quot;policy-uyoee9wg&quot;]，AlarmPolicyList不为空时该参数无效。</p>
                     */
                    std::vector<std::string> m_alarmPolicyIdList;
                    bool m_alarmPolicyIdListHasBeenSet;

                    /**
                     * <p>是否只预检此次请求。true：发送检查请求，不会创建实例。检查项包括是否填写了必需参数，请求格式，业务限制等。如果检查不通过，则返回对应错误码；如果检查通过，则返回RequestId.默认为false：发送正常请求，通过检查后直接创建实例。</p>
                     */
                    bool m_dryRun;
                    bool m_dryRunHasBeenSet;

                    /**
                     * <p>实例引擎类型，默认为&quot;InnoDB&quot;，支持值包括：&quot;InnoDB&quot;，&quot;RocksDB&quot;。</p>
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * <p>指定实例的IP列表。仅支持主实例指定，按实例顺序，不足则按未指定处理。</p>
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * <p>云盘版实例的数据保护空间大小，单位 GB，设置范围1 - 10。</p>
                     */
                    int64_t m_dataProtectVolume;
                    bool m_dataProtectVolumeHasBeenSet;

                    /**
                     * <p>云盘版节点拓扑配置。<br>说明：若购买的是云盘版实例，此参数为必填，需设置云盘版实例的 RW 和 RO 节点拓扑，RO 节点范围是1 - 5个，请至少设置1个 RO 节点。</p>
                     */
                    ClusterTopology m_clusterTopology;
                    bool m_clusterTopologyHasBeenSet;

                    /**
                     * <p>硬盘类型，单节点（云盘）或者云盘版实例可以指定此参数。CLOUD_SSD 表示 SSD 云硬盘，CLOUD_HSSD 表示增强型 SSD 云硬盘，CLOUD_PREMIUM 表示高性能云硬盘。<br>说明：单节点（云盘）、云盘版实例硬盘类型所支持的地域略有不同，具体支持情况请参考 <a href="https://cloud.tencent.com/document/product/236/8458">地域和可用区</a>。</p>
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * <p>集群类型:cage——金融围拢，cdc——CDB ON CDC；dedicate——独享集群</p>
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * <p>开启或关闭实例销毁保护。on-开启，off-关闭</p>
                     */
                    std::string m_destroyProtect;
                    bool m_destroyProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBINSTANCEHOURREQUEST_H_
