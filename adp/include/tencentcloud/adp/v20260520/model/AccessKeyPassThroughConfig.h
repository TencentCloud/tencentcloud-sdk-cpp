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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_ACCESSKEYPASSTHROUGHCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_ACCESSKEYPASSTHROUGHCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * Access Key 透传配置
                */
                class AccessKeyPassThroughConfig : public AbstractModel
                {
                public:
                    AccessKeyPassThroughConfig();
                    ~AccessKeyPassThroughConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Access Key 字段统一注入位置，0:Header，1:Query</p>
                     * @return KeyLocation <p>Access Key 字段统一注入位置，0:Header，1:Query</p>
                     * 
                     */
                    int64_t GetKeyLocation() const;

                    /**
                     * 设置<p>Access Key 字段统一注入位置，0:Header，1:Query</p>
                     * @param _keyLocation <p>Access Key 字段统一注入位置，0:Header，1:Query</p>
                     * 
                     */
                    void SetKeyLocation(const int64_t& _keyLocation);

                    /**
                     * 判断参数 KeyLocation 是否已赋值
                     * @return KeyLocation 是否已赋值
                     * 
                     */
                    bool KeyLocationHasBeenSet() const;

                private:

                    /**
                     * <p>Access Key 字段统一注入位置，0:Header，1:Query</p>
                     */
                    int64_t m_keyLocation;
                    bool m_keyLocationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_ACCESSKEYPASSTHROUGHCONFIG_H_
