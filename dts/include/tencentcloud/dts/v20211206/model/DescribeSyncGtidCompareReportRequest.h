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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCGTIDCOMPAREREPORTREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCGTIDCOMPAREREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSyncGtidCompareReport请求参数结构体
                */
                class DescribeSyncGtidCompareReportRequest : public AbstractModel
                {
                public:
                    DescribeSyncGtidCompareReportRequest();
                    ~DescribeSyncGtidCompareReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return JobId 任务id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务id
                     * @param _jobId 任务id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取创建的校验任务id
                     * @return CompareTaskId 创建的校验任务id
                     * 
                     */
                    std::string GetCompareTaskId() const;

                    /**
                     * 设置创建的校验任务id
                     * @param _compareTaskId 创建的校验任务id
                     * 
                     */
                    void SetCompareTaskId(const std::string& _compareTaskId);

                    /**
                     * 判断参数 CompareTaskId 是否已赋值
                     * @return CompareTaskId 是否已赋值
                     * 
                     */
                    bool CompareTaskIdHasBeenSet() const;

                    /**
                     * 获取是否需要展示不一致详情
                     * @return NeedDiffDetail 是否需要展示不一致详情
                     * 
                     */
                    bool GetNeedDiffDetail() const;

                    /**
                     * 设置是否需要展示不一致详情
                     * @param _needDiffDetail 是否需要展示不一致详情
                     * 
                     */
                    void SetNeedDiffDetail(const bool& _needDiffDetail);

                    /**
                     * 判断参数 NeedDiffDetail 是否已赋值
                     * @return NeedDiffDetail 是否已赋值
                     * 
                     */
                    bool NeedDiffDetailHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 创建的校验任务id
                     */
                    std::string m_compareTaskId;
                    bool m_compareTaskIdHasBeenSet;

                    /**
                     * 是否需要展示不一致详情
                     */
                    bool m_needDiffDetail;
                    bool m_needDiffDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESYNCGTIDCOMPAREREPORTREQUEST_H_
