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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETCHECKSIMILARPERSONJOBIDLISTRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETCHECKSIMILARPERSONJOBIDLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/JobIdInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * GetCheckSimilarPersonJobIdList返回参数结构体
                */
                class GetCheckSimilarPersonJobIdListResponse : public AbstractModel
                {
                public:
                    GetCheckSimilarPersonJobIdListResponse();
                    ~GetCheckSimilarPersonJobIdListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取人员查重任务信息列表。
                     * @return JobIdInfos 人员查重任务信息列表。
                     */
                    std::vector<JobIdInfo> GetJobIdInfos() const;

                    /**
                     * 判断参数 JobIdInfos 是否已赋值
                     * @return JobIdInfos 是否已赋值
                     */
                    bool JobIdInfosHasBeenSet() const;

                    /**
                     * 获取查重任务总数量。
                     * @return JobIdNum 查重任务总数量。
                     */
                    uint64_t GetJobIdNum() const;

                    /**
                     * 判断参数 JobIdNum 是否已赋值
                     * @return JobIdNum 是否已赋值
                     */
                    bool JobIdNumHasBeenSet() const;

                private:

                    /**
                     * 人员查重任务信息列表。
                     */
                    std::vector<JobIdInfo> m_jobIdInfos;
                    bool m_jobIdInfosHasBeenSet;

                    /**
                     * 查重任务总数量。
                     */
                    uint64_t m_jobIdNum;
                    bool m_jobIdNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETCHECKSIMILARPERSONJOBIDLISTRESPONSE_H_
