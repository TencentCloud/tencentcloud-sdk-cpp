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
                     * 获取无
                     * @return ID 无
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置无
                     * @param _iD 无
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
                     * 获取无
                     * @return InstanceID 无
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置无
                     * @param _instanceID 无
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
                     * 获取无
                     * @return AppID 无
                     * 
                     */
                    int64_t GetAppID() const;

                    /**
                     * 设置无
                     * @param _appID 无
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
                     * 获取无
                     * @return Uin 无
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置无
                     * @param _uin 无
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
                     * 获取无
                     * @return Component 无
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 设置无
                     * @param _component 无
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
                     * 获取无
                     * @return DeployMode 无
                     * 
                     */
                    int64_t GetDeployMode() const;

                    /**
                     * 设置无
                     * @param _deployMode 无
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
                     * 获取无
                     * @return SpecName 无
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置无
                     * @param _specName 无
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
                     * 获取无
                     * @return ResourceID 无
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置无
                     * @param _resourceID 无
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
                     * 获取无
                     * @return Status 无
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置无
                     * @param _status 无
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
                     * 获取无
                     * @return IP 无
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置无
                     * @param _iP 无
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
                     * 获取无
                     * @return CPU 无
                     * 
                     */
                    uint64_t GetCPU() const;

                    /**
                     * 设置无
                     * @param _cPU 无
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
                     * 获取无
                     * @return Memory 无
                     * 
                     */
                    uint64_t GetMemory() const;

                    /**
                     * 设置无
                     * @param _memory 无
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
                     * 获取无
                     * @return Storage 无
                     * 
                     */
                    uint64_t GetStorage() const;

                    /**
                     * 设置无
                     * @param _storage 无
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
                     * 获取无
                     * @return UUID 无
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置无
                     * @param _uUID 无
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
                     * 获取无
                     * @return Region 无
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置无
                     * @param _region 无
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
                     * 获取无
                     * @return Zone 无
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置无
                     * @param _zone 无
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
                     * 获取无
                     * @return Details 无
                     * 
                     */
                    std::string GetDetails() const;

                    /**
                     * 设置无
                     * @param _details 无
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
                     * 获取无
                     * @return CreateTime 无
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置无
                     * @param _createTime 无
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
                     * 获取无
                     * @return ModifyTime 无
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置无
                     * @param _modifyTime 无
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
                     * 获取无
                     * @return ExpireTime 无
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置无
                     * @param _expireTime 无
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
                     * 无
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_deployMode;
                    bool m_deployModeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 无
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 无
                     */
                    uint64_t m_cPU;
                    bool m_cPUHasBeenSet;

                    /**
                     * 无
                     */
                    uint64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 无
                     */
                    uint64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 无
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_CNRESOURCE_H_
