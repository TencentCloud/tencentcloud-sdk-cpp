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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTDEPLOYRECORDDETAILRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTDEPLOYRECORDDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/DeployRecordDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostDeployRecordDetail返回参数结构体
                */
                class DescribeHostDeployRecordDetailResponse : public AbstractModel
                {
                public:
                    DescribeHostDeployRecordDetailResponse();
                    ~DescribeHostDeployRecordDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取部署记录总数
                     * @return TotalCount 部署记录总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取证书部署记录列表
                     * @return DeployRecordDetailList 证书部署记录列表
                     * 
                     */
                    std::vector<DeployRecordDetail> GetDeployRecordDetailList() const;

                    /**
                     * 判断参数 DeployRecordDetailList 是否已赋值
                     * @return DeployRecordDetailList 是否已赋值
                     * 
                     */
                    bool DeployRecordDetailListHasBeenSet() const;

                    /**
                     * 获取成功总数
                     * @return SuccessTotalCount 成功总数
                     * 
                     */
                    int64_t GetSuccessTotalCount() const;

                    /**
                     * 判断参数 SuccessTotalCount 是否已赋值
                     * @return SuccessTotalCount 是否已赋值
                     * 
                     */
                    bool SuccessTotalCountHasBeenSet() const;

                    /**
                     * 获取失败总数
                     * @return FailedTotalCount 失败总数
                     * 
                     */
                    int64_t GetFailedTotalCount() const;

                    /**
                     * 判断参数 FailedTotalCount 是否已赋值
                     * @return FailedTotalCount 是否已赋值
                     * 
                     */
                    bool FailedTotalCountHasBeenSet() const;

                    /**
                     * 获取部署中总数
                     * @return RunningTotalCount 部署中总数
                     * 
                     */
                    int64_t GetRunningTotalCount() const;

                    /**
                     * 判断参数 RunningTotalCount 是否已赋值
                     * @return RunningTotalCount 是否已赋值
                     * 
                     */
                    bool RunningTotalCountHasBeenSet() const;

                private:

                    /**
                     * 部署记录总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 证书部署记录列表
                     */
                    std::vector<DeployRecordDetail> m_deployRecordDetailList;
                    bool m_deployRecordDetailListHasBeenSet;

                    /**
                     * 成功总数
                     */
                    int64_t m_successTotalCount;
                    bool m_successTotalCountHasBeenSet;

                    /**
                     * 失败总数
                     */
                    int64_t m_failedTotalCount;
                    bool m_failedTotalCountHasBeenSet;

                    /**
                     * 部署中总数
                     */
                    int64_t m_runningTotalCount;
                    bool m_runningTotalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTDEPLOYRECORDDETAILRESPONSE_H_
