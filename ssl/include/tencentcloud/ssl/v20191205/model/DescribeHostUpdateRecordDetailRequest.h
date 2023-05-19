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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_

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
                * DescribeHostUpdateRecordDetail请求参数结构体
                */
                class DescribeHostUpdateRecordDetailRequest : public AbstractModel
                {
                public:
                    DescribeHostUpdateRecordDetailRequest();
                    ~DescribeHostUpdateRecordDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待部署的证书ID
                     * @return DeployRecordId 待部署的证书ID
                     */
                    std::string GetDeployRecordId() const;

                    /**
                     * 设置待部署的证书ID
                     * @param DeployRecordId 待部署的证书ID
                     */
                    void SetDeployRecordId(const std::string& _deployRecordId);

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     */
                    bool DeployRecordIdHasBeenSet() const;

                private:

                    /**
                     * 待部署的证书ID
                     */
                    std::string m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_
