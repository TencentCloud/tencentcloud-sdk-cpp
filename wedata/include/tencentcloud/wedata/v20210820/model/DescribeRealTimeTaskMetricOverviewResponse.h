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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALTIMETASKMETRICOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALTIMETASKMETRICOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeRealTimeTaskMetricOverview返回参数结构体
                */
                class DescribeRealTimeTaskMetricOverviewResponse : public AbstractModel
                {
                public:
                    DescribeRealTimeTaskMetricOverviewResponse();
                    ~DescribeRealTimeTaskMetricOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总读取记录数
                     * @return TotalRecordNumOfRead 总读取记录数
                     * 
                     */
                    uint64_t GetTotalRecordNumOfRead() const;

                    /**
                     * 判断参数 TotalRecordNumOfRead 是否已赋值
                     * @return TotalRecordNumOfRead 是否已赋值
                     * 
                     */
                    bool TotalRecordNumOfReadHasBeenSet() const;

                    /**
                     * 获取总读取字节数
                     * @return TotalRecordByteNumOfRead 总读取字节数
                     * 
                     */
                    uint64_t GetTotalRecordByteNumOfRead() const;

                    /**
                     * 判断参数 TotalRecordByteNumOfRead 是否已赋值
                     * @return TotalRecordByteNumOfRead 是否已赋值
                     * 
                     */
                    bool TotalRecordByteNumOfReadHasBeenSet() const;

                    /**
                     * 获取总写入记录数
                     * @return TotalRecordNumOfWrite 总写入记录数
                     * 
                     */
                    uint64_t GetTotalRecordNumOfWrite() const;

                    /**
                     * 判断参数 TotalRecordNumOfWrite 是否已赋值
                     * @return TotalRecordNumOfWrite 是否已赋值
                     * 
                     */
                    bool TotalRecordNumOfWriteHasBeenSet() const;

                    /**
                     * 获取总写入字节数 单位字节
                     * @return TotalRecordByteNumOfWrite 总写入字节数 单位字节
                     * 
                     */
                    uint64_t GetTotalRecordByteNumOfWrite() const;

                    /**
                     * 判断参数 TotalRecordByteNumOfWrite 是否已赋值
                     * @return TotalRecordByteNumOfWrite 是否已赋值
                     * 
                     */
                    bool TotalRecordByteNumOfWriteHasBeenSet() const;

                    /**
                     * 获取总的脏记录数据
                     * @return TotalDirtyRecordNum 总的脏记录数据
                     * 
                     */
                    uint64_t GetTotalDirtyRecordNum() const;

                    /**
                     * 判断参数 TotalDirtyRecordNum 是否已赋值
                     * @return TotalDirtyRecordNum 是否已赋值
                     * 
                     */
                    bool TotalDirtyRecordNumHasBeenSet() const;

                    /**
                     * 获取总的脏字节数 单位字节
                     * @return TotalDirtyRecordByte 总的脏字节数 单位字节
                     * 
                     */
                    uint64_t GetTotalDirtyRecordByte() const;

                    /**
                     * 判断参数 TotalDirtyRecordByte 是否已赋值
                     * @return TotalDirtyRecordByte 是否已赋值
                     * 
                     */
                    bool TotalDirtyRecordByteHasBeenSet() const;

                    /**
                     * 获取运行时长 单位s
                     * @return TotalDuration 运行时长 单位s
                     * 
                     */
                    uint64_t GetTotalDuration() const;

                    /**
                     * 判断参数 TotalDuration 是否已赋值
                     * @return TotalDuration 是否已赋值
                     * 
                     */
                    bool TotalDurationHasBeenSet() const;

                    /**
                     * 获取开始运行时间
                     * @return BeginRunTime 开始运行时间
                     * 
                     */
                    std::string GetBeginRunTime() const;

                    /**
                     * 判断参数 BeginRunTime 是否已赋值
                     * @return BeginRunTime 是否已赋值
                     * 
                     */
                    bool BeginRunTimeHasBeenSet() const;

                    /**
                     * 获取目前运行到的时间
                     * @return EndRunTime 目前运行到的时间
                     * 
                     */
                    std::string GetEndRunTime() const;

                    /**
                     * 判断参数 EndRunTime 是否已赋值
                     * @return EndRunTime 是否已赋值
                     * 
                     */
                    bool EndRunTimeHasBeenSet() const;

                private:

                    /**
                     * 总读取记录数
                     */
                    uint64_t m_totalRecordNumOfRead;
                    bool m_totalRecordNumOfReadHasBeenSet;

                    /**
                     * 总读取字节数
                     */
                    uint64_t m_totalRecordByteNumOfRead;
                    bool m_totalRecordByteNumOfReadHasBeenSet;

                    /**
                     * 总写入记录数
                     */
                    uint64_t m_totalRecordNumOfWrite;
                    bool m_totalRecordNumOfWriteHasBeenSet;

                    /**
                     * 总写入字节数 单位字节
                     */
                    uint64_t m_totalRecordByteNumOfWrite;
                    bool m_totalRecordByteNumOfWriteHasBeenSet;

                    /**
                     * 总的脏记录数据
                     */
                    uint64_t m_totalDirtyRecordNum;
                    bool m_totalDirtyRecordNumHasBeenSet;

                    /**
                     * 总的脏字节数 单位字节
                     */
                    uint64_t m_totalDirtyRecordByte;
                    bool m_totalDirtyRecordByteHasBeenSet;

                    /**
                     * 运行时长 单位s
                     */
                    uint64_t m_totalDuration;
                    bool m_totalDurationHasBeenSet;

                    /**
                     * 开始运行时间
                     */
                    std::string m_beginRunTime;
                    bool m_beginRunTimeHasBeenSet;

                    /**
                     * 目前运行到的时间
                     */
                    std::string m_endRunTime;
                    bool m_endRunTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREALTIMETASKMETRICOVERVIEWRESPONSE_H_
