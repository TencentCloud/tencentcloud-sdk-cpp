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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBELOGSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DescribeLogs请求参数结构体
                */
                class DescribeLogsRequest : public AbstractModel
                {
                public:
                    DescribeLogsRequest();
                    ~DescribeLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 设置设备TID
                     * @param _tid 设备TID
                     * 
                     */
                    void SetTid(const std::string& _tid);

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取当前分页的最大条数,0<取值范围<=100
                     * @return Limit 当前分页的最大条数,0<取值范围<=100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置当前分页的最大条数,0<取值范围<=100
                     * @param _limit 当前分页的最大条数,0<取值范围<=100
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
                     * 获取分页偏移量,取值范围>0
                     * @return Offset 分页偏移量,取值范围>0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量,取值范围>0
                     * @param _offset 分页偏移量,取值范围>0
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
                     * 获取日志类型 1.在线状态变更 2.ProConst变更 3.ProWritable变更 4.Action控制 5.ProReadonly变更 6.Event事件
                     * @return LogType 日志类型 1.在线状态变更 2.ProConst变更 3.ProWritable变更 4.Action控制 5.ProReadonly变更 6.Event事件
                     * 
                     */
                    uint64_t GetLogType() const;

                    /**
                     * 设置日志类型 1.在线状态变更 2.ProConst变更 3.ProWritable变更 4.Action控制 5.ProReadonly变更 6.Event事件
                     * @param _logType 日志类型 1.在线状态变更 2.ProConst变更 3.ProWritable变更 4.Action控制 5.ProReadonly变更 6.Event事件
                     * 
                     */
                    void SetLogType(const uint64_t& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取查询的起始时间 UNIX时间戳，单位秒
                     * @return StartTime 查询的起始时间 UNIX时间戳，单位秒
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置查询的起始时间 UNIX时间戳，单位秒
                     * @param _startTime 查询的起始时间 UNIX时间戳，单位秒
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
                     * 获取物模型对象索引，用于模糊查询，字符长度<=255，每层节点的字符长度<=16
                     * @return DataObject 物模型对象索引，用于模糊查询，字符长度<=255，每层节点的字符长度<=16
                     * 
                     */
                    std::string GetDataObject() const;

                    /**
                     * 设置物模型对象索引，用于模糊查询，字符长度<=255，每层节点的字符长度<=16
                     * @param _dataObject 物模型对象索引，用于模糊查询，字符长度<=255，每层节点的字符长度<=16
                     * 
                     */
                    void SetDataObject(const std::string& _dataObject);

                    /**
                     * 判断参数 DataObject 是否已赋值
                     * @return DataObject 是否已赋值
                     * 
                     */
                    bool DataObjectHasBeenSet() const;

                    /**
                     * 获取查询的结束时间 UNIX时间戳，单位秒
                     * @return EndTime 查询的结束时间 UNIX时间戳，单位秒
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置查询的结束时间 UNIX时间戳，单位秒
                     * @param _endTime 查询的结束时间 UNIX时间戳，单位秒
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
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 当前分页的最大条数,0<取值范围<=100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量,取值范围>0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 日志类型 1.在线状态变更 2.ProConst变更 3.ProWritable变更 4.Action控制 5.ProReadonly变更 6.Event事件
                     */
                    uint64_t m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 查询的起始时间 UNIX时间戳，单位秒
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 物模型对象索引，用于模糊查询，字符长度<=255，每层节点的字符长度<=16
                     */
                    std::string m_dataObject;
                    bool m_dataObjectHasBeenSet;

                    /**
                     * 查询的结束时间 UNIX时间戳，单位秒
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DESCRIBELOGSREQUEST_H_
