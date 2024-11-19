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
                * 文件翻译任务结果
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
                     * 获取任务状态

- init：任务已初始化
- wait：任务等待执行
- success：任务执行成功
- fail：任务执行失败
                     * @return Status 任务状态

- init：任务已初始化
- wait：任务等待执行
- success：任务执行成功
- fail：任务执行失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态

- init：任务已初始化
- wait：任务等待执行
- success：任务执行成功
- fail：任务执行失败
                     * @param _status 任务状态

- init：任务已初始化
- wait：任务等待执行
- success：任务执行成功
- fail：任务执行失败
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
                     * 获取文件数据，目标文件必须小于50M，否则请通过回调方式请求文件翻译接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileData 文件数据，目标文件必须小于50M，否则请通过回调方式请求文件翻译接口
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileData() const;

                    /**
                     * 设置文件数据，目标文件必须小于50M，否则请通过回调方式请求文件翻译接口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileData 文件数据，目标文件必须小于50M，否则请通过回调方式请求文件翻译接口
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
                     * 获取任务进度
                     * @return Progress 任务进度
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置任务进度
                     * @param _progress 任务进度
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取本次翻译消耗的字符数	
                     * @return UsedAmount 本次翻译消耗的字符数	
                     * 
                     */
                    int64_t GetUsedAmount() const;

                    /**
                     * 设置本次翻译消耗的字符数	
                     * @param _usedAmount 本次翻译消耗的字符数	
                     * 
                     */
                    void SetUsedAmount(const int64_t& _usedAmount);

                    /**
                     * 判断参数 UsedAmount 是否已赋值
                     * @return UsedAmount 是否已赋值
                     * 
                     */
                    bool UsedAmountHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务状态

- init：任务已初始化
- wait：任务等待执行
- success：任务执行成功
- fail：任务执行失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 文件数据，目标文件必须小于50M，否则请通过回调方式请求文件翻译接口
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
                     * 任务进度
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 本次翻译消耗的字符数	
                     */
                    int64_t m_usedAmount;
                    bool m_usedAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_MODEL_GETFILETRANSLATEDATA_H_
