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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFILEINFO_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginPrefixConfig.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginSuffixConfig.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationOriginFixedFileConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * 增量迁移源站文件信息。
                */
                class IncrementalMigrationOriginFileInfo : public AbstractModel
                {
                public:
                    IncrementalMigrationOriginFileInfo();
                    ~IncrementalMigrationOriginFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件前缀配置。
                     * @return PrefixConfig 文件前缀配置。
                     * 
                     */
                    IncrementalMigrationOriginPrefixConfig GetPrefixConfig() const;

                    /**
                     * 设置文件前缀配置。
                     * @param _prefixConfig 文件前缀配置。
                     * 
                     */
                    void SetPrefixConfig(const IncrementalMigrationOriginPrefixConfig& _prefixConfig);

                    /**
                     * 判断参数 PrefixConfig 是否已赋值
                     * @return PrefixConfig 是否已赋值
                     * 
                     */
                    bool PrefixConfigHasBeenSet() const;

                    /**
                     * 获取文件后缀配置。
                     * @return SuffixConfig 文件后缀配置。
                     * 
                     */
                    IncrementalMigrationOriginSuffixConfig GetSuffixConfig() const;

                    /**
                     * 设置文件后缀配置。
                     * @param _suffixConfig 文件后缀配置。
                     * 
                     */
                    void SetSuffixConfig(const IncrementalMigrationOriginSuffixConfig& _suffixConfig);

                    /**
                     * 判断参数 SuffixConfig 是否已赋值
                     * @return SuffixConfig 是否已赋值
                     * 
                     */
                    bool SuffixConfigHasBeenSet() const;

                    /**
                     * 获取固定文件配置。
                     * @return FixedFileConfig 固定文件配置。
                     * 
                     */
                    IncrementalMigrationOriginFixedFileConfig GetFixedFileConfig() const;

                    /**
                     * 设置固定文件配置。
                     * @param _fixedFileConfig 固定文件配置。
                     * 
                     */
                    void SetFixedFileConfig(const IncrementalMigrationOriginFixedFileConfig& _fixedFileConfig);

                    /**
                     * 判断参数 FixedFileConfig 是否已赋值
                     * @return FixedFileConfig 是否已赋值
                     * 
                     */
                    bool FixedFileConfigHasBeenSet() const;

                private:

                    /**
                     * 文件前缀配置。
                     */
                    IncrementalMigrationOriginPrefixConfig m_prefixConfig;
                    bool m_prefixConfigHasBeenSet;

                    /**
                     * 文件后缀配置。
                     */
                    IncrementalMigrationOriginSuffixConfig m_suffixConfig;
                    bool m_suffixConfigHasBeenSet;

                    /**
                     * 固定文件配置。
                     */
                    IncrementalMigrationOriginFixedFileConfig m_fixedFileConfig;
                    bool m_fixedFileConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFILEINFO_H_
