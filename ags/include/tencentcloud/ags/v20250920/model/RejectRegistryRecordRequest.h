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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_REJECTREGISTRYRECORDREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_REJECTREGISTRYRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * RejectRegistryRecord请求参数结构体
                */
                class RejectRegistryRecordRequest : public AbstractModel
                {
                public:
                    RejectRegistryRecordRequest();
                    ~RejectRegistryRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>父 Registry ID。</p>
                     * @return RegistryId <p>父 Registry ID。</p>
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置<p>父 Registry ID。</p>
                     * @param _registryId <p>父 Registry ID。</p>
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取<p>Record ID。</p>
                     * @return RecordId <p>Record ID。</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>Record ID。</p>
                     * @param _recordId <p>Record ID。</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>Version ID。</p>
                     * @return VersionId <p>Version ID。</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>Version ID。</p>
                     * @param _versionId <p>Version ID。</p>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>动作留言；非空。</p>
                     * @return Comment <p>动作留言；非空。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>动作留言；非空。</p>
                     * @param _comment <p>动作留言；非空。</p>
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                private:

                    /**
                     * <p>父 Registry ID。</p>
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * <p>Record ID。</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>Version ID。</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>动作留言；非空。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_REJECTREGISTRYRECORDREQUEST_H_
