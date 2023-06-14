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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETUPGRADEGROUPFACEMODELVERSIONRESULTREQUEST_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETUPGRADEGROUPFACEMODELVERSIONRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * GetUpgradeGroupFaceModelVersionResult请求参数结构体
                */
                class GetUpgradeGroupFaceModelVersionResultRequest : public AbstractModel
                {
                public:
                    GetUpgradeGroupFaceModelVersionResultRequest();
                    ~GetUpgradeGroupFaceModelVersionResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取升级任务ID，用于查询、获取人员库升级的进度和结果。
                     * @return JobId 升级任务ID，用于查询、获取人员库升级的进度和结果。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置升级任务ID，用于查询、获取人员库升级的进度和结果。
                     * @param _jobId 升级任务ID，用于查询、获取人员库升级的进度和结果。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 升级任务ID，用于查询、获取人员库升级的进度和结果。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETUPGRADEGROUPFACEMODELVERSIONRESULTREQUEST_H_
