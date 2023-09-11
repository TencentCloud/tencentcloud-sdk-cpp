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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEHASWITCHLOGREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEHASWITCHLOGREQUEST_H_

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
                * DescribeHASwitchLog请求参数结构体
                */
                class DescribeHASwitchLogRequest : public AbstractModel
                {
                public:
                    DescribeHASwitchLogRequest();
                    ~DescribeHASwitchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取开始时间(yyyy-MM-dd HH:mm:ss)
                     * @return StartTime 开始时间(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间(yyyy-MM-dd HH:mm:ss)
                     * @param _startTime 开始时间(yyyy-MM-dd HH:mm:ss)
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
                     * 获取结束时间(yyyy-MM-dd HH:mm:ss)
                     * @return EndTime 结束时间(yyyy-MM-dd HH:mm:ss)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间(yyyy-MM-dd HH:mm:ss)
                     * @param _endTime 结束时间(yyyy-MM-dd HH:mm:ss)
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
                     * 获取切换模式 0-系统自动切换，1-手动切换，不填默认查全部。
                     * @return SwitchType 切换模式 0-系统自动切换，1-手动切换，不填默认查全部。
                     * 
                     */
                    uint64_t GetSwitchType() const;

                    /**
                     * 设置切换模式 0-系统自动切换，1-手动切换，不填默认查全部。
                     * @param _switchType 切换模式 0-系统自动切换，1-手动切换，不填默认查全部。
                     * 
                     */
                    void SetSwitchType(const uint64_t& _switchType);

                    /**
                     * 判断参数 SwitchType 是否已赋值
                     * @return SwitchType 是否已赋值
                     * 
                     */
                    bool SwitchTypeHasBeenSet() const;

                    /**
                     * 获取分页，页大小
                     * @return Limit 分页，页大小
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页，页大小
                     * @param _limit 分页，页大小
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
                     * 获取分页,页数
                     * @return Offset 分页,页数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页,页数
                     * @param _offset 分页,页数
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
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 开始时间(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间(yyyy-MM-dd HH:mm:ss)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 切换模式 0-系统自动切换，1-手动切换，不填默认查全部。
                     */
                    uint64_t m_switchType;
                    bool m_switchTypeHasBeenSet;

                    /**
                     * 分页，页大小
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页,页数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEHASWITCHLOGREQUEST_H_
