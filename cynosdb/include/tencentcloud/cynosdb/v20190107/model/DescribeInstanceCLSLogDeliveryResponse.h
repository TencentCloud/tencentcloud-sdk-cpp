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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCECLSLOGDELIVERYRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCECLSLOGDELIVERYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InstanceCLSDeliveryInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeInstanceCLSLogDelivery返回参数结构体
                */
                class DescribeInstanceCLSLogDeliveryResponse : public AbstractModel
                {
                public:
                    DescribeInstanceCLSLogDeliveryResponse();
                    ~DescribeInstanceCLSLogDeliveryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量

                     * @return TotalCount 总数量

                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取实例投递信息

                     * @return InstanceCLSDeliveryInfos 实例投递信息

                     * 
                     */
                    std::vector<InstanceCLSDeliveryInfo> GetInstanceCLSDeliveryInfos() const;

                    /**
                     * 判断参数 InstanceCLSDeliveryInfos 是否已赋值
                     * @return InstanceCLSDeliveryInfos 是否已赋值
                     * 
                     */
                    bool InstanceCLSDeliveryInfosHasBeenSet() const;

                private:

                    /**
                     * 总数量

                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例投递信息

                     */
                    std::vector<InstanceCLSDeliveryInfo> m_instanceCLSDeliveryInfos;
                    bool m_instanceCLSDeliveryInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEINSTANCECLSLOGDELIVERYRESPONSE_H_
