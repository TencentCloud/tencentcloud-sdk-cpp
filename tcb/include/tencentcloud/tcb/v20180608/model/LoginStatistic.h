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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_LOGINSTATISTIC_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_LOGINSTATISTIC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 终端用户登录新增统计
                */
                class LoginStatistic : public AbstractModel
                {
                public:
                    LoginStatistic();
                    ~LoginStatistic() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计类型 新增NEWUSER 和登录 LOGIN
                     * @return StatisticalType 统计类型 新增NEWUSER 和登录 LOGIN
                     * 
                     */
                    std::string GetStatisticalType() const;

                    /**
                     * 设置统计类型 新增NEWUSER 和登录 LOGIN
                     * @param _statisticalType 统计类型 新增NEWUSER 和登录 LOGIN
                     * 
                     */
                    void SetStatisticalType(const std::string& _statisticalType);

                    /**
                     * 判断参数 StatisticalType 是否已赋值
                     * @return StatisticalType 是否已赋值
                     * 
                     */
                    bool StatisticalTypeHasBeenSet() const;

                    /**
                     * 获取统计周期：日DAY，周WEEK，月MONTH
                     * @return StatisticalCycle 统计周期：日DAY，周WEEK，月MONTH
                     * 
                     */
                    std::string GetStatisticalCycle() const;

                    /**
                     * 设置统计周期：日DAY，周WEEK，月MONTH
                     * @param _statisticalCycle 统计周期：日DAY，周WEEK，月MONTH
                     * 
                     */
                    void SetStatisticalCycle(const std::string& _statisticalCycle);

                    /**
                     * 判断参数 StatisticalCycle 是否已赋值
                     * @return StatisticalCycle 是否已赋值
                     * 
                     */
                    bool StatisticalCycleHasBeenSet() const;

                    /**
                     * 获取统计总量
                     * @return Count 统计总量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置统计总量
                     * @param _count 统计总量
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 统计类型 新增NEWUSER 和登录 LOGIN
                     */
                    std::string m_statisticalType;
                    bool m_statisticalTypeHasBeenSet;

                    /**
                     * 统计周期：日DAY，周WEEK，月MONTH
                     */
                    std::string m_statisticalCycle;
                    bool m_statisticalCycleHasBeenSet;

                    /**
                     * 统计总量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_LOGINSTATISTIC_H_
