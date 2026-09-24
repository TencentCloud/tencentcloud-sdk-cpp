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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_AUDIT_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_AUDIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * tcc 审计信息
                */
                class Audit : public AbstractModel
                {
                public:
                    Audit();
                    ~Audit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>创建者</p>
                     * @return Creator <p>创建者</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>创建者</p>
                     * @param _creator <p>创建者</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>最后修改者</p>
                     * @return LastModifier <p>最后修改者</p>
                     * 
                     */
                    std::string GetLastModifier() const;

                    /**
                     * 设置<p>最后修改者</p>
                     * @param _lastModifier <p>最后修改者</p>
                     * 
                     */
                    void SetLastModifier(const std::string& _lastModifier);

                    /**
                     * 判断参数 LastModifier 是否已赋值
                     * @return LastModifier 是否已赋值
                     * 
                     */
                    bool LastModifierHasBeenSet() const;

                    /**
                     * 获取<p>创建时间戳</p>
                     * @return CreatedAt <p>创建时间戳</p>
                     * 
                     */
                    uint64_t GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间戳</p>
                     * @param _createdAt <p>创建时间戳</p>
                     * 
                     */
                    void SetCreatedAt(const uint64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>最后修改时间戳</p>
                     * @return LastModifiedAt <p>最后修改时间戳</p>
                     * 
                     */
                    uint64_t GetLastModifiedAt() const;

                    /**
                     * 设置<p>最后修改时间戳</p>
                     * @param _lastModifiedAt <p>最后修改时间戳</p>
                     * 
                     */
                    void SetLastModifiedAt(const uint64_t& _lastModifiedAt);

                    /**
                     * 判断参数 LastModifiedAt 是否已赋值
                     * @return LastModifiedAt 是否已赋值
                     * 
                     */
                    bool LastModifiedAtHasBeenSet() const;

                    /**
                     * 获取<p>最后修改时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     * @return LastModifiedTime <p>最后修改时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     * 
                     */
                    std::string GetLastModifiedTime() const;

                    /**
                     * 设置<p>最后修改时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     * @param _lastModifiedTime <p>最后修改时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     * 
                     */
                    void SetLastModifiedTime(const std::string& _lastModifiedTime);

                    /**
                     * 判断参数 LastModifiedTime 是否已赋值
                     * @return LastModifiedTime 是否已赋值
                     * 
                     */
                    bool LastModifiedTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     * @return CreatedTime <p>创建时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     * @param _createdTime <p>创建时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * <p>创建者</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>最后修改者</p>
                     */
                    std::string m_lastModifier;
                    bool m_lastModifierHasBeenSet;

                    /**
                     * <p>创建时间戳</p>
                     */
                    uint64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>最后修改时间戳</p>
                     */
                    uint64_t m_lastModifiedAt;
                    bool m_lastModifiedAtHasBeenSet;

                    /**
                     * <p>最后修改时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     */
                    std::string m_lastModifiedTime;
                    bool m_lastModifiedTimeHasBeenSet;

                    /**
                     * <p>创建时间（已废弃）</p><p>参数格式：2024-11-01 11:01:01</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_AUDIT_H_
