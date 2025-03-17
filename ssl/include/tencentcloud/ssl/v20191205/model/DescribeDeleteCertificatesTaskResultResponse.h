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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDELETECERTIFICATESTASKRESULTRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDELETECERTIFICATESTASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DeleteTaskResult.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeDeleteCertificatesTaskResult返回参数结构体
                */
                class DescribeDeleteCertificatesTaskResultResponse : public AbstractModel
                {
                public:
                    DescribeDeleteCertificatesTaskResultResponse();
                    ~DescribeDeleteCertificatesTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量删除证书异步任务结果
                     * @return DeleteTaskResult 批量删除证书异步任务结果
                     * 
                     */
                    std::vector<DeleteTaskResult> GetDeleteTaskResult() const;

                    /**
                     * 判断参数 DeleteTaskResult 是否已赋值
                     * @return DeleteTaskResult 是否已赋值
                     * 
                     */
                    bool DeleteTaskResultHasBeenSet() const;

                private:

                    /**
                     * 批量删除证书异步任务结果
                     */
                    std::vector<DeleteTaskResult> m_deleteTaskResult;
                    bool m_deleteTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDELETECERTIFICATESTASKRESULTRESPONSE_H_
