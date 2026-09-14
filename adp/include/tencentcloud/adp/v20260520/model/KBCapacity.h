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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_KBCAPACITY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_KBCAPACITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 知识库容量信息
                */
                class KBCapacity : public AbstractModel
                {
                public:
                    KBCapacity();
                    ~KBCapacity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>最大字符数</p>
                     * @return MaxCharSize <p>最大字符数</p>
                     * 
                     */
                    std::string GetMaxCharSize() const;

                    /**
                     * 设置<p>最大字符数</p>
                     * @param _maxCharSize <p>最大字符数</p>
                     * 
                     */
                    void SetMaxCharSize(const std::string& _maxCharSize);

                    /**
                     * 判断参数 MaxCharSize 是否已赋值
                     * @return MaxCharSize 是否已赋值
                     * 
                     */
                    bool MaxCharSizeHasBeenSet() const;

                    /**
                     * 获取<p>超量字符数</p>
                     * @return OverCharSize <p>超量字符数</p>
                     * 
                     */
                    std::string GetOverCharSize() const;

                    /**
                     * 设置<p>超量字符数</p>
                     * @param _overCharSize <p>超量字符数</p>
                     * 
                     */
                    void SetOverCharSize(const std::string& _overCharSize);

                    /**
                     * 判断参数 OverCharSize 是否已赋值
                     * @return OverCharSize 是否已赋值
                     * 
                     */
                    bool OverCharSizeHasBeenSet() const;

                    /**
                     * 获取<p>已用字符数</p>
                     * @return UsedCharSize <p>已用字符数</p>
                     * 
                     */
                    std::string GetUsedCharSize() const;

                    /**
                     * 设置<p>已用字符数</p>
                     * @param _usedCharSize <p>已用字符数</p>
                     * 
                     */
                    void SetUsedCharSize(const std::string& _usedCharSize);

                    /**
                     * 判断参数 UsedCharSize 是否已赋值
                     * @return UsedCharSize 是否已赋值
                     * 
                     */
                    bool UsedCharSizeHasBeenSet() const;

                private:

                    /**
                     * <p>最大字符数</p>
                     */
                    std::string m_maxCharSize;
                    bool m_maxCharSizeHasBeenSet;

                    /**
                     * <p>超量字符数</p>
                     */
                    std::string m_overCharSize;
                    bool m_overCharSizeHasBeenSet;

                    /**
                     * <p>已用字符数</p>
                     */
                    std::string m_usedCharSize;
                    bool m_usedCharSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_KBCAPACITY_H_
