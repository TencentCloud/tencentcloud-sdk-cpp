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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBETABLELISTREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBETABLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeTableList请求参数结构体
                */
                class DescribeTableListRequest : public AbstractModel
                {
                public:
                    DescribeTableListRequest();
                    ~DescribeTableListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID，建表所用的TCHouse-D资源ID。
                     * @return InstanceId 资源ID，建表所用的TCHouse-D资源ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置资源ID，建表所用的TCHouse-D资源ID。
                     * @param _instanceId 资源ID，建表所用的TCHouse-D资源ID。
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
                     * 获取需要获取表列表的库
                     * @return DbName 需要获取表列表的库
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置需要获取表列表的库
                     * @param _dbName 需要获取表列表的库
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取使用该用户进行操作，该用户需要有对应的权限。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     * @return UserName 使用该用户进行操作，该用户需要有对应的权限。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置使用该用户进行操作，该用户需要有对应的权限。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     * @param _userName 使用该用户进行操作，该用户需要有对应的权限。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取用户对应的密码。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     * @return PassWord 用户对应的密码。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     * 
                     */
                    std::string GetPassWord() const;

                    /**
                     * 设置用户对应的密码。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     * @param _passWord 用户对应的密码。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     * 
                     */
                    void SetPassWord(const std::string& _passWord);

                    /**
                     * 判断参数 PassWord 是否已赋值
                     * @return PassWord 是否已赋值
                     * 
                     */
                    bool PassWordHasBeenSet() const;

                    /**
                     * 获取查询库所在的数据源，不填则默认为内部数据源（internal）。
                     * @return CatalogName 查询库所在的数据源，不填则默认为内部数据源（internal）。
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置查询库所在的数据源，不填则默认为内部数据源（internal）。
                     * @param _catalogName 查询库所在的数据源，不填则默认为内部数据源（internal）。
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                private:

                    /**
                     * 资源ID，建表所用的TCHouse-D资源ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 需要获取表列表的库
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 使用该用户进行操作，该用户需要有对应的权限。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 用户对应的密码。如果该TCHouse-D集群使用CAM用户注册内核账户，则不需要填写
                     */
                    std::string m_passWord;
                    bool m_passWordHasBeenSet;

                    /**
                     * 查询库所在的数据源，不填则默认为内部数据源（internal）。
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBETABLELISTREQUEST_H_
