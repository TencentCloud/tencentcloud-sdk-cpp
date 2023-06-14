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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_RECORDINFO_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_RECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * 房间内录制信息。
注意：此字段可能返回 null，表示取不到有效值。
                */
                class RecordInfo : public AbstractModel
                {
                public:
                    RecordInfo();
                    ~RecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID（当混流模式时，取值为0）。
                     * @return UserId 用户ID（当混流模式时，取值为0）。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID（当混流模式时，取值为0）。
                     * @param _userId 用户ID（当混流模式时，取值为0）。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取录制文件名。
                     * @return FileName 录制文件名。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置录制文件名。
                     * @param _fileName 录制文件名。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取录制开始时间（unix时间戳如：1234567868）。
                     * @return RecordBeginTime 录制开始时间（unix时间戳如：1234567868）。
                     * 
                     */
                    uint64_t GetRecordBeginTime() const;

                    /**
                     * 设置录制开始时间（unix时间戳如：1234567868）。
                     * @param _recordBeginTime 录制开始时间（unix时间戳如：1234567868）。
                     * 
                     */
                    void SetRecordBeginTime(const uint64_t& _recordBeginTime);

                    /**
                     * 判断参数 RecordBeginTime 是否已赋值
                     * @return RecordBeginTime 是否已赋值
                     * 
                     */
                    bool RecordBeginTimeHasBeenSet() const;

                    /**
                     * 获取录制状态：2代表正在录制  10代表等待转码  11代表正在转码  12正在上传  13代表上传完成  14代表通知用户完成。
                     * @return RecordStatus 录制状态：2代表正在录制  10代表等待转码  11代表正在转码  12正在上传  13代表上传完成  14代表通知用户完成。
                     * 
                     */
                    uint64_t GetRecordStatus() const;

                    /**
                     * 设置录制状态：2代表正在录制  10代表等待转码  11代表正在转码  12正在上传  13代表上传完成  14代表通知用户完成。
                     * @param _recordStatus 录制状态：2代表正在录制  10代表等待转码  11代表正在转码  12正在上传  13代表上传完成  14代表通知用户完成。
                     * 
                     */
                    void SetRecordStatus(const uint64_t& _recordStatus);

                    /**
                     * 判断参数 RecordStatus 是否已赋值
                     * @return RecordStatus 是否已赋值
                     * 
                     */
                    bool RecordStatusHasBeenSet() const;

                private:

                    /**
                     * 用户ID（当混流模式时，取值为0）。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 录制文件名。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 录制开始时间（unix时间戳如：1234567868）。
                     */
                    uint64_t m_recordBeginTime;
                    bool m_recordBeginTimeHasBeenSet;

                    /**
                     * 录制状态：2代表正在录制  10代表等待转码  11代表正在转码  12正在上传  13代表上传完成  14代表通知用户完成。
                     */
                    uint64_t m_recordStatus;
                    bool m_recordStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_RECORDINFO_H_
