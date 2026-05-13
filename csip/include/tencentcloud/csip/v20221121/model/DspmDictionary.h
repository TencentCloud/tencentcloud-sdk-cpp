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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDICTIONARY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDICTIONARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * dspm字典信息
                */
                class DspmDictionary : public AbstractModel
                {
                public:
                    DspmDictionary();
                    ~DspmDictionary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字典id
                     * @return DictId 字典id
                     * 
                     */
                    uint64_t GetDictId() const;

                    /**
                     * 设置字典id
                     * @param _dictId 字典id
                     * 
                     */
                    void SetDictId(const uint64_t& _dictId);

                    /**
                     * 判断参数 DictId 是否已赋值
                     * @return DictId 是否已赋值
                     * 
                     */
                    bool DictIdHasBeenSet() const;

                    /**
                     * 获取字典名称
                     * @return DictName 字典名称
                     * 
                     */
                    std::string GetDictName() const;

                    /**
                     * 设置字典名称
                     * @param _dictName 字典名称
                     * 
                     */
                    void SetDictName(const std::string& _dictName);

                    /**
                     * 判断参数 DictName 是否已赋值
                     * @return DictName 是否已赋值
                     * 
                     */
                    bool DictNameHasBeenSet() const;

                private:

                    /**
                     * 字典id
                     */
                    uint64_t m_dictId;
                    bool m_dictIdHasBeenSet;

                    /**
                     * 字典名称
                     */
                    std::string m_dictName;
                    bool m_dictNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDICTIONARY_H_
