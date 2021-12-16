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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 续费磁盘包年包月相关参数设置
                */
                class RenewDiskChargePrepaid : public AbstractModel
                {
                public:
                    RenewDiskChargePrepaid();
                    ~RenewDiskChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新购周期
                     * @return Period 新购周期
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置新购周期
                     * @param Period 新购周期
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取续费标识
                     * @return RenewFlag 续费标识
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置续费标识
                     * @param RenewFlag 续费标识
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取周期单位. 默认值: "m"
                     * @return TimeUnit 周期单位. 默认值: "m"
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置周期单位. 默认值: "m"
                     * @param TimeUnit 周期单位. 默认值: "m"
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取当前实例到期时间
                     * @return CurInstanceDeadline 当前实例到期时间
                     */
                    std::string GetCurInstanceDeadline() const;

                    /**
                     * 设置当前实例到期时间
                     * @param CurInstanceDeadline 当前实例到期时间
                     */
                    void SetCurInstanceDeadline(const std::string& _curInstanceDeadline);

                    /**
                     * 判断参数 CurInstanceDeadline 是否已赋值
                     * @return CurInstanceDeadline 是否已赋值
                     */
                    bool CurInstanceDeadlineHasBeenSet() const;

                private:

                    /**
                     * 新购周期
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 续费标识
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 周期单位. 默认值: "m"
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 当前实例到期时间
                     */
                    std::string m_curInstanceDeadline;
                    bool m_curInstanceDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_
