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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSWATERKEYRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSWATERKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/WaterPrintKey.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * ModifyDDoSWaterKey返回参数结构体
                */
                class ModifyDDoSWaterKeyResponse : public AbstractModel
                {
                public:
                    ModifyDDoSWaterKeyResponse();
                    ~ModifyDDoSWaterKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取水印密钥列表
                     * @return KeyList 水印密钥列表
                     * 
                     */
                    std::vector<WaterPrintKey> GetKeyList() const;

                    /**
                     * 判断参数 KeyList 是否已赋值
                     * @return KeyList 是否已赋值
                     * 
                     */
                    bool KeyListHasBeenSet() const;

                private:

                    /**
                     * 水印密钥列表
                     */
                    std::vector<WaterPrintKey> m_keyList;
                    bool m_keyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_MODIFYDDOSWATERKEYRESPONSE_H_
