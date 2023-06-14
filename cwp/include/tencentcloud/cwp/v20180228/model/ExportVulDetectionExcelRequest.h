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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULDETECTIONEXCELREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULDETECTIONEXCELREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ExportVulDetectionExcel请求参数结构体
                */
                class ExportVulDetectionExcelRequest : public AbstractModel
                {
                public:
                    ExportVulDetectionExcelRequest();
                    ~ExportVulDetectionExcelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本次漏洞检测任务id（不同于出参的导出本次漏洞检测Excel的任务Id）
                     * @return TaskId 本次漏洞检测任务id（不同于出参的导出本次漏洞检测Excel的任务Id）
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置本次漏洞检测任务id（不同于出参的导出本次漏洞检测Excel的任务Id）
                     * @param _taskId 本次漏洞检测任务id（不同于出参的导出本次漏洞检测Excel的任务Id）
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 本次漏洞检测任务id（不同于出参的导出本次漏洞检测Excel的任务Id）
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTVULDETECTIONEXCELREQUEST_H_
