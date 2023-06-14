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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_ACTIVEHOURDCDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_ACTIVEHOURDCDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ActiveHourDCDBInstance请求参数结构体
                */
                class ActiveHourDCDBInstanceRequest : public AbstractModel
                {
                public:
                    ActiveHourDCDBInstanceRequest();
                    ~ActiveHourDCDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待升级的实例ID列表。形如：["dcdbt-ow728lmc"]，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @return InstanceIds 待升级的实例ID列表。形如：["dcdbt-ow728lmc"]，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置待升级的实例ID列表。形如：["dcdbt-ow728lmc"]，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * @param _instanceIds 待升级的实例ID列表。形如：["dcdbt-ow728lmc"]，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 待升级的实例ID列表。形如：["dcdbt-ow728lmc"]，可以通过 DescribeDCDBInstances 查询实例详情获得。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_ACTIVEHOURDCDBINSTANCEREQUEST_H_
