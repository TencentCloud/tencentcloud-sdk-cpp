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
                * 标准版销售信息
                */
                class SaleInfo : public AbstractModel
                {
                public:
                    SaleInfo();
                    ~SaleInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取手动设置的flag标志
                     * @return Flag 手动设置的flag标志
                     * 
                     */
                    bool GetFlag() const;

                    /**
                     * 设置手动设置的flag标志
                     * @param _flag 手动设置的flag标志
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
                     * 获取ckafka版本号(1.1.1/2.4.2/0.10.2)
                     * @return Version ckafka版本号(1.1.1/2.4.2/0.10.2)
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置ckafka版本号(1.1.1/2.4.2/0.10.2)
                     * @param _version ckafka版本号(1.1.1/2.4.2/0.10.2)
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
                     * 获取专业版、标准版标志
                     * @return Platform 专业版、标准版标志
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置专业版、标准版标志
                     * @param _platform 专业版、标准版标志
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
                     * 获取售罄标志：true售罄
                     * @return SoldOut 售罄标志：true售罄
                     * 
                     */
                    bool GetSoldOut() const;

                    /**
                     * 设置售罄标志：true售罄
                     * @param _soldOut 售罄标志：true售罄
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
                     * 手动设置的flag标志
                     */
                    bool m_flag;
                    bool m_flagHasBeenSet;

                    /**
                     * ckafka版本号(1.1.1/2.4.2/0.10.2)
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 专业版、标准版标志
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 售罄标志：true售罄
                     */
                    bool m_soldOut;
                    bool m_soldOutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_SALEINFO_H_
