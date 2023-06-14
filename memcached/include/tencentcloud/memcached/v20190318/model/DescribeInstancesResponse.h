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

#ifndef TENCENTCLOUD_MEMCACHED_V20190318_MODEL_DESCRIBEINSTANCESRESPONSE_H_
#define TENCENTCLOUD_MEMCACHED_V20190318_MODEL_DESCRIBEINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/memcached/v20190318/model/InstanceListInfo.h>


namespace TencentCloud
{
    namespace Memcached
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DescribeInstances返回参数结构体
                */
                class DescribeInstancesResponse : public AbstractModel
                {
                public:
                    DescribeInstancesResponse();
                    ~DescribeInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例详细信息列表
                     * @return InstanceList 实例详细信息列表
                     * 
                     */
                    std::vector<InstanceListInfo> GetInstanceList() const;

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                    /**
                     * 获取实例数量
                     * @return TotalNum 实例数量
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                private:

                    /**
                     * 实例详细信息列表
                     */
                    std::vector<InstanceListInfo> m_instanceList;
                    bool m_instanceListHasBeenSet;

                    /**
                     * 实例数量
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MEMCACHED_V20190318_MODEL_DESCRIBEINSTANCESRESPONSE_H_
