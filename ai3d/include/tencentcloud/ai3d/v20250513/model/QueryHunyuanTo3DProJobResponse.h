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

#ifndef TENCENTCLOUD_AI3D_V20250513_MODEL_QUERYHUNYUANTO3DPROJOBRESPONSE_H_
#define TENCENTCLOUD_AI3D_V20250513_MODEL_QUERYHUNYUANTO3DPROJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ai3d/v20250513/model/File3D.h>


namespace TencentCloud
{
    namespace Ai3d
    {
        namespace V20250513
        {
            namespace Model
            {
                /**
                * QueryHunyuanTo3DProJob返回参数结构体
                */
                class QueryHunyuanTo3DProJobResponse : public AbstractModel
                {
                public:
                    QueryHunyuanTo3DProJobResponse();
                    ~QueryHunyuanTo3DProJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功</p>
                     * @return Status <p>任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>错误码</p>
                     * @return ErrorCode <p>错误码</p>
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
                     * @return ErrorMessage <p>错误信息</p>
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
                     * 获取<p>生成的3D文件数组。</p>
                     * @return ResultFile3Ds <p>生成的3D文件数组。</p>
                     * 
                     */
                    std::vector<File3D> GetResultFile3Ds() const;

                    /**
                     * 判断参数 ResultFile3Ds 是否已赋值
                     * @return ResultFile3Ds 是否已赋值
                     * 
                     */
                    bool ResultFile3DsHasBeenSet() const;

                    /**
                     * 获取<p>接口任务功能参数及积分详情，返回形式为字符串。Generate参数返回对应模式及消耗积分，如：Generate-Normal：20<br>附加参数返回参数名称及消耗积分，如：MultiViewImages：10</p>
                     * @return ResultCreditDetails <p>接口任务功能参数及积分详情，返回形式为字符串。Generate参数返回对应模式及消耗积分，如：Generate-Normal：20<br>附加参数返回参数名称及消耗积分，如：MultiViewImages：10</p>
                     * 
                     */
                    std::string GetResultCreditDetails() const;

                    /**
                     * 判断参数 ResultCreditDetails 是否已赋值
                     * @return ResultCreditDetails 是否已赋值
                     * 
                     */
                    bool ResultCreditDetailsHasBeenSet() const;

                    /**
                     * 获取<p>任务总消耗积分。</p>
                     * @return ResultCreditConsumed <p>任务总消耗积分。</p>
                     * 
                     */
                    double GetResultCreditConsumed() const;

                    /**
                     * 判断参数 ResultCreditConsumed 是否已赋值
                     * @return ResultCreditConsumed 是否已赋值
                     * 
                     */
                    bool ResultCreditConsumedHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>错误码</p>
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>错误信息</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>生成的3D文件数组。</p>
                     */
                    std::vector<File3D> m_resultFile3Ds;
                    bool m_resultFile3DsHasBeenSet;

                    /**
                     * <p>接口任务功能参数及积分详情，返回形式为字符串。Generate参数返回对应模式及消耗积分，如：Generate-Normal：20<br>附加参数返回参数名称及消耗积分，如：MultiViewImages：10</p>
                     */
                    std::string m_resultCreditDetails;
                    bool m_resultCreditDetailsHasBeenSet;

                    /**
                     * <p>任务总消耗积分。</p>
                     */
                    double m_resultCreditConsumed;
                    bool m_resultCreditConsumedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AI3D_V20250513_MODEL_QUERYHUNYUANTO3DPROJOBRESPONSE_H_
