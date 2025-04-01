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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINSUFFIXCONFIG_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINSUFFIXCONFIG_H_

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
        namespace V20240718
        {
            namespace Model
            {
                /**
                * 增量迁移源站文件后缀配置。
                */
                class IncrementalMigrationOriginSuffixConfig : public AbstractModel
                {
                public:
                    IncrementalMigrationOriginSuffixConfig();
                    ~IncrementalMigrationOriginSuffixConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文件后缀；如填充 `.ts` ，则回源地址为：`http(s)://<回源域名>/<文件名>.ts`。
                     * @return Suffix 文件后缀；如填充 `.ts` ，则回源地址为：`http(s)://<回源域名>/<文件名>.ts`。
                     * 
                     */
                    std::string GetSuffix() const;

                    /**
                     * 设置文件后缀；如填充 `.ts` ，则回源地址为：`http(s)://<回源域名>/<文件名>.ts`。
                     * @param _suffix 文件后缀；如填充 `.ts` ，则回源地址为：`http(s)://<回源域名>/<文件名>.ts`。
                     * 
                     */
                    void SetSuffix(const std::string& _suffix);

                    /**
                     * 判断参数 Suffix 是否已赋值
                     * @return Suffix 是否已赋值
                     * 
                     */
                    bool SuffixHasBeenSet() const;

                private:

                    /**
                     * 文件后缀；如填充 `.ts` ，则回源地址为：`http(s)://<回源域名>/<文件名>.ts`。
                     */
                    std::string m_suffix;
                    bool m_suffixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINSUFFIXCONFIG_H_
