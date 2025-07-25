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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDIAGDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDIAGDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/InstanceInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeDiagDBInstances返回参数结构体
                */
                class DescribeDiagDBInstancesResponse : public AbstractModel
                {
                public:
                    DescribeDiagDBInstancesResponse();
                    ~DescribeDiagDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例总数。
                     * @return TotalCount 实例总数。
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
                     * 获取全实例巡检状态：0：开启全实例巡检；1：未开启全实例巡检。
                     * @return DbScanStatus 全实例巡检状态：0：开启全实例巡检；1：未开启全实例巡检。
                     * 
                     */
                    int64_t GetDbScanStatus() const;

                    /**
                     * 判断参数 DbScanStatus 是否已赋值
                     * @return DbScanStatus 是否已赋值
                     * 
                     */
                    bool DbScanStatusHasBeenSet() const;

                    /**
                     * 获取实例相关信息。
                     * @return Items 实例相关信息。
                     * 
                     */
                    std::vector<InstanceInfo> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 实例总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 全实例巡检状态：0：开启全实例巡检；1：未开启全实例巡检。
                     */
                    int64_t m_dbScanStatus;
                    bool m_dbScanStatusHasBeenSet;

                    /**
                     * 实例相关信息。
                     */
                    std::vector<InstanceInfo> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEDIAGDBINSTANCESRESPONSE_H_
