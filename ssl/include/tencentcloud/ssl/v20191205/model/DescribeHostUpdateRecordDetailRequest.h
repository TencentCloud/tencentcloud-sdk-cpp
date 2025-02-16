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
                     * 获取部署记录ID，通过调用UpdateCertificateInstance接口返回的记录ID， 或者通过UpdateCertificateRecordRollback回滚接口返回的记录ID
                     * @return DeployRecordId 部署记录ID，通过调用UpdateCertificateInstance接口返回的记录ID， 或者通过UpdateCertificateRecordRollback回滚接口返回的记录ID
                     * 
                     */
                    std::string GetDeployRecordId() const;

                    /**
                     * 设置部署记录ID，通过调用UpdateCertificateInstance接口返回的记录ID， 或者通过UpdateCertificateRecordRollback回滚接口返回的记录ID
                     * @param _deployRecordId 部署记录ID，通过调用UpdateCertificateInstance接口返回的记录ID， 或者通过UpdateCertificateRecordRollback回滚接口返回的记录ID
                     * 
                     */
                    void SetDeployRecordId(const std::string& _deployRecordId);

                    /**
                     * 判断参数 DeployRecordId 是否已赋值
                     * @return DeployRecordId 是否已赋值
                     * 
                     */
                    bool DeployRecordIdHasBeenSet() const;

                    /**
                     * 获取每页数量，默认10。最大值为200
                     * @return Limit 每页数量，默认10。最大值为200
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置每页数量，默认10。最大值为200
                     * @param _limit 每页数量，默认10。最大值为200
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量，从0开始。默认为0
                     * @return Offset 分页偏移量，从0开始。默认为0
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置分页偏移量，从0开始。默认为0
                     * @param _offset 分页偏移量，从0开始。默认为0
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 部署记录ID，通过调用UpdateCertificateInstance接口返回的记录ID， 或者通过UpdateCertificateRecordRollback回滚接口返回的记录ID
                     */
                    std::string m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * 每页数量，默认10。最大值为200
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量，从0开始。默认为0
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPDATERECORDDETAILREQUEST_H_
