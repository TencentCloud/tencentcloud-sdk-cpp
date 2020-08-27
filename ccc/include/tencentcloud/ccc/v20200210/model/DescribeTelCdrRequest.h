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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeTelCdr请求参数结构体
                */
                class DescribeTelCdrRequest : public AbstractModel
                {
                public:
                    DescribeTelCdrRequest();
                    ~DescribeTelCdrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param InstanceId 实例 ID
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取起始时间戳，Unix 时间戳
                     * @return StartTimeStamp 起始时间戳，Unix 时间戳
                     */
                    int64_t GetStartTimeStamp() const;

                    /**
                     * 设置起始时间戳，Unix 时间戳
                     * @param StartTimeStamp 起始时间戳，Unix 时间戳
                     */
                    void SetStartTimeStamp(const int64_t& _startTimeStamp);

                    /**
                     * 判断参数 StartTimeStamp 是否已赋值
                     * @return StartTimeStamp 是否已赋值
                     */
                    bool StartTimeStampHasBeenSet() const;

                    /**
                     * 获取结束时间戳，Unix 时间戳
                     * @return EndTimeStamp 结束时间戳，Unix 时间戳
                     */
                    int64_t GetEndTimeStamp() const;

                    /**
                     * 设置结束时间戳，Unix 时间戳
                     * @param EndTimeStamp 结束时间戳，Unix 时间戳
                     */
                    void SetEndTimeStamp(const int64_t& _endTimeStamp);

                    /**
                     * 判断参数 EndTimeStamp 是否已赋值
                     * @return EndTimeStamp 是否已赋值
                     */
                    bool EndTimeStampHasBeenSet() const;

                    /**
                     * 获取返回记录条数
                     * @return Limit 返回记录条数
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数
                     * @param Limit 返回记录条数
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param Offset 偏移量
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 起始时间戳，Unix 时间戳
                     */
                    int64_t m_startTimeStamp;
                    bool m_startTimeStampHasBeenSet;

                    /**
                     * 结束时间戳，Unix 时间戳
                     */
                    int64_t m_endTimeStamp;
                    bool m_endTimeStampHasBeenSet;

                    /**
                     * 返回记录条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBETELCDRREQUEST_H_
