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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIATASK_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIATASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 取回视频任务信息
                */
                class RestoreMediaTask : public AbstractModel
                {
                public:
                    RestoreMediaTask();
                    ~RestoreMediaTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件ID。
                     * @return FileId 文件ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件ID。
                     * @param _fileId 文件ID。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取文件原始存储类型。
                     * @return OriginalStorageClass 文件原始存储类型。
                     * 
                     */
                    std::string GetOriginalStorageClass() const;

                    /**
                     * 设置文件原始存储类型。
                     * @param _originalStorageClass 文件原始存储类型。
                     * 
                     */
                    void SetOriginalStorageClass(const std::string& _originalStorageClass);

                    /**
                     * 判断参数 OriginalStorageClass 是否已赋值
                     * @return OriginalStorageClass 是否已赋值
                     * 
                     */
                    bool OriginalStorageClassHasBeenSet() const;

                    /**
                     * 获取文件目标存储类型。对于临时取回，目标存储类型与原始存储类型相同。
                     * @return TargetStorageClass 文件目标存储类型。对于临时取回，目标存储类型与原始存储类型相同。
                     * 
                     */
                    std::string GetTargetStorageClass() const;

                    /**
                     * 设置文件目标存储类型。对于临时取回，目标存储类型与原始存储类型相同。
                     * @param _targetStorageClass 文件目标存储类型。对于临时取回，目标存储类型与原始存储类型相同。
                     * 
                     */
                    void SetTargetStorageClass(const std::string& _targetStorageClass);

                    /**
                     * 判断参数 TargetStorageClass 是否已赋值
                     * @return TargetStorageClass 是否已赋值
                     * 
                     */
                    bool TargetStorageClassHasBeenSet() const;

                    /**
                     * 获取取回模式，取值：
<li>Expedited：极速模式</li>
<li>Standard：标准模式</li>
<li>Bulk：批量模式</li>
                     * @return RestoreTier 取回模式，取值：
<li>Expedited：极速模式</li>
<li>Standard：标准模式</li>
<li>Bulk：批量模式</li>
                     * 
                     */
                    std::string GetRestoreTier() const;

                    /**
                     * 设置取回模式，取值：
<li>Expedited：极速模式</li>
<li>Standard：标准模式</li>
<li>Bulk：批量模式</li>
                     * @param _restoreTier 取回模式，取值：
<li>Expedited：极速模式</li>
<li>Standard：标准模式</li>
<li>Bulk：批量模式</li>
                     * 
                     */
                    void SetRestoreTier(const std::string& _restoreTier);

                    /**
                     * 判断参数 RestoreTier 是否已赋值
                     * @return RestoreTier 是否已赋值
                     * 
                     */
                    bool RestoreTierHasBeenSet() const;

                    /**
                     * 获取临时取回副本有效期，单位：天。对于永久取回，取值为0。
                     * @return RestoreDay 临时取回副本有效期，单位：天。对于永久取回，取值为0。
                     * 
                     */
                    int64_t GetRestoreDay() const;

                    /**
                     * 设置临时取回副本有效期，单位：天。对于永久取回，取值为0。
                     * @param _restoreDay 临时取回副本有效期，单位：天。对于永久取回，取值为0。
                     * 
                     */
                    void SetRestoreDay(const int64_t& _restoreDay);

                    /**
                     * 判断参数 RestoreDay 是否已赋值
                     * @return RestoreDay 是否已赋值
                     * 
                     */
                    bool RestoreDayHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。
                     * @return Status 该字段已废弃。
                     * @deprecated
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置该字段已废弃。
                     * @param _status 该字段已废弃。
                     * @deprecated
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * @deprecated
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取该字段已废弃。
                     * @return Message 该字段已废弃。
                     * @deprecated
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置该字段已废弃。
                     * @param _message 该字段已废弃。
                     * @deprecated
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * @deprecated
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 文件ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 文件原始存储类型。
                     */
                    std::string m_originalStorageClass;
                    bool m_originalStorageClassHasBeenSet;

                    /**
                     * 文件目标存储类型。对于临时取回，目标存储类型与原始存储类型相同。
                     */
                    std::string m_targetStorageClass;
                    bool m_targetStorageClassHasBeenSet;

                    /**
                     * 取回模式，取值：
<li>Expedited：极速模式</li>
<li>Standard：标准模式</li>
<li>Bulk：批量模式</li>
                     */
                    std::string m_restoreTier;
                    bool m_restoreTierHasBeenSet;

                    /**
                     * 临时取回副本有效期，单位：天。对于永久取回，取值为0。
                     */
                    int64_t m_restoreDay;
                    bool m_restoreDayHasBeenSet;

                    /**
                     * 该字段已废弃。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 该字段已废弃。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIATASK_H_
