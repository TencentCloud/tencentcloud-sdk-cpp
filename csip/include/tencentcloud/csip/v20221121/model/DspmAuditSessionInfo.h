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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAUDITSESSIONINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAUDITSESSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 审计会话列表信息
                */
                class DspmAuditSessionInfo : public AbstractModel
                {
                public:
                    DspmAuditSessionInfo();
                    ~DspmAuditSessionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>审计日志数</p>
                     * @return SqlCount <p>审计日志数</p>
                     * 
                     */
                    int64_t GetSqlCount() const;

                    /**
                     * 设置<p>审计日志数</p>
                     * @param _sqlCount <p>审计日志数</p>
                     * 
                     */
                    void SetSqlCount(const int64_t& _sqlCount);

                    /**
                     * 判断参数 SqlCount 是否已赋值
                     * @return SqlCount 是否已赋值
                     * 
                     */
                    bool SqlCountHasBeenSet() const;

                    /**
                     * 获取<p>登出时间</p>
                     * @return LogoutTime <p>登出时间</p>
                     * 
                     */
                    int64_t GetLogoutTime() const;

                    /**
                     * 设置<p>登出时间</p>
                     * @param _logoutTime <p>登出时间</p>
                     * 
                     */
                    void SetLogoutTime(const int64_t& _logoutTime);

                    /**
                     * 判断参数 LogoutTime 是否已赋值
                     * @return LogoutTime 是否已赋值
                     * 
                     */
                    bool LogoutTimeHasBeenSet() const;

                    /**
                     * 获取<p>客户端 IP</p>
                     * @return ClientIp <p>客户端 IP</p>
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置<p>客户端 IP</p>
                     * @param _clientIp <p>客户端 IP</p>
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取<p>客户端端口</p>
                     * @return ClientPort <p>客户端端口</p>
                     * 
                     */
                    int64_t GetClientPort() const;

                    /**
                     * 设置<p>客户端端口</p>
                     * @param _clientPort <p>客户端端口</p>
                     * 
                     */
                    void SetClientPort(const int64_t& _clientPort);

                    /**
                     * 判断参数 ClientPort 是否已赋值
                     * @return ClientPort 是否已赋值
                     * 
                     */
                    bool ClientPortHasBeenSet() const;

                    /**
                     * 获取<p>数据库 IP</p>
                     * @return DbIp <p>数据库 IP</p>
                     * 
                     */
                    std::string GetDbIp() const;

                    /**
                     * 设置<p>数据库 IP</p>
                     * @param _dbIp <p>数据库 IP</p>
                     * 
                     */
                    void SetDbIp(const std::string& _dbIp);

                    /**
                     * 判断参数 DbIp 是否已赋值
                     * @return DbIp 是否已赋值
                     * 
                     */
                    bool DbIpHasBeenSet() const;

                    /**
                     * 获取<p>数据库名称</p>
                     * @return DbName <p>数据库名称</p>
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置<p>数据库名称</p>
                     * @param _dbName <p>数据库名称</p>
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
                     * 获取<p>数据库端口</p>
                     * @return DbPort <p>数据库端口</p>
                     * 
                     */
                    int64_t GetDbPort() const;

                    /**
                     * 设置<p>数据库端口</p>
                     * @param _dbPort <p>数据库端口</p>
                     * 
                     */
                    void SetDbPort(const int64_t& _dbPort);

                    /**
                     * 判断参数 DbPort 是否已赋值
                     * @return DbPort 是否已赋值
                     * 
                     */
                    bool DbPortHasBeenSet() const;

                    /**
                     * 获取<p>数据库用户</p>
                     * @return DbUser <p>数据库用户</p>
                     * 
                     */
                    std::string GetDbUser() const;

                    /**
                     * 设置<p>数据库用户</p>
                     * @param _dbUser <p>数据库用户</p>
                     * 
                     */
                    void SetDbUser(const std::string& _dbUser);

                    /**
                     * 判断参数 DbUser 是否已赋值
                     * @return DbUser 是否已赋值
                     * 
                     */
                    bool DbUserHasBeenSet() const;

                    /**
                     * 获取<p>审计单元 ID</p>
                     * @return InstanceId <p>审计单元 ID</p>
                     * 
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置<p>审计单元 ID</p>
                     * @param _instanceId <p>审计单元 ID</p>
                     * 
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>操作时间(时间)</p>
                     * @return OpTime <p>操作时间(时间)</p>
                     * 
                     */
                    int64_t GetOpTime() const;

                    /**
                     * 设置<p>操作时间(时间)</p>
                     * @param _opTime <p>操作时间(时间)</p>
                     * 
                     */
                    void SetOpTime(const int64_t& _opTime);

                    /**
                     * 判断参数 OpTime 是否已赋值
                     * @return OpTime 是否已赋值
                     * 
                     */
                    bool OpTimeHasBeenSet() const;

                    /**
                     * 获取<p>返回码</p>
                     * @return RetNo <p>返回码</p>
                     * 
                     */
                    int64_t GetRetNo() const;

                    /**
                     * 设置<p>返回码</p>
                     * @param _retNo <p>返回码</p>
                     * 
                     */
                    void SetRetNo(const int64_t& _retNo);

                    /**
                     * 判断参数 RetNo 是否已赋值
                     * @return RetNo 是否已赋值
                     * 
                     */
                    bool RetNoHasBeenSet() const;

                    /**
                     * 获取<p>会话Id</p>
                     * @return SessionId <p>会话Id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>会话Id</p>
                     * @param _sessionId <p>会话Id</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>登录时间</p>
                     * @return LoginTime <p>登录时间</p>
                     * 
                     */
                    int64_t GetLoginTime() const;

                    /**
                     * 设置<p>登录时间</p>
                     * @param _loginTime <p>登录时间</p>
                     * 
                     */
                    void SetLoginTime(const int64_t& _loginTime);

                    /**
                     * 判断参数 LoginTime 是否已赋值
                     * @return LoginTime 是否已赋值
                     * 
                     */
                    bool LoginTimeHasBeenSet() const;

                    /**
                     * 获取<p>数据资产名称</p>
                     * @return InstanceName <p>数据资产名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>数据资产名称</p>
                     * @param _instanceName <p>数据资产名称</p>
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
                     * 获取<p>数据资产名称</p>
                     * @return AssetName <p>数据资产名称</p>
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置<p>数据资产名称</p>
                     * @param _assetName <p>数据资产名称</p>
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取<p>流量来源</p>
                     * @return SourceType <p>流量来源</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>流量来源</p>
                     * @param _sourceType <p>流量来源</p>
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>流量来源英文</p>
                     * @return SourceTypeEn <p>流量来源英文</p>
                     * 
                     */
                    std::string GetSourceTypeEn() const;

                    /**
                     * 设置<p>流量来源英文</p>
                     * @param _sourceTypeEn <p>流量来源英文</p>
                     * 
                     */
                    void SetSourceTypeEn(const std::string& _sourceTypeEn);

                    /**
                     * 判断参数 SourceTypeEn 是否已赋值
                     * @return SourceTypeEn 是否已赋值
                     * 
                     */
                    bool SourceTypeEnHasBeenSet() const;

                    /**
                     * 获取<p>资产所属账号app id</p>
                     * @return AppId <p>资产所属账号app id</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>资产所属账号app id</p>
                     * @param _appId <p>资产所属账号app id</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>流量来源</p>
                     * @return SourceTypeEnDisplayName <p>流量来源</p>
                     * 
                     */
                    std::string GetSourceTypeEnDisplayName() const;

                    /**
                     * 设置<p>流量来源</p>
                     * @param _sourceTypeEnDisplayName <p>流量来源</p>
                     * 
                     */
                    void SetSourceTypeEnDisplayName(const std::string& _sourceTypeEnDisplayName);

                    /**
                     * 判断参数 SourceTypeEnDisplayName 是否已赋值
                     * @return SourceTypeEnDisplayName 是否已赋值
                     * 
                     */
                    bool SourceTypeEnDisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>昵称</p>
                     * @return NickName <p>昵称</p>
                     * 
                     */
                    std::string GetNickName() const;

                    /**
                     * 设置<p>昵称</p>
                     * @param _nickName <p>昵称</p>
                     * 
                     */
                    void SetNickName(const std::string& _nickName);

                    /**
                     * 判断参数 NickName 是否已赋值
                     * @return NickName 是否已赋值
                     * 
                     */
                    bool NickNameHasBeenSet() const;

                    /**
                     * 获取<p>用户ID</p>
                     * @return Uin <p>用户ID</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>用户ID</p>
                     * @param _uin <p>用户ID</p>
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
                     * 获取<p>数据库类型</p><p>枚举值：</p><ul><li>MongoDB： mongodb</li></ul>
                     * @return DbType <p>数据库类型</p><p>枚举值：</p><ul><li>MongoDB： mongodb</li></ul>
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置<p>数据库类型</p><p>枚举值：</p><ul><li>MongoDB： mongodb</li></ul>
                     * @param _dbType <p>数据库类型</p><p>枚举值：</p><ul><li>MongoDB： mongodb</li></ul>
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产类型</p><p>枚举值：</p><ul><li>cdb： mysql</li><li>mongodb： mongodb</li></ul>
                     * @return AssetType <p>资产类型</p><p>枚举值：</p><ul><li>cdb： mysql</li><li>mongodb： mongodb</li></ul>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型</p><p>枚举值：</p><ul><li>cdb： mysql</li><li>mongodb： mongodb</li></ul>
                     * @param _assetType <p>资产类型</p><p>枚举值：</p><ul><li>cdb： mysql</li><li>mongodb： mongodb</li></ul>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>审计日志数</p>
                     */
                    int64_t m_sqlCount;
                    bool m_sqlCountHasBeenSet;

                    /**
                     * <p>登出时间</p>
                     */
                    int64_t m_logoutTime;
                    bool m_logoutTimeHasBeenSet;

                    /**
                     * <p>客户端 IP</p>
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * <p>客户端端口</p>
                     */
                    int64_t m_clientPort;
                    bool m_clientPortHasBeenSet;

                    /**
                     * <p>数据库 IP</p>
                     */
                    std::string m_dbIp;
                    bool m_dbIpHasBeenSet;

                    /**
                     * <p>数据库名称</p>
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * <p>数据库端口</p>
                     */
                    int64_t m_dbPort;
                    bool m_dbPortHasBeenSet;

                    /**
                     * <p>数据库用户</p>
                     */
                    std::string m_dbUser;
                    bool m_dbUserHasBeenSet;

                    /**
                     * <p>审计单元 ID</p>
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>操作时间(时间)</p>
                     */
                    int64_t m_opTime;
                    bool m_opTimeHasBeenSet;

                    /**
                     * <p>返回码</p>
                     */
                    int64_t m_retNo;
                    bool m_retNoHasBeenSet;

                    /**
                     * <p>会话Id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>登录时间</p>
                     */
                    int64_t m_loginTime;
                    bool m_loginTimeHasBeenSet;

                    /**
                     * <p>数据资产名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>数据资产名称</p>
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * <p>流量来源</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>流量来源英文</p>
                     */
                    std::string m_sourceTypeEn;
                    bool m_sourceTypeEnHasBeenSet;

                    /**
                     * <p>资产所属账号app id</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>流量来源</p>
                     */
                    std::string m_sourceTypeEnDisplayName;
                    bool m_sourceTypeEnDisplayNameHasBeenSet;

                    /**
                     * <p>昵称</p>
                     */
                    std::string m_nickName;
                    bool m_nickNameHasBeenSet;

                    /**
                     * <p>用户ID</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>数据库类型</p><p>枚举值：</p><ul><li>MongoDB： mongodb</li></ul>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * <p>资产类型</p><p>枚举值：</p><ul><li>cdb： mysql</li><li>mongodb： mongodb</li></ul>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMAUDITSESSIONINFO_H_
