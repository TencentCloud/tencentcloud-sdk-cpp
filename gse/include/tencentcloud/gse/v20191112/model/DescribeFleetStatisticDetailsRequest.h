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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETSTATISTICDETAILSREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETSTATISTICDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeFleetStatisticDetails请求参数结构体
                */
                class DescribeFleetStatisticDetailsRequest : public AbstractModel
                {
                public:
                    DescribeFleetStatisticDetailsRequest();
                    ~DescribeFleetStatisticDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队ID
                     * @return FleetId 服务器舰队ID
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队ID
                     * @param _fleetId 服务器舰队ID
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，时间格式：YYYY-MM-DD hh:mm:ss
                     * @return BeginTime 查询开始时间，时间格式：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置查询开始时间，时间格式：YYYY-MM-DD hh:mm:ss
                     * @param _beginTime 查询开始时间，时间格式：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间，时间格式：YYYY-MM-DD hh:mm:ss
                     * @return EndTime 查询结束时间，时间格式：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询结束时间，时间格式：YYYY-MM-DD hh:mm:ss
                     * @param _endTime 查询结束时间，时间格式：YYYY-MM-DD hh:mm:ss
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取结果返回最大数量，最小值0，最大值100
                     * @return Limit 结果返回最大数量，最小值0，最大值100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置结果返回最大数量，最小值0，最大值100
                     * @param _limit 结果返回最大数量，最小值0，最大值100
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取返回结果偏移，最小值0
                     * @return Offset 返回结果偏移，最小值0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置返回结果偏移，最小值0
                     * @param _offset 返回结果偏移，最小值0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 查询开始时间，时间格式：YYYY-MM-DD hh:mm:ss
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 查询结束时间，时间格式：YYYY-MM-DD hh:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 结果返回最大数量，最小值0，最大值100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 返回结果偏移，最小值0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DESCRIBEFLEETSTATISTICDETAILSREQUEST_H_
