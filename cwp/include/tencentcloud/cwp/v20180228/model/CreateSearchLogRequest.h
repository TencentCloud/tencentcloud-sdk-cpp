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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATESEARCHLOGREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATESEARCHLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateSearchLog请求参数结构体
                */
                class CreateSearchLogRequest : public AbstractModel
                {
                public:
                    CreateSearchLogRequest();
                    ~CreateSearchLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索内容
                     * @return SearchContent 搜索内容
                     * 
                     */
                    std::string GetSearchContent() const;

                    /**
                     * 设置搜索内容
                     * @param _searchContent 搜索内容
                     * 
                     */
                    void SetSearchContent(const std::string& _searchContent);

                    /**
                     * 判断参数 SearchContent 是否已赋值
                     * @return SearchContent 是否已赋值
                     * 
                     */
                    bool SearchContentHasBeenSet() const;

                private:

                    /**
                     * 搜索内容
                     */
                    std::string m_searchContent;
                    bool m_searchContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATESEARCHLOGREQUEST_H_
