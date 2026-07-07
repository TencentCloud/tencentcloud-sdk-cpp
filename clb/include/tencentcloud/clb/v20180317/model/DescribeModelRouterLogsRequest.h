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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERLOGSREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeModelRouterLogs请求参数结构体
                */
                class DescribeModelRouterLogsRequest : public AbstractModel
                {
                public:
                    DescribeModelRouterLogsRequest();
                    ~DescribeModelRouterLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>模型路由实例ID</p>
                     * @return ModelRouterId <p>模型路由实例ID</p>
                     * 
                     */
                    std::string GetModelRouterId() const;

                    /**
                     * 设置<p>模型路由实例ID</p>
                     * @param _modelRouterId <p>模型路由实例ID</p>
                     * 
                     */
                    void SetModelRouterId(const std::string& _modelRouterId);

                    /**
                     * 判断参数 ModelRouterId 是否已赋值
                     * @return ModelRouterId 是否已赋值
                     * 
                     */
                    bool ModelRouterIdHasBeenSet() const;

                    /**
                     * 获取<p>Key的ID</p>
                     * @return KeyId <p>Key的ID</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>Key的ID</p>
                     * @param _keyId <p>Key的ID</p>
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取<p>模型名称</p>
                     * @return Model <p>模型名称</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型名称</p>
                     * @param _model <p>模型名称</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>请求状态</p>
                     * @return Status <p>请求状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>请求状态</p>
                     * @param _status <p>请求状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>开始时间，与EndTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
                     * @return StartTime <p>开始时间，与EndTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，与EndTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
                     * @param _startTime <p>开始时间，与EndTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
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
                     * 获取<p>结束时间，与StartTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
                     * @return EndTime <p>结束时间，与StartTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，与StartTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
                     * @param _endTime <p>结束时间，与StartTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
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
                     * 获取<p>游标NextToken</p>
                     * @return NextToken <p>游标NextToken</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>游标NextToken</p>
                     * @param _nextToken <p>游标NextToken</p>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取<p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @return MaxResults <p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    uint64_t GetMaxResults() const;

                    /**
                     * 设置<p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * @param _maxResults <p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     * 
                     */
                    void SetMaxResults(const uint64_t& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由实例ID</p>
                     */
                    std::string m_modelRouterId;
                    bool m_modelRouterIdHasBeenSet;

                    /**
                     * <p>Key的ID</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>模型名称</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>请求状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>开始时间，与EndTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，与StartTime需要同时传入、开始时间不得早于24小时前，默认仅查询近5分钟日志</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>游标NextToken</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * <p>本次查询最大数量</p><p>取值范围：[1, 100]</p><p>默认值：20</p>
                     */
                    uint64_t m_maxResults;
                    bool m_maxResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBEMODELROUTERLOGSREQUEST_H_
