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

#ifndef TENCENTCLOUD_CDS_V20180420_MODEL_ASSETSINFO_H_
#define TENCENTCLOUD_CDS_V20180420_MODEL_ASSETSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cds/v20180420/model/DsgcBindingInfo.h>
#include <tencentcloud/cds/v20180420/model/IdWithName.h>


namespace TencentCloud
{
    namespace Cds
    {
        namespace V20180420
        {
            namespace Model
            {
                /**
                * 资产列表数组
                */
                class AssetsInfo : public AbstractModel
                {
                public:
                    AssetsInfo();
                    ~AssetsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>创建时间</p>
                     * @return AddTime <p>创建时间</p>
                     * 
                     */
                    uint64_t GetAddTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _addTime <p>创建时间</p>
                     * 
                     */
                    void SetAddTime(const uint64_t& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取<p>资产 ID</p>
                     * @return Aid <p>资产 ID</p>
                     * 
                     */
                    uint64_t GetAid() const;

                    /**
                     * 设置<p>资产 ID</p>
                     * @param _aid <p>资产 ID</p>
                     * 
                     */
                    void SetAid(const uint64_t& _aid);

                    /**
                     * 判断参数 Aid 是否已赋值
                     * @return Aid 是否已赋值
                     * 
                     */
                    bool AidHasBeenSet() const;

                    /**
                     * 获取<p>数据资产 IP</p>
                     * @return AssetsIp <p>数据资产 IP</p>
                     * 
                     */
                    std::string GetAssetsIp() const;

                    /**
                     * 设置<p>数据资产 IP</p>
                     * @param _assetsIp <p>数据资产 IP</p>
                     * 
                     */
                    void SetAssetsIp(const std::string& _assetsIp);

                    /**
                     * 判断参数 AssetsIp 是否已赋值
                     * @return AssetsIp 是否已赋值
                     * 
                     */
                    bool AssetsIpHasBeenSet() const;

                    /**
                     * 获取<p>数据资产名称</p>
                     * @return AssetsName <p>数据资产名称</p>
                     * 
                     */
                    std::string GetAssetsName() const;

                    /**
                     * 设置<p>数据资产名称</p>
                     * @param _assetsName <p>数据资产名称</p>
                     * 
                     */
                    void SetAssetsName(const std::string& _assetsName);

                    /**
                     * 判断参数 AssetsName 是否已赋值
                     * @return AssetsName 是否已赋值
                     * 
                     */
                    bool AssetsNameHasBeenSet() const;

                    /**
                     * 获取<p>数据资产端口</p>
                     * @return AssetsPort <p>数据资产端口</p>
                     * 
                     */
                    uint64_t GetAssetsPort() const;

                    /**
                     * 设置<p>数据资产端口</p>
                     * @param _assetsPort <p>数据资产端口</p>
                     * 
                     */
                    void SetAssetsPort(const uint64_t& _assetsPort);

                    /**
                     * 判断参数 AssetsPort 是否已赋值
                     * @return AssetsPort 是否已赋值
                     * 
                     */
                    bool AssetsPortHasBeenSet() const;

                    /**
                     * 获取<p>数据资产类型</p>
                     * @return AssetsType <p>数据资产类型</p>
                     * 
                     */
                    std::string GetAssetsType() const;

                    /**
                     * 设置<p>数据资产类型</p>
                     * @param _assetsType <p>数据资产类型</p>
                     * 
                     */
                    void SetAssetsType(const std::string& _assetsType);

                    /**
                     * 判断参数 AssetsType 是否已赋值
                     * @return AssetsType 是否已赋值
                     * 
                     */
                    bool AssetsTypeHasBeenSet() const;

                    /**
                     * 获取<p>资产版本</p>
                     * @return AssetsVersion <p>资产版本</p>
                     * 
                     */
                    std::string GetAssetsVersion() const;

                    /**
                     * 设置<p>资产版本</p>
                     * @param _assetsVersion <p>资产版本</p>
                     * 
                     */
                    void SetAssetsVersion(const std::string& _assetsVersion);

                    /**
                     * 判断参数 AssetsVersion 是否已赋值
                     * @return AssetsVersion 是否已赋值
                     * 
                     */
                    bool AssetsVersionHasBeenSet() const;

                    /**
                     * 获取<p>是否动态</p>
                     * @return AssetsAddType <p>是否动态</p>
                     * 
                     */
                    uint64_t GetAssetsAddType() const;

                    /**
                     * 设置<p>是否动态</p>
                     * @param _assetsAddType <p>是否动态</p>
                     * 
                     */
                    void SetAssetsAddType(const uint64_t& _assetsAddType);

                    /**
                     * 判断参数 AssetsAddType 是否已赋值
                     * @return AssetsAddType 是否已赋值
                     * 
                     */
                    bool AssetsAddTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否删除</p>
                     * @return Status <p>是否删除</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>是否删除</p>
                     * @param _status <p>是否删除</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>最后一次修改时间</p>
                     * @return UpdateTime <p>最后一次修改时间</p>
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置<p>最后一次修改时间</p>
                     * @param _updateTime <p>最后一次修改时间</p>
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>资产的vpc</p>
                     * @return VpcId <p>资产的vpc</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>资产的vpc</p>
                     * @param _vpcId <p>资产的vpc</p>
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
                     * 获取<p>地域</p>
                     * @return RegionId <p>地域</p>
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _regionId <p>地域</p>
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取<p>审计权限</p>
                     * @return Permission <p>审计权限</p>
                     * 
                     */
                    int64_t GetPermission() const;

                    /**
                     * 设置<p>审计权限</p>
                     * @param _permission <p>审计权限</p>
                     * 
                     */
                    void SetPermission(const int64_t& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     * 
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称</p>
                     * @return InstanceName <p>实例名称</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称</p>
                     * @param _instanceName <p>实例名称</p>
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
                     * 获取<p>用来区分自建资产是已通过cvm还是添加ip的方式</p>
                     * @return AddType <p>用来区分自建资产是已通过cvm还是添加ip的方式</p>
                     * 
                     */
                    uint64_t GetAddType() const;

                    /**
                     * 设置<p>用来区分自建资产是已通过cvm还是添加ip的方式</p>
                     * @param _addType <p>用来区分自建资产是已通过cvm还是添加ip的方式</p>
                     * 
                     */
                    void SetAddType(const uint64_t& _addType);

                    /**
                     * 判断参数 AddType 是否已赋值
                     * @return AddType 是否已赋值
                     * 
                     */
                    bool AddTypeHasBeenSet() const;

                    /**
                     * 获取<p>子网Id</p>
                     * @return AssetSubnetId <p>子网Id</p>
                     * 
                     */
                    std::string GetAssetSubnetId() const;

                    /**
                     * 设置<p>子网Id</p>
                     * @param _assetSubnetId <p>子网Id</p>
                     * 
                     */
                    void SetAssetSubnetId(const std::string& _assetSubnetId);

                    /**
                     * 判断参数 AssetSubnetId 是否已赋值
                     * @return AssetSubnetId 是否已赋值
                     * 
                     */
                    bool AssetSubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>是否已上传数据库私钥（0 否，1 是）</p>
                     * @return UploadPem <p>是否已上传数据库私钥（0 否，1 是）</p>
                     * 
                     */
                    int64_t GetUploadPem() const;

                    /**
                     * 设置<p>是否已上传数据库私钥（0 否，1 是）</p>
                     * @param _uploadPem <p>是否已上传数据库私钥（0 否，1 是）</p>
                     * 
                     */
                    void SetUploadPem(const int64_t& _uploadPem);

                    /**
                     * 判断参数 UploadPem 是否已赋值
                     * @return UploadPem 是否已赋值
                     * 
                     */
                    bool UploadPemHasBeenSet() const;

                    /**
                     * 获取<p>资产状态栏 0:正常 1:已删除（目前仅对tencentDB有效）</p>
                     * @return AliveStatus <p>资产状态栏 0:正常 1:已删除（目前仅对tencentDB有效）</p>
                     * 
                     */
                    int64_t GetAliveStatus() const;

                    /**
                     * 设置<p>资产状态栏 0:正常 1:已删除（目前仅对tencentDB有效）</p>
                     * @param _aliveStatus <p>资产状态栏 0:正常 1:已删除（目前仅对tencentDB有效）</p>
                     * 
                     */
                    void SetAliveStatus(const int64_t& _aliveStatus);

                    /**
                     * 判断参数 AliveStatus 是否已赋值
                     * @return AliveStatus 是否已赋值
                     * 
                     */
                    bool AliveStatusHasBeenSet() const;

                    /**
                     * 获取<p>开启agent(0:关闭;1:开启)</p>
                     * @return AgentOn <p>开启agent(0:关闭;1:开启)</p>
                     * 
                     */
                    uint64_t GetAgentOn() const;

                    /**
                     * 设置<p>开启agent(0:关闭;1:开启)</p>
                     * @param _agentOn <p>开启agent(0:关闭;1:开启)</p>
                     * 
                     */
                    void SetAgentOn(const uint64_t& _agentOn);

                    /**
                     * 判断参数 AgentOn 是否已赋值
                     * @return AgentOn 是否已赋值
                     * 
                     */
                    bool AgentOnHasBeenSet() const;

                    /**
                     * 获取<p>开启agent(0:关闭;1:开启)</p>
                     * @return CasbOn <p>开启agent(0:关闭;1:开启)</p>
                     * 
                     */
                    uint64_t GetCasbOn() const;

                    /**
                     * 设置<p>开启agent(0:关闭;1:开启)</p>
                     * @param _casbOn <p>开启agent(0:关闭;1:开启)</p>
                     * 
                     */
                    void SetCasbOn(const uint64_t& _casbOn);

                    /**
                     * 判断参数 CasbOn 是否已赋值
                     * @return CasbOn 是否已赋值
                     * 
                     */
                    bool CasbOnHasBeenSet() const;

                    /**
                     * 获取<p>只读组/集群ID</p>
                     * @return GroupId <p>只读组/集群ID</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>只读组/集群ID</p>
                     * @param _groupId <p>只读组/集群ID</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>PROXY_OFF: 未开启Casb代理;PROXY_ERROR:Casb代理接口返回异常;PROXY_BOUND:已绑定;PROXY_UNBOUND:未绑定;UNPAID:未购买;UNSUPPORTED:类型不支持;METADATA_NOT_FOUND:元数据不存在;QUOTA_EXCEEDED:Casb额度不足</p>
                     * @return Available <p>PROXY_OFF: 未开启Casb代理;PROXY_ERROR:Casb代理接口返回异常;PROXY_BOUND:已绑定;PROXY_UNBOUND:未绑定;UNPAID:未购买;UNSUPPORTED:类型不支持;METADATA_NOT_FOUND:元数据不存在;QUOTA_EXCEEDED:Casb额度不足</p>
                     * 
                     */
                    std::string GetAvailable() const;

                    /**
                     * 设置<p>PROXY_OFF: 未开启Casb代理;PROXY_ERROR:Casb代理接口返回异常;PROXY_BOUND:已绑定;PROXY_UNBOUND:未绑定;UNPAID:未购买;UNSUPPORTED:类型不支持;METADATA_NOT_FOUND:元数据不存在;QUOTA_EXCEEDED:Casb额度不足</p>
                     * @param _available <p>PROXY_OFF: 未开启Casb代理;PROXY_ERROR:Casb代理接口返回异常;PROXY_BOUND:已绑定;PROXY_UNBOUND:未绑定;UNPAID:未购买;UNSUPPORTED:类型不支持;METADATA_NOT_FOUND:元数据不存在;QUOTA_EXCEEDED:Casb额度不足</p>
                     * 
                     */
                    void SetAvailable(const std::string& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取<p>cdbOn</p>
                     * @return CdbOn <p>cdbOn</p>
                     * 
                     */
                    uint64_t GetCdbOn() const;

                    /**
                     * 设置<p>cdbOn</p>
                     * @param _cdbOn <p>cdbOn</p>
                     * 
                     */
                    void SetCdbOn(const uint64_t& _cdbOn);

                    /**
                     * 判断参数 CdbOn 是否已赋值
                     * @return CdbOn 是否已赋值
                     * 
                     */
                    bool CdbOnHasBeenSet() const;

                    /**
                     * 获取<p>平台位数 32位 64位</p>
                     * @return DbPlatform <p>平台位数 32位 64位</p>
                     * 
                     */
                    std::string GetDbPlatform() const;

                    /**
                     * 设置<p>平台位数 32位 64位</p>
                     * @param _dbPlatform <p>平台位数 32位 64位</p>
                     * 
                     */
                    void SetDbPlatform(const std::string& _dbPlatform);

                    /**
                     * 判断参数 DbPlatform 是否已赋值
                     * @return DbPlatform 是否已赋值
                     * 
                     */
                    bool DbPlatformHasBeenSet() const;

                    /**
                     * 获取<p>编码</p>
                     * @return DbCharset <p>编码</p>
                     * 
                     */
                    std::string GetDbCharset() const;

                    /**
                     * 设置<p>编码</p>
                     * @param _dbCharset <p>编码</p>
                     * 
                     */
                    void SetDbCharset(const std::string& _dbCharset);

                    /**
                     * 判断参数 DbCharset 是否已赋值
                     * @return DbCharset 是否已赋值
                     * 
                     */
                    bool DbCharsetHasBeenSet() const;

                    /**
                     * 获取<p>操作系统</p>
                     * @return OsPolicy <p>操作系统</p>
                     * 
                     */
                    std::string GetOsPolicy() const;

                    /**
                     * 设置<p>操作系统</p>
                     * @param _osPolicy <p>操作系统</p>
                     * 
                     */
                    void SetOsPolicy(const std::string& _osPolicy);

                    /**
                     * 判断参数 OsPolicy 是否已赋值
                     * @return OsPolicy 是否已赋值
                     * 
                     */
                    bool OsPolicyHasBeenSet() const;

                    /**
                     * 获取<p>是否开启双向审计</p>
                     * @return BidirectionOn <p>是否开启双向审计</p>
                     * 
                     */
                    int64_t GetBidirectionOn() const;

                    /**
                     * 设置<p>是否开启双向审计</p>
                     * @param _bidirectionOn <p>是否开启双向审计</p>
                     * 
                     */
                    void SetBidirectionOn(const int64_t& _bidirectionOn);

                    /**
                     * 判断参数 BidirectionOn 是否已赋值
                     * @return BidirectionOn 是否已赋值
                     * 
                     */
                    bool BidirectionOnHasBeenSet() const;

                    /**
                     * 获取<p>最大返回行数</p>
                     * @return BidirectionMaxLine <p>最大返回行数</p>
                     * 
                     */
                    int64_t GetBidirectionMaxLine() const;

                    /**
                     * 设置<p>最大返回行数</p>
                     * @param _bidirectionMaxLine <p>最大返回行数</p>
                     * 
                     */
                    void SetBidirectionMaxLine(const int64_t& _bidirectionMaxLine);

                    /**
                     * 判断参数 BidirectionMaxLine 是否已赋值
                     * @return BidirectionMaxLine 是否已赋值
                     * 
                     */
                    bool BidirectionMaxLineHasBeenSet() const;

                    /**
                     * 获取<p>最大返回大小</p>
                     * @return BidirectionMaxStorage <p>最大返回大小</p>
                     * 
                     */
                    int64_t GetBidirectionMaxStorage() const;

                    /**
                     * 设置<p>最大返回大小</p>
                     * @param _bidirectionMaxStorage <p>最大返回大小</p>
                     * 
                     */
                    void SetBidirectionMaxStorage(const int64_t& _bidirectionMaxStorage);

                    /**
                     * 判断参数 BidirectionMaxStorage 是否已赋值
                     * @return BidirectionMaxStorage 是否已赋值
                     * 
                     */
                    bool BidirectionMaxStorageHasBeenSet() const;

                    /**
                     * 获取<p>是否允许开通双向审计(1.允许；0不允许)</p>
                     * @return BidirectionAllow <p>是否允许开通双向审计(1.允许；0不允许)</p>
                     * 
                     */
                    int64_t GetBidirectionAllow() const;

                    /**
                     * 设置<p>是否允许开通双向审计(1.允许；0不允许)</p>
                     * @param _bidirectionAllow <p>是否允许开通双向审计(1.允许；0不允许)</p>
                     * 
                     */
                    void SetBidirectionAllow(const int64_t& _bidirectionAllow);

                    /**
                     * 判断参数 BidirectionAllow 是否已赋值
                     * @return BidirectionAllow 是否已赋值
                     * 
                     */
                    bool BidirectionAllowHasBeenSet() const;

                    /**
                     * 获取<p>启双向审计的日志投递(1.开启;0.关闭)</p>
                     * @return BidirectionDelivery <p>启双向审计的日志投递(1.开启;0.关闭)</p>
                     * 
                     */
                    uint64_t GetBidirectionDelivery() const;

                    /**
                     * 设置<p>启双向审计的日志投递(1.开启;0.关闭)</p>
                     * @param _bidirectionDelivery <p>启双向审计的日志投递(1.开启;0.关闭)</p>
                     * 
                     */
                    void SetBidirectionDelivery(const uint64_t& _bidirectionDelivery);

                    /**
                     * 判断参数 BidirectionDelivery 是否已赋值
                     * @return BidirectionDelivery 是否已赋值
                     * 
                     */
                    bool BidirectionDeliveryHasBeenSet() const;

                    /**
                     * 获取<p>只读状态</p>
                     * @return RoStatus <p>只读状态</p>
                     * 
                     */
                    std::string GetRoStatus() const;

                    /**
                     * 设置<p>只读状态</p>
                     * @param _roStatus <p>只读状态</p>
                     * 
                     */
                    void SetRoStatus(const std::string& _roStatus);

                    /**
                     * 判断参数 RoStatus 是否已赋值
                     * @return RoStatus 是否已赋值
                     * 
                     */
                    bool RoStatusHasBeenSet() const;

                    /**
                     * 获取<p>当前资产是否开启了对当前Agent的采集策略</p>
                     * @return AgentBound <p>当前资产是否开启了对当前Agent的采集策略</p>
                     * 
                     */
                    bool GetAgentBound() const;

                    /**
                     * 设置<p>当前资产是否开启了对当前Agent的采集策略</p>
                     * @param _agentBound <p>当前资产是否开启了对当前Agent的采集策略</p>
                     * 
                     */
                    void SetAgentBound(const bool& _agentBound);

                    /**
                     * 判断参数 AgentBound 是否已赋值
                     * @return AgentBound 是否已赋值
                     * 
                     */
                    bool AgentBoundHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return CdbErrorMsg <p>错误信息</p>
                     * 
                     */
                    std::string GetCdbErrorMsg() const;

                    /**
                     * 设置<p>错误信息</p>
                     * @param _cdbErrorMsg <p>错误信息</p>
                     * 
                     */
                    void SetCdbErrorMsg(const std::string& _cdbErrorMsg);

                    /**
                     * 判断参数 CdbErrorMsg 是否已赋值
                     * @return CdbErrorMsg 是否已赋值
                     * 
                     */
                    bool CdbErrorMsgHasBeenSet() const;

                    /**
                     * 获取<p>资产 DSGC 绑定信息</p>
                     * @return DsgcBindingInfo <p>资产 DSGC 绑定信息</p>
                     * 
                     */
                    DsgcBindingInfo GetDsgcBindingInfo() const;

                    /**
                     * 设置<p>资产 DSGC 绑定信息</p>
                     * @param _dsgcBindingInfo <p>资产 DSGC 绑定信息</p>
                     * 
                     */
                    void SetDsgcBindingInfo(const DsgcBindingInfo& _dsgcBindingInfo);

                    /**
                     * 判断参数 DsgcBindingInfo 是否已赋值
                     * @return DsgcBindingInfo 是否已赋值
                     * 
                     */
                    bool DsgcBindingInfoHasBeenSet() const;

                    /**
                     * 获取<p>绑定的规则Ids</p>
                     * @return BindingRules <p>绑定的规则Ids</p>
                     * 
                     */
                    std::vector<IdWithName> GetBindingRules() const;

                    /**
                     * 设置<p>绑定的规则Ids</p>
                     * @param _bindingRules <p>绑定的规则Ids</p>
                     * 
                     */
                    void SetBindingRules(const std::vector<IdWithName>& _bindingRules);

                    /**
                     * 判断参数 BindingRules 是否已赋值
                     * @return BindingRules 是否已赋值
                     * 
                     */
                    bool BindingRulesHasBeenSet() const;

                    /**
                     * 获取<p>绑定的模型Ids</p>
                     * @return BindingModels <p>绑定的模型Ids</p>
                     * 
                     */
                    std::vector<IdWithName> GetBindingModels() const;

                    /**
                     * 设置<p>绑定的模型Ids</p>
                     * @param _bindingModels <p>绑定的模型Ids</p>
                     * 
                     */
                    void SetBindingModels(const std::vector<IdWithName>& _bindingModels);

                    /**
                     * 判断参数 BindingModels 是否已赋值
                     * @return BindingModels 是否已赋值
                     * 
                     */
                    bool BindingModelsHasBeenSet() const;

                    /**
                     * 获取<p>所属组名</p>
                     * @return GroupName <p>所属组名</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>所属组名</p>
                     * @param _groupName <p>所属组名</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>资产组Id</p>
                     * @return AssetGroupId <p>资产组Id</p>
                     * 
                     */
                    uint64_t GetAssetGroupId() const;

                    /**
                     * 设置<p>资产组Id</p>
                     * @param _assetGroupId <p>资产组Id</p>
                     * 
                     */
                    void SetAssetGroupId(const uint64_t& _assetGroupId);

                    /**
                     * 判断参数 AssetGroupId 是否已赋值
                     * @return AssetGroupId 是否已赋值
                     * 
                     */
                    bool AssetGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>是否是新云原生审计流程</p>
                     * @return IsNewCloudAudit <p>是否是新云原生审计流程</p>
                     * 
                     */
                    bool GetIsNewCloudAudit() const;

                    /**
                     * 设置<p>是否是新云原生审计流程</p>
                     * @param _isNewCloudAudit <p>是否是新云原生审计流程</p>
                     * 
                     */
                    void SetIsNewCloudAudit(const bool& _isNewCloudAudit);

                    /**
                     * 判断参数 IsNewCloudAudit 是否已赋值
                     * @return IsNewCloudAudit 是否已赋值
                     * 
                     */
                    bool IsNewCloudAuditHasBeenSet() const;

                    /**
                     * 获取<p>1</p><p>取值范围：[0, 1]</p>
                     * @return TrafficMirrorOn <p>1</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    int64_t GetTrafficMirrorOn() const;

                    /**
                     * 设置<p>1</p><p>取值范围：[0, 1]</p>
                     * @param _trafficMirrorOn <p>1</p><p>取值范围：[0, 1]</p>
                     * 
                     */
                    void SetTrafficMirrorOn(const int64_t& _trafficMirrorOn);

                    /**
                     * 判断参数 TrafficMirrorOn 是否已赋值
                     * @return TrafficMirrorOn 是否已赋值
                     * 
                     */
                    bool TrafficMirrorOnHasBeenSet() const;

                    /**
                     * 获取<p>流量镜像审计范围</p><p>枚举值：</p><ul><li>ALL： 全地域</li><li>REGION： 资产所在地域</li><li>VPC： 资产所在VPC</li></ul><p>默认值：REGION</p>
                     * @return AuditScope <p>流量镜像审计范围</p><p>枚举值：</p><ul><li>ALL： 全地域</li><li>REGION： 资产所在地域</li><li>VPC： 资产所在VPC</li></ul><p>默认值：REGION</p>
                     * 
                     */
                    std::string GetAuditScope() const;

                    /**
                     * 设置<p>流量镜像审计范围</p><p>枚举值：</p><ul><li>ALL： 全地域</li><li>REGION： 资产所在地域</li><li>VPC： 资产所在VPC</li></ul><p>默认值：REGION</p>
                     * @param _auditScope <p>流量镜像审计范围</p><p>枚举值：</p><ul><li>ALL： 全地域</li><li>REGION： 资产所在地域</li><li>VPC： 资产所在VPC</li></ul><p>默认值：REGION</p>
                     * 
                     */
                    void SetAuditScope(const std::string& _auditScope);

                    /**
                     * 判断参数 AuditScope 是否已赋值
                     * @return AuditScope 是否已赋值
                     * 
                     */
                    bool AuditScopeHasBeenSet() const;

                    /**
                     * 获取<p>实例集群ID</p>
                     * @return InstanceGroupId <p>实例集群ID</p>
                     * 
                     */
                    std::string GetInstanceGroupId() const;

                    /**
                     * 设置<p>实例集群ID</p>
                     * @param _instanceGroupId <p>实例集群ID</p>
                     * 
                     */
                    void SetInstanceGroupId(const std::string& _instanceGroupId);

                    /**
                     * 判断参数 InstanceGroupId 是否已赋值
                     * @return InstanceGroupId 是否已赋值
                     * 
                     */
                    bool InstanceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>该资产所在的资产组</p>
                     * @return AssetGroups <p>该资产所在的资产组</p>
                     * 
                     */
                    std::vector<IdWithName> GetAssetGroups() const;

                    /**
                     * 设置<p>该资产所在的资产组</p>
                     * @param _assetGroups <p>该资产所在的资产组</p>
                     * 
                     */
                    void SetAssetGroups(const std::vector<IdWithName>& _assetGroups);

                    /**
                     * 判断参数 AssetGroups 是否已赋值
                     * @return AssetGroups 是否已赋值
                     * 
                     */
                    bool AssetGroupsHasBeenSet() const;

                private:

                    /**
                     * <p>创建时间</p>
                     */
                    uint64_t m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>资产 ID</p>
                     */
                    uint64_t m_aid;
                    bool m_aidHasBeenSet;

                    /**
                     * <p>数据资产 IP</p>
                     */
                    std::string m_assetsIp;
                    bool m_assetsIpHasBeenSet;

                    /**
                     * <p>数据资产名称</p>
                     */
                    std::string m_assetsName;
                    bool m_assetsNameHasBeenSet;

                    /**
                     * <p>数据资产端口</p>
                     */
                    uint64_t m_assetsPort;
                    bool m_assetsPortHasBeenSet;

                    /**
                     * <p>数据资产类型</p>
                     */
                    std::string m_assetsType;
                    bool m_assetsTypeHasBeenSet;

                    /**
                     * <p>资产版本</p>
                     */
                    std::string m_assetsVersion;
                    bool m_assetsVersionHasBeenSet;

                    /**
                     * <p>是否动态</p>
                     */
                    uint64_t m_assetsAddType;
                    bool m_assetsAddTypeHasBeenSet;

                    /**
                     * <p>是否删除</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>最后一次修改时间</p>
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>资产的vpc</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * <p>审计权限</p>
                     */
                    int64_t m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>用来区分自建资产是已通过cvm还是添加ip的方式</p>
                     */
                    uint64_t m_addType;
                    bool m_addTypeHasBeenSet;

                    /**
                     * <p>子网Id</p>
                     */
                    std::string m_assetSubnetId;
                    bool m_assetSubnetIdHasBeenSet;

                    /**
                     * <p>是否已上传数据库私钥（0 否，1 是）</p>
                     */
                    int64_t m_uploadPem;
                    bool m_uploadPemHasBeenSet;

                    /**
                     * <p>资产状态栏 0:正常 1:已删除（目前仅对tencentDB有效）</p>
                     */
                    int64_t m_aliveStatus;
                    bool m_aliveStatusHasBeenSet;

                    /**
                     * <p>开启agent(0:关闭;1:开启)</p>
                     */
                    uint64_t m_agentOn;
                    bool m_agentOnHasBeenSet;

                    /**
                     * <p>开启agent(0:关闭;1:开启)</p>
                     */
                    uint64_t m_casbOn;
                    bool m_casbOnHasBeenSet;

                    /**
                     * <p>只读组/集群ID</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>PROXY_OFF: 未开启Casb代理;PROXY_ERROR:Casb代理接口返回异常;PROXY_BOUND:已绑定;PROXY_UNBOUND:未绑定;UNPAID:未购买;UNSUPPORTED:类型不支持;METADATA_NOT_FOUND:元数据不存在;QUOTA_EXCEEDED:Casb额度不足</p>
                     */
                    std::string m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>cdbOn</p>
                     */
                    uint64_t m_cdbOn;
                    bool m_cdbOnHasBeenSet;

                    /**
                     * <p>平台位数 32位 64位</p>
                     */
                    std::string m_dbPlatform;
                    bool m_dbPlatformHasBeenSet;

                    /**
                     * <p>编码</p>
                     */
                    std::string m_dbCharset;
                    bool m_dbCharsetHasBeenSet;

                    /**
                     * <p>操作系统</p>
                     */
                    std::string m_osPolicy;
                    bool m_osPolicyHasBeenSet;

                    /**
                     * <p>是否开启双向审计</p>
                     */
                    int64_t m_bidirectionOn;
                    bool m_bidirectionOnHasBeenSet;

                    /**
                     * <p>最大返回行数</p>
                     */
                    int64_t m_bidirectionMaxLine;
                    bool m_bidirectionMaxLineHasBeenSet;

                    /**
                     * <p>最大返回大小</p>
                     */
                    int64_t m_bidirectionMaxStorage;
                    bool m_bidirectionMaxStorageHasBeenSet;

                    /**
                     * <p>是否允许开通双向审计(1.允许；0不允许)</p>
                     */
                    int64_t m_bidirectionAllow;
                    bool m_bidirectionAllowHasBeenSet;

                    /**
                     * <p>启双向审计的日志投递(1.开启;0.关闭)</p>
                     */
                    uint64_t m_bidirectionDelivery;
                    bool m_bidirectionDeliveryHasBeenSet;

                    /**
                     * <p>只读状态</p>
                     */
                    std::string m_roStatus;
                    bool m_roStatusHasBeenSet;

                    /**
                     * <p>当前资产是否开启了对当前Agent的采集策略</p>
                     */
                    bool m_agentBound;
                    bool m_agentBoundHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_cdbErrorMsg;
                    bool m_cdbErrorMsgHasBeenSet;

                    /**
                     * <p>资产 DSGC 绑定信息</p>
                     */
                    DsgcBindingInfo m_dsgcBindingInfo;
                    bool m_dsgcBindingInfoHasBeenSet;

                    /**
                     * <p>绑定的规则Ids</p>
                     */
                    std::vector<IdWithName> m_bindingRules;
                    bool m_bindingRulesHasBeenSet;

                    /**
                     * <p>绑定的模型Ids</p>
                     */
                    std::vector<IdWithName> m_bindingModels;
                    bool m_bindingModelsHasBeenSet;

                    /**
                     * <p>所属组名</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>资产组Id</p>
                     */
                    uint64_t m_assetGroupId;
                    bool m_assetGroupIdHasBeenSet;

                    /**
                     * <p>是否是新云原生审计流程</p>
                     */
                    bool m_isNewCloudAudit;
                    bool m_isNewCloudAuditHasBeenSet;

                    /**
                     * <p>1</p><p>取值范围：[0, 1]</p>
                     */
                    int64_t m_trafficMirrorOn;
                    bool m_trafficMirrorOnHasBeenSet;

                    /**
                     * <p>流量镜像审计范围</p><p>枚举值：</p><ul><li>ALL： 全地域</li><li>REGION： 资产所在地域</li><li>VPC： 资产所在VPC</li></ul><p>默认值：REGION</p>
                     */
                    std::string m_auditScope;
                    bool m_auditScopeHasBeenSet;

                    /**
                     * <p>实例集群ID</p>
                     */
                    std::string m_instanceGroupId;
                    bool m_instanceGroupIdHasBeenSet;

                    /**
                     * <p>该资产所在的资产组</p>
                     */
                    std::vector<IdWithName> m_assetGroups;
                    bool m_assetGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDS_V20180420_MODEL_ASSETSINFO_H_
