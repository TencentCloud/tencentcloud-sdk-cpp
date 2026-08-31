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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DOUTPUTCONFIG_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DOUTPUTCONFIG_H_

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
        namespace V20180717
        {
            namespace Model
            {
                /**
                * AIGC 混元 3D 任务的输出媒体文件配置。
                */
                class AigcHunyuan3DOutputConfig : public AbstractModel
                {
                public:
                    AigcHunyuan3DOutputConfig();
                    ~AigcHunyuan3DOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储模式。取值有： <li>Temporary：临时存储；</li>默认值：Temporary</p>
                     * @return StorageMode <p>存储模式。取值有： <li>Temporary：临时存储；</li>默认值：Temporary</p>
                     * 
                     */
                    std::string GetStorageMode() const;

                    /**
                     * 设置<p>存储模式。取值有： <li>Temporary：临时存储；</li>默认值：Temporary</p>
                     * @param _storageMode <p>存储模式。取值有： <li>Temporary：临时存储；</li>默认值：Temporary</p>
                     * 
                     */
                    void SetStorageMode(const std::string& _storageMode);

                    /**
                     * 判断参数 StorageMode 是否已赋值
                     * @return StorageMode 是否已赋值
                     * 
                     */
                    bool StorageModeHasBeenSet() const;

                private:

                    /**
                     * <p>存储模式。取值有： <li>Temporary：临时存储；</li>默认值：Temporary</p>
                     */
                    std::string m_storageMode;
                    bool m_storageModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DOUTPUTCONFIG_H_
