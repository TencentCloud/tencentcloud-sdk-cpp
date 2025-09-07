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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_EXPORTSOFTWAREDOWNLOADURLRSPDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_EXPORTSOFTWAREDOWNLOADURLRSPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 业务响应数据
                */
                class ExportSoftwareDownloadUrlRspData : public AbstractModel
                {
                public:
                    ExportSoftwareDownloadUrlRspData();
                    ~ExportSoftwareDownloadUrlRspData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下载的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadURL 下载的url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownloadURL() const;

                    /**
                     * 设置下载的url
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downloadURL 下载的url
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownloadURL(const std::string& _downloadURL);

                    /**
                     * 判断参数 DownloadURL 是否已赋值
                     * @return DownloadURL 是否已赋值
                     * 
                     */
                    bool DownloadURLHasBeenSet() const;

                    /**
                     * 获取超过一定时间走异步任务
                     * @return TaskId 超过一定时间走异步任务
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置超过一定时间走异步任务
                     * @param _taskId 超过一定时间走异步任务
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 下载的url
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                    /**
                     * 超过一定时间走异步任务
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_EXPORTSOFTWAREDOWNLOADURLRSPDATA_H_
