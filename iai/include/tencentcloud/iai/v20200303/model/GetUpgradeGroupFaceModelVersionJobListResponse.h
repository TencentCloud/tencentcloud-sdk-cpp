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

#ifndef TENCENTCLOUD_IAI_V20200303_MODEL_GETUPGRADEGROUPFACEMODELVERSIONJOBLISTRESPONSE_H_
#define TENCENTCLOUD_IAI_V20200303_MODEL_GETUPGRADEGROUPFACEMODELVERSIONJOBLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iai/v20200303/model/UpgradeJobInfo.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20200303
        {
            namespace Model
            {
                /**
                * GetUpgradeGroupFaceModelVersionJobList返回参数结构体
                */
                class GetUpgradeGroupFaceModelVersionJobListResponse : public AbstractModel
                {
                public:
                    GetUpgradeGroupFaceModelVersionJobListResponse();
                    ~GetUpgradeGroupFaceModelVersionJobListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取人员库升级任务信息列表。
                     * @return JobInfos 人员库升级任务信息列表。
                     * 
                     */
                    std::vector<UpgradeJobInfo> GetJobInfos() const;

                    /**
                     * 判断参数 JobInfos 是否已赋值
                     * @return JobInfos 是否已赋值
                     * 
                     */
                    bool JobInfosHasBeenSet() const;

                    /**
                     * 获取升级任务总数量。
                     * @return JobNum 升级任务总数量。
                     * 
                     */
                    uint64_t GetJobNum() const;

                    /**
                     * 判断参数 JobNum 是否已赋值
                     * @return JobNum 是否已赋值
                     * 
                     */
                    bool JobNumHasBeenSet() const;

                private:

                    /**
                     * 人员库升级任务信息列表。
                     */
                    std::vector<UpgradeJobInfo> m_jobInfos;
                    bool m_jobInfosHasBeenSet;

                    /**
                     * 升级任务总数量。
                     */
                    uint64_t m_jobNum;
                    bool m_jobNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20200303_MODEL_GETUPGRADEGROUPFACEMODELVERSIONJOBLISTRESPONSE_H_
