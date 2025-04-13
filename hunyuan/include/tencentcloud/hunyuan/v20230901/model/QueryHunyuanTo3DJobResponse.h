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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_QUERYHUNYUANTO3DJOBRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_QUERYHUNYUANTO3DJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/File3Ds.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * QueryHunyuanTo3DJob返回参数结构体
                */
                class QueryHunyuanTo3DJobResponse : public AbstractModel
                {
                public:
                    QueryHunyuanTo3DJobResponse();
                    ~QueryHunyuanTo3DJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
                     * @return Status 任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
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
                     * 获取生成的3D文件数组
                     * @return ResultFile3Ds 生成的3D文件数组
                     * 
                     */
                    std::vector<File3Ds> GetResultFile3Ds() const;

                    /**
                     * 判断参数 ResultFile3Ds 是否已赋值
                     * @return ResultFile3Ds 是否已赋值
                     * 
                     */
                    bool ResultFile3DsHasBeenSet() const;

                    /**
                     * 获取错误码
                     * @return ErrorCode 错误码
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
                     * 获取错误信息
                     * @return ErrorMessage 错误信息
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 生成的3D文件数组
                     */
                    std::vector<File3Ds> m_resultFile3Ds;
                    bool m_resultFile3DsHasBeenSet;

                    /**
                     * 错误码
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_QUERYHUNYUANTO3DJOBRESPONSE_H_
