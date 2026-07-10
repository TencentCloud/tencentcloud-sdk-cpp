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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MIGRATIONSUMMARY_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MIGRATIONSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * migration 列表
                */
                class MigrationSummary : public AbstractModel
                {
                public:
                    MigrationSummary();
                    ~MigrationSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * @return Version <p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * @param _version <p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * @return Name <p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * @param _name <p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>migration query sql 语句checksum，服务端自动生成，同版本不同checksum会拒绝执行</p><p>deprecated</p>
                     * @return Checksum <p>migration query sql 语句checksum，服务端自动生成，同版本不同checksum会拒绝执行</p><p>deprecated</p>
                     * 
                     */
                    std::string GetChecksum() const;

                    /**
                     * 设置<p>migration query sql 语句checksum，服务端自动生成，同版本不同checksum会拒绝执行</p><p>deprecated</p>
                     * @param _checksum <p>migration query sql 语句checksum，服务端自动生成，同版本不同checksum会拒绝执行</p><p>deprecated</p>
                     * 
                     */
                    void SetChecksum(const std::string& _checksum);

                    /**
                     * 判断参数 Checksum 是否已赋值
                     * @return Checksum 是否已赋值
                     * 
                     */
                    bool ChecksumHasBeenSet() const;

                    /**
                     * 获取<p>应用时间</p><p>deprecated</p>
                     * @return AppliedAt <p>应用时间</p><p>deprecated</p>
                     * 
                     */
                    std::string GetAppliedAt() const;

                    /**
                     * 设置<p>应用时间</p><p>deprecated</p>
                     * @param _appliedAt <p>应用时间</p><p>deprecated</p>
                     * 
                     */
                    void SetAppliedAt(const std::string& _appliedAt);

                    /**
                     * 判断参数 AppliedAt 是否已赋值
                     * @return AppliedAt 是否已赋值
                     * 
                     */
                    bool AppliedAtHasBeenSet() const;

                    /**
                     * 获取<p>请求来源</p><p>deprecated</p>
                     * @return Source <p>请求来源</p><p>deprecated</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>请求来源</p><p>deprecated</p>
                     * @param _source <p>请求来源</p><p>deprecated</p>
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取<p>migration 创建时间</p><p>deprecated</p>
                     * @return CreatedBy <p>migration 创建时间</p><p>deprecated</p>
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置<p>migration 创建时间</p><p>deprecated</p>
                     * @param _createdBy <p>migration 创建时间</p><p>deprecated</p>
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                private:

                    /**
                     * <p>migration 版本号</p><p>参数格式：纯数字，14位时间格式</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>migration 版本名</p><p>参数格式：仅允许小写字母和下划线</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>migration query sql 语句checksum，服务端自动生成，同版本不同checksum会拒绝执行</p><p>deprecated</p>
                     */
                    std::string m_checksum;
                    bool m_checksumHasBeenSet;

                    /**
                     * <p>应用时间</p><p>deprecated</p>
                     */
                    std::string m_appliedAt;
                    bool m_appliedAtHasBeenSet;

                    /**
                     * <p>请求来源</p><p>deprecated</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>migration 创建时间</p><p>deprecated</p>
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MIGRATIONSUMMARY_H_
