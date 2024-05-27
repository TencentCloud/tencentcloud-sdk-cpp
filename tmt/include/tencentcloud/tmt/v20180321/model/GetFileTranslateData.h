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

#ifndef TENCENTCLOUD_TMT_V20180321_MODEL_GETFILETRANSLATEDATA_H_
#define TENCENTCLOUD_TMT_V20180321_MODEL_GETFILETRANSLATEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 查询文件翻译任务
                */
                class GetFileTranslateData : public AbstractModel
                {
                public:
                    GetFileTranslateData();
                    ~GetFileTranslateData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取文件数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileData 文件数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileData() const;

                    /**
                     * 设置文件数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileData 文件数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileData(const std::string& _fileData);

                    /**
                     * 判断参数 FileData 是否已赋值
                     * @return FileData 是否已赋值
                     * 
                     */
                    bool FileDataHasBeenSet() const;

                    /**
                     * 获取错误提示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 错误提示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误提示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 错误提示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取翻译进度
                     * @return Progress 翻译进度
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置翻译进度
                     * @param _progress 翻译进度
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文件数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileData;
                    bool m_fileDataHasBeenSet;

                    /**
                     * 错误提示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 翻译进度
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_GETFILETRANSLATEDATA_H_
