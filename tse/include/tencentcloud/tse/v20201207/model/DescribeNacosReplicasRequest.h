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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENACOSREPLICASREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENACOSREPLICASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeNacosReplicas请求参数结构体
                */
                class DescribeNacosReplicasRequest : public AbstractModel
                {
                public:
                    DescribeNacosReplicasRequest();
                    ~DescribeNacosReplicasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取引擎实例ID
                     * @return InstanceId 引擎实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置引擎实例ID
                     * @param _instanceId 引擎实例ID
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
                     * 获取副本列表Limit
                     * @return Limit 副本列表Limit
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置副本列表Limit
                     * @param _limit 副本列表Limit
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取副本列表Offset
                     * @return Offset 副本列表Offset
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置副本列表Offset
                     * @param _offset 副本列表Offset
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 引擎实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 副本列表Limit
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 副本列表Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBENACOSREPLICASREQUEST_H_
