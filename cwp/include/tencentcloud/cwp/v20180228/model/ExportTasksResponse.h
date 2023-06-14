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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTTASKSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTTASKSRESPONSE_H_

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
                * ExportTasks返回参数结构体
                */
                class ExportTasksResponse : public AbstractModel
                {
                public:
                    ExportTasksResponse();
                    ~ExportTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取PENDING：正在生成下载链接，FINISHED：下载链接已生成，ERROR：网络异常等异常情况
                     * @return Status PENDING：正在生成下载链接，FINISHED：下载链接已生成，ERROR：网络异常等异常情况
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取下载链接
                     * @return DownloadUrl 下载链接
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                private:

                    /**
                     * PENDING：正在生成下载链接，FINISHED：下载链接已生成，ERROR：网络异常等异常情况
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 下载链接
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTTASKSRESPONSE_H_
