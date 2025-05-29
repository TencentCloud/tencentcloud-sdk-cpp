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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERREADONLYRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERREADONLYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ClusterReadOnlyValue.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterReadOnly返回参数结构体
                */
                class DescribeClusterReadOnlyResponse : public AbstractModel
                {
                public:
                    DescribeClusterReadOnlyResponse();
                    ~DescribeClusterReadOnlyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群只读开关列表
                     * @return ClusterReadOnlyValues 集群只读开关列表
                     * 
                     */
                    std::vector<ClusterReadOnlyValue> GetClusterReadOnlyValues() const;

                    /**
                     * 判断参数 ClusterReadOnlyValues 是否已赋值
                     * @return ClusterReadOnlyValues 是否已赋值
                     * 
                     */
                    bool ClusterReadOnlyValuesHasBeenSet() const;

                private:

                    /**
                     * 集群只读开关列表
                     */
                    std::vector<ClusterReadOnlyValue> m_clusterReadOnlyValues;
                    bool m_clusterReadOnlyValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERREADONLYRESPONSE_H_
