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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_REPLICAINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_REPLICAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 副本信息
                */
                class ReplicaInfo : public AbstractModel
                {
                public:
                    ReplicaInfo();
                    ~ReplicaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>期望副本数</p>
                     * @return Desired <p>期望副本数</p>
                     * 
                     */
                    uint64_t GetDesired() const;

                    /**
                     * 设置<p>期望副本数</p>
                     * @param _desired <p>期望副本数</p>
                     * 
                     */
                    void SetDesired(const uint64_t& _desired);

                    /**
                     * 判断参数 Desired 是否已赋值
                     * @return Desired 是否已赋值
                     * 
                     */
                    bool DesiredHasBeenSet() const;

                    /**
                     * 获取<p>可用（就绪）副本数</p>
                     * @return Available <p>可用（就绪）副本数</p>
                     * 
                     */
                    uint64_t GetAvailable() const;

                    /**
                     * 设置<p>可用（就绪）副本数</p>
                     * @param _available <p>可用（就绪）副本数</p>
                     * 
                     */
                    void SetAvailable(const uint64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * <p>期望副本数</p>
                     */
                    uint64_t m_desired;
                    bool m_desiredHasBeenSet;

                    /**
                     * <p>可用（就绪）副本数</p>
                     */
                    uint64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_REPLICAINFO_H_
