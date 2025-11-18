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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSAMPLECONFIGREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSAMPLECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApmSampleConfig请求参数结构体
                */
                class DescribeApmSampleConfigRequest : public AbstractModel
                {
                public:
                    DescribeApmSampleConfigRequest();
                    ~DescribeApmSampleConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务系统ID
                     * @return InstanceId 业务系统ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置业务系统ID
                     * @param _instanceId 业务系统ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取采样规则名
                     * @return SampleName 采样规则名
                     * 
                     */
                    std::string GetSampleName() const;

                    /**
                     * 设置采样规则名
                     * @param _sampleName 采样规则名
                     * 
                     */
                    void SetSampleName(const std::string& _sampleName);

                    /**
                     * 判断参数 SampleName 是否已赋值
                     * @return SampleName 是否已赋值
                     * 
                     */
                    bool SampleNameHasBeenSet() const;

                private:

                    /**
                     * 业务系统ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 采样规则名
                     */
                    std::string m_sampleName;
                    bool m_sampleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEAPMSAMPLECONFIGREQUEST_H_
