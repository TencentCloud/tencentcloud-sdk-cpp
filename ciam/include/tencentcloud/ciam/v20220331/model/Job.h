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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_JOB_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/ErrorDetails.h>
#include <tencentcloud/ciam/v20220331/model/FailedUsers.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 任务详情
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return Id 任务ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置任务ID
                     * @param _id 任务ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务状态

<li> **PENDING** </li>  待执行
<li> **PROCESSING** </li>  执行中
<li> **COMPLETED** </li>  完成
<li> **FAILED** </li>  失败
                     * @return Status 任务状态

<li> **PENDING** </li>  待执行
<li> **PROCESSING** </li>  执行中
<li> **COMPLETED** </li>  完成
<li> **FAILED** </li>  失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态

<li> **PENDING** </li>  待执行
<li> **PROCESSING** </li>  执行中
<li> **COMPLETED** </li>  完成
<li> **FAILED** </li>  失败
                     * @param _status 任务状态

<li> **PENDING** </li>  待执行
<li> **PROCESSING** </li>  执行中
<li> **COMPLETED** </li>  完成
<li> **FAILED** </li>  失败
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
                     * 获取任务类型

<li> **IMPORT_USER** </li>  用户导入
<li> **EXPORT_USER** </li>  用户导出
                     * @return Type 任务类型

<li> **IMPORT_USER** </li>  用户导入
<li> **EXPORT_USER** </li>  用户导出
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置任务类型

<li> **IMPORT_USER** </li>  用户导入
<li> **EXPORT_USER** </li>  用户导出
                     * @param _type 任务类型

<li> **IMPORT_USER** </li>  用户导入
<li> **EXPORT_USER** </li>  用户导出
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreatedDate 任务创建时间
                     * 
                     */
                    int64_t GetCreatedDate() const;

                    /**
                     * 设置任务创建时间
                     * @param _createdDate 任务创建时间
                     * 
                     */
                    void SetCreatedDate(const int64_t& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                    /**
                     * 获取任务的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Format 任务的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置任务的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _format 任务的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取任务结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Location 任务结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置任务结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _location 任务结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取失败详情
                     * @return ErrorDetails 失败详情
                     * 
                     */
                    std::vector<ErrorDetails> GetErrorDetails() const;

                    /**
                     * 设置失败详情
                     * @param _errorDetails 失败详情
                     * 
                     */
                    void SetErrorDetails(const std::vector<ErrorDetails>& _errorDetails);

                    /**
                     * 判断参数 ErrorDetails 是否已赋值
                     * @return ErrorDetails 是否已赋值
                     * 
                     */
                    bool ErrorDetailsHasBeenSet() const;

                    /**
                     * 获取失败的用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedUsers 失败的用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FailedUsers> GetFailedUsers() const;

                    /**
                     * 设置失败的用户
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failedUsers 失败的用户
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailedUsers(const std::vector<FailedUsers>& _failedUsers);

                    /**
                     * 判断参数 FailedUsers 是否已赋值
                     * @return FailedUsers 是否已赋值
                     * 
                     */
                    bool FailedUsersHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务状态

<li> **PENDING** </li>  待执行
<li> **PROCESSING** </li>  执行中
<li> **COMPLETED** </li>  完成
<li> **FAILED** </li>  失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务类型

<li> **IMPORT_USER** </li>  用户导入
<li> **EXPORT_USER** </li>  用户导出
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    int64_t m_createdDate;
                    bool m_createdDateHasBeenSet;

                    /**
                     * 任务的数据类型

<li> **NDJSON** </li>  New-line Delimited JSON
<li> **CSV** </li>  Comma-Separated Values
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 任务结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 失败详情
                     */
                    std::vector<ErrorDetails> m_errorDetails;
                    bool m_errorDetailsHasBeenSet;

                    /**
                     * 失败的用户
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FailedUsers> m_failedUsers;
                    bool m_failedUsersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_JOB_H_
