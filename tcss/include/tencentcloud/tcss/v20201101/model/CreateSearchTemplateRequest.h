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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATESEARCHTEMPLATEREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATESEARCHTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/SearchTemplate.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateSearchTemplate请求参数结构体
                */
                class CreateSearchTemplateRequest : public AbstractModel
                {
                public:
                    CreateSearchTemplateRequest();
                    ~CreateSearchTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索模板
                     * @return SearchTemplate 搜索模板
                     * 
                     */
                    SearchTemplate GetSearchTemplate() const;

                    /**
                     * 设置搜索模板
                     * @param _searchTemplate 搜索模板
                     * 
                     */
                    void SetSearchTemplate(const SearchTemplate& _searchTemplate);

                    /**
                     * 判断参数 SearchTemplate 是否已赋值
                     * @return SearchTemplate 是否已赋值
                     * 
                     */
                    bool SearchTemplateHasBeenSet() const;

                private:

                    /**
                     * 搜索模板
                     */
                    SearchTemplate m_searchTemplate;
                    bool m_searchTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATESEARCHTEMPLATEREQUEST_H_
