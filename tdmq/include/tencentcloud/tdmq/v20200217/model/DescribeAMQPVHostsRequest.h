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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPVHOSTSREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPVHOSTSREQUEST_H_

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
                * DescribeAMQPVHosts请求参数结构体
                */
                class DescribeAMQPVHostsRequest : public AbstractModel
                {
                public:
                    DescribeAMQPVHostsRequest();
                    ~DescribeAMQPVHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数目
                     * @return Limit 限制数目
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数目
                     * @param Limit 限制数目
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取按名称搜索
                     * @return NameKeyword 按名称搜索
                     */
                    std::string GetNameKeyword() const;

                    /**
                     * 设置按名称搜索
                     * @param NameKeyword 按名称搜索
                     */
                    void SetNameKeyword(const std::string& _nameKeyword);

                    /**
                     * 判断参数 NameKeyword 是否已赋值
                     * @return NameKeyword 是否已赋值
                     */
                    bool NameKeywordHasBeenSet() const;

                    /**
                     * 获取VHostId 列表过滤
                     * @return VHostIdList VHostId 列表过滤
                     */
                    std::vector<std::string> GetVHostIdList() const;

                    /**
                     * 设置VHostId 列表过滤
                     * @param VHostIdList VHostId 列表过滤
                     */
                    void SetVHostIdList(const std::vector<std::string>& _vHostIdList);

                    /**
                     * 判断参数 VHostIdList 是否已赋值
                     * @return VHostIdList 是否已赋值
                     */
                    bool VHostIdListHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数目
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 按名称搜索
                     */
                    std::string m_nameKeyword;
                    bool m_nameKeywordHasBeenSet;

                    /**
                     * VHostId 列表过滤
                     */
                    std::vector<std::string> m_vHostIdList;
                    bool m_vHostIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEAMQPVHOSTSREQUEST_H_
