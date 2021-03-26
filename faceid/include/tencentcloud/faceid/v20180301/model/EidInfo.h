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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_EIDINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_EIDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * Eid出参
                */
                class EidInfo : public AbstractModel
                {
                public:
                    EidInfo();
                    ~EidInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户方 appeIDcode 的数字证书
                     * @return EidCode 商户方 appeIDcode 的数字证书
                     */
                    std::string GetEidCode() const;

                    /**
                     * 设置商户方 appeIDcode 的数字证书
                     * @param EidCode 商户方 appeIDcode 的数字证书
                     */
                    void SetEidCode(const std::string& _eidCode);

                    /**
                     * 判断参数 EidCode 是否已赋值
                     * @return EidCode 是否已赋值
                     */
                    bool EidCodeHasBeenSet() const;

                    /**
                     * 获取eID 中心针对商户方EidCode的电子签名
                     * @return EidSign eID 中心针对商户方EidCode的电子签名
                     */
                    std::string GetEidSign() const;

                    /**
                     * 设置eID 中心针对商户方EidCode的电子签名
                     * @param EidSign eID 中心针对商户方EidCode的电子签名
                     */
                    void SetEidSign(const std::string& _eidSign);

                    /**
                     * 判断参数 EidSign 是否已赋值
                     * @return EidSign 是否已赋值
                     */
                    bool EidSignHasBeenSet() const;

                private:

                    /**
                     * 商户方 appeIDcode 的数字证书
                     */
                    std::string m_eidCode;
                    bool m_eidCodeHasBeenSet;

                    /**
                     * eID 中心针对商户方EidCode的电子签名
                     */
                    std::string m_eidSign;
                    bool m_eidSignHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_EIDINFO_H_
