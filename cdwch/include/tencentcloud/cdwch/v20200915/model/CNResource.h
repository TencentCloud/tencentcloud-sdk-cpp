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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_CNRESOURCE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_CNRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 资源信息
                */
                class CNResource : public AbstractModel
                {
                public:
                    CNResource();
                    ~CNResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
                     * @return ID 资源id
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置资源id
                     * @param _iD 资源id
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取集群的id
                     * @return InstanceID 集群的id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置集群的id
                     * @param _instanceID 集群的id
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
                     * 获取用户appid
                     * @return AppID 用户appid
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置用户appid
                     * @param _appID 用户appid
                     * 
                     */
                    void SetAppID(const int64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取用户uin
                     * @return Uin 用户uin
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置用户uin
                     * @param _uin 用户uin
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
                     * 获取组件
                     * @return Component 组件
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置组件
                     * @param _component 组件
                     * 
                     */
                    void SetComponent(const std::string& _component);

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取部署模式
                     * @return DeployMode 部署模式
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置部署模式
                     * @param _deployMode 部署模式
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
                     * 获取规格名称
                     * @return SpecName 规格名称
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置规格名称
                     * @param _specName 规格名称
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return ResourceID 资源id
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置资源id
                     * @param _resourceID 资源id
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取资源的状态
                     * @return Status 资源的状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置资源的状态
                     * @param _status 资源的状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取私有网络ip
                     * @return IP 私有网络ip
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置私有网络ip
                     * @param _iP 私有网络ip
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
                     * 获取核数
                     * @return CPU 核数
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置核数
                     * @param _cPU 核数
                     * 
                     */
                    void SetCPU(const uint64_t& _cPU);

                    /**
                     * 判断参数 CPU 是否已赋值
                     * @return CPU 是否已赋值
                     * 
                     */
                    bool CPUHasBeenSet() const;

                    /**
                     * 获取内存
                     * @return Memory 内存
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置内存
                     * @param _memory 内存
                     * 
                     */
                    void SetMemory(const uint64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取存储大小
                     * @return Storage 存储大小
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置存储大小
                     * @param _storage 存储大小
                     * 
                     */
                    void SetStorage(const uint64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取服务器ID
                     * @return UUID 服务器ID
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置服务器ID
                     * @param _uUID 服务器ID
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取地区
                     * @return Zone 地区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地区
                     * @param _zone 地区
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
                     * 获取详细信息
                     * @return Details 详细信息
                     * 
                     */
                    std::string GetDetails() const;

                    /**
                     * 设置详细信息
                     * @param _details 详细信息
                     * 
                     */
                    void SetDetails(const std::string& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param _expireTime 过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 集群的id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 用户appid
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 用户uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 组件
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 部署模式
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 规格名称
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 资源id
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 资源的状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 私有网络ip
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 核数
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 内存
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 存储大小
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 服务器ID
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 地区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 详细信息
                     */
                    std::string m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_CNRESOURCE_H_
