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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEEVENTSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDataEngineEvents请求参数结构体
                */
                class DescribeDataEngineEventsRequest : public AbstractModel
                {
                public:
                    DescribeDataEngineEventsRequest();
                    ~DescribeDataEngineEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>虚拟集群名称</p>
                     * @return DataEngineName <p>虚拟集群名称</p>
                     * 
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置<p>虚拟集群名称</p>
                     * @param _dataEngineName <p>虚拟集群名称</p>
                     * 
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     * 
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取<p>返回数量，默认为10，最大为100</p>
                     * @return Limit <p>返回数量，默认为10，最大为100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为10，最大为100</p>
                     * @param _limit <p>返回数量，默认为10，最大为100</p>
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
                     * 获取<p>偏移量，默认为0</p>
                     * @return Offset <p>偏移量，默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认为0</p>
                     * @param _offset <p>偏移量，默认为0</p>
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
                     * 获取<p>资源组id</p>
                     * @return SessionId <p>资源组id</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>资源组id</p>
                     * @param _sessionId <p>资源组id</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>查询开始时间，用于筛选资源组启停事件的时间范围，不传则不限制开始时间</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     * @return StartTime <p>查询开始时间，用于筛选资源组启停事件的时间范围，不传则不限制开始时间</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间，用于筛选资源组启停事件的时间范围，不传则不限制开始时间</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     * @param _startTime <p>查询开始时间，用于筛选资源组启停事件的时间范围，不传则不限制开始时间</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>查询结束时间，用于筛选资源组启停事件的时间范围，不传则不限制结束时间。需大于等于 StartTime</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     * @return EndTime <p>查询结束时间，用于筛选资源组启停事件的时间范围，不传则不限制结束时间。需大于等于 StartTime</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间，用于筛选资源组启停事件的时间范围，不传则不限制结束时间。需大于等于 StartTime</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     * @param _endTime <p>查询结束时间，用于筛选资源组启停事件的时间范围，不传则不限制结束时间。需大于等于 StartTime</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * <p>虚拟集群名称</p>
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * <p>返回数量，默认为10，最大为100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>资源组id</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>查询开始时间，用于筛选资源组启停事件的时间范围，不传则不限制开始时间</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间，用于筛选资源组启停事件的时间范围，不传则不限制结束时间。需大于等于 StartTime</p><p>参数格式：YYYY-mm-dd HH:MM:SS</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDATAENGINEEVENTSREQUEST_H_
