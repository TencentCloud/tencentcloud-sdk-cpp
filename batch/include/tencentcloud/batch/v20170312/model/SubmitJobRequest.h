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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_SUBMITJOBREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_SUBMITJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/batch/v20170312/model/Placement.h>
#include <tencentcloud/batch/v20170312/model/Job.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * SubmitJob请求参数结构体
                */
                class SubmitJobRequest : public AbstractModel
                {
                public:
                    SubmitJobRequest();
                    ~SubmitJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业所提交的位置信息。通过该参数可以指定作业关联CVM所属可用区等信息。
                     * @return Placement 作业所提交的位置信息。通过该参数可以指定作业关联CVM所属可用区等信息。
                     * 
                     */
                    Placement GetPlacement() const;

                    /**
                     * 设置作业所提交的位置信息。通过该参数可以指定作业关联CVM所属可用区等信息。
                     * @param _placement 作业所提交的位置信息。通过该参数可以指定作业关联CVM所属可用区等信息。
                     * 
                     */
                    void SetPlacement(const Placement& _placement);

                    /**
                     * 判断参数 Placement 是否已赋值
                     * @return Placement 是否已赋值
                     * 
                     */
                    bool PlacementHasBeenSet() const;

                    /**
                     * 获取作业信息
                     * @return Job 作业信息
                     * 
                     */
                    Job GetJob() const;

                    /**
                     * 设置作业信息
                     * @param _job 作业信息
                     * 
                     */
                    void SetJob(const Job& _job);

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                    /**
                     * 获取用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @return ClientToken 用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * @param _clientToken 用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                private:

                    /**
                     * 作业所提交的位置信息。通过该参数可以指定作业关联CVM所属可用区等信息。
                     */
                    Placement m_placement;
                    bool m_placementHasBeenSet;

                    /**
                     * 作业信息
                     */
                    Job m_job;
                    bool m_jobHasBeenSet;

                    /**
                     * 用于保证请求幂等性的字符串。该字符串由用户生成，需保证不同请求之间唯一，最大值不超过64个ASCII字符。若不指定该参数，则无法保证请求的幂等性。
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_SUBMITJOBREQUEST_H_
