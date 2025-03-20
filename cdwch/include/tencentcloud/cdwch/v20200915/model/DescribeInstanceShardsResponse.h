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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCESHARDSRESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCESHARDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeInstanceShards返回参数结构体
                */
                class DescribeInstanceShardsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceShardsResponse();
                    ~DescribeInstanceShardsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例shard信息
                     * @return InstanceShardsList 实例shard信息
                     * 
                     */
                    std::string GetInstanceShardsList() const;

                    /**
                     * 判断参数 InstanceShardsList 是否已赋值
                     * @return InstanceShardsList 是否已赋值
                     * 
                     */
                    bool InstanceShardsListHasBeenSet() const;

                private:

                    /**
                     * 实例shard信息
                     */
                    std::string m_instanceShardsList;
                    bool m_instanceShardsListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCESHARDSRESPONSE_H_
