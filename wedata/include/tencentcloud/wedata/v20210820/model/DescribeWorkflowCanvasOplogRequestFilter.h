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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWCANVASOPLOGREQUESTFILTER_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWCANVASOPLOGREQUESTFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeWorkflowCanvasOplogRequestFilter
                */
                class DescribeWorkflowCanvasOplogRequestFilter : public AbstractModel
                {
                public:
                    DescribeWorkflowCanvasOplogRequestFilter();
                    ~DescribeWorkflowCanvasOplogRequestFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取开始时间，时间戳，精确到秒
                     * @return StartTime 开始时间，时间戳，精确到秒
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间，时间戳，精确到秒
                     * @param _startTime 开始时间，时间戳，精确到秒
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
                     * 获取开始时间，时间戳，精确到秒
                     * @return EndTime 开始时间，时间戳，精确到秒
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置开始时间，时间戳，精确到秒
                     * @param _endTime 开始时间，时间戳，精确到秒
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
                     * 获取排序类型，asc 或者 desc，不填默认为 asc
                     * @return OrderType 排序类型，asc 或者 desc，不填默认为 asc
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置排序类型，asc 或者 desc，不填默认为 asc
                     * @param _orderType 排序类型，asc 或者 desc，不填默认为 asc
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取操作人ID，用来过滤
                     * @return OperatorIds 操作人ID，用来过滤
                     * 
                     */
                    std::vector<int64_t> GetOperatorIds() const;

                    /**
                     * 设置操作人ID，用来过滤
                     * @param _operatorIds 操作人ID，用来过滤
                     * 
                     */
                    void SetOperatorIds(const std::vector<int64_t>& _operatorIds);

                    /**
                     * 判断参数 OperatorIds 是否已赋值
                     * @return OperatorIds 是否已赋值
                     * 
                     */
                    bool OperatorIdsHasBeenSet() const;

                private:

                    /**
                     * 开始时间，时间戳，精确到秒
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 开始时间，时间戳，精确到秒
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 排序类型，asc 或者 desc，不填默认为 asc
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 操作人ID，用来过滤
                     */
                    std::vector<int64_t> m_operatorIds;
                    bool m_operatorIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEWORKFLOWCANVASOPLOGREQUESTFILTER_H_
