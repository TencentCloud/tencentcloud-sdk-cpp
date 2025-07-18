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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKRESULTREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateBindResourceTaskResult请求参数结构体
                */
                class DescribeCertificateBindResourceTaskResultRequest : public AbstractModel
                {
                public:
                    DescribeCertificateBindResourceTaskResultRequest();
                    ~DescribeCertificateBindResourceTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果， 最大支持100个
                     * @return TaskIds 任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果， 最大支持100个
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果， 最大支持100个
                     * @param _taskIds 任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果， 最大支持100个
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                private:

                    /**
                     * 任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果， 最大支持100个
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKRESULTREQUEST_H_
