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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_COMPUTEINFO_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_COMPUTEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/ComputeResource.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * 资源相关信息
                */
                class ComputeInfo : public AbstractModel
                {
                public:
                    ComputeInfo();
                    ~ComputeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型及数量
                     * @return ComputeResources 资源类型及数量
                     * 
                     */
                    std::vector<ComputeResource> GetComputeResources() const;

                    /**
                     * 设置资源类型及数量
                     * @param _computeResources 资源类型及数量
                     * 
                     */
                    void SetComputeResources(const std::vector<ComputeResource>& _computeResources);

                    /**
                     * 判断参数 ComputeResources 是否已赋值
                     * @return ComputeResources 是否已赋值
                     * 
                     */
                    bool ComputeResourcesHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return Replicas 副本数
                     * 
                     */
                    int64_t GetReplicas() const;

                    /**
                     * 设置副本数
                     * @param _replicas 副本数
                     * 
                     */
                    void SetReplicas(const int64_t& _replicas);

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                private:

                    /**
                     * 资源类型及数量
                     */
                    std::vector<ComputeResource> m_computeResources;
                    bool m_computeResourcesHasBeenSet;

                    /**
                     * 副本数
                     */
                    int64_t m_replicas;
                    bool m_replicasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_COMPUTEINFO_H_
