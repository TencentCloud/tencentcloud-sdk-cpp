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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEPODCONTAINERINFO_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEPODCONTAINERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 边缘节点Pod容器信息
                */
                class EdgeNodePodContainerInfo : public AbstractModel
                {
                public:
                    EdgeNodePodContainerInfo();
                    ~EdgeNodePodContainerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name Pod名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取镜像（含版本号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Image 镜像（含版本号）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置镜像（含版本号）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _image 镜像（含版本号）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuRequest CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuRequest() const;

                    /**
                     * 设置CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuRequest CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuRequest(const std::string& _cpuRequest);

                    /**
                     * 判断参数 CpuRequest 是否已赋值
                     * @return CpuRequest 是否已赋值
                     * 
                     */
                    bool CpuRequestHasBeenSet() const;

                    /**
                     * 获取CPU Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuLimit CPU Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCpuLimit() const;

                    /**
                     * 设置CPU Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuLimit CPU Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuLimit(const std::string& _cpuLimit);

                    /**
                     * 判断参数 CpuLimit 是否已赋值
                     * @return CpuLimit 是否已赋值
                     * 
                     */
                    bool CpuLimitHasBeenSet() const;

                    /**
                     * 获取Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemoryRequest Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemoryRequest() const;

                    /**
                     * 设置Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memoryRequest Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemoryRequest(const std::string& _memoryRequest);

                    /**
                     * 判断参数 MemoryRequest 是否已赋值
                     * @return MemoryRequest 是否已赋值
                     * 
                     */
                    bool MemoryRequestHasBeenSet() const;

                    /**
                     * 获取Memory Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MemoryLimit Memory Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMemoryLimit() const;

                    /**
                     * 设置Memory Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _memoryLimit Memory Limit
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMemoryLimit(const std::string& _memoryLimit);

                    /**
                     * 判断参数 MemoryLimit 是否已赋值
                     * @return MemoryLimit 是否已赋值
                     * 
                     */
                    bool MemoryLimitHasBeenSet() const;

                    /**
                     * 获取重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RestartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRestartCount() const;

                    /**
                     * 设置重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _restartCount 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRestartCount(const uint64_t& _restartCount);

                    /**
                     * 判断参数 RestartCount 是否已赋值
                     * @return RestartCount 是否已赋值
                     * 
                     */
                    bool RestartCountHasBeenSet() const;

                    /**
                     * 获取容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * Pod名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 容器ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 镜像（含版本号）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * CPU Request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuRequest;
                    bool m_cpuRequestHasBeenSet;

                    /**
                     * CPU Limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cpuLimit;
                    bool m_cpuLimitHasBeenSet;

                    /**
                     * Memory Request
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memoryRequest;
                    bool m_memoryRequestHasBeenSet;

                    /**
                     * Memory Limit
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_memoryLimit;
                    bool m_memoryLimitHasBeenSet;

                    /**
                     * 重启次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_restartCount;
                    bool m_restartCountHasBeenSet;

                    /**
                     * 容器状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EDGENODEPODCONTAINERINFO_H_
