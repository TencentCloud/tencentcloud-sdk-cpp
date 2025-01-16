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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_ORDERBY_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_ORDERBY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 排序字段
                */
                class OrderBy : public AbstractModel
                {
                public:
                    OrderBy();
                    ~OrderBy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要排序的字段，现支持 startTIme, endTime, duration
                     * @return Key 需要排序的字段，现支持 startTIme, endTime, duration
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置需要排序的字段，现支持 startTIme, endTime, duration
                     * @param _key 需要排序的字段，现支持 startTIme, endTime, duration
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取asc 顺序排序 / desc 倒序排序
                     * @return Value asc 顺序排序 / desc 倒序排序
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置asc 顺序排序 / desc 倒序排序
                     * @param _value asc 顺序排序 / desc 倒序排序
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 需要排序的字段，现支持 startTIme, endTime, duration
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * asc 顺序排序 / desc 倒序排序
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_ORDERBY_H_
