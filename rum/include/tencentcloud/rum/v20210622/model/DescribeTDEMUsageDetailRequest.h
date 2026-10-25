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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMUSAGEDETAILREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMUSAGEDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMUsageDetail请求参数结构体
                */
                class DescribeTDEMUsageDetailRequest : public AbstractModel
                {
                public:
                    DescribeTDEMUsageDetailRequest();
                    ~DescribeTDEMUsageDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开始时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
                     * @return StartTime <p>开始时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
                     * @param _startTime <p>开始时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
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
                     * 获取<p>结束时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
                     * @return EndTime <p>结束时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
                     * @param _endTime <p>结束时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
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
                     * 获取<p>可选关键字，匹配业务系统名称、应用名称或应用 ID</p>
                     * @return Keyword <p>可选关键字，匹配业务系统名称、应用名称或应用 ID</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>可选关键字，匹配业务系统名称、应用名称或应用 ID</p>
                     * @param _keyword <p>可选关键字，匹配业务系统名称、应用名称或应用 ID</p>
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移，默认 0</p>
                     * @return Offset <p>分页偏移，默认 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移，默认 0</p>
                     * @param _offset <p>分页偏移，默认 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>每页数量，默认 20，上限 100</p>
                     * @return Limit <p>每页数量，默认 20，上限 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页数量，默认 20，上限 100</p>
                     * @param _limit <p>每页数量，默认 20，上限 100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>演示模式开关</p>
                     * @return DemoMode <p>演示模式开关</p>
                     * 
                     */
                    bool GetDemoMode() const;

                    /**
                     * 设置<p>演示模式开关</p>
                     * @param _demoMode <p>演示模式开关</p>
                     * 
                     */
                    void SetDemoMode(const bool& _demoMode);

                    /**
                     * 判断参数 DemoMode 是否已赋值
                     * @return DemoMode 是否已赋值
                     * 
                     */
                    bool DemoModeHasBeenSet() const;

                private:

                    /**
                     * <p>开始时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，YYYY-MM-DD HH:00:00（小时对齐，必填）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>可选关键字，匹配业务系统名称、应用名称或应用 ID</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>分页偏移，默认 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页数量，默认 20，上限 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>演示模式开关</p>
                     */
                    bool m_demoMode;
                    bool m_demoModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMUSAGEDETAILREQUEST_H_
