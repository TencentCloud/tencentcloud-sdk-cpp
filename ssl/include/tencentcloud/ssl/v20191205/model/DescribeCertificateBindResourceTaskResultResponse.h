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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKRESULTRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/SyncTaskBindResourceResult.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateBindResourceTaskResult返回参数结构体
                */
                class DescribeCertificateBindResourceTaskResultResponse : public AbstractModel
                {
                public:
                    DescribeCertificateBindResourceTaskResultResponse();
                    ~DescribeCertificateBindResourceTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取异步任务绑定关联云资源结果列表
                     * @return SyncTaskBindResourceResult 异步任务绑定关联云资源结果列表
                     * 
                     */
                    std::vector<SyncTaskBindResourceResult> GetSyncTaskBindResourceResult() const;

                    /**
                     * 判断参数 SyncTaskBindResourceResult 是否已赋值
                     * @return SyncTaskBindResourceResult 是否已赋值
                     * 
                     */
                    bool SyncTaskBindResourceResultHasBeenSet() const;

                private:

                    /**
                     * 异步任务绑定关联云资源结果列表
                     */
                    std::vector<SyncTaskBindResourceResult> m_syncTaskBindResourceResult;
                    bool m_syncTaskBindResourceResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKRESULTRESPONSE_H_
