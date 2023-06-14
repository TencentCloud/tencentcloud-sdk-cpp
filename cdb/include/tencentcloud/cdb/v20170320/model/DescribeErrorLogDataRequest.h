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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEERRORLOGDATAREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEERRORLOGDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeErrorLogData请求参数结构体
                */
                class DescribeErrorLogDataRequest : public AbstractModel
                {
                public:
                    DescribeErrorLogDataRequest();
                    ~DescribeErrorLogDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 。
                     * @return InstanceId 实例 ID 。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID 。
                     * @param _instanceId 实例 ID 。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间戳。例如 1585142640 。
                     * @return StartTime 开始时间戳。例如 1585142640 。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间戳。例如 1585142640 。
                     * @param _startTime 开始时间戳。例如 1585142640 。
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
                     * 获取结束时间戳。例如 1585142640 。
                     * @return EndTime 结束时间戳。例如 1585142640 。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳。例如 1585142640 。
                     * @param _endTime 结束时间戳。例如 1585142640 。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取要匹配的关键字列表，最多支持15个关键字。
                     * @return KeyWords 要匹配的关键字列表，最多支持15个关键字。
                     * 
                     */
                    std::vector<std::string> GetKeyWords() const;

                    /**
                     * 设置要匹配的关键字列表，最多支持15个关键字。
                     * @param _keyWords 要匹配的关键字列表，最多支持15个关键字。
                     * 
                     */
                    void SetKeyWords(const std::vector<std::string>& _keyWords);

                    /**
                     * 判断参数 KeyWords 是否已赋值
                     * @return KeyWords 是否已赋值
                     * 
                     */
                    bool KeyWordsHasBeenSet() const;

                    /**
                     * 获取分页的返回数量，默认为100，最大为400。
                     * @return Limit 分页的返回数量，默认为100，最大为400。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页的返回数量，默认为100，最大为400。
                     * @param _limit 分页的返回数量，默认为100，最大为400。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     * @return InstType 仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     * 
                     */
                    std::string GetInstType() const;

                    /**
                     * 设置仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     * @param _instType 仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     * 
                     */
                    void SetInstType(const std::string& _instType);

                    /**
                     * 判断参数 InstType 是否已赋值
                     * @return InstType 是否已赋值
                     * 
                     */
                    bool InstTypeHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间戳。例如 1585142640 。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳。例如 1585142640 。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 要匹配的关键字列表，最多支持15个关键字。
                     */
                    std::vector<std::string> m_keyWords;
                    bool m_keyWordsHasBeenSet;

                    /**
                     * 分页的返回数量，默认为100，最大为400。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 仅在实例为主实例或者灾备实例时生效，可选值：slave，代表拉取从机的日志。
                     */
                    std::string m_instType;
                    bool m_instTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEERRORLOGDATAREQUEST_H_
