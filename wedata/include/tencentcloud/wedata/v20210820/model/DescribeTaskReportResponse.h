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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKREPORTRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKREPORTRESPONSE_H_

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
                * DescribeTaskReport返回参数结构体
                */
                class DescribeTaskReportResponse : public AbstractModel
                {
                public:
                    DescribeTaskReportResponse();
                    ~DescribeTaskReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总读取条数
                     * @return TotalReadRecords 总读取条数
                     */
                    uint64_t GetTotalReadRecords() const;

                    /**
                     * 判断参数 TotalReadRecords 是否已赋值
                     * @return TotalReadRecords 是否已赋值
                     */
                    bool TotalReadRecordsHasBeenSet() const;

                    /**
                     * 获取总读取字节数，单位为Byte
                     * @return TotalReadBytes 总读取字节数，单位为Byte
                     */
                    uint64_t GetTotalReadBytes() const;

                    /**
                     * 判断参数 TotalReadBytes 是否已赋值
                     * @return TotalReadBytes 是否已赋值
                     */
                    bool TotalReadBytesHasBeenSet() const;

                    /**
                     * 获取总写入条数
                     * @return TotalWriteRecords 总写入条数
                     */
                    uint64_t GetTotalWriteRecords() const;

                    /**
                     * 判断参数 TotalWriteRecords 是否已赋值
                     * @return TotalWriteRecords 是否已赋值
                     */
                    bool TotalWriteRecordsHasBeenSet() const;

                    /**
                     * 获取总写入字节数，单位为Byte
                     * @return TotalWriteBytes 总写入字节数，单位为Byte
                     */
                    uint64_t GetTotalWriteBytes() const;

                    /**
                     * 判断参数 TotalWriteBytes 是否已赋值
                     * @return TotalWriteBytes 是否已赋值
                     */
                    bool TotalWriteBytesHasBeenSet() const;

                    /**
                     * 获取总脏数据条数
                     * @return TotalErrorRecords 总脏数据条数
                     */
                    uint64_t GetTotalErrorRecords() const;

                    /**
                     * 判断参数 TotalErrorRecords 是否已赋值
                     * @return TotalErrorRecords 是否已赋值
                     */
                    bool TotalErrorRecordsHasBeenSet() const;

                private:

                    /**
                     * 总读取条数
                     */
                    uint64_t m_totalReadRecords;
                    bool m_totalReadRecordsHasBeenSet;

                    /**
                     * 总读取字节数，单位为Byte
                     */
                    uint64_t m_totalReadBytes;
                    bool m_totalReadBytesHasBeenSet;

                    /**
                     * 总写入条数
                     */
                    uint64_t m_totalWriteRecords;
                    bool m_totalWriteRecordsHasBeenSet;

                    /**
                     * 总写入字节数，单位为Byte
                     */
                    uint64_t m_totalWriteBytes;
                    bool m_totalWriteBytesHasBeenSet;

                    /**
                     * 总脏数据条数
                     */
                    uint64_t m_totalErrorRecords;
                    bool m_totalErrorRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKREPORTRESPONSE_H_
