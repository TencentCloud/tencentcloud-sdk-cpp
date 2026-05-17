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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMTRENDINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMTRENDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CosRiskInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * cos每日告警/风险信息
                */
                class CosAlarmTrendInfo : public AbstractModel
                {
                public:
                    CosAlarmTrendInfo();
                    ~CosAlarmTrendInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前日期字符串格式
                     * @return CurrentDateStr 当前日期字符串格式
                     * 
                     */
                    std::string GetCurrentDateStr() const;

                    /**
                     * 设置当前日期字符串格式
                     * @param _currentDateStr 当前日期字符串格式
                     * 
                     */
                    void SetCurrentDateStr(const std::string& _currentDateStr);

                    /**
                     * 判断参数 CurrentDateStr 是否已赋值
                     * @return CurrentDateStr 是否已赋值
                     * 
                     */
                    bool CurrentDateStrHasBeenSet() const;

                    /**
                     * 获取当前日期总数
                     * @return CurrentDayCount 当前日期总数
                     * 
                     */
                    int64_t GetCurrentDayCount() const;

                    /**
                     * 设置当前日期总数
                     * @param _currentDayCount 当前日期总数
                     * 
                     */
                    void SetCurrentDayCount(const int64_t& _currentDayCount);

                    /**
                     * 判断参数 CurrentDayCount 是否已赋值
                     * @return CurrentDayCount 是否已赋值
                     * 
                     */
                    bool CurrentDayCountHasBeenSet() const;

                    /**
                     * 获取当天告警分类详情
                     * @return CurrentDayOverView 当天告警分类详情
                     * 
                     */
                    std::vector<CosRiskInfo> GetCurrentDayOverView() const;

                    /**
                     * 设置当天告警分类详情
                     * @param _currentDayOverView 当天告警分类详情
                     * 
                     */
                    void SetCurrentDayOverView(const std::vector<CosRiskInfo>& _currentDayOverView);

                    /**
                     * 判断参数 CurrentDayOverView 是否已赋值
                     * @return CurrentDayOverView 是否已赋值
                     * 
                     */
                    bool CurrentDayOverViewHasBeenSet() const;

                private:

                    /**
                     * 当前日期字符串格式
                     */
                    std::string m_currentDateStr;
                    bool m_currentDateStrHasBeenSet;

                    /**
                     * 当前日期总数
                     */
                    int64_t m_currentDayCount;
                    bool m_currentDayCountHasBeenSet;

                    /**
                     * 当天告警分类详情
                     */
                    std::vector<CosRiskInfo> m_currentDayOverView;
                    bool m_currentDayOverViewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSALARMTRENDINFO_H_
