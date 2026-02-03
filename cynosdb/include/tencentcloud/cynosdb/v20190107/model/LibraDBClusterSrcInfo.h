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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERSRCINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERSRCINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * libra分析集群源数据库信息
                */
                class LibraDBClusterSrcInfo : public AbstractModel
                {
                public:
                    LibraDBClusterSrcInfo();
                    ~LibraDBClusterSrcInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源端类型
                     * @return SrcInstanceType 源端类型
                     * 
                     */
                    std::string GetSrcInstanceType() const;

                    /**
                     * 设置源端类型
                     * @param _srcInstanceType 源端类型
                     * 
                     */
                    void SetSrcInstanceType(const std::string& _srcInstanceType);

                    /**
                     * 判断参数 SrcInstanceType 是否已赋值
                     * @return SrcInstanceType 是否已赋值
                     * 
                     */
                    bool SrcInstanceTypeHasBeenSet() const;

                    /**
                     * 获取网络类型
                     * @return AccessType 网络类型
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置网络类型
                     * @param _accessType 网络类型
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取源端实例ID
                     * @return SrcInstanceId 源端实例ID
                     * 
                     */
                    std::string GetSrcInstanceId() const;

                    /**
                     * 设置源端实例ID
                     * @param _srcInstanceId 源端实例ID
                     * 
                     */
                    void SetSrcInstanceId(const std::string& _srcInstanceId);

                    /**
                     * 判断参数 SrcInstanceId 是否已赋值
                     * @return SrcInstanceId 是否已赋值
                     * 
                     */
                    bool SrcInstanceIdHasBeenSet() const;

                    /**
                     * 获取源端集群ID
                     * @return SrcClusterId 源端集群ID
                     * 
                     */
                    std::string GetSrcClusterId() const;

                    /**
                     * 设置源端集群ID
                     * @param _srcClusterId 源端集群ID
                     * 
                     */
                    void SetSrcClusterId(const std::string& _srcClusterId);

                    /**
                     * 判断参数 SrcClusterId 是否已赋值
                     * @return SrcClusterId 是否已赋值
                     * 
                     */
                    bool SrcClusterIdHasBeenSet() const;

                    /**
                     * 获取地址
                     * @return IP 地址
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置地址
                     * @param _iP 地址
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    std::string GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const std::string& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取用户名
                     * @return User 用户名
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名
                     * @param _user 用户名
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
                     * 获取密码
                     * @return Password 密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码
                     * @param _password 密码
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
                     * 获取源端sql_mode
                     * @return SqlMode 源端sql_mode
                     * 
                     */
                    std::string GetSqlMode() const;

                    /**
                     * 设置源端sql_mode
                     * @param _sqlMode 源端sql_mode
                     * 
                     */
                    void SetSqlMode(const std::string& _sqlMode);

                    /**
                     * 判断参数 SqlMode 是否已赋值
                     * @return SqlMode 是否已赋值
                     * 
                     */
                    bool SqlModeHasBeenSet() const;

                    /**
                     * 获取源端应用id
                     * @return SrcAppId 源端应用id
                     * 
                     */
                    int64_t GetSrcAppId() const;

                    /**
                     * 设置源端应用id
                     * @param _srcAppId 源端应用id
                     * 
                     */
                    void SetSrcAppId(const int64_t& _srcAppId);

                    /**
                     * 判断参数 SrcAppId 是否已赋值
                     * @return SrcAppId 是否已赋值
                     * 
                     */
                    bool SrcAppIdHasBeenSet() const;

                    /**
                     * 获取源端账号
                     * @return SrcUin 源端账号
                     * 
                     */
                    std::string GetSrcUin() const;

                    /**
                     * 设置源端账号
                     * @param _srcUin 源端账号
                     * 
                     */
                    void SetSrcUin(const std::string& _srcUin);

                    /**
                     * 判断参数 SrcUin 是否已赋值
                     * @return SrcUin 是否已赋值
                     * 
                     */
                    bool SrcUinHasBeenSet() const;

                    /**
                     * 获取源端子账号
                     * @return SrcSubAccountUin 源端子账号
                     * 
                     */
                    std::string GetSrcSubAccountUin() const;

                    /**
                     * 设置源端子账号
                     * @param _srcSubAccountUin 源端子账号
                     * 
                     */
                    void SetSrcSubAccountUin(const std::string& _srcSubAccountUin);

                    /**
                     * 判断参数 SrcSubAccountUin 是否已赋值
                     * @return SrcSubAccountUin 是否已赋值
                     * 
                     */
                    bool SrcSubAccountUinHasBeenSet() const;

                    /**
                     * 获取账号
                     * @return AccountMode 账号
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置账号
                     * @param _accountMode 账号
                     * 
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     * 
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取源端实例地域
                     * @return Region 源端实例地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置源端实例地域
                     * @param _region 源端实例地域
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
                     * 获取对源端实例的操作
                     * @return Operation 对源端实例的操作
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置对源端实例的操作
                     * @param _operation 对源端实例的操作
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * 源端类型
                     */
                    std::string m_srcInstanceType;
                    bool m_srcInstanceTypeHasBeenSet;

                    /**
                     * 网络类型
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 源端实例ID
                     */
                    std::string m_srcInstanceId;
                    bool m_srcInstanceIdHasBeenSet;

                    /**
                     * 源端集群ID
                     */
                    std::string m_srcClusterId;
                    bool m_srcClusterIdHasBeenSet;

                    /**
                     * 地址
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 端口
                     */
                    std::string m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 源端sql_mode
                     */
                    std::string m_sqlMode;
                    bool m_sqlModeHasBeenSet;

                    /**
                     * 源端应用id
                     */
                    int64_t m_srcAppId;
                    bool m_srcAppIdHasBeenSet;

                    /**
                     * 源端账号
                     */
                    std::string m_srcUin;
                    bool m_srcUinHasBeenSet;

                    /**
                     * 源端子账号
                     */
                    std::string m_srcSubAccountUin;
                    bool m_srcSubAccountUinHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * 源端实例地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 对源端实例的操作
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LIBRADBCLUSTERSRCINFO_H_
