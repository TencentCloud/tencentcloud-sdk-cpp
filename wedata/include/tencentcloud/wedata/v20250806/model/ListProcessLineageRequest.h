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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROCESSLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROCESSLINEAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListProcessLineage请求参数结构体
                */
                class ListProcessLineageRequest : public AbstractModel
                {
                public:
                    ListProcessLineageRequest();
                    ~ListProcessLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务唯一ID</p>
                     * @return ProcessId <p>任务唯一ID</p>
                     * 
                     */
                    std::string GetProcessId() const;

                    /**
                     * 设置<p>任务唯一ID</p>
                     * @param _processId <p>任务唯一ID</p>
                     * 
                     */
                    void SetProcessId(const std::string& _processId);

                    /**
                     * 判断参数 ProcessId 是否已赋值
                     * @return ProcessId 是否已赋值
                     * 
                     */
                    bool ProcessIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型    //调度任务     SCHEDULE_TASK,     //集成任务     INTEGRATION_TASK,     //第三方上报     THIRD_REPORT,     //数据建模     TABLE_MODEL,     //模型创建指标     MODEL_METRIC,     //原子指标创建衍生指标     METRIC_METRIC,     //数据服务     DATA_SERVICE</p>
                     * @return ProcessType <p>任务类型    //调度任务     SCHEDULE_TASK,     //集成任务     INTEGRATION_TASK,     //第三方上报     THIRD_REPORT,     //数据建模     TABLE_MODEL,     //模型创建指标     MODEL_METRIC,     //原子指标创建衍生指标     METRIC_METRIC,     //数据服务     DATA_SERVICE</p>
                     * 
                     */
                    std::string GetProcessType() const;

                    /**
                     * 设置<p>任务类型    //调度任务     SCHEDULE_TASK,     //集成任务     INTEGRATION_TASK,     //第三方上报     THIRD_REPORT,     //数据建模     TABLE_MODEL,     //模型创建指标     MODEL_METRIC,     //原子指标创建衍生指标     METRIC_METRIC,     //数据服务     DATA_SERVICE</p>
                     * @param _processType <p>任务类型    //调度任务     SCHEDULE_TASK,     //集成任务     INTEGRATION_TASK,     //第三方上报     THIRD_REPORT,     //数据建模     TABLE_MODEL,     //模型创建指标     MODEL_METRIC,     //原子指标创建衍生指标     METRIC_METRIC,     //数据服务     DATA_SERVICE</p>
                     * 
                     */
                    void SetProcessType(const std::string& _processType);

                    /**
                     * 判断参数 ProcessType 是否已赋值
                     * @return ProcessType 是否已赋值
                     * 
                     */
                    bool ProcessTypeHasBeenSet() const;

                    /**
                     * 获取<p>页码</p>
                     * @return PageNumber <p>页码</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码</p>
                     * @param _pageNumber <p>页码</p>
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取<p>分页大小</p>
                     * @return PageSize <p>分页大小</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>分页大小</p>
                     * @param _pageSize <p>分页大小</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取<p>来源：WEDATA|THIRD 默认WEDATA</p>
                     * @return Platform <p>来源：WEDATA|THIRD 默认WEDATA</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>来源：WEDATA|THIRD 默认WEDATA</p>
                     * @param _platform <p>来源：WEDATA|THIRD 默认WEDATA</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                private:

                    /**
                     * <p>任务唯一ID</p>
                     */
                    std::string m_processId;
                    bool m_processIdHasBeenSet;

                    /**
                     * <p>任务类型    //调度任务     SCHEDULE_TASK,     //集成任务     INTEGRATION_TASK,     //第三方上报     THIRD_REPORT,     //数据建模     TABLE_MODEL,     //模型创建指标     MODEL_METRIC,     //原子指标创建衍生指标     METRIC_METRIC,     //数据服务     DATA_SERVICE</p>
                     */
                    std::string m_processType;
                    bool m_processTypeHasBeenSet;

                    /**
                     * <p>页码</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>分页大小</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * <p>来源：WEDATA|THIRD 默认WEDATA</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTPROCESSLINEAGEREQUEST_H_
