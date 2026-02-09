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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATEMYSQLREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATEMYSQLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * CreateMySQL请求参数结构体
                */
                class CreateMySQLRequest : public AbstractModel
                {
                public:
                    CreateMySQLRequest();
                    ~CreateMySQLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云开发环境ID
                     * @return EnvId 云开发环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置云开发环境ID
                     * @param _envId 云开发环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取Db类型 1. FLEXDB 2.MYSQL
                     * @return DbInstanceType Db类型 1. FLEXDB 2.MYSQL
                     * 
                     */
                    std::string GetDbInstanceType() const;

                    /**
                     * 设置Db类型 1. FLEXDB 2.MYSQL
                     * @param _dbInstanceType Db类型 1. FLEXDB 2.MYSQL
                     * 
                     */
                    void SetDbInstanceType(const std::string& _dbInstanceType);

                    /**
                     * 判断参数 DbInstanceType 是否已赋值
                     * @return DbInstanceType 是否已赋值
                     * 
                     */
                    bool DbInstanceTypeHasBeenSet() const;

                    /**
                     * 获取mysql版本
                     * @return MysqlVersion mysql版本
                     * 
                     */
                    std::string GetMysqlVersion() const;

                    /**
                     * 设置mysql版本
                     * @param _mysqlVersion mysql版本
                     * 
                     */
                    void SetMysqlVersion(const std::string& _mysqlVersion);

                    /**
                     * 判断参数 MysqlVersion 是否已赋值
                     * @return MysqlVersion 是否已赋值
                     * 
                     */
                    bool MysqlVersionHasBeenSet() const;

                    /**
                     * 获取vpc Id
                     * @return VpcId vpc Id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc Id
                     * @param _vpcId vpc Id
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
                     * 获取子网ID
                     * @return SubnetId 子网ID
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网ID
                     * @param _subnetId 子网ID
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
                     * 获取0 区分表名大小写；1 不区分表名大小写(默认)
                     * @return LowerCaseTableNames 0 区分表名大小写；1 不区分表名大小写(默认)
                     * 
                     */
                    std::string GetLowerCaseTableNames() const;

                    /**
                     * 设置0 区分表名大小写；1 不区分表名大小写(默认)
                     * @param _lowerCaseTableNames 0 区分表名大小写；1 不区分表名大小写(默认)
                     * 
                     */
                    void SetLowerCaseTableNames(const std::string& _lowerCaseTableNames);

                    /**
                     * 判断参数 LowerCaseTableNames 是否已赋值
                     * @return LowerCaseTableNames 是否已赋值
                     * 
                     */
                    bool LowerCaseTableNamesHasBeenSet() const;

                private:

                    /**
                     * 云开发环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * Db类型 1. FLEXDB 2.MYSQL
                     */
                    std::string m_dbInstanceType;
                    bool m_dbInstanceTypeHasBeenSet;

                    /**
                     * mysql版本
                     */
                    std::string m_mysqlVersion;
                    bool m_mysqlVersionHasBeenSet;

                    /**
                     * vpc Id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 0 区分表名大小写；1 不区分表名大小写(默认)
                     */
                    std::string m_lowerCaseTableNames;
                    bool m_lowerCaseTableNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATEMYSQLREQUEST_H_
