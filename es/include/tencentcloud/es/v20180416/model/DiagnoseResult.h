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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSERESULT_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/JobParam.h>
#include <tencentcloud/es/v20180416/model/DiagnoseJobResult.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 智能运维诊断结果
                */
                class DiagnoseResult : public AbstractModel
                {
                public:
                    DiagnoseResult();
                    ~DiagnoseResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ES实例ID
                     * @return InstanceId ES实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES实例ID
                     * @param _instanceId ES实例ID
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
                     * 获取诊断报告ID
                     * @return RequestId 诊断报告ID
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置诊断报告ID
                     * @param _requestId 诊断报告ID
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取诊断触发时间
                     * @return CreateTime 诊断触发时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置诊断触发时间
                     * @param _createTime 诊断触发时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取诊断是否完成
                     * @return Completed 诊断是否完成
                     * 
                     */
                    bool GetCompleted() const;

                    /**
                     * 设置诊断是否完成
                     * @param _completed 诊断是否完成
                     * 
                     */
                    void SetCompleted(const bool& _completed);

                    /**
                     * 判断参数 Completed 是否已赋值
                     * @return Completed 是否已赋值
                     * 
                     */
                    bool CompletedHasBeenSet() const;

                    /**
                     * 获取诊断总得分
                     * @return Score 诊断总得分
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置诊断总得分
                     * @param _score 诊断总得分
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取诊断类型，2 定时诊断，3 客户手动触发诊断
                     * @return JobType 诊断类型，2 定时诊断，3 客户手动触发诊断
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置诊断类型，2 定时诊断，3 客户手动触发诊断
                     * @param _jobType 诊断类型，2 定时诊断，3 客户手动触发诊断
                     * 
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取诊断参数，如诊断时间，诊断索引等
                     * @return JobParam 诊断参数，如诊断时间，诊断索引等
                     * 
                     */
                    JobParam GetJobParam() const;

                    /**
                     * 设置诊断参数，如诊断时间，诊断索引等
                     * @param _jobParam 诊断参数，如诊断时间，诊断索引等
                     * 
                     */
                    void SetJobParam(const JobParam& _jobParam);

                    /**
                     * 判断参数 JobParam 是否已赋值
                     * @return JobParam 是否已赋值
                     * 
                     */
                    bool JobParamHasBeenSet() const;

                    /**
                     * 获取诊断项结果列表
                     * @return JobResults 诊断项结果列表
                     * 
                     */
                    std::vector<DiagnoseJobResult> GetJobResults() const;

                    /**
                     * 设置诊断项结果列表
                     * @param _jobResults 诊断项结果列表
                     * 
                     */
                    void SetJobResults(const std::vector<DiagnoseJobResult>& _jobResults);

                    /**
                     * 判断参数 JobResults 是否已赋值
                     * @return JobResults 是否已赋值
                     * 
                     */
                    bool JobResultsHasBeenSet() const;

                private:

                    /**
                     * ES实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 诊断报告ID
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 诊断触发时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 诊断是否完成
                     */
                    bool m_completed;
                    bool m_completedHasBeenSet;

                    /**
                     * 诊断总得分
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 诊断类型，2 定时诊断，3 客户手动触发诊断
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 诊断参数，如诊断时间，诊断索引等
                     */
                    JobParam m_jobParam;
                    bool m_jobParamHasBeenSet;

                    /**
                     * 诊断项结果列表
                     */
                    std::vector<DiagnoseJobResult> m_jobResults;
                    bool m_jobResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DIAGNOSERESULT_H_
