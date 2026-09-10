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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONEIPCONFIGFIXED_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONEIPCONFIGFIXED_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 固定 IP 配置
                */
                class FunctionEipConfigFixed : public AbstractModel
                {
                public:
                    FunctionEipConfigFixed();
                    ~FunctionEipConfigFixed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否固定 IP，TRUE / FALSE</p>
                     * @return EipFixed <p>是否固定 IP，TRUE / FALSE</p>
                     * 
                     */
                    std::string GetEipFixed() const;

                    /**
                     * 设置<p>是否固定 IP，TRUE / FALSE</p>
                     * @param _eipFixed <p>是否固定 IP，TRUE / FALSE</p>
                     * 
                     */
                    void SetEipFixed(const std::string& _eipFixed);

                    /**
                     * 判断参数 EipFixed 是否已赋值
                     * @return EipFixed 是否已赋值
                     * 
                     */
                    bool EipFixedHasBeenSet() const;

                private:

                    /**
                     * <p>是否固定 IP，TRUE / FALSE</p>
                     */
                    std::string m_eipFixed;
                    bool m_eipFixedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONEIPCONFIGFIXED_H_
