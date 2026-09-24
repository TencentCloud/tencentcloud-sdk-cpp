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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_DELETEREGISTRYRECORDREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_DELETEREGISTRYRECORDREQUEST_H_

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
                * DeleteRegistryRecord请求参数结构体
                */
                class DeleteRegistryRecordRequest : public AbstractModel
                {
                public:
                    DeleteRegistryRecordRequest();
                    ~DeleteRegistryRecordRequest() = default;
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
                     * 获取<p>可选。传入时只删除 Record 下指定 Version（软删除）；省略时删除整个 Record。显式传入空字符串或 null 返回 InvalidParameter.VersionId，不得回退为删除整个 Record。</p>
                     * @return VersionId <p>可选。传入时只删除 Record 下指定 Version（软删除）；省略时删除整个 Record。显式传入空字符串或 null 返回 InvalidParameter.VersionId，不得回退为删除整个 Record。</p>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>可选。传入时只删除 Record 下指定 Version（软删除）；省略时删除整个 Record。显式传入空字符串或 null 返回 InvalidParameter.VersionId，不得回退为删除整个 Record。</p>
                     * @param _versionId <p>可选。传入时只删除 Record 下指定 Version（软删除）；省略时删除整个 Record。显式传入空字符串或 null 返回 InvalidParameter.VersionId，不得回退为删除整个 Record。</p>
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
                     * 获取<p>删除原因，最大 1024 字符。删除单个 Version 时必填；删除整个 Record 时可选。</p>
                     * @return Reason <p>删除原因，最大 1024 字符。删除单个 Version 时必填；删除整个 Record 时可选。</p>
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置<p>删除原因，最大 1024 字符。删除单个 Version 时必填；删除整个 Record 时可选。</p>
                     * @param _reason <p>删除原因，最大 1024 字符。删除单个 Version 时必填；删除整个 Record 时可选。</p>
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

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
                     * <p>可选。传入时只删除 Record 下指定 Version（软删除）；省略时删除整个 Record。显式传入空字符串或 null 返回 InvalidParameter.VersionId，不得回退为删除整个 Record。</p>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>删除原因，最大 1024 字符。删除单个 Version 时必填；删除整个 Record 时可选。</p>
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_DELETEREGISTRYRECORDREQUEST_H_
