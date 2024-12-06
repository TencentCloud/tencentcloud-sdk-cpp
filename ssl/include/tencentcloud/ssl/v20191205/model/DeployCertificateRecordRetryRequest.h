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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYCERTIFICATERECORDRETRYREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYCERTIFICATERECORDRETRYREQUEST_H_

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
                * DeployCertificateRecordRetry请求参数结构体
                */
                class DeployCertificateRecordRetryRequest : public AbstractModel
                {
                public:
                    DeployCertificateRecordRetryRequest();
                    ~DeployCertificateRecordRetryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待重试部署记录ID，通过DeployCertificateInstance获得
                     * @return DeployRecordId 待重试部署记录ID，通过DeployCertificateInstance获得
                     * 
                     */
                    int64_t GetDeployRecordId() const;

                    /**
                     * 设置待重试部署记录ID，通过DeployCertificateInstance获得
                     * @param _deployRecordId 待重试部署记录ID，通过DeployCertificateInstance获得
                     * 
                     */
                    void SetDeployRecordId(const int64_t& _deployRecordId);

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     * 
                     */
                    bool DeployRecordIdHasBeenSet() const;

                    /**
                     * 获取待重试部署记录详情ID，通过DescribeHostDeployRecordDetail获得
                     * @return DeployRecordDetailId 待重试部署记录详情ID，通过DescribeHostDeployRecordDetail获得
                     * 
                     */
                    int64_t GetDeployRecordDetailId() const;

                    /**
                     * 设置待重试部署记录详情ID，通过DescribeHostDeployRecordDetail获得
                     * @param _deployRecordDetailId 待重试部署记录详情ID，通过DescribeHostDeployRecordDetail获得
                     * 
                     */
                    void SetDeployRecordDetailId(const int64_t& _deployRecordDetailId);

                    /**
                     * 判断参数 DeployRecordDetailId 是否已赋值
                     * @return DeployRecordDetailId 是否已赋值
                     * 
                     */
                    bool DeployRecordDetailIdHasBeenSet() const;

                private:

                    /**
                     * 待重试部署记录ID，通过DeployCertificateInstance获得
                     */
                    int64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * 待重试部署记录详情ID，通过DescribeHostDeployRecordDetail获得
                     */
                    int64_t m_deployRecordDetailId;
                    bool m_deployRecordDetailIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DEPLOYCERTIFICATERECORDRETRYREQUEST_H_
