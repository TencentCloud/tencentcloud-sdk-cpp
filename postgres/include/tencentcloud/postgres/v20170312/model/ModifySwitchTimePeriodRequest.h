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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYSWITCHTIMEPERIODREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYSWITCHTIMEPERIODREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifySwitchTimePeriod请求参数结构体
                */
                class ModifySwitchTimePeriodRequest : public AbstractModel
                {
                public:
                    ModifySwitchTimePeriodRequest();
                    ~ModifySwitchTimePeriodRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取处于等待切换状态中的实例ID
                     * @return DBInstanceId 处于等待切换状态中的实例ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置处于等待切换状态中的实例ID
                     * @param _dBInstanceId 处于等待切换状态中的实例ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取入参取值为 0 ，代表立即切换。
                     * @return SwitchTag 入参取值为 0 ，代表立即切换。
                     * 
                     */
                    uint64_t GetSwitchTag() const;

                    /**
                     * 设置入参取值为 0 ，代表立即切换。
                     * @param _switchTag 入参取值为 0 ，代表立即切换。
                     * 
                     */
                    void SetSwitchTag(const uint64_t& _switchTag);

                    /**
                     * 判断参数 SwitchTag 是否已赋值
                     * @return SwitchTag 是否已赋值
                     * 
                     */
                    bool SwitchTagHasBeenSet() const;

                private:

                    /**
                     * 处于等待切换状态中的实例ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 入参取值为 0 ，代表立即切换。
                     */
                    uint64_t m_switchTag;
                    bool m_switchTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYSWITCHTIMEPERIODREQUEST_H_
