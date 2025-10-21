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

#ifndef TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEMOUNT_H_
#define TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20230321
        {
            namespace Model
            {
                /**
                * 存储目录挂载配置。
                */
                class StorageMount : public AbstractModel
                {
                public:
                    StorageMount();
                    ~StorageMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取挂载源
                     * @return Source 挂载源
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置挂载源
                     * @param _source 挂载源
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
                     * 获取目标挂载位置
                     * @return Target 目标挂载位置
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置目标挂载位置
                     * @param _target 目标挂载位置
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取挂载的存储类型，目前仅支持：local
                     * @return StorageType 挂载的存储类型，目前仅支持：local
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置挂载的存储类型，目前仅支持：local
                     * @param _storageType 挂载的存储类型，目前仅支持：local
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                private:

                    /**
                     * 挂载源
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 目标挂载位置
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * 挂载的存储类型，目前仅支持：local
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20230321_MODEL_STORAGEMOUNT_H_
