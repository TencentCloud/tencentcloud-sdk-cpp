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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOREGISTRYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOREGISTRYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RegistryConnDetectResult.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器安全镜像仓库列表
                */
                class ImageRepoRegistryInfo : public AbstractModel
                {
                public:
                    ImageRepoRegistryInfo();
                    ~ImageRepoRegistryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库id
                     * @return RegistryId 仓库id
                     * 
                     */
                    uint64_t GetRegistryId() const;

                    /**
                     * 设置仓库id
                     * @param _registryId 仓库id
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
                     * 获取仓库名
                     * @return Name 仓库名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置仓库名
                     * @param _name 仓库名
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
                     * 获取仓库类型，列表：harbor、tcr
                     * @return RegistryType 仓库类型，列表：harbor、tcr
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置仓库类型，列表：harbor、tcr
                     * @param _registryType 仓库类型，列表：harbor、tcr
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
                     * 获取仓库url
                     * @return Url 仓库url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置仓库url
                     * @param _url 仓库url
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
                     * 获取网络类型，列表：public
                     * @return NetType 网络类型，列表：public
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型，列表：public
                     * @param _netType 网络类型，列表：public
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
                     * 获取区域，列表：default
                     * @return RegistryRegion 区域，列表：default
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置区域，列表：default
                     * @param _registryRegion 区域，列表：default
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
                     * 获取仓库版本
                     * @return RegistryVersion 仓库版本
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置仓库版本
                     * @param _registryVersion 仓库版本
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
                     * 获取仓库连接错误信息，待废弃，请使用ConnDetectException
                     * @return ConnectMsg 仓库连接错误信息，待废弃，请使用ConnDetectException
                     * 
                     */
                    std::string GetConnectMsg() const;

                    /**
                     * 设置仓库连接错误信息，待废弃，请使用ConnDetectException
                     * @param _connectMsg 仓库连接错误信息，待废弃，请使用ConnDetectException
                     * 
                     */
                    void SetConnectMsg(const std::string& _connectMsg);

                    /**
                     * 判断参数 ConnectMsg 是否已赋值
                     * @return ConnectMsg 是否已赋值
                     * 
                     */
                    bool ConnectMsgHasBeenSet() const;

                    /**
                     * 获取联通性检测方式
                     * @return ConnDetectType 联通性检测方式
                     * 
                     */
                    std::string GetConnDetectType() const;

                    /**
                     * 设置联通性检测方式
                     * @param _connDetectType 联通性检测方式
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
                     * 获取联通性检测主机数
                     * @return ConnDetectHostCount 联通性检测主机数
                     * 
                     */
                    uint64_t GetConnDetectHostCount() const;

                    /**
                     * 设置联通性检测主机数
                     * @param _connDetectHostCount 联通性检测主机数
                     * 
                     */
                    void SetConnDetectHostCount(const uint64_t& _connDetectHostCount);

                    /**
                     * 判断参数 ConnDetectHostCount 是否已赋值
                     * @return ConnDetectHostCount 是否已赋值
                     * 
                     */
                    bool ConnDetectHostCountHasBeenSet() const;

                    /**
                     * 获取联通性检测详情
                     * @return ConnDetectDetail 联通性检测详情
                     * 
                     */
                    std::vector<RegistryConnDetectResult> GetConnDetectDetail() const;

                    /**
                     * 设置联通性检测详情
                     * @param _connDetectDetail 联通性检测详情
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
                     * 获取tcr情况下的instance_id
                     * @return InstanceID tcr情况下的instance_id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置tcr情况下的instance_id
                     * @param _instanceID tcr情况下的instance_id
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
                     * 获取最近同步成功时间
                     * @return LatestSyncTime 最近同步成功时间
                     * 
                     */
                    std::string GetLatestSyncTime() const;

                    /**
                     * 设置最近同步成功时间
                     * @param _latestSyncTime 最近同步成功时间
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
                     * 获取同步状态
                     * @return SyncStatus 同步状态
                     * 
                     */
                    std::string GetSyncStatus() const;

                    /**
                     * 设置同步状态
                     * @param _syncStatus 同步状态
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
                     * 获取同步失败原因
                     * @return SyncFailReason 同步失败原因
                     * 
                     */
                    std::string GetSyncFailReason() const;

                    /**
                     * 设置同步失败原因
                     * @param _syncFailReason 同步失败原因
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
                     * 获取同步失败解决方案
                     * @return SyncSolution 同步失败解决方案
                     * 
                     */
                    std::string GetSyncSolution() const;

                    /**
                     * 设置同步失败解决方案
                     * @param _syncSolution 同步失败解决方案
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
                     * 获取同步失败信息
                     * @return SyncMessage 同步失败信息
                     * 
                     */
                    std::string GetSyncMessage() const;

                    /**
                     * 设置同步失败信息
                     * @param _syncMessage 同步失败信息
                     * 
                     */
                    void SetSyncMessage(const std::string& _syncMessage);

                    /**
                     * 判断参数 SyncMessage 是否已赋值
                     * @return SyncMessage 是否已赋值
                     * 
                     */
                    bool SyncMessageHasBeenSet() const;

                    /**
                     * 获取同步方式，0全量同步，1增量同步	
                     * @return SyncMode 同步方式，0全量同步，1增量同步	
                     * 
                     */
                    uint64_t GetSyncMode() const;

                    /**
                     * 设置同步方式，0全量同步，1增量同步	
                     * @param _syncMode 同步方式，0全量同步，1增量同步	
                     * 
                     */
                    void SetSyncMode(const uint64_t& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                private:

                    /**
                     * 仓库id
                     */
                    uint64_t m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 仓库名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 仓库类型，列表：harbor、tcr
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 仓库url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 网络类型，列表：public
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 区域，列表：default
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * 仓库版本
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * 仓库连接错误信息，待废弃，请使用ConnDetectException
                     */
                    std::string m_connectMsg;
                    bool m_connectMsgHasBeenSet;

                    /**
                     * 联通性检测方式
                     */
                    std::string m_connDetectType;
                    bool m_connDetectTypeHasBeenSet;

                    /**
                     * 联通性检测主机数
                     */
                    uint64_t m_connDetectHostCount;
                    bool m_connDetectHostCountHasBeenSet;

                    /**
                     * 联通性检测详情
                     */
                    std::vector<RegistryConnDetectResult> m_connDetectDetail;
                    bool m_connDetectDetailHasBeenSet;

                    /**
                     * tcr情况下的instance_id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 最近同步成功时间
                     */
                    std::string m_latestSyncTime;
                    bool m_latestSyncTimeHasBeenSet;

                    /**
                     * 同步状态
                     */
                    std::string m_syncStatus;
                    bool m_syncStatusHasBeenSet;

                    /**
                     * 同步失败原因
                     */
                    std::string m_syncFailReason;
                    bool m_syncFailReasonHasBeenSet;

                    /**
                     * 同步失败解决方案
                     */
                    std::string m_syncSolution;
                    bool m_syncSolutionHasBeenSet;

                    /**
                     * 同步失败信息
                     */
                    std::string m_syncMessage;
                    bool m_syncMessageHasBeenSet;

                    /**
                     * 同步方式，0全量同步，1增量同步	
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREPOREGISTRYINFO_H_
