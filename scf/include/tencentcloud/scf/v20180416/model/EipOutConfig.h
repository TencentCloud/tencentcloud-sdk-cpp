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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_EIPOUTCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_EIPOUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * EipOutConfig
                */
                class EipOutConfig : public AbstractModel
                {
                public:
                    EipOutConfig();
                    ~EipOutConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否是固定IP，["TRUE","FALSE"]
                     * @return EipFixed 是否是固定IP，["TRUE","FALSE"]
                     * 
                     */
                    std::string GetEipFixed() const;

                    /**
                     * 设置是否是固定IP，["TRUE","FALSE"]
                     * @param _eipFixed 是否是固定IP，["TRUE","FALSE"]
                     * 
                     */
                    void SetEipFixed(const std::string& _eipFixed);

                    /**
                     * 判断参数 EipFixed 是否已赋值
                     * @return EipFixed 是否已赋值
                     * 
                     */
                    bool EipFixedHasBeenSet() const;

                    /**
                     * 获取IP列表
                     * @return Eips IP列表
                     * 
                     */
                    std::vector<std::string> GetEips() const;

                    /**
                     * 设置IP列表
                     * @param _eips IP列表
                     * 
                     */
                    void SetEips(const std::vector<std::string>& _eips);

                    /**
                     * 判断参数 Eips 是否已赋值
                     * @return Eips 是否已赋值
                     * 
                     */
                    bool EipsHasBeenSet() const;

                private:

                    /**
                     * 是否是固定IP，["TRUE","FALSE"]
                     */
                    std::string m_eipFixed;
                    bool m_eipFixedHasBeenSet;

                    /**
                     * IP列表
                     */
                    std::vector<std::string> m_eips;
                    bool m_eipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_EIPOUTCONFIG_H_
