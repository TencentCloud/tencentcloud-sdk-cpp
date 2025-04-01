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

#ifndef TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINCONFIG_H_
#define TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginInfo.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginParameter.h>
#include <tencentcloud/vod/v20240718/model/IncrementalMigrationHttpOriginCondition.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20240718
        {
            namespace Model
            {
                /**
                * 增量迁移回源源站配置。
                */
                class IncrementalMigrationHttpOriginConfig : public AbstractModel
                {
                public:
                    IncrementalMigrationHttpOriginConfig();
                    ~IncrementalMigrationHttpOriginConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源源站信息。
                     * @return OriginInfo 回源源站信息。
                     * 
                     */
                    IncrementalMigrationHttpOriginInfo GetOriginInfo() const;

                    /**
                     * 设置回源源站信息。
                     * @param _originInfo 回源源站信息。
                     * 
                     */
                    void SetOriginInfo(const IncrementalMigrationHttpOriginInfo& _originInfo);

                    /**
                     * 判断参数 OriginInfo 是否已赋值
                     * @return OriginInfo 是否已赋值
                     * 
                     */
                    bool OriginInfoHasBeenSet() const;

                    /**
                     * 获取回源参数。
                     * @return OriginParameter 回源参数。
                     * 
                     */
                    IncrementalMigrationHttpOriginParameter GetOriginParameter() const;

                    /**
                     * 设置回源参数。
                     * @param _originParameter 回源参数。
                     * 
                     */
                    void SetOriginParameter(const IncrementalMigrationHttpOriginParameter& _originParameter);

                    /**
                     * 判断参数 OriginParameter 是否已赋值
                     * @return OriginParameter 是否已赋值
                     * 
                     */
                    bool OriginParameterHasBeenSet() const;

                    /**
                     * 获取回源模式。取值有：
<li>SYNC：同步回源；</li>
<li>ASYNC：异步回源。</li>若不填，默认取 `SYNC` 同步回源。
                     * @return Mode 回源模式。取值有：
<li>SYNC：同步回源；</li>
<li>ASYNC：异步回源。</li>若不填，默认取 `SYNC` 同步回源。
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置回源模式。取值有：
<li>SYNC：同步回源；</li>
<li>ASYNC：异步回源。</li>若不填，默认取 `SYNC` 同步回源。
                     * @param _mode 回源模式。取值有：
<li>SYNC：同步回源；</li>
<li>ASYNC：异步回源。</li>若不填，默认取 `SYNC` 同步回源。
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取回源条件。
                     * @return OriginCondition 回源条件。
                     * 
                     */
                    IncrementalMigrationHttpOriginCondition GetOriginCondition() const;

                    /**
                     * 设置回源条件。
                     * @param _originCondition 回源条件。
                     * 
                     */
                    void SetOriginCondition(const IncrementalMigrationHttpOriginCondition& _originCondition);

                    /**
                     * 判断参数 OriginCondition 是否已赋值
                     * @return OriginCondition 是否已赋值
                     * 
                     */
                    bool OriginConditionHasBeenSet() const;

                private:

                    /**
                     * 回源源站信息。
                     */
                    IncrementalMigrationHttpOriginInfo m_originInfo;
                    bool m_originInfoHasBeenSet;

                    /**
                     * 回源参数。
                     */
                    IncrementalMigrationHttpOriginParameter m_originParameter;
                    bool m_originParameterHasBeenSet;

                    /**
                     * 回源模式。取值有：
<li>SYNC：同步回源；</li>
<li>ASYNC：异步回源。</li>若不填，默认取 `SYNC` 同步回源。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 回源条件。
                     */
                    IncrementalMigrationHttpOriginCondition m_originCondition;
                    bool m_originConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20240718_MODEL_INCREMENTALMIGRATIONHTTPORIGINCONFIG_H_
