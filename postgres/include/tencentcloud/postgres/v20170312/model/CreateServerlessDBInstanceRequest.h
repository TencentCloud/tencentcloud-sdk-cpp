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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATESERVERLESSDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATESERVERLESSDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
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
                * CreateServerlessDBInstance请求参数结构体
                */
                class CreateServerlessDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateServerlessDBInstanceRequest();
                    ~CreateServerlessDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区ID。公测阶段仅支持ap-shanghai-2、ap-beijing-1,ap-guangzhou-2.
                     * @return Zone 可用区ID。公测阶段仅支持ap-shanghai-2、ap-beijing-1,ap-guangzhou-2.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区ID。公测阶段仅支持ap-shanghai-2、ap-beijing-1,ap-guangzhou-2.
                     * @param _zone 可用区ID。公测阶段仅支持ap-shanghai-2、ap-beijing-1,ap-guangzhou-2.
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
                     * 获取DB实例名称，同一个账号下该值必须唯一。
                     * @return DBInstanceName DB实例名称，同一个账号下该值必须唯一。
                     * 
                     */
                    std::string GetDBInstanceName() const;

                    /**
                     * 设置DB实例名称，同一个账号下该值必须唯一。
                     * @param _dBInstanceName DB实例名称，同一个账号下该值必须唯一。
                     * 
                     */
                    void SetDBInstanceName(const std::string& _dBInstanceName);

                    /**
                     * 判断参数 DBInstanceName 是否已赋值
                     * @return DBInstanceName 是否已赋值
                     * 
                     */
                    bool DBInstanceNameHasBeenSet() const;

                    /**
                     * 获取PostgreSQL内核版本，目前只支持：10.4。
                     * @return DBVersion PostgreSQL内核版本，目前只支持：10.4。
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置PostgreSQL内核版本，目前只支持：10.4。
                     * @param _dBVersion PostgreSQL内核版本，目前只支持：10.4。
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取PostgreSQL数据库字符集，目前支持UTF8。
                     * @return DBCharset PostgreSQL数据库字符集，目前支持UTF8。
                     * 
                     */
                    std::string GetDBCharset() const;

                    /**
                     * 设置PostgreSQL数据库字符集，目前支持UTF8。
                     * @param _dBCharset PostgreSQL数据库字符集，目前支持UTF8。
                     * 
                     */
                    void SetDBCharset(const std::string& _dBCharset);

                    /**
                     * 判断参数 DBCharset 是否已赋值
                     * @return DBCharset 是否已赋值
                     * 
                     */
                    bool DBCharsetHasBeenSet() const;

                    /**
                     * 获取项目ID。
                     * @return ProjectId 项目ID。
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置项目ID。
                     * @param _projectId 项目ID。
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取私有网络ID。
                     * @return VpcId 私有网络ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置私有网络ID。
                     * @param _vpcId 私有网络ID。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取私有网络子网ID。
                     * @return SubnetId 私有网络子网ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络子网ID。
                     * @param _subnetId 私有网络子网ID。
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例需要绑定的标签数组信息
                     * @return TagList 实例需要绑定的标签数组信息
                     * 
                     */
                    std::vector<Tag> GetTagList() const;

                    /**
                     * 设置实例需要绑定的标签数组信息
                     * @param _tagList 实例需要绑定的标签数组信息
                     * 
                     */
                    void SetTagList(const std::vector<Tag>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 可用区ID。公测阶段仅支持ap-shanghai-2、ap-beijing-1,ap-guangzhou-2.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * DB实例名称，同一个账号下该值必须唯一。
                     */
                    std::string m_dBInstanceName;
                    bool m_dBInstanceNameHasBeenSet;

                    /**
                     * PostgreSQL内核版本，目前只支持：10.4。
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * PostgreSQL数据库字符集，目前支持UTF8。
                     */
                    std::string m_dBCharset;
                    bool m_dBCharsetHasBeenSet;

                    /**
                     * 项目ID。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 私有网络ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络子网ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例需要绑定的标签数组信息
                     */
                    std::vector<Tag> m_tagList;
                    bool m_tagListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATESERVERLESSDBINSTANCEREQUEST_H_
