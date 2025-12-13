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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_CREATECONNECTTESTJOBREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_CREATECONNECTTESTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/BackupEndpoint.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * CreateConnectTestJob请求参数结构体
                */
                class CreateConnectTestJobRequest : public AbstractModel
                {
                public:
                    CreateConnectTestJobRequest();
                    ~CreateConnectTestJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份源实例信息。
                     * @return Endpoint 备份源实例信息。
                     * 
                     */
                    BackupEndpoint GetEndpoint() const;

                    /**
                     * 设置备份源实例信息。
                     * @param _endpoint 备份源实例信息。
                     * 
                     */
                    void SetEndpoint(const BackupEndpoint& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                private:

                    /**
                     * 备份源实例信息。
                     */
                    BackupEndpoint m_endpoint;
                    bool m_endpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_CREATECONNECTTESTJOBREQUEST_H_
