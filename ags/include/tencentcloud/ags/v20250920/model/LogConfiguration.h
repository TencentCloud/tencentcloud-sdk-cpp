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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_LOGCONFIGURATION_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_LOGCONFIGURATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/CLSConfig.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 沙箱工具日志采集相关配置
                */
                class LogConfiguration : public AbstractModel
                {
                public:
                    LogConfiguration();
                    ~LogConfiguration() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志推送CLS的配置。
                     * @return CLSConfig 日志推送CLS的配置。
                     * 
                     */
                    CLSConfig GetCLSConfig() const;

                    /**
                     * 设置日志推送CLS的配置。
                     * @param _cLSConfig 日志推送CLS的配置。
                     * 
                     */
                    void SetCLSConfig(const CLSConfig& _cLSConfig);

                    /**
                     * 判断参数 CLSConfig 是否已赋值
                     * @return CLSConfig 是否已赋值
                     * 
                     */
                    bool CLSConfigHasBeenSet() const;

                private:

                    /**
                     * 日志推送CLS的配置。
                     */
                    CLSConfig m_cLSConfig;
                    bool m_cLSConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_LOGCONFIGURATION_H_
