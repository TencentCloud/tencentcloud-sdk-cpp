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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDDETAILRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DeployRecord.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostUploadUpdateRecordDetail返回参数结构体
                */
                class DescribeHostUploadUpdateRecordDetailResponse : public AbstractModel
                {
                public:
                    DescribeHostUploadUpdateRecordDetailResponse();
                    ~DescribeHostUploadUpdateRecordDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取托管记录详情列表
                     * @return DeployRecordDetail 托管记录详情列表
                     * 
                     */
                    std::vector<DeployRecord> GetDeployRecordDetail() const;

                    /**
                     * 判断参数 DeployRecordDetail 是否已赋值
                     * @return DeployRecordDetail 是否已赋值
                     * 
                     */
                    bool DeployRecordDetailHasBeenSet() const;

                private:

                    /**
                     * 托管记录详情列表
                     */
                    std::vector<DeployRecord> m_deployRecordDetail;
                    bool m_deployRecordDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTUPLOADUPDATERECORDDETAILRESPONSE_H_
