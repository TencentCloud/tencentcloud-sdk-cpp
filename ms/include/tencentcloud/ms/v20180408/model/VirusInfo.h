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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_VIRUSINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_VIRUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 病毒信息
                */
                class VirusInfo : public AbstractModel
                {
                public:
                    VirusInfo();
                    ~VirusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取软件安全类型，分别为0-未知、 1-安全软件、2-风险软件、3-病毒软件
                     * @return SafeType 软件安全类型，分别为0-未知、 1-安全软件、2-风险软件、3-病毒软件
                     */
                    int64_t GetSafeType() const;

                    /**
                     * 设置软件安全类型，分别为0-未知、 1-安全软件、2-风险软件、3-病毒软件
                     * @param SafeType 软件安全类型，分别为0-未知、 1-安全软件、2-风险软件、3-病毒软件
                     */
                    void SetSafeType(const int64_t& _safeType);

                    /**
                     * 判断参数 SafeType 是否已赋值
                     * @return SafeType 是否已赋值
                     */
                    bool SafeTypeHasBeenSet() const;

                    /**
                     * 获取病毒名称， utf8编码，非病毒时值为空
                     * @return VirusName 病毒名称， utf8编码，非病毒时值为空
                     */
                    std::string GetVirusName() const;

                    /**
                     * 设置病毒名称， utf8编码，非病毒时值为空
                     * @param VirusName 病毒名称， utf8编码，非病毒时值为空
                     */
                    void SetVirusName(const std::string& _virusName);

                    /**
                     * 判断参数 VirusName 是否已赋值
                     * @return VirusName 是否已赋值
                     */
                    bool VirusNameHasBeenSet() const;

                    /**
                     * 获取病毒描述，utf8编码，非病毒时值为空
                     * @return VirusDesc 病毒描述，utf8编码，非病毒时值为空
                     */
                    std::string GetVirusDesc() const;

                    /**
                     * 设置病毒描述，utf8编码，非病毒时值为空
                     * @param VirusDesc 病毒描述，utf8编码，非病毒时值为空
                     */
                    void SetVirusDesc(const std::string& _virusDesc);

                    /**
                     * 判断参数 VirusDesc 是否已赋值
                     * @return VirusDesc 是否已赋值
                     */
                    bool VirusDescHasBeenSet() const;

                private:

                    /**
                     * 软件安全类型，分别为0-未知、 1-安全软件、2-风险软件、3-病毒软件
                     */
                    int64_t m_safeType;
                    bool m_safeTypeHasBeenSet;

                    /**
                     * 病毒名称， utf8编码，非病毒时值为空
                     */
                    std::string m_virusName;
                    bool m_virusNameHasBeenSet;

                    /**
                     * 病毒描述，utf8编码，非病毒时值为空
                     */
                    std::string m_virusDesc;
                    bool m_virusDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_VIRUSINFO_H_
