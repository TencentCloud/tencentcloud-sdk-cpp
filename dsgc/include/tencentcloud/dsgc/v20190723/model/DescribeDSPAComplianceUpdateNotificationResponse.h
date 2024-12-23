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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOMPLIANCEUPDATENOTIFICATIONRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOMPLIANCEUPDATENOTIFICATIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAComplianceUpdateNotification返回参数结构体
                */
                class DescribeDSPAComplianceUpdateNotificationResponse : public AbstractModel
                {
                public:
                    DescribeDSPAComplianceUpdateNotificationResponse();
                    ~DescribeDSPAComplianceUpdateNotificationResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模板是否更新
                     * @return IsUpdated 模板是否更新
                     * 
                     */
                    bool GetIsUpdated() const;

                    /**
                     * 判断参数 IsUpdated 是否已赋值
                     * @return IsUpdated 是否已赋值
                     * 
                     */
                    bool IsUpdatedHasBeenSet() const;

                    /**
                     * 获取任务名称集合
                     * @return TaskNameSet 任务名称集合
                     * 
                     */
                    std::vector<std::string> GetTaskNameSet() const;

                    /**
                     * 判断参数 TaskNameSet 是否已赋值
                     * @return TaskNameSet 是否已赋值
                     * 
                     */
                    bool TaskNameSetHasBeenSet() const;

                private:

                    /**
                     * 模板是否更新
                     */
                    bool m_isUpdated;
                    bool m_isUpdatedHasBeenSet;

                    /**
                     * 任务名称集合
                     */
                    std::vector<std::string> m_taskNameSet;
                    bool m_taskNameSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACOMPLIANCEUPDATENOTIFICATIONRESPONSE_H_
