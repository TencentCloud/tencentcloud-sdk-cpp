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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREPORTTASKDETAILREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREPORTTASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeReportTaskDetail请求参数结构体
                */
                class DescribeReportTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeReportTaskDetailRequest();
                    ~DescribeReportTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取租户id
                     * @return TenantId 租户id
                     * 
                     */
                    std::string GetTenantId() const;

                    /**
                     * 设置租户id
                     * @param _tenantId 租户id
                     * 
                     */
                    void SetTenantId(const std::string& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取引擎任务id
                     * @return EngineTaskId 引擎任务id
                     * 
                     */
                    std::string GetEngineTaskId() const;

                    /**
                     * 设置引擎任务id
                     * @param _engineTaskId 引擎任务id
                     * 
                     */
                    void SetEngineTaskId(const std::string& _engineTaskId);

                    /**
                     * 判断参数 EngineTaskId 是否已赋值
                     * @return EngineTaskId 是否已赋值
                     * 
                     */
                    bool EngineTaskIdHasBeenSet() const;

                private:

                    /**
                     * 租户id
                     */
                    std::string m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 引擎任务id
                     */
                    std::string m_engineTaskId;
                    bool m_engineTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEREPORTTASKDETAILREQUEST_H_
