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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDDETAILREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDDETAILREQUEST_H_

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
                * DescribeHostUploadUpdateRecordDetail请求参数结构体
                */
                class DescribeHostUploadUpdateRecordDetailRequest : public AbstractModel
                {
                public:
                    DescribeHostUploadUpdateRecordDetailRequest();
                    ~DescribeHostUploadUpdateRecordDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取托管记录ID
                     * @return DeployRecordId 托管记录ID
                     * 
                     */
                    int64_t GetDeployRecordId() const;

                    /**
                     * 设置托管记录ID
                     * @param _deployRecordId 托管记录ID
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
                     * 获取每页数量，默认为10，最大为200， 超过200则为200
                     * @return Limit 每页数量，默认为10，最大为200， 超过200则为200
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，默认为10，最大为200， 超过200则为200
                     * @param _limit 每页数量，默认为10，最大为200， 超过200则为200
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 托管记录ID
                     */
                    int64_t m_deployRecordId;
                    bool m_deployRecordIdHasBeenSet;

                    /**
                     * 每页数量，默认为10，最大为200， 超过200则为200
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDDETAILREQUEST_H_
