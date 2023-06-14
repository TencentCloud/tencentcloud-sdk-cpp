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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATERESOURCEINSTANCESREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATERESOURCEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateResourceInstances请求参数结构体
                */
                class CreateResourceInstancesRequest : public AbstractModel
                {
                public:
                    CreateResourceInstancesRequest();
                    ~CreateResourceInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源类型id。13624：加固专业版。
                     * @return Pid 资源类型id。13624：加固专业版。
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置资源类型id。13624：加固专业版。
                     * @param _pid 资源类型id。13624：加固专业版。
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取时间单位，取值为d，m，y，分别表示天，月，年。
                     * @return TimeUnit 时间单位，取值为d，m，y，分别表示天，月，年。
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置时间单位，取值为d，m，y，分别表示天，月，年。
                     * @param _timeUnit 时间单位，取值为d，m，y，分别表示天，月，年。
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取时间数量。
                     * @return TimeSpan 时间数量。
                     * 
                     */
                    uint64_t GetTimeSpan() const;

                    /**
                     * 设置时间数量。
                     * @param _timeSpan 时间数量。
                     * 
                     */
                    void SetTimeSpan(const uint64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取资源数量。
                     * @return ResourceNum 资源数量。
                     * 
                     */
                    uint64_t GetResourceNum() const;

                    /**
                     * 设置资源数量。
                     * @param _resourceNum 资源数量。
                     * 
                     */
                    void SetResourceNum(const uint64_t& _resourceNum);

                    /**
                     * 判断参数 ResourceNum 是否已赋值
                     * @return ResourceNum 是否已赋值
                     * 
                     */
                    bool ResourceNumHasBeenSet() const;

                private:

                    /**
                     * 资源类型id。13624：加固专业版。
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 时间单位，取值为d，m，y，分别表示天，月，年。
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 时间数量。
                     */
                    uint64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 资源数量。
                     */
                    uint64_t m_resourceNum;
                    bool m_resourceNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATERESOURCEINSTANCESREQUEST_H_
