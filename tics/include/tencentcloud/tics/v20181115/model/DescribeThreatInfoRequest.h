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

#ifndef TENCENTCLOUD_TICS_V20181115_MODEL_DESCRIBETHREATINFOREQUEST_H_
#define TENCENTCLOUD_TICS_V20181115_MODEL_DESCRIBETHREATINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tics
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * DescribeThreatInfo请求参数结构体
                */
                class DescribeThreatInfoRequest : public AbstractModel
                {
                public:
                    DescribeThreatInfoRequest();
                    ~DescribeThreatInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询对象，域名或IP
                     * @return Key 查询对象，域名或IP
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置查询对象，域名或IP
                     * @param _key 查询对象，域名或IP
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
                     * 获取查询类型，当前取值为domain或ip
                     * @return Type 查询类型，当前取值为domain或ip
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置查询类型，当前取值为domain或ip
                     * @param _type 查询类型，当前取值为domain或ip
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取附加字段，是否返回上下文。当为0时不返回上下文，当为1时返回上下文。
                     * @return Option 附加字段，是否返回上下文。当为0时不返回上下文，当为1时返回上下文。
                     * 
                     */
                    uint64_t GetOption() const;

                    /**
                     * 设置附加字段，是否返回上下文。当为0时不返回上下文，当为1时返回上下文。
                     * @param _option 附加字段，是否返回上下文。当为0时不返回上下文，当为1时返回上下文。
                     * 
                     */
                    void SetOption(const uint64_t& _option);

                    /**
                     * 判断参数 Option 是否已赋值
                     * @return Option 是否已赋值
                     * 
                     */
                    bool OptionHasBeenSet() const;

                private:

                    /**
                     * 查询对象，域名或IP
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 查询类型，当前取值为domain或ip
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 附加字段，是否返回上下文。当为0时不返回上下文，当为1时返回上下文。
                     */
                    uint64_t m_option;
                    bool m_optionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TICS_V20181115_MODEL_DESCRIBETHREATINFOREQUEST_H_
