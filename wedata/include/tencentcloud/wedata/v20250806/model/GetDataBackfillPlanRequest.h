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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_GETDATABACKFILLPLANREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_GETDATABACKFILLPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * GetDataBackfillPlan请求参数结构体
                */
                class GetDataBackfillPlanRequest : public AbstractModel
                {
                public:
                    GetDataBackfillPlanRequest();
                    ~GetDataBackfillPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取补录计划id
                     * @return DataBackfillPlanId 补录计划id
                     * 
                     */
                    std::string GetDataBackfillPlanId() const;

                    /**
                     * 设置补录计划id
                     * @param _dataBackfillPlanId 补录计划id
                     * 
                     */
                    void SetDataBackfillPlanId(const std::string& _dataBackfillPlanId);

                    /**
                     * 判断参数 DataBackfillPlanId 是否已赋值
                     * @return DataBackfillPlanId 是否已赋值
                     * 
                     */
                    bool DataBackfillPlanIdHasBeenSet() const;

                    /**
                     * 获取展示时区，默认UTC+8
                     * @return TimeZone 展示时区，默认UTC+8
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置展示时区，默认UTC+8
                     * @param _timeZone 展示时区，默认UTC+8
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 补录计划id
                     */
                    std::string m_dataBackfillPlanId;
                    bool m_dataBackfillPlanIdHasBeenSet;

                    /**
                     * 展示时区，默认UTC+8
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_GETDATABACKFILLPLANREQUEST_H_
