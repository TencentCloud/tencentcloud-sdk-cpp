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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACERESOURCEDTO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACERESOURCEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 工作空间资源结构
                */
                class WorkspaceResourceDTO : public AbstractModel
                {
                public:
                    WorkspaceResourceDTO();
                    ~WorkspaceResourceDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CPU核心数
                     * @return CpuCoreNumber CPU核心数
                     * 
                     */
                    uint64_t GetCpuCoreNumber() const;

                    /**
                     * 设置CPU核心数
                     * @param _cpuCoreNumber CPU核心数
                     * 
                     */
                    void SetCpuCoreNumber(const uint64_t& _cpuCoreNumber);

                    /**
                     * 判断参数 CpuCoreNumber 是否已赋值
                     * @return CpuCoreNumber 是否已赋值
                     * 
                     */
                    bool CpuCoreNumberHasBeenSet() const;

                    /**
                     * 获取一般内存
                     * @return NormalMemory 一般内存
                     * 
                     */
                    uint64_t GetNormalMemory() const;

                    /**
                     * 设置一般内存
                     * @param _normalMemory 一般内存
                     * 
                     */
                    void SetNormalMemory(const uint64_t& _normalMemory);

                    /**
                     * 判断参数 NormalMemory 是否已赋值
                     * @return NormalMemory 是否已赋值
                     * 
                     */
                    bool NormalMemoryHasBeenSet() const;

                    /**
                     * 获取系统存储
                     * @return SystemStorage 系统存储
                     * 
                     */
                    uint64_t GetSystemStorage() const;

                    /**
                     * 设置系统存储
                     * @param _systemStorage 系统存储
                     * 
                     */
                    void SetSystemStorage(const uint64_t& _systemStorage);

                    /**
                     * 判断参数 SystemStorage 是否已赋值
                     * @return SystemStorage 是否已赋值
                     * 
                     */
                    bool SystemStorageHasBeenSet() const;

                    /**
                     * 获取用户存储
                     * @return UserStorage 用户存储
                     * 
                     */
                    uint64_t GetUserStorage() const;

                    /**
                     * 设置用户存储
                     * @param _userStorage 用户存储
                     * 
                     */
                    void SetUserStorage(const uint64_t& _userStorage);

                    /**
                     * 判断参数 UserStorage 是否已赋值
                     * @return UserStorage 是否已赋值
                     * 
                     */
                    bool UserStorageHasBeenSet() const;

                    /**
                     * 获取GPU数
                     * @return GpuNumber GPU数
                     * 
                     */
                    uint64_t GetGpuNumber() const;

                    /**
                     * 设置GPU数
                     * @param _gpuNumber GPU数
                     * 
                     */
                    void SetGpuNumber(const uint64_t& _gpuNumber);

                    /**
                     * 判断参数 GpuNumber 是否已赋值
                     * @return GpuNumber 是否已赋值
                     * 
                     */
                    bool GpuNumberHasBeenSet() const;

                    /**
                     * 获取GPU内存
                     * @return GpuMemory GPU内存
                     * 
                     */
                    uint64_t GetGpuMemory() const;

                    /**
                     * 设置GPU内存
                     * @param _gpuMemory GPU内存
                     * 
                     */
                    void SetGpuMemory(const uint64_t& _gpuMemory);

                    /**
                     * 判断参数 GpuMemory 是否已赋值
                     * @return GpuMemory 是否已赋值
                     * 
                     */
                    bool GpuMemoryHasBeenSet() const;

                private:

                    /**
                     * CPU核心数
                     */
                    uint64_t m_cpuCoreNumber;
                    bool m_cpuCoreNumberHasBeenSet;

                    /**
                     * 一般内存
                     */
                    uint64_t m_normalMemory;
                    bool m_normalMemoryHasBeenSet;

                    /**
                     * 系统存储
                     */
                    uint64_t m_systemStorage;
                    bool m_systemStorageHasBeenSet;

                    /**
                     * 用户存储
                     */
                    uint64_t m_userStorage;
                    bool m_userStorageHasBeenSet;

                    /**
                     * GPU数
                     */
                    uint64_t m_gpuNumber;
                    bool m_gpuNumberHasBeenSet;

                    /**
                     * GPU内存
                     */
                    uint64_t m_gpuMemory;
                    bool m_gpuMemoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACERESOURCEDTO_H_
