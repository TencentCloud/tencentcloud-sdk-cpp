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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEAPKDETECTIONRESULTRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEAPKDETECTIONRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/ResultListItem.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeApkDetectionResult返回参数结构体
                */
                class DescribeApkDetectionResultResponse : public AbstractModel
                {
                public:
                    DescribeApkDetectionResultResponse();
                    ~DescribeApkDetectionResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取响应结果，ok表示正常，error表示错误
                     * @return Result 响应结果，ok表示正常，error表示错误
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取Result为error错误时的原因说明
                     * @return Reason Result为error错误时的原因说明
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取APK检测结果数组
                     * @return ResultList APK检测结果数组
                     * 
                     */
                    std::vector<ResultListItem> GetResultList() const;

                    /**
                     * 判断参数 ResultList 是否已赋值
                     * @return ResultList 是否已赋值
                     * 
                     */
                    bool ResultListHasBeenSet() const;

                private:

                    /**
                     * 响应结果，ok表示正常，error表示错误
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * Result为error错误时的原因说明
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * APK检测结果数组
                     */
                    std::vector<ResultListItem> m_resultList;
                    bool m_resultListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEAPKDETECTIONRESULTRESPONSE_H_
