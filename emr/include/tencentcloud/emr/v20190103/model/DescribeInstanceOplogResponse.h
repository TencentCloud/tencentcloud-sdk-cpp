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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCEOPLOGRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCEOPLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/OperationLog.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeInstanceOplog返回参数结构体
                */
                class DescribeInstanceOplogResponse : public AbstractModel
                {
                public:
                    DescribeInstanceOplogResponse();
                    ~DescribeInstanceOplogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取操作日志数量
                     * @return TotalCnt 操作日志数量
                     * 
                     */
                    int64_t GetTotalCnt() const;

                    /**
                     * 判断参数 TotalCnt 是否已赋值
                     * @return TotalCnt 是否已赋值
                     * 
                     */
                    bool TotalCntHasBeenSet() const;

                    /**
                     * 获取操作日志列表
                     * @return LogList 操作日志列表
                     * 
                     */
                    std::vector<OperationLog> GetLogList() const;

                    /**
                     * 判断参数 LogList 是否已赋值
                     * @return LogList 是否已赋值
                     * 
                     */
                    bool LogListHasBeenSet() const;

                    /**
                     * 获取操作对象筛选项数组
                     * @return OperandList 操作对象筛选项数组
                     * 
                     */
                    std::vector<std::string> GetOperandList() const;

                    /**
                     * 判断参数 OperandList 是否已赋值
                     * @return OperandList 是否已赋值
                     * 
                     */
                    bool OperandListHasBeenSet() const;

                    /**
                     * 获取安全级别筛选数组
                     * @return SecurityLevelList 安全级别筛选数组
                     * 
                     */
                    std::vector<std::string> GetSecurityLevelList() const;

                    /**
                     * 判断参数 SecurityLevelList 是否已赋值
                     * @return SecurityLevelList 是否已赋值
                     * 
                     */
                    bool SecurityLevelListHasBeenSet() const;

                private:

                    /**
                     * 操作日志数量
                     */
                    int64_t m_totalCnt;
                    bool m_totalCntHasBeenSet;

                    /**
                     * 操作日志列表
                     */
                    std::vector<OperationLog> m_logList;
                    bool m_logListHasBeenSet;

                    /**
                     * 操作对象筛选项数组
                     */
                    std::vector<std::string> m_operandList;
                    bool m_operandListHasBeenSet;

                    /**
                     * 安全级别筛选数组
                     */
                    std::vector<std::string> m_securityLevelList;
                    bool m_securityLevelListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEINSTANCEOPLOGRESPONSE_H_
