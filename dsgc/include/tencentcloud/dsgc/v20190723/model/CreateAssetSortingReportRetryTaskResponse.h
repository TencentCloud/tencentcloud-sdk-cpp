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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEASSETSORTINGREPORTRETRYTASKRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEASSETSORTINGREPORTRETRYTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateAssetSortingReportRetryTask返回参数结构体
                */
                class CreateAssetSortingReportRetryTaskResponse : public AbstractModel
                {
                public:
                    CreateAssetSortingReportRetryTaskResponse();
                    ~CreateAssetSortingReportRetryTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return ReportTaskId 任务id
                     * 
                     */
                    uint64_t GetReportTaskId() const;

                    /**
                     * 判断参数 ReportTaskId 是否已赋值
                     * @return ReportTaskId 是否已赋值
                     * 
                     */
                    bool ReportTaskIdHasBeenSet() const;

                    /**
                     * 获取提示信息
                     * @return Remark 提示信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    uint64_t m_reportTaskId;
                    bool m_reportTaskIdHasBeenSet;

                    /**
                     * 提示信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_CREATEASSETSORTINGREPORTRETRYTASKRESPONSE_H_
