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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFIXEDFILECONFIG_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFIXEDFILECONFIG_H_

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
                * 增量迁移源站固定文件路径配置。
                */
                class IncrementalMigrationOriginFixedFileConfig : public AbstractModel
                {
                public:
                    IncrementalMigrationOriginFixedFileConfig();
                    ~IncrementalMigrationOriginFixedFileConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取固定文件路径；如填充 `example/test.png`，则回源地址为： `http(s)://<回源域名>/example/test.png`。
                     * @return FixedFilePath 固定文件路径；如填充 `example/test.png`，则回源地址为： `http(s)://<回源域名>/example/test.png`。
                     * 
                     */
                    std::string GetFixedFilePath() const;

                    /**
                     * 设置固定文件路径；如填充 `example/test.png`，则回源地址为： `http(s)://<回源域名>/example/test.png`。
                     * @param _fixedFilePath 固定文件路径；如填充 `example/test.png`，则回源地址为： `http(s)://<回源域名>/example/test.png`。
                     * 
                     */
                    void SetFixedFilePath(const std::string& _fixedFilePath);

                    /**
                     * 判断参数 FixedFilePath 是否已赋值
                     * @return FixedFilePath 是否已赋值
                     * 
                     */
                    bool FixedFilePathHasBeenSet() const;

                private:

                    /**
                     * 固定文件路径；如填充 `example/test.png`，则回源地址为： `http(s)://<回源域名>/example/test.png`。
                     */
                    std::string m_fixedFilePath;
                    bool m_fixedFilePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONORIGINFIXEDFILECONFIG_H_
