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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_SALEINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_SALEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 各版本销售信息
                */
                class SaleInfo : public AbstractModel
                {
                public:
                    SaleInfo();
                    ~SaleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>手动设置的flag标志，true表示售罄，false表示可售。</p>
                     * @return Flag <p>手动设置的flag标志，true表示售罄，false表示可售。</p>
                     * 
                     */
                    bool GetFlag() const;

                    /**
                     * 设置<p>手动设置的flag标志，true表示售罄，false表示可售。</p>
                     * @param _flag <p>手动设置的flag标志，true表示售罄，false表示可售。</p>
                     * 
                     */
                    void SetFlag(const bool& _flag);

                    /**
                     * 判断参数 Flag 是否已赋值
                     * @return Flag 是否已赋值
                     * 
                     */
                    bool FlagHasBeenSet() const;

                    /**
                     * 获取<p>ckafka版本号(1.1.1/2.4.2/0.10.2)</p>
                     * @return Version <p>ckafka版本号(1.1.1/2.4.2/0.10.2)</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>ckafka版本号(1.1.1/2.4.2/0.10.2)</p>
                     * @param _version <p>ckafka版本号(1.1.1/2.4.2/0.10.2)</p>
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>专业版、标准版标志</p>
                     * @return Platform <p>专业版、标准版标志</p>
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置<p>专业版、标准版标志</p>
                     * @param _platform <p>专业版、标准版标志</p>
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>售罄标志：true售罄</p>
                     * @return SoldOut <p>售罄标志：true售罄</p>
                     * 
                     */
                    bool GetSoldOut() const;

                    /**
                     * 设置<p>售罄标志：true售罄</p>
                     * @param _soldOut <p>售罄标志：true售罄</p>
                     * 
                     */
                    void SetSoldOut(const bool& _soldOut);

                    /**
                     * 判断参数 SoldOut 是否已赋值
                     * @return SoldOut 是否已赋值
                     * 
                     */
                    bool SoldOutHasBeenSet() const;

                private:

                    /**
                     * <p>手动设置的flag标志，true表示售罄，false表示可售。</p>
                     */
                    bool m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * <p>ckafka版本号(1.1.1/2.4.2/0.10.2)</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>专业版、标准版标志</p>
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>售罄标志：true售罄</p>
                     */
                    bool m_soldOut;
                    bool m_soldOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SALEINFO_H_
