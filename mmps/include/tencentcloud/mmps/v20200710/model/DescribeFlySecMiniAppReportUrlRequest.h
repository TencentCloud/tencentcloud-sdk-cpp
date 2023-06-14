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

#ifndef TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPREPORTURLREQUEST_H_
#define TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPREPORTURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mmps
    {
        namespace V20200710
        {
            namespace Model
            {
                /**
                * DescribeFlySecMiniAppReportUrl请求参数结构体
                */
                class DescribeFlySecMiniAppReportUrlRequest : public AbstractModel
                {
                public:
                    DescribeFlySecMiniAppReportUrlRequest();
                    ~DescribeFlySecMiniAppReportUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return TaskID 任务id
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置任务id
                     * @param _taskID 任务id
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取小程序appid
                     * @return MiniAppID 小程序appid
                     * 
                     */
                    std::string GetMiniAppID() const;

                    /**
                     * 设置小程序appid
                     * @param _miniAppID 小程序appid
                     * 
                     */
                    void SetMiniAppID(const std::string& _miniAppID);

                    /**
                     * 判断参数 MiniAppID 是否已赋值
                     * @return MiniAppID 是否已赋值
                     * 
                     */
                    bool MiniAppIDHasBeenSet() const;

                    /**
                     * 获取诊断方式 1:基础诊断，2:深度诊断
                     * @return Mode 诊断方式 1:基础诊断，2:深度诊断
                     * 
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置诊断方式 1:基础诊断，2:深度诊断
                     * @param _mode 诊断方式 1:基础诊断，2:深度诊断
                     * 
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取诊断报告类型 0:基础诊断报告，1:总裁版诊断报告，2:诊断报告json结果
                     * @return ReportType 诊断报告类型 0:基础诊断报告，1:总裁版诊断报告，2:诊断报告json结果
                     * 
                     */
                    int64_t GetReportType() const;

                    /**
                     * 设置诊断报告类型 0:基础诊断报告，1:总裁版诊断报告，2:诊断报告json结果
                     * @param _reportType 诊断报告类型 0:基础诊断报告，1:总裁版诊断报告，2:诊断报告json结果
                     * 
                     */
                    void SetReportType(const int64_t& _reportType);

                    /**
                     * 判断参数 ReportType 是否已赋值
                     * @return ReportType 是否已赋值
                     * 
                     */
                    bool ReportTypeHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 小程序appid
                     */
                    std::string m_miniAppID;
                    bool m_miniAppIDHasBeenSet;

                    /**
                     * 诊断方式 1:基础诊断，2:深度诊断
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 诊断报告类型 0:基础诊断报告，1:总裁版诊断报告，2:诊断报告json结果
                     */
                    int64_t m_reportType;
                    bool m_reportTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MMPS_V20200710_MODEL_DESCRIBEFLYSECMINIAPPREPORTURLREQUEST_H_
