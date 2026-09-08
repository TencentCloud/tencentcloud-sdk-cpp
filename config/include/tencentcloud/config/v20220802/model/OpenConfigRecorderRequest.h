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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_OPENCONFIGRECORDERREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_OPENCONFIGRECORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * OpenConfigRecorder请求参数结构体
                */
                class OpenConfigRecorderRequest : public AbstractModel
                {
                public:
                    OpenConfigRecorderRequest();
                    ~OpenConfigRecorderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>1:从控制中心调用</p>
                     * @return FromMode <p>1:从控制中心调用</p>
                     * 
                     */
                    uint64_t GetFromMode() const;

                    /**
                     * 设置<p>1:从控制中心调用</p>
                     * @param _fromMode <p>1:从控制中心调用</p>
                     * 
                     */
                    void SetFromMode(const uint64_t& _fromMode);

                    /**
                     * 判断参数 FromMode 是否已赋值
                     * @return FromMode 是否已赋值
                     * 
                     */
                    bool FromModeHasBeenSet() const;

                private:

                    /**
                     * <p>1:从控制中心调用</p>
                     */
                    uint64_t m_fromMode;
                    bool m_fromModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_OPENCONFIGRECORDERREQUEST_H_
