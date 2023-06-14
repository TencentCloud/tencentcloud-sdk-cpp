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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_PODSTATE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_PODSTATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 单个pod状态
                */
                class PodState : public AbstractModel
                {
                public:
                    PodState();
                    ~PodState() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取pod的名称
                     * @return Name pod的名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置pod的名称
                     * @param _name pod的名称
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
                     * 获取pod uuid
                     * @return Uuid pod uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置pod uuid
                     * @param _uuid pod uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取pod的状态
                     * @return State pod的状态
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置pod的状态
                     * @param _state pod的状态
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取pod处于该状态原因
                     * @return Reason pod处于该状态原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置pod处于该状态原因
                     * @param _reason pod处于该状态原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取pod所属集群
                     * @return OwnerCluster pod所属集群
                     * 
                     */
                    std::string GetOwnerCluster() const;

                    /**
                     * 设置pod所属集群
                     * @param _ownerCluster pod所属集群
                     * 
                     */
                    void SetOwnerCluster(const std::string& _ownerCluster);

                    /**
                     * 判断参数 OwnerCluster 是否已赋值
                     * @return OwnerCluster 是否已赋值
                     * 
                     */
                    bool OwnerClusterHasBeenSet() const;

                    /**
                     * 获取pod内存大小
                     * @return Memory pod内存大小
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置pod内存大小
                     * @param _memory pod内存大小
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                private:

                    /**
                     * pod的名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * pod uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * pod的状态
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * pod处于该状态原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * pod所属集群
                     */
                    std::string m_ownerCluster;
                    bool m_ownerClusterHasBeenSet;

                    /**
                     * pod内存大小
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_PODSTATE_H_
