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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DRILLEDRESOURCESTATUS_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DRILLEDRESOURCESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 演练组关联的演练资源的状态数量统计
                */
                class DrilledResourceStatus : public AbstractModel
                {
                public:
                    DrilledResourceStatus();
                    ~DrilledResourceStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取演练组关联的演练资源的状态
                     * @return ResourceStatus 演练组关联的演练资源的状态
                     * 
                     */
                    std::string GetResourceStatus() const;

                    /**
                     * 设置演练组关联的演练资源的状态
                     * @param _resourceStatus 演练组关联的演练资源的状态
                     * 
                     */
                    void SetResourceStatus(const std::string& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                    /**
                     * 获取演练组关联演练资源处于某个状态的数量
                     * @return ResourceCount 演练组关联演练资源处于某个状态的数量
                     * 
                     */
                    uint64_t GetResourceCount() const;

                    /**
                     * 设置演练组关联演练资源处于某个状态的数量
                     * @param _resourceCount 演练组关联演练资源处于某个状态的数量
                     * 
                     */
                    void SetResourceCount(const uint64_t& _resourceCount);

                    /**
                     * 判断参数 ResourceCount 是否已赋值
                     * @return ResourceCount 是否已赋值
                     * 
                     */
                    bool ResourceCountHasBeenSet() const;

                private:

                    /**
                     * 演练组关联的演练资源的状态
                     */
                    std::string m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                    /**
                     * 演练组关联演练资源处于某个状态的数量
                     */
                    uint64_t m_resourceCount;
                    bool m_resourceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DRILLEDRESOURCESTATUS_H_
