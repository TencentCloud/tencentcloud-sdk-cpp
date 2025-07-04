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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENODEPROPERTYRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENODEPROPERTYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/NodeProperty.h>
#include <tencentcloud/mongodb/v20190725/model/ReplicateSetInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceNodeProperty返回参数结构体
                */
                class DescribeDBInstanceNodePropertyResponse : public AbstractModel
                {
                public:
                    DescribeDBInstanceNodePropertyResponse();
                    ~DescribeDBInstanceNodePropertyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Mongos节点属性。
                     * @return Mongos Mongos节点属性。
                     * 
                     */
                    std::vector<NodeProperty> GetMongos() const;

                    /**
                     * 判断参数 Mongos 是否已赋值
                     * @return Mongos 是否已赋值
                     * 
                     */
                    bool MongosHasBeenSet() const;

                    /**
                     * 获取副本集节点信息。
                     * @return ReplicateSets 副本集节点信息。
                     * 
                     */
                    std::vector<ReplicateSetInfo> GetReplicateSets() const;

                    /**
                     * 判断参数 ReplicateSets 是否已赋值
                     * @return ReplicateSets 是否已赋值
                     * 
                     */
                    bool ReplicateSetsHasBeenSet() const;

                private:

                    /**
                     * Mongos节点属性。
                     */
                    std::vector<NodeProperty> m_mongos;
                    bool m_mongosHasBeenSet;

                    /**
                     * 副本集节点信息。
                     */
                    std::vector<ReplicateSetInfo> m_replicateSets;
                    bool m_replicateSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENODEPROPERTYRESPONSE_H_
