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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEAIMODELAPPLICATIONSRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEAIMODELAPPLICATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20211125/model/AIModelApplication.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeAIModelApplications返回参数结构体
                */
                class DescribeAIModelApplicationsResponse : public AbstractModel
                {
                public:
                    DescribeAIModelApplicationsResponse();
                    ~DescribeAIModelApplicationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取申请记录数量
                     * @return TotalCount 申请记录数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取申请记录数组
                     * @return Applications 申请记录数组
                     * 
                     */
                    std::vector<AIModelApplication> GetApplications() const;

                    /**
                     * 判断参数 Applications 是否已赋值
                     * @return Applications 是否已赋值
                     * 
                     */
                    bool ApplicationsHasBeenSet() const;

                private:

                    /**
                     * 申请记录数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 申请记录数组
                     */
                    std::vector<AIModelApplication> m_applications;
                    bool m_applicationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEAIMODELAPPLICATIONSRESPONSE_H_
