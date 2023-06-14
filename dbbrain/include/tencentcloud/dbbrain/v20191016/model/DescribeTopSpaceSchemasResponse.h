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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBETOPSPACESCHEMASRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBETOPSPACESCHEMASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/SchemaSpaceData.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeTopSpaceSchemas返回参数结构体
                */
                class DescribeTopSpaceSchemasResponse : public AbstractModel
                {
                public:
                    DescribeTopSpaceSchemasResponse();
                    ~DescribeTopSpaceSchemasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的Top库空间统计信息列表。
                     * @return TopSpaceSchemas 返回的Top库空间统计信息列表。
                     * 
                     */
                    std::vector<SchemaSpaceData> GetTopSpaceSchemas() const;

                    /**
                     * 判断参数 TopSpaceSchemas 是否已赋值
                     * @return TopSpaceSchemas 是否已赋值
                     * 
                     */
                    bool TopSpaceSchemasHasBeenSet() const;

                    /**
                     * 获取采集库空间数据的时间戳（秒）。
                     * @return Timestamp 采集库空间数据的时间戳（秒）。
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                private:

                    /**
                     * 返回的Top库空间统计信息列表。
                     */
                    std::vector<SchemaSpaceData> m_topSpaceSchemas;
                    bool m_topSpaceSchemasHasBeenSet;

                    /**
                     * 采集库空间数据的时间戳（秒）。
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBETOPSPACESCHEMASRESPONSE_H_
