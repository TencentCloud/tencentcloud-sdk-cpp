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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDELETECERTIFICATESTASKRESULTREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDELETECERTIFICATESTASKRESULTREQUEST_H_

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
                * DescribeDeleteCertificatesTaskResult请求参数结构体
                */
                class DescribeDeleteCertificatesTaskResultRequest : public AbstractModel
                {
                public:
                    DescribeDeleteCertificatesTaskResultRequest();
                    ~DescribeDeleteCertificatesTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DeleteCertificates接口返回的任务ID， 最大支持100个
                     * @return TaskIds DeleteCertificates接口返回的任务ID， 最大支持100个
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置DeleteCertificates接口返回的任务ID， 最大支持100个
                     * @param _taskIds DeleteCertificates接口返回的任务ID， 最大支持100个
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
                     * DeleteCertificates接口返回的任务ID， 最大支持100个
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDELETECERTIFICATESTASKRESULTREQUEST_H_
