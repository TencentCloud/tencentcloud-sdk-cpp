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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEREGISTRYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEREGISTRYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ConnectivityDetectConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ModifyImageRegistry请求参数结构体
                */
                class ModifyImageRegistryRequest : public AbstractModel
                {
                public:
                    ModifyImageRegistryRequest();
                    ~ModifyImageRegistryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库名</p>
                     * @return Name <p>镜像仓库名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>镜像仓库名</p>
                     * @param _name <p>镜像仓库名</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>账号</p>
                     * @return Username <p>账号</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>账号</p>
                     * @param _username <p>账号</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>密码</p>
                     * @return Password <p>密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>密码</p>
                     * @param _password <p>密码</p>
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
                     * 获取<p>镜像仓库url</p>
                     * @return Url <p>镜像仓库url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>镜像仓库url</p>
                     * @param _url <p>镜像仓库url</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库类型</p>
                     * @return RegistryType <p>镜像仓库类型</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>镜像仓库类型</p>
                     * @param _registryType <p>镜像仓库类型</p>
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>网络类型</p>
                     * @return NetType <p>网络类型</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>网络类型</p>
                     * @param _netType <p>网络类型</p>
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库版本</p>
                     * @return RegistryVersion <p>镜像仓库版本</p>
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置<p>镜像仓库版本</p>
                     * @param _registryVersion <p>镜像仓库版本</p>
                     * 
                     */
                    void SetRegistryVersion(const std::string& _registryVersion);

                    /**
                     * 判断参数 RegistryVersion 是否已赋值
                     * @return RegistryVersion 是否已赋值
                     * 
                     */
                    bool RegistryVersionHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库所属region</p>
                     * @return RegistryRegion <p>镜像仓库所属region</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置<p>镜像仓库所属region</p>
                     * @param _registryRegion <p>镜像仓库所属region</p>
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取<p>限速值</p>
                     * @return SpeedLimit <p>限速值</p>
                     * 
                     */
                    uint64_t GetSpeedLimit() const;

                    /**
                     * 设置<p>限速值</p>
                     * @param _speedLimit <p>限速值</p>
                     * 
                     */
                    void SetSpeedLimit(const uint64_t& _speedLimit);

                    /**
                     * 判断参数 SpeedLimit 是否已赋值
                     * @return SpeedLimit 是否已赋值
                     * 
                     */
                    bool SpeedLimitHasBeenSet() const;

                    /**
                     * 获取<p>安全模式（证书校验）</p><p>枚举值：</p><ul><li>0： 安全模式</li><li>1： 非安全模式</li></ul>
                     * @return Insecure <p>安全模式（证书校验）</p><p>枚举值：</p><ul><li>0： 安全模式</li><li>1： 非安全模式</li></ul>
                     * 
                     */
                    uint64_t GetInsecure() const;

                    /**
                     * 设置<p>安全模式（证书校验）</p><p>枚举值：</p><ul><li>0： 安全模式</li><li>1： 非安全模式</li></ul>
                     * @param _insecure <p>安全模式（证书校验）</p><p>枚举值：</p><ul><li>0： 安全模式</li><li>1： 非安全模式</li></ul>
                     * 
                     */
                    void SetInsecure(const uint64_t& _insecure);

                    /**
                     * 判断参数 Insecure 是否已赋值
                     * @return Insecure 是否已赋值
                     * 
                     */
                    bool InsecureHasBeenSet() const;

                    /**
                     * 获取<p>是否自动扫描</p>
                     * @return NeedScan <p>是否自动扫描</p>
                     * 
                     */
                    bool GetNeedScan() const;

                    /**
                     * 设置<p>是否自动扫描</p>
                     * @param _needScan <p>是否自动扫描</p>
                     * 
                     */
                    void SetNeedScan(const bool& _needScan);

                    /**
                     * 判断参数 NeedScan 是否已赋值
                     * @return NeedScan 是否已赋值
                     * 
                     */
                    bool NeedScanHasBeenSet() const;

                    /**
                     * 获取<p>同步方式</p><p>枚举值：</p><ul><li>0： 全量同步</li><li>1： 增量同步</li></ul>
                     * @return SyncMode <p>同步方式</p><p>枚举值：</p><ul><li>0： 全量同步</li><li>1： 增量同步</li></ul>
                     * 
                     */
                    uint64_t GetSyncMode() const;

                    /**
                     * 设置<p>同步方式</p><p>枚举值：</p><ul><li>0： 全量同步</li><li>1： 增量同步</li></ul>
                     * @param _syncMode <p>同步方式</p><p>枚举值：</p><ul><li>0： 全量同步</li><li>1： 增量同步</li></ul>
                     * 
                     */
                    void SetSyncMode(const uint64_t& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库实例id</p>
                     * @return InstanceId <p>镜像仓库实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>镜像仓库实例id</p>
                     * @param _instanceId <p>镜像仓库实例id</p>
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
                     * 获取<p>联通性检测配置</p>
                     * @return ConnectivityDetectConfig <p>联通性检测配置</p>
                     * 
                     */
                    std::vector<ConnectivityDetectConfig> GetConnectivityDetectConfig() const;

                    /**
                     * 设置<p>联通性检测配置</p>
                     * @param _connectivityDetectConfig <p>联通性检测配置</p>
                     * 
                     */
                    void SetConnectivityDetectConfig(const std::vector<ConnectivityDetectConfig>& _connectivityDetectConfig);

                    /**
                     * 判断参数 ConnectivityDetectConfig 是否已赋值
                     * @return ConnectivityDetectConfig 是否已赋值
                     * 
                     */
                    bool ConnectivityDetectConfigHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库id</p>
                     * @return Id <p>镜像仓库id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>镜像仓库id</p>
                     * @param _id <p>镜像仓库id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>镜像仓库名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>账号</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>镜像仓库url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>镜像仓库类型</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>网络类型</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>镜像仓库版本</p>
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * <p>镜像仓库所属region</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>限速值</p>
                     */
                    uint64_t m_speedLimit;
                    bool m_speedLimitHasBeenSet;

                    /**
                     * <p>安全模式（证书校验）</p><p>枚举值：</p><ul><li>0： 安全模式</li><li>1： 非安全模式</li></ul>
                     */
                    uint64_t m_insecure;
                    bool m_insecureHasBeenSet;

                    /**
                     * <p>是否自动扫描</p>
                     */
                    bool m_needScan;
                    bool m_needScanHasBeenSet;

                    /**
                     * <p>同步方式</p><p>枚举值：</p><ul><li>0： 全量同步</li><li>1： 增量同步</li></ul>
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * <p>镜像仓库实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>联通性检测配置</p>
                     */
                    std::vector<ConnectivityDetectConfig> m_connectivityDetectConfig;
                    bool m_connectivityDetectConfigHasBeenSet;

                    /**
                     * <p>镜像仓库id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYIMAGEREGISTRYREQUEST_H_
