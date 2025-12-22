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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNDEPLOYRECORDRESPONSE_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNDEPLOYRECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/DeployRecord.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeCloudRunDeployRecord返回参数结构体
                */
                class DescribeCloudRunDeployRecordResponse : public AbstractModel
                {
                public:
                    DescribeCloudRunDeployRecordResponse();
                    ~DescribeCloudRunDeployRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取部署列表
                     * @return DeployRecords 部署列表
                     * 
                     */
                    std::vector<DeployRecord> GetDeployRecords() const;

                    /**
                     * 判断参数 DeployRecords 是否已赋值
                     * @return DeployRecords 是否已赋值
                     * 
                     */
                    bool DeployRecordsHasBeenSet() const;

                private:

                    /**
                     * 部署列表
                     */
                    std::vector<DeployRecord> m_deployRecords;
                    bool m_deployRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNDEPLOYRECORDRESPONSE_H_
