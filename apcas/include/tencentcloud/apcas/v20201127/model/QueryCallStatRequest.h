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

#ifndef TENCENTCLOUD_APCAS_V20201127_MODEL_QUERYCALLSTATREQUEST_H_
#define TENCENTCLOUD_APCAS_V20201127_MODEL_QUERYCALLSTATREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apcas
    {
        namespace V20201127
        {
            namespace Model
            {
                /**
                * QueryCallStat请求参数结构体
                */
                class QueryCallStatRequest : public AbstractModel
                {
                public:
                    QueryCallStatRequest();
                    ~QueryCallStatRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     * @return Type 请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     * @param _type 请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取开始时间戳（毫秒）
                     * @return StartTime 开始时间戳（毫秒）
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间戳（毫秒）
                     * @param _startTime 开始时间戳（毫秒）
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间戳（毫秒）
                     * @return EndTime 结束时间戳（毫秒）
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳（毫秒）
                     * @param _endTime 结束时间戳（毫秒）
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 请求类型 1:人群特征洞察统计 2:购车意向预测统计
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 开始时间戳（毫秒）
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳（毫秒）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APCAS_V20201127_MODEL_QUERYCALLSTATREQUEST_H_
