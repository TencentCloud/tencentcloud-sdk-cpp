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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_GETUPGRADEINSTANCEPROGRESSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_GETUPGRADEINSTANCEPROGRESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * GetUpgradeInstanceProgress请求参数结构体
                */
                class GetUpgradeInstanceProgressRequest : public AbstractModel
                {
                public:
                    GetUpgradeInstanceProgressRequest();
                    ~GetUpgradeInstanceProgressRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取最多获取多少个节点的进度
                     * @return Limit 最多获取多少个节点的进度
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最多获取多少个节点的进度
                     * @param _limit 最多获取多少个节点的进度
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取从第几个节点开始获取进度
                     * @return Offset 从第几个节点开始获取进度
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置从第几个节点开始获取进度
                     * @param _offset 从第几个节点开始获取进度
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 最多获取多少个节点的进度
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 从第几个节点开始获取进度
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_GETUPGRADEINSTANCEPROGRESSREQUEST_H_
