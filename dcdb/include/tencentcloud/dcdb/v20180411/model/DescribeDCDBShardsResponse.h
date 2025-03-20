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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBSHARDSRESPONSE_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBSHARDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dcdb/v20180411/model/DCDBShardInfo.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * DescribeDCDBShards返回参数结构体
                */
                class DescribeDCDBShardsResponse : public AbstractModel
                {
                public:
                    DescribeDCDBShardsResponse();
                    ~DescribeDCDBShardsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的分片数量
                     * @return TotalCount 符合条件的分片数量
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
                     * 获取分片信息列表
                     * @return Shards 分片信息列表
                     * 
                     */
                    std::vector<DCDBShardInfo> GetShards() const;

                    /**
                     * 判断参数 Shards 是否已赋值
                     * @return Shards 是否已赋值
                     * 
                     */
                    bool ShardsHasBeenSet() const;

                    /**
                     * 获取灾备标志，0-无，1-主实例，2-灾备实例
                     * @return DcnFlag 灾备标志，0-无，1-主实例，2-灾备实例
                     * 
                     */
                    int64_t GetDcnFlag() const;

                    /**
                     * 判断参数 DcnFlag 是否已赋值
                     * @return DcnFlag 是否已赋值
                     * 
                     */
                    bool DcnFlagHasBeenSet() const;

                private:

                    /**
                     * 符合条件的分片数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 分片信息列表
                     */
                    std::vector<DCDBShardInfo> m_shards;
                    bool m_shardsHasBeenSet;

                    /**
                     * 灾备标志，0-无，1-主实例，2-灾备实例
                     */
                    int64_t m_dcnFlag;
                    bool m_dcnFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_DESCRIBEDCDBSHARDSRESPONSE_H_
