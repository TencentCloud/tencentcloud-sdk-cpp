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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMONITORREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMONITORREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBackupMonitor请求参数结构体
                */
                class DescribeBackupMonitorRequest : public AbstractModel
                {
                public:
                    DescribeBackupMonitorRequest();
                    ~DescribeBackupMonitorRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份空间使用详情开始时间
                     * @return StartTime 备份空间使用详情开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置备份空间使用详情开始时间
                     * @param _startTime 备份空间使用详情开始时间
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
                     * 获取备份空间使用详情结束时间
                     * @return EndTime 备份空间使用详情结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置备份空间使用详情结束时间
                     * @param _endTime 备份空间使用详情结束时间
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
                     * 获取备份趋势查询类型，local-本地备份，cross-跨地域备份
                     * @return Type 备份趋势查询类型，local-本地备份，cross-跨地域备份
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置备份趋势查询类型，local-本地备份，cross-跨地域备份
                     * @param _type 备份趋势查询类型，local-本地备份，cross-跨地域备份
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 备份空间使用详情开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 备份空间使用详情结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 备份趋势查询类型，local-本地备份，cross-跨地域备份
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPMONITORREQUEST_H_
