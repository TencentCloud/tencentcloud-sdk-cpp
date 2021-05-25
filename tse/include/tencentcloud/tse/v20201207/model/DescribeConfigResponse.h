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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeConfig返回参数结构体
                */
                class DescribeConfigResponse : public AbstractModel
                {
                public:
                    DescribeConfigResponse();
                    ~DescribeConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取配置项或路径key
                     * @return Key 配置项或路径key
                     */
                    std::string GetKey() const;

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取配置项的值
                     * @return Value 配置项的值
                     */
                    std::string GetValue() const;

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取当前key是否为路径
                     * @return IsDir 当前key是否为路径
                     */
                    bool GetIsDir() const;

                    /**
                     * 判断参数 IsDir 是否已赋值
                     * @return IsDir 是否已赋值
                     */
                    bool IsDirHasBeenSet() const;

                    /**
                     * 获取当前key下的子路径
                     * @return List 当前key下的子路径
                     */
                    std::vector<std::string> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 配置项或路径key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 配置项的值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 当前key是否为路径
                     */
                    bool m_isDir;
                    bool m_isDirHasBeenSet;

                    /**
                     * 当前key下的子路径
                     */
                    std::vector<std::string> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECONFIGRESPONSE_H_
