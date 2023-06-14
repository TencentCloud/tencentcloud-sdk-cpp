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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_STANDARDMODECONFIG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_STANDARDMODECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 标准模式阻断配置
                */
                class StandardModeConfig : public AbstractModel
                {
                public:
                    StandardModeConfig();
                    ~StandardModeConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取阻断时长，单位：秒
                     * @return Ttl 阻断时长，单位：秒
                     * 
                     */
                    uint64_t GetTtl() const;

                    /**
                     * 设置阻断时长，单位：秒
                     * @param _ttl 阻断时长，单位：秒
                     * 
                     */
                    void SetTtl(const uint64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     * 
                     */
                    bool TtlHasBeenSet() const;

                private:

                    /**
                     * 阻断时长，单位：秒
                     */
                    uint64_t m_ttl;
                    bool m_ttlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_STANDARDMODECONFIG_H_
