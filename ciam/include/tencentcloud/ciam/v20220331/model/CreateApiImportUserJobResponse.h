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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEAPIIMPORTUSERJOBRESPONSE_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEAPIIMPORTUSERJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Job.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * CreateApiImportUserJob返回参数结构体
                */
                class CreateApiImportUserJobResponse : public AbstractModel
                {
                public:
                    CreateApiImportUserJobResponse();
                    ~CreateApiImportUserJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据流任务
                     * @return Job 数据流任务
                     * 
                     */
                    Job GetJob() const;

                    /**
                     * 判断参数 Job 是否已赋值
                     * @return Job 是否已赋值
                     * 
                     */
                    bool JobHasBeenSet() const;

                private:

                    /**
                     * 数据流任务
                     */
                    Job m_job;
                    bool m_jobHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEAPIIMPORTUSERJOBRESPONSE_H_
