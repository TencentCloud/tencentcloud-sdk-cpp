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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_OPTIONSITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_OPTIONSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 多项选择数据
                */
                class OptionsItem : public AbstractModel
                {
                public:
                    OptionsItem();
                    ~OptionsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>中文值</p>
                     * @return ValueCh <p>中文值</p>
                     * 
                     */
                    std::string GetValueCh() const;

                    /**
                     * 设置<p>中文值</p>
                     * @param _valueCh <p>中文值</p>
                     * 
                     */
                    void SetValueCh(const std::string& _valueCh);

                    /**
                     * 判断参数 ValueCh 是否已赋值
                     * @return ValueCh 是否已赋值
                     * 
                     */
                    bool ValueChHasBeenSet() const;

                    /**
                     * 获取<p>英文值</p>
                     * @return ValueEn <p>英文值</p>
                     * 
                     */
                    std::string GetValueEn() const;

                    /**
                     * 设置<p>英文值</p>
                     * @param _valueEn <p>英文值</p>
                     * 
                     */
                    void SetValueEn(const std::string& _valueEn);

                    /**
                     * 判断参数 ValueEn 是否已赋值
                     * @return ValueEn 是否已赋值
                     * 
                     */
                    bool ValueEnHasBeenSet() const;

                    /**
                     * 获取<p>每一项的Key值</p>
                     * @return OptionKey <p>每一项的Key值</p>
                     * 
                     */
                    int64_t GetOptionKey() const;

                    /**
                     * 设置<p>每一项的Key值</p>
                     * @param _optionKey <p>每一项的Key值</p>
                     * 
                     */
                    void SetOptionKey(const int64_t& _optionKey);

                    /**
                     * 判断参数 OptionKey 是否已赋值
                     * @return OptionKey 是否已赋值
                     * 
                     */
                    bool OptionKeyHasBeenSet() const;

                private:

                    /**
                     * <p>中文值</p>
                     */
                    std::string m_valueCh;
                    bool m_valueChHasBeenSet;

                    /**
                     * <p>英文值</p>
                     */
                    std::string m_valueEn;
                    bool m_valueEnHasBeenSet;

                    /**
                     * <p>每一项的Key值</p>
                     */
                    int64_t m_optionKey;
                    bool m_optionKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_OPTIONSITEM_H_
