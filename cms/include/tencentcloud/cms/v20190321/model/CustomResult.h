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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CUSTOMRESULT_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CUSTOMRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 文本返回的自定义词库结果
                */
                class CustomResult : public AbstractModel
                {
                public:
                    CustomResult();
                    ~CustomResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命中的自定义关键词
                     * @return Keywords 命中的自定义关键词
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置命中的自定义关键词
                     * @param _keywords 命中的自定义关键词
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取自定义词库名称
                     * @return LibName 自定义词库名称
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置自定义词库名称
                     * @param _libName 自定义词库名称
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

                    /**
                     * 获取自定义库id
                     * @return LibId 自定义库id
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置自定义库id
                     * @param _libId 自定义库id
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取命中的自定义关键词的类型
                     * @return Type 命中的自定义关键词的类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置命中的自定义关键词的类型
                     * @param _type 命中的自定义关键词的类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 命中的自定义关键词
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 自定义词库名称
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 自定义库id
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 命中的自定义关键词的类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CUSTOMRESULT_H_
