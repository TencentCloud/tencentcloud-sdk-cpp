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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MONTHINSPECTIONREPORT_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MONTHINSPECTIONREPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 专家服务-月巡检报告
                */
                class MonthInspectionReport : public AbstractModel
                {
                public:
                    MonthInspectionReport();
                    ~MonthInspectionReport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取巡检报告名称
                     * @return ReportName 巡检报告名称
                     * 
                     */
                    std::string GetReportName() const;

                    /**
                     * 设置巡检报告名称
                     * @param _reportName 巡检报告名称
                     * 
                     */
                    void SetReportName(const std::string& _reportName);

                    /**
                     * 判断参数 ReportName 是否已赋值
                     * @return ReportName 是否已赋值
                     * 
                     */
                    bool ReportNameHasBeenSet() const;

                    /**
                     * 获取巡检报告下载地址
                     * @return ReportPath 巡检报告下载地址
                     * 
                     */
                    std::string GetReportPath() const;

                    /**
                     * 设置巡检报告下载地址
                     * @param _reportPath 巡检报告下载地址
                     * 
                     */
                    void SetReportPath(const std::string& _reportPath);

                    /**
                     * 判断参数 ReportPath 是否已赋值
                     * @return ReportPath 是否已赋值
                     * 
                     */
                    bool ReportPathHasBeenSet() const;

                    /**
                     * 获取巡检报告更新时间
                     * @return ModifyTime 巡检报告更新时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置巡检报告更新时间
                     * @param _modifyTime 巡检报告更新时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 巡检报告名称
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * 巡检报告下载地址
                     */
                    std::string m_reportPath;
                    bool m_reportPathHasBeenSet;

                    /**
                     * 巡检报告更新时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MONTHINSPECTIONREPORT_H_
