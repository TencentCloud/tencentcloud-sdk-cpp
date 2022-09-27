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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFINANCIALDATAURLREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFINANCIALDATAURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryFinancialDataUrl请求参数结构体
                */
                class QueryFinancialDataUrlRequest : public AbstractModel
                {
                public:
                    QueryFinancialDataUrlRequest();
                    ~QueryFinancialDataUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据查询范围:结束时间
                     * @return EndTime 数据查询范围:结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置数据查询范围:结束时间
                     * @param EndTime 数据查询范围:结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取数据查询范围:开始时间
                     * @return StartTime 数据查询范围:开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置数据查询范围:开始时间
                     * @param StartTime 数据查询范围:开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取数据类型：ADDED_INVOICE_REPORT  增值税开票数据，NATURAL_FINANCE_REPORT 自然人金融数据
                     * @return DataType 数据类型：ADDED_INVOICE_REPORT  增值税开票数据，NATURAL_FINANCE_REPORT 自然人金融数据
                     */
                    std::string GetDataType() const;

                    /**
                     * 设置数据类型：ADDED_INVOICE_REPORT  增值税开票数据，NATURAL_FINANCE_REPORT 自然人金融数据
                     * @param DataType 数据类型：ADDED_INVOICE_REPORT  增值税开票数据，NATURAL_FINANCE_REPORT 自然人金融数据
                     */
                    void SetDataType(const std::string& _dataType);

                    /**
                     * 判断参数 DataType 是否已赋值
                     * @return DataType 是否已赋值
                     */
                    bool DataTypeHasBeenSet() const;

                private:

                    /**
                     * 数据查询范围:结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 数据查询范围:开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 数据类型：ADDED_INVOICE_REPORT  增值税开票数据，NATURAL_FINANCE_REPORT 自然人金融数据
                     */
                    std::string m_dataType;
                    bool m_dataTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFINANCIALDATAURLREQUEST_H_
