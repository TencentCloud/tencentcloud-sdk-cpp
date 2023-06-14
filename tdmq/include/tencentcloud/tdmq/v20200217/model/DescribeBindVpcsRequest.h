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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEBINDVPCSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEBINDVPCSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeBindVpcs请求参数结构体
                */
                class DescribeBindVpcsRequest : public AbstractModel
                {
                public:
                    DescribeBindVpcsRequest();
                    ~DescribeBindVpcsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始下标，不填默认为0。
                     * @return Offset 起始下标，不填默认为0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置起始下标，不填默认为0。
                     * @param _offset 起始下标，不填默认为0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，不填则默认为10，最大值为20。
                     * @return Limit 返回数量，不填则默认为10，最大值为20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，不填则默认为10，最大值为20。
                     * @param _limit 返回数量，不填则默认为10，最大值为20。
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
                     * 获取Pulsar 集群的ID
                     * @return ClusterId Pulsar 集群的ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Pulsar 集群的ID
                     * @param _clusterId Pulsar 集群的ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 起始下标，不填默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，不填则默认为10，最大值为20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pulsar 集群的ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEBINDVPCSREQUEST_H_
