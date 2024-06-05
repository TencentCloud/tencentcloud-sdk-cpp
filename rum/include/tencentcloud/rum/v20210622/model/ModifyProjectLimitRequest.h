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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYPROJECTLIMITREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYPROJECTLIMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyProjectLimit请求参数结构体
                */
                class ModifyProjectLimitRequest : public AbstractModel
                {
                public:
                    ModifyProjectLimitRequest();
                    ~ModifyProjectLimitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectID 项目ID
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置项目ID
                     * @param _projectID 项目ID
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取取值为[log speed performance webvitals pv event custom miniProgramData]其中之一
                     * @return ProjectInterface 取值为[log speed performance webvitals pv event custom miniProgramData]其中之一
                     * 
                     */
                    std::string GetProjectInterface() const;

                    /**
                     * 设置取值为[log speed performance webvitals pv event custom miniProgramData]其中之一
                     * @param _projectInterface 取值为[log speed performance webvitals pv event custom miniProgramData]其中之一
                     * 
                     */
                    void SetProjectInterface(const std::string& _projectInterface);

                    /**
                     * 判断参数 ProjectInterface 是否已赋值
                     * @return ProjectInterface 是否已赋值
                     * 
                     */
                    bool ProjectInterfaceHasBeenSet() const;

                    /**
                     * 获取上报比例   10代表10%
                     * @return ReportRate 上报比例   10代表10%
                     * 
                     */
                    int64_t GetReportRate() const;

                    /**
                     * 设置上报比例   10代表10%
                     * @param _reportRate 上报比例   10代表10%
                     * 
                     */
                    void SetReportRate(const int64_t& _reportRate);

                    /**
                     * 判断参数 ReportRate 是否已赋值
                     * @return ReportRate 是否已赋值
                     * 
                     */
                    bool ReportRateHasBeenSet() const;

                    /**
                     * 获取上报类型 1：比例  2：上报量
                     * @return ReportType 上报类型 1：比例  2：上报量
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置上报类型 1：比例  2：上报量
                     * @param _reportType 上报类型 1：比例  2：上报量
                     * 
                     */
                    void SetReportType(const int64_t& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                    /**
                     * 获取主键ID
                     * @return ID 主键ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置主键ID
                     * @param _iD 主键ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * 取值为[log speed performance webvitals pv event custom miniProgramData]其中之一
                     */
                    std::string m_projectInterface;
                    bool m_projectInterfaceHasBeenSet;

                    /**
                     * 上报比例   10代表10%
                     */
                    int64_t m_reportRate;
                    bool m_reportRateHasBeenSet;

                    /**
                     * 上报类型 1：比例  2：上报量
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                    /**
                     * 主键ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_MODIFYPROJECTLIMITREQUEST_H_
