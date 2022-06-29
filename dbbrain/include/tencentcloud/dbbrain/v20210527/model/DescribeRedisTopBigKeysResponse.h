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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPBIGKEYSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPBIGKEYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/RedisKeySpaceData.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeRedisTopBigKeys返回参数结构体
                */
                class DescribeRedisTopBigKeysResponse : public AbstractModel
                {
                public:
                    DescribeRedisTopBigKeysResponse();
                    ~DescribeRedisTopBigKeysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取top key列表。
                     * @return TopKeys top key列表。
                     */
                    std::vector<RedisKeySpaceData> GetTopKeys() const;

                    /**
                     * 判断参数 TopKeys 是否已赋值
                     * @return TopKeys 是否已赋值
                     */
                    bool TopKeysHasBeenSet() const;

                    /**
                     * 获取采集时间戳（秒）。
                     * @return Timestamp 采集时间戳（秒）。
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * top key列表。
                     */
                    std::vector<RedisKeySpaceData> m_topKeys;
                    bool m_topKeysHasBeenSet;

                    /**
                     * 采集时间戳（秒）。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPBIGKEYSRESPONSE_H_
