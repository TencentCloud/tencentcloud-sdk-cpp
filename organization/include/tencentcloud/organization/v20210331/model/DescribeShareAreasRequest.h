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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREAREASREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREAREASREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * DescribeShareAreas请求参数结构体
                */
                class DescribeShareAreasRequest : public AbstractModel
                {
                public:
                    DescribeShareAreasRequest();
                    ~DescribeShareAreasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取国际站：en，国内站：zh
                     * @return Lang 国际站：en，国内站：zh
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置国际站：en，国内站：zh
                     * @param _lang 国际站：en，国内站：zh
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                private:

                    /**
                     * 国际站：en，国内站：zh
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_DESCRIBESHAREAREASREQUEST_H_
