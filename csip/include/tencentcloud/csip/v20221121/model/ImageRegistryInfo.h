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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/RegistryConnDetectResult.h>
#include <tencentcloud/csip/v20221121/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像仓库信息
                */
                class ImageRegistryInfo : public AbstractModel
                {
                public:
                    ImageRegistryInfo();
                    ~ImageRegistryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>仓库id</p>
                     * @return RegistryId <p>仓库id</p>
                     * 
                     */
                    uint64_t GetRegistryId() const;

                    /**
                     * 设置<p>仓库id</p>
                     * @param _registryId <p>仓库id</p>
                     * 
                     */
                    void SetRegistryId(const uint64_t& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>仓库名</p>
                     * @return Name <p>仓库名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>仓库名</p>
                     * @param _name <p>仓库名</p>
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
                     * 获取<p>仓库类型</p>
                     * @return RegistryType <p>仓库类型</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置<p>仓库类型</p>
                     * @param _registryType <p>仓库类型</p>
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
                     * 获取<p>仓库url</p>
                     * @return Url <p>仓库url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>仓库url</p>
                     * @param _url <p>仓库url</p>
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
                     * 获取<p>网络连接类型</p>
                     * @return NetType <p>网络连接类型</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置<p>网络连接类型</p>
                     * @param _netType <p>网络连接类型</p>
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
                     * 获取<p>仓库所在地域</p>
                     * @return RegistryRegion <p>仓库所在地域</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置<p>仓库所在地域</p>
                     * @param _registryRegion <p>仓库所在地域</p>
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
                     * 获取<p>仓库版本</p>
                     * @return RegistryVersion <p>仓库版本</p>
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置<p>仓库版本</p>
                     * @param _registryVersion <p>仓库版本</p>
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
                     * 获取<p>仓库实例id</p>
                     * @return InstanceID <p>仓库实例id</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置<p>仓库实例id</p>
                     * @param _instanceID <p>仓库实例id</p>
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>最后同步时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @return LatestSyncTime <p>最后同步时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    std::string GetLatestSyncTime() const;

                    /**
                     * 设置<p>最后同步时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * @param _latestSyncTime <p>最后同步时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     * 
                     */
                    void SetLatestSyncTime(const std::string& _latestSyncTime);

                    /**
                     * 判断参数 LatestSyncTime 是否已赋值
                     * @return LatestSyncTime 是否已赋值
                     * 
                     */
                    bool LatestSyncTimeHasBeenSet() const;

                    /**
                     * 获取<p>同步失败解决方案</p>
                     * @return SyncSolution <p>同步失败解决方案</p>
                     * 
                     */
                    std::string GetSyncSolution() const;

                    /**
                     * 设置<p>同步失败解决方案</p>
                     * @param _syncSolution <p>同步失败解决方案</p>
                     * 
                     */
                    void SetSyncSolution(const std::string& _syncSolution);

                    /**
                     * 判断参数 SyncSolution 是否已赋值
                     * @return SyncSolution 是否已赋值
                     * 
                     */
                    bool SyncSolutionHasBeenSet() const;

                    /**
                     * 获取<p>同步方式</p>
                     * @return SyncMode <p>同步方式</p>
                     * 
                     */
                    uint64_t GetSyncMode() const;

                    /**
                     * 设置<p>同步方式</p>
                     * @param _syncMode <p>同步方式</p>
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
                     * 获取<p>连接探测详情</p>
                     * @return ConnDetectDetail <p>连接探测详情</p>
                     * 
                     */
                    std::vector<RegistryConnDetectResult> GetConnDetectDetail() const;

                    /**
                     * 设置<p>连接探测详情</p>
                     * @param _connDetectDetail <p>连接探测详情</p>
                     * 
                     */
                    void SetConnDetectDetail(const std::vector<RegistryConnDetectResult>& _connDetectDetail);

                    /**
                     * 判断参数 ConnDetectDetail 是否已赋值
                     * @return ConnDetectDetail 是否已赋值
                     * 
                     */
                    bool ConnDetectDetailHasBeenSet() const;

                    /**
                     * 获取<p>连接类型</p>
                     * @return ConnDetectType <p>连接类型</p>
                     * 
                     */
                    std::string GetConnDetectType() const;

                    /**
                     * 设置<p>连接类型</p>
                     * @param _connDetectType <p>连接类型</p>
                     * 
                     */
                    void SetConnDetectType(const std::string& _connDetectType);

                    /**
                     * 判断参数 ConnDetectType 是否已赋值
                     * @return ConnDetectType 是否已赋值
                     * 
                     */
                    bool ConnDetectTypeHasBeenSet() const;

                    /**
                     * 获取<p>仓库所属账号名</p>
                     * @return OwnerAccountName <p>仓库所属账号名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>仓库所属账号名</p>
                     * @param _ownerAccountName <p>仓库所属账号名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>仓库所属账号appid</p>
                     * @return OwnerAppId <p>仓库所属账号appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>仓库所属账号appid</p>
                     * @param _ownerAppId <p>仓库所属账号appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>仓库所属账号uin</p>
                     * @return OwnerUin <p>仓库所属账号uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>仓库所属账号uin</p>
                     * @param _ownerUin <p>仓库所属账号uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>同步状态</p><p>枚举值：</p><ul><li>doing： 同步中</li><li>success： 同步成功</li><li>failed： 同步失败</li></ul>
                     * @return SyncStatus <p>同步状态</p><p>枚举值：</p><ul><li>doing： 同步中</li><li>success： 同步成功</li><li>failed： 同步失败</li></ul>
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置<p>同步状态</p><p>枚举值：</p><ul><li>doing： 同步中</li><li>success： 同步成功</li><li>failed： 同步失败</li></ul>
                     * @param _syncStatus <p>同步状态</p><p>枚举值：</p><ul><li>doing： 同步中</li><li>success： 同步成功</li><li>failed： 同步失败</li></ul>
                     * 
                     */
                    void SetSyncStatus(const std::string& _syncStatus);

                    /**
                     * 判断参数 SyncStatus 是否已赋值
                     * @return SyncStatus 是否已赋值
                     * 
                     */
                    bool SyncStatusHasBeenSet() const;

                    /**
                     * 获取<p>同步失败原因</p>
                     * @return SyncFailReason <p>同步失败原因</p>
                     * 
                     */
                    std::string GetSyncFailReason() const;

                    /**
                     * 设置<p>同步失败原因</p>
                     * @param _syncFailReason <p>同步失败原因</p>
                     * 
                     */
                    void SetSyncFailReason(const std::string& _syncFailReason);

                    /**
                     * 判断参数 SyncFailReason 是否已赋值
                     * @return SyncFailReason 是否已赋值
                     * 
                     */
                    bool SyncFailReasonHasBeenSet() const;

                    /**
                     * 获取<p>地域信息</p>
                     * @return RegionInfo <p>地域信息</p>
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置<p>地域信息</p>
                     * @param _regionInfo <p>地域信息</p>
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                    /**
                     * 获取<p>镜像仓库用户名</p>
                     * @return UserName <p>镜像仓库用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>镜像仓库用户名</p>
                     * @param _userName <p>镜像仓库用户名</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                private:

                    /**
                     * <p>仓库id</p>
                     */
                    uint64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>仓库名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>仓库类型</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>仓库url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>网络连接类型</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>仓库所在地域</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>仓库版本</p>
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * <p>仓库实例id</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>最后同步时间</p><p>参数格式：YYYY-MM-DD hh:mm:ss</p>
                     */
                    std::string m_latestSyncTime;
                    bool m_latestSyncTimeHasBeenSet;

                    /**
                     * <p>同步失败解决方案</p>
                     */
                    std::string m_syncSolution;
                    bool m_syncSolutionHasBeenSet;

                    /**
                     * <p>同步方式</p>
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * <p>连接探测详情</p>
                     */
                    std::vector<RegistryConnDetectResult> m_connDetectDetail;
                    bool m_connDetectDetailHasBeenSet;

                    /**
                     * <p>连接类型</p>
                     */
                    std::string m_connDetectType;
                    bool m_connDetectTypeHasBeenSet;

                    /**
                     * <p>仓库所属账号名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>仓库所属账号appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>仓库所属账号uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>同步状态</p><p>枚举值：</p><ul><li>doing： 同步中</li><li>success： 同步成功</li><li>failed： 同步失败</li></ul>
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * <p>同步失败原因</p>
                     */
                    std::string m_syncFailReason;
                    bool m_syncFailReasonHasBeenSet;

                    /**
                     * <p>地域信息</p>
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                    /**
                     * <p>镜像仓库用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYINFO_H_
