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

#ifndef TENCENTCLOUD_VDB_V20230616_MODEL_RECOVERINSTANCEREQUEST_H_
#define TENCENTCLOUD_VDB_V20230616_MODEL_RECOVERINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vdb
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * RecoverInstance请求参数结构体
                */
                class RecoverInstanceRequest : public AbstractModel
                {
                public:
                    RecoverInstanceRequest();
                    ~RecoverInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定待恢复的实例 ID。
                     * @return InstanceId 指定待恢复的实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置指定待恢复的实例 ID。
                     * @param _instanceId 指定待恢复的实例 ID。
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
                     * 获取若实例为包年包月计费，需通过该参数指定续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * @return PayPeriod 若实例为包年包月计费，需通过该参数指定续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * 
                     */
                    int64_t GetPayPeriod() const;

                    /**
                     * 设置若实例为包年包月计费，需通过该参数指定续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * @param _payPeriod 若实例为包年包月计费，需通过该参数指定续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     * 
                     */
                    void SetPayPeriod(const int64_t& _payPeriod);

                    /**
                     * 判断参数 PayPeriod 是否已赋值
                     * @return PayPeriod 是否已赋值
                     * 
                     */
                    bool PayPeriodHasBeenSet() const;

                private:

                    /**
                     * 指定待恢复的实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 若实例为包年包月计费，需通过该参数指定续费的时长。
- 单位：月。
- 取值范围：1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36。默认为1。
                     */
                    int64_t m_payPeriod;
                    bool m_payPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VDB_V20230616_MODEL_RECOVERINSTANCEREQUEST_H_
