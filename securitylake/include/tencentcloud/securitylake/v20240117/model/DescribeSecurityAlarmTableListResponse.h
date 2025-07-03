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

#ifndef TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_DESCRIBESECURITYALARMTABLELISTRESPONSE_H_
#define TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_DESCRIBESECURITYALARMTABLELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/securitylake/v20240117/model/SecurityAlarmTable.h>


namespace TencentCloud
{
    namespace Securitylake
    {
        namespace V20240117
        {
            namespace Model
            {
                /**
                * DescribeSecurityAlarmTableList返回参数结构体
                */
                class DescribeSecurityAlarmTableListResponse : public AbstractModel
                {
                public:
                    DescribeSecurityAlarmTableListResponse();
                    ~DescribeSecurityAlarmTableListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取字段列表
                     * @return AlarmList 字段列表
                     * 
                     */
                    std::vector<SecurityAlarmTable> GetAlarmList() const;

                    /**
                     * 判断参数 AlarmList 是否已赋值
                     * @return AlarmList 是否已赋值
                     * 
                     */
                    bool AlarmListHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return TotalCount 数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取限制
                     * @return Limit 限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移
                     * @return Offset 偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 字段列表
                     */
                    std::vector<SecurityAlarmTable> m_alarmList;
                    bool m_alarmListHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SECURITYLAKE_V20240117_MODEL_DESCRIBESECURITYALARMTABLELISTRESPONSE_H_
