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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEHIGHLIGHTRESULTRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEHIGHLIGHTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tci/v20190318/model/HighlightsInfomation.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * DescribeHighlightResult返回参数结构体
                */
                class DescribeHighlightResultResponse : public AbstractModel
                {
                public:
                    DescribeHighlightResultResponse();
                    ~DescribeHighlightResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取精彩集锦详细信息。
                     * @return HighlightsInfo 精彩集锦详细信息。
                     * 
                     */
                    std::vector<HighlightsInfomation> GetHighlightsInfo() const;

                    /**
                     * 判断参数 HighlightsInfo 是否已赋值
                     * @return HighlightsInfo 是否已赋值
                     * 
                     */
                    bool HighlightsInfoHasBeenSet() const;

                    /**
                     * 获取精彩集锦任务唯一id。在URL方式时提交请求后会返回一个JobId，后续查询该url的结果时使用这个JobId进行查询。
                     * @return JobId 精彩集锦任务唯一id。在URL方式时提交请求后会返回一个JobId，后续查询该url的结果时使用这个JobId进行查询。
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取任务的进度百分比，100表示任务已完成。
                     * @return Progress 任务的进度百分比，100表示任务已完成。
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * 精彩集锦详细信息。
                     */
                    std::vector<HighlightsInfomation> m_highlightsInfo;
                    bool m_highlightsInfoHasBeenSet;

                    /**
                     * 精彩集锦任务唯一id。在URL方式时提交请求后会返回一个JobId，后续查询该url的结果时使用这个JobId进行查询。
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务的进度百分比，100表示任务已完成。
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_DESCRIBEHIGHLIGHTRESULTRESPONSE_H_
