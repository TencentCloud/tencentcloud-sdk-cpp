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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKINFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 套餐包信息
                */
                class PackInfo : public AbstractModel
                {
                public:
                    PackInfo();
                    ~PackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取套餐包的类型，取值[
staticpack：高防IP三网套餐包
insurance：保险套餐包
]
                     * @return PackType 套餐包的类型，取值[
staticpack：高防IP三网套餐包
insurance：保险套餐包
]
                     * 
                     */
                    std::string GetPackType() const;

                    /**
                     * 设置套餐包的类型，取值[
staticpack：高防IP三网套餐包
insurance：保险套餐包
]
                     * @param _packType 套餐包的类型，取值[
staticpack：高防IP三网套餐包
insurance：保险套餐包
]
                     * 
                     */
                    void SetPackType(const std::string& _packType);

                    /**
                     * 判断参数 PackType 是否已赋值
                     * @return PackType 是否已赋值
                     * 
                     */
                    bool PackTypeHasBeenSet() const;

                    /**
                     * 获取套餐包的ID
                     * @return PackId 套餐包的ID
                     * 
                     */
                    std::string GetPackId() const;

                    /**
                     * 设置套餐包的ID
                     * @param _packId 套餐包的ID
                     * 
                     */
                    void SetPackId(const std::string& _packId);

                    /**
                     * 判断参数 PackId 是否已赋值
                     * @return PackId 是否已赋值
                     * 
                     */
                    bool PackIdHasBeenSet() const;

                private:

                    /**
                     * 套餐包的类型，取值[
staticpack：高防IP三网套餐包
insurance：保险套餐包
]
                     */
                    std::string m_packType;
                    bool m_packTypeHasBeenSet;

                    /**
                     * 套餐包的ID
                     */
                    std::string m_packId;
                    bool m_packIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_PACKINFO_H_
