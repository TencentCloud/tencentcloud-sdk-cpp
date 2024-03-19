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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPHONEALARMFLOWTOTALCOUNTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPHONEALARMFLOWTOTALCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePhoneAlarmFlowTotalCount请求参数结构体
                */
                class DescribePhoneAlarmFlowTotalCountRequest : public AbstractModel
                {
                public:
                    DescribePhoneAlarmFlowTotalCountRequest();
                    ~DescribePhoneAlarmFlowTotalCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取默认monitor
                     * @return Module 默认monitor
                     * 
                     */
                    std::string GetModule() const;

                    /**
                     * 设置默认monitor
                     * @param _module 默认monitor
                     * 
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     * 
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取unix时间戳，单位：s
                     * @return QueryTime unix时间戳，单位：s
                     * 
                     */
                    int64_t GetQueryTime() const;

                    /**
                     * 设置unix时间戳，单位：s
                     * @param _queryTime unix时间戳，单位：s
                     * 
                     */
                    void SetQueryTime(const int64_t& _queryTime);

                    /**
                     * 判断参数 QueryTime 是否已赋值
                     * @return QueryTime 是否已赋值
                     * 
                     */
                    bool QueryTimeHasBeenSet() const;

                private:

                    /**
                     * 默认monitor
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * unix时间戳，单位：s
                     */
                    int64_t m_queryTime;
                    bool m_queryTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPHONEALARMFLOWTOTALCOUNTREQUEST_H_
