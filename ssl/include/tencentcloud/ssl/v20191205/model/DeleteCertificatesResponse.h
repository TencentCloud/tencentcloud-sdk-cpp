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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DELETECERTIFICATESRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DELETECERTIFICATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/BatchDeleteFail.h>
#include <tencentcloud/ssl/v20191205/model/CertTaskId.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DeleteCertificates返回参数结构体
                */
                class DeleteCertificatesResponse : public AbstractModel
                {
                public:
                    DeleteCertificatesResponse();
                    ~DeleteCertificatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功的ID
                     * @return Success 成功的ID
                     * 
                     */
                    std::vector<std::string> GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取失败的ID和原因
                     * @return Fail 失败的ID和原因
                     * 
                     */
                    std::vector<BatchDeleteFail> GetFail() const;

                    /**
                     * 判断参数 Fail 是否已赋值
                     * @return Fail 是否已赋值
                     * 
                     */
                    bool FailHasBeenSet() const;

                    /**
                     * 获取证书ID和异步任务的ID
                     * @return CertTaskIds 证书ID和异步任务的ID
                     * 
                     */
                    std::vector<CertTaskId> GetCertTaskIds() const;

                    /**
                     * 判断参数 CertTaskIds 是否已赋值
                     * @return CertTaskIds 是否已赋值
                     * 
                     */
                    bool CertTaskIdsHasBeenSet() const;

                private:

                    /**
                     * 成功的ID
                     */
                    std::vector<std::string> m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 失败的ID和原因
                     */
                    std::vector<BatchDeleteFail> m_fail;
                    bool m_failHasBeenSet;

                    /**
                     * 证书ID和异步任务的ID
                     */
                    std::vector<CertTaskId> m_certTaskIds;
                    bool m_certTaskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DELETECERTIFICATESRESPONSE_H_
