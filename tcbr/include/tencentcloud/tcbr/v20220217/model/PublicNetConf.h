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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_PUBLICNETCONF_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_PUBLICNETCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 公网访问配置
                */
                class PublicNetConf : public AbstractModel
                {
                public:
                    PublicNetConf();
                    ~PublicNetConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否开启公网访问</p><p>枚举值：</p><ul><li>ENABLE： 开启公网访问</li><li>DISABLE： 关闭公网访问</li></ul>
                     * @return PublicNetStatus <p>是否开启公网访问</p><p>枚举值：</p><ul><li>ENABLE： 开启公网访问</li><li>DISABLE： 关闭公网访问</li></ul>
                     * 
                     */
                    std::string GetPublicNetStatus() const;

                    /**
                     * 设置<p>是否开启公网访问</p><p>枚举值：</p><ul><li>ENABLE： 开启公网访问</li><li>DISABLE： 关闭公网访问</li></ul>
                     * @param _publicNetStatus <p>是否开启公网访问</p><p>枚举值：</p><ul><li>ENABLE： 开启公网访问</li><li>DISABLE： 关闭公网访问</li></ul>
                     * 
                     */
                    void SetPublicNetStatus(const std::string& _publicNetStatus);

                    /**
                     * 判断参数 PublicNetStatus 是否已赋值
                     * @return PublicNetStatus 是否已赋值
                     * 
                     */
                    bool PublicNetStatusHasBeenSet() const;

                private:

                    /**
                     * <p>是否开启公网访问</p><p>枚举值：</p><ul><li>ENABLE： 开启公网访问</li><li>DISABLE： 关闭公网访问</li></ul>
                     */
                    std::string m_publicNetStatus;
                    bool m_publicNetStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_PUBLICNETCONF_H_
