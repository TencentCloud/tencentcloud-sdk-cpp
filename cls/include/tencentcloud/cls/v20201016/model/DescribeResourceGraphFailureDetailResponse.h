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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHFAILUREDETAILRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHFAILUREDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeResourceGraphFailureDetail返回参数结构体
                */
                class DescribeResourceGraphFailureDetailResponse : public AbstractModel
                {
                public:
                    DescribeResourceGraphFailureDetailResponse();
                    ~DescribeResourceGraphFailureDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>失败详情信息</p>
                     * @return ErrorMessage <p>失败详情信息</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>最近一次失败时间</p><p>单位：秒</p>
                     * @return LastFailedTime <p>最近一次失败时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetLastFailedTime() const;

                    /**
                     * 判断参数 LastFailedTime 是否已赋值
                     * @return LastFailedTime 是否已赋值
                     * 
                     */
                    bool LastFailedTimeHasBeenSet() const;

                    /**
                     * 获取<p>重试次数</p>
                     * @return RetryCount <p>重试次数</p>
                     * 
                     */
                    int64_t GetRetryCount() const;

                    /**
                     * 判断参数 RetryCount 是否已赋值
                     * @return RetryCount 是否已赋值
                     * 
                     */
                    bool RetryCountHasBeenSet() const;

                    /**
                     * 获取<p>首次失败时间</p><p>单位：秒</p>
                     * @return FirstFailedAt <p>首次失败时间</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetFirstFailedAt() const;

                    /**
                     * 判断参数 FirstFailedAt 是否已赋值
                     * @return FirstFailedAt 是否已赋值
                     * 
                     */
                    bool FirstFailedAtHasBeenSet() const;

                    /**
                     * 获取<p>引起失败的操作</p>
                     * @return Operation <p>引起失败的操作</p>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                private:

                    /**
                     * <p>失败详情信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>最近一次失败时间</p><p>单位：秒</p>
                     */
                    int64_t m_lastFailedTime;
                    bool m_lastFailedTimeHasBeenSet;

                    /**
                     * <p>重试次数</p>
                     */
                    int64_t m_retryCount;
                    bool m_retryCountHasBeenSet;

                    /**
                     * <p>首次失败时间</p><p>单位：秒</p>
                     */
                    int64_t m_firstFailedAt;
                    bool m_firstFailedAtHasBeenSet;

                    /**
                     * <p>引起失败的操作</p>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBERESOURCEGRAPHFAILUREDETAILRESPONSE_H_
