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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDHISTORYREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDHISTORYREQUEST_H_

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
                * DescribeCpuExpandHistory请求参数结构体
                */
                class DescribeCpuExpandHistoryRequest : public AbstractModel
                {
                public:
                    DescribeCpuExpandHistoryRequest();
                    ~DescribeCpuExpandHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return InstanceId 实例 ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _instanceId 实例 ID
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
                     * 获取扩容策略，值包括：all，manual，auto
                     * @return ExpandStrategy 扩容策略，值包括：all，manual，auto
                     * 
                     */
                    std::string GetExpandStrategy() const;

                    /**
                     * 设置扩容策略，值包括：all，manual，auto
                     * @param _expandStrategy 扩容策略，值包括：all，manual，auto
                     * 
                     */
                    void SetExpandStrategy(const std::string& _expandStrategy);

                    /**
                     * 判断参数 ExpandStrategy 是否已赋值
                     * @return ExpandStrategy 是否已赋值
                     * 
                     */
                    bool ExpandStrategyHasBeenSet() const;

                    /**
                     * 获取扩容状态，值包括：all，extend，reduce，extend_failed
                     * @return Status 扩容状态，值包括：all，extend，reduce，extend_failed
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置扩容状态，值包括：all，extend，reduce，extend_failed
                     * @param _status 扩容状态，值包括：all，extend，reduce，extend_failed
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取查询的开始时间。只能查看30天内的扩容历史
                     * @return StartTime 查询的开始时间。只能查看30天内的扩容历史
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询的开始时间。只能查看30天内的扩容历史
                     * @param _startTime 查询的开始时间。只能查看30天内的扩容历史
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询的结束时间。只能查看30天内的扩容历史
                     * @return EndTime 查询的结束时间。只能查看30天内的扩容历史
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询的结束时间。只能查看30天内的扩容历史
                     * @param _endTime 查询的结束时间。只能查看30天内的扩容历史
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取分页入参
                     * @return Offset 分页入参
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页入参
                     * @param _offset 分页入参
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页入参
                     * @return Limit 分页入参
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页入参
                     * @param _limit 分页入参
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 扩容策略，值包括：all，manual，auto
                     */
                    std::string m_expandStrategy;
                    bool m_expandStrategyHasBeenSet;

                    /**
                     * 扩容状态，值包括：all，extend，reduce，extend_failed
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 查询的开始时间。只能查看30天内的扩容历史
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询的结束时间。只能查看30天内的扩容历史
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页入参
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页入参
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDHISTORYREQUEST_H_
