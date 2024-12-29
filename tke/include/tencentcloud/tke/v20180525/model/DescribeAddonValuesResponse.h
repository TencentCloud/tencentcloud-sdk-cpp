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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEADDONVALUESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEADDONVALUESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeAddonValues返回参数结构体
                */
                class DescribeAddonValuesResponse : public AbstractModel
                {
                public:
                    DescribeAddonValuesResponse();
                    ~DescribeAddonValuesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取参数列表，如果addon已安装，会使用已设置的参数和chart里的默认参数做渲染，是一个json格式的字符串，未安装addon时返回为空值。
                     * @return Values 参数列表，如果addon已安装，会使用已设置的参数和chart里的默认参数做渲染，是一个json格式的字符串，未安装addon时返回为空值。
                     * 
                     */
                    std::string GetValues() const;

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取addon支持的参数列表，值为chart的默认值，是一个json格式的字符串。
                     * @return DefaultValues addon支持的参数列表，值为chart的默认值，是一个json格式的字符串。
                     * 
                     */
                    std::string GetDefaultValues() const;

                    /**
                     * 判断参数 DefaultValues 是否已赋值
                     * @return DefaultValues 是否已赋值
                     * 
                     */
                    bool DefaultValuesHasBeenSet() const;

                private:

                    /**
                     * 参数列表，如果addon已安装，会使用已设置的参数和chart里的默认参数做渲染，是一个json格式的字符串，未安装addon时返回为空值。
                     */
                    std::string m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * addon支持的参数列表，值为chart的默认值，是一个json格式的字符串。
                     */
                    std::string m_defaultValues;
                    bool m_defaultValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEADDONVALUESRESPONSE_H_
