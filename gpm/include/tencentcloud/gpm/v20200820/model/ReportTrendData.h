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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_REPORTTRENDDATA_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_REPORTTRENDDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * 统计数据之趋势数据
                */
                class ReportTrendData : public AbstractModel
                {
                public:
                    ReportTrendData();
                    ~ReportTrendData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总次数
                     * @return TotalList 总次数
                     * 
                     */
                    std::vector<std::string> GetTotalList() const;

                    /**
                     * 设置总次数
                     * @param _totalList 总次数
                     * 
                     */
                    void SetTotalList(const std::vector<std::string>& _totalList);

                    /**
                     * 判断参数 TotalList 是否已赋值
                     * @return TotalList 是否已赋值
                     * 
                     */
                    bool TotalListHasBeenSet() const;

                    /**
                     * 获取被取消次数
                     * @return CancelList 被取消次数
                     * 
                     */
                    std::vector<std::string> GetCancelList() const;

                    /**
                     * 设置被取消次数
                     * @param _cancelList 被取消次数
                     * 
                     */
                    void SetCancelList(const std::vector<std::string>& _cancelList);

                    /**
                     * 判断参数 CancelList 是否已赋值
                     * @return CancelList 是否已赋值
                     * 
                     */
                    bool CancelListHasBeenSet() const;

                    /**
                     * 获取成功次数
                     * @return SuccessList 成功次数
                     * 
                     */
                    std::vector<std::string> GetSuccessList() const;

                    /**
                     * 设置成功次数
                     * @param _successList 成功次数
                     * 
                     */
                    void SetSuccessList(const std::vector<std::string>& _successList);

                    /**
                     * 判断参数 SuccessList 是否已赋值
                     * @return SuccessList 是否已赋值
                     * 
                     */
                    bool SuccessListHasBeenSet() const;

                    /**
                     * 获取失败次数
                     * @return FailList 失败次数
                     * 
                     */
                    std::vector<std::string> GetFailList() const;

                    /**
                     * 设置失败次数
                     * @param _failList 失败次数
                     * 
                     */
                    void SetFailList(const std::vector<std::string>& _failList);

                    /**
                     * 判断参数 FailList 是否已赋值
                     * @return FailList 是否已赋值
                     * 
                     */
                    bool FailListHasBeenSet() const;

                    /**
                     * 获取超时次数
                     * @return TimeoutList 超时次数
                     * 
                     */
                    std::vector<std::string> GetTimeoutList() const;

                    /**
                     * 设置超时次数
                     * @param _timeoutList 超时次数
                     * 
                     */
                    void SetTimeoutList(const std::vector<std::string>& _timeoutList);

                    /**
                     * 判断参数 TimeoutList 是否已赋值
                     * @return TimeoutList 是否已赋值
                     * 
                     */
                    bool TimeoutListHasBeenSet() const;

                    /**
                     * 获取时间数组，单位：秒
                     * @return TimeList 时间数组，单位：秒
                     * 
                     */
                    std::vector<std::string> GetTimeList() const;

                    /**
                     * 设置时间数组，单位：秒
                     * @param _timeList 时间数组，单位：秒
                     * 
                     */
                    void SetTimeList(const std::vector<std::string>& _timeList);

                    /**
                     * 判断参数 TimeList 是否已赋值
                     * @return TimeList 是否已赋值
                     * 
                     */
                    bool TimeListHasBeenSet() const;

                private:

                    /**
                     * 总次数
                     */
                    std::vector<std::string> m_totalList;
                    bool m_totalListHasBeenSet;

                    /**
                     * 被取消次数
                     */
                    std::vector<std::string> m_cancelList;
                    bool m_cancelListHasBeenSet;

                    /**
                     * 成功次数
                     */
                    std::vector<std::string> m_successList;
                    bool m_successListHasBeenSet;

                    /**
                     * 失败次数
                     */
                    std::vector<std::string> m_failList;
                    bool m_failListHasBeenSet;

                    /**
                     * 超时次数
                     */
                    std::vector<std::string> m_timeoutList;
                    bool m_timeoutListHasBeenSet;

                    /**
                     * 时间数组，单位：秒
                     */
                    std::vector<std::string> m_timeList;
                    bool m_timeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_REPORTTRENDDATA_H_
