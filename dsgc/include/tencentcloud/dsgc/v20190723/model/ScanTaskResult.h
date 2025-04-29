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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_SCANTASKRESULT_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_SCANTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 扫描任务结果信息
                */
                class ScanTaskResult : public AbstractModel
                {
                public:
                    ScanTaskResult();
                    ~ScanTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务最新一次运行结果ID
                     * @return Id 任务最新一次运行结果ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置任务最新一次运行结果ID
                     * @param _id 任务最新一次运行结果ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务扫描结束的时间，格式如：2021-12-12 12:12:12
                     * @return EndTime 任务扫描结束的时间，格式如：2021-12-12 12:12:12
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务扫描结束的时间，格式如：2021-12-12 12:12:12
                     * @param _endTime 任务扫描结束的时间，格式如：2021-12-12 12:12:12
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
                     * 获取任务状态，-1待触发 0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * @return Status 任务状态，-1待触发 0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态，-1待触发 0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * @param _status 任务状态，-1待触发 0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取扫描任务结果展示，如果扫描失败，则显示失败原因
                     * @return Result 扫描任务结果展示，如果扫描失败，则显示失败原因
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置扫描任务结果展示，如果扫描失败，则显示失败原因
                     * @param _result 扫描任务结果展示，如果扫描失败，则显示失败原因
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取结果描述
                     * @return ResultDescription 结果描述
                     * 
                     */
                    std::string GetResultDescription() const;

                    /**
                     * 设置结果描述
                     * @param _resultDescription 结果描述
                     * 
                     */
                    void SetResultDescription(const std::string& _resultDescription);

                    /**
                     * 判断参数 ResultDescription 是否已赋值
                     * @return ResultDescription 是否已赋值
                     * 
                     */
                    bool ResultDescriptionHasBeenSet() const;

                    /**
                     * 获取结果建议
                     * @return Suggestion 结果建议
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置结果建议
                     * @param _suggestion 结果建议
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取扫描进度
                     * @return Progress 扫描进度
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置扫描进度
                     * @param _progress 扫描进度
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * 任务最新一次运行结果ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务扫描结束的时间，格式如：2021-12-12 12:12:12
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务状态，-1待触发 0待扫描 1扫描中 2扫描终止 3扫描成功 4扫描失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 扫描任务结果展示，如果扫描失败，则显示失败原因
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 结果描述
                     */
                    std::string m_resultDescription;
                    bool m_resultDescriptionHasBeenSet;

                    /**
                     * 结果建议
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 扫描进度
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_SCANTASKRESULT_H_
