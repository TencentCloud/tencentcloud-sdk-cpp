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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMKEYWORDLIBRARYREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMKEYWORDLIBRARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/LLMKeywordLibrary.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyLLMKeywordLibrary请求参数结构体
                */
                class ModifyLLMKeywordLibraryRequest : public AbstractModel
                {
                public:
                    ModifyLLMKeywordLibraryRequest();
                    ~ModifyLLMKeywordLibraryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新增的关键词库列表
                     * @return LibList 新增的关键词库列表
                     * 
                     */
                    std::vector<LLMKeywordLibrary> GetLibList() const;

                    /**
                     * 设置新增的关键词库列表
                     * @param _libList 新增的关键词库列表
                     * 
                     */
                    void SetLibList(const std::vector<LLMKeywordLibrary>& _libList);

                    /**
                     * 判断参数 LibList 是否已赋值
                     * @return LibList 是否已赋值
                     * 
                     */
                    bool LibListHasBeenSet() const;

                private:

                    /**
                     * 新增的关键词库列表
                     */
                    std::vector<LLMKeywordLibrary> m_libList;
                    bool m_libListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYLLMKEYWORDLIBRARYREQUEST_H_
