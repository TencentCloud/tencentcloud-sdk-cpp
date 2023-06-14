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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_NUMBERFORMAT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_NUMBERFORMAT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 输出文件名的`{number}`变量的规则。
                */
                class NumberFormat : public AbstractModel
                {
                public:
                    NumberFormat();
                    ~NumberFormat() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取`{number}`变量的起始值，默认为0。
                     * @return InitialValue `{number}`变量的起始值，默认为0。
                     * 
                     */
                    uint64_t GetInitialValue() const;

                    /**
                     * 设置`{number}`变量的起始值，默认为0。
                     * @param _initialValue `{number}`变量的起始值，默认为0。
                     * 
                     */
                    void SetInitialValue(const uint64_t& _initialValue);

                    /**
                     * 判断参数 InitialValue 是否已赋值
                     * @return InitialValue 是否已赋值
                     * 
                     */
                    bool InitialValueHasBeenSet() const;

                    /**
                     * 获取`{number}`变量的增长步长，默认为1。
                     * @return Increment `{number}`变量的增长步长，默认为1。
                     * 
                     */
                    uint64_t GetIncrement() const;

                    /**
                     * 设置`{number}`变量的增长步长，默认为1。
                     * @param _increment `{number}`变量的增长步长，默认为1。
                     * 
                     */
                    void SetIncrement(const uint64_t& _increment);

                    /**
                     * 判断参数 Increment 是否已赋值
                     * @return Increment 是否已赋值
                     * 
                     */
                    bool IncrementHasBeenSet() const;

                    /**
                     * 获取`{number}`变量的最小长度，不足时补占位符。默认为1。
                     * @return MinLength `{number}`变量的最小长度，不足时补占位符。默认为1。
                     * 
                     */
                    uint64_t GetMinLength() const;

                    /**
                     * 设置`{number}`变量的最小长度，不足时补占位符。默认为1。
                     * @param _minLength `{number}`变量的最小长度，不足时补占位符。默认为1。
                     * 
                     */
                    void SetMinLength(const uint64_t& _minLength);

                    /**
                     * 判断参数 MinLength 是否已赋值
                     * @return MinLength 是否已赋值
                     * 
                     */
                    bool MinLengthHasBeenSet() const;

                    /**
                     * 获取`{number}`变量的长度不足时，补充的占位符。默认为"0"。
                     * @return PlaceHolder `{number}`变量的长度不足时，补充的占位符。默认为"0"。
                     * 
                     */
                    std::string GetPlaceHolder() const;

                    /**
                     * 设置`{number}`变量的长度不足时，补充的占位符。默认为"0"。
                     * @param _placeHolder `{number}`变量的长度不足时，补充的占位符。默认为"0"。
                     * 
                     */
                    void SetPlaceHolder(const std::string& _placeHolder);

                    /**
                     * 判断参数 PlaceHolder 是否已赋值
                     * @return PlaceHolder 是否已赋值
                     * 
                     */
                    bool PlaceHolderHasBeenSet() const;

                private:

                    /**
                     * `{number}`变量的起始值，默认为0。
                     */
                    uint64_t m_initialValue;
                    bool m_initialValueHasBeenSet;

                    /**
                     * `{number}`变量的增长步长，默认为1。
                     */
                    uint64_t m_increment;
                    bool m_incrementHasBeenSet;

                    /**
                     * `{number}`变量的最小长度，不足时补占位符。默认为1。
                     */
                    uint64_t m_minLength;
                    bool m_minLengthHasBeenSet;

                    /**
                     * `{number}`变量的长度不足时，补充的占位符。默认为"0"。
                     */
                    std::string m_placeHolder;
                    bool m_placeHolderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_NUMBERFORMAT_H_
