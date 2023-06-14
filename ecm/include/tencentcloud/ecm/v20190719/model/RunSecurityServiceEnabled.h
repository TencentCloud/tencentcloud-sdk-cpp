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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_RUNSECURITYSERVICEENABLED_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_RUNSECURITYSERVICEENABLED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 云镜服务；
                */
                class RunSecurityServiceEnabled : public AbstractModel
                {
                public:
                    RunSecurityServiceEnabled();
                    ~RunSecurityServiceEnabled() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启。
                     * @return Enabled 是否开启。
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启。
                     * @param _enabled 是否开启。
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取云镜版本：0 基础版，1 专业版。目前仅支持基础版
                     * @return Version 云镜版本：0 基础版，1 专业版。目前仅支持基础版
                     * 
                     */
                    int64_t GetVersion() const;

                    /**
                     * 设置云镜版本：0 基础版，1 专业版。目前仅支持基础版
                     * @param _version 云镜版本：0 基础版，1 专业版。目前仅支持基础版
                     * 
                     */
                    void SetVersion(const int64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 是否开启。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 云镜版本：0 基础版，1 专业版。目前仅支持基础版
                     */
                    int64_t m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_RUNSECURITYSERVICEENABLED_H_
