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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_TOOLREPOTAG_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_TOOLREPOTAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 应用分类标签
                */
                class ToolRepoTag : public AbstractModel
                {
                public:
                    ToolRepoTag();
                    ~ToolRepoTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>应用分类标签ID</p>
                     * @return TagId <p>应用分类标签ID</p>
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置<p>应用分类标签ID</p>
                     * @param _tagId <p>应用分类标签ID</p>
                     * 
                     */
                    void SetTagId(const std::string& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取<p>应用分类标签名称</p>
                     * @return TagName <p>应用分类标签名称</p>
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置<p>应用分类标签名称</p>
                     * @param _tagName <p>应用分类标签名称</p>
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                private:

                    /**
                     * <p>应用分类标签ID</p>
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * <p>应用分类标签名称</p>
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_TOOLREPOTAG_H_
