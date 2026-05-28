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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_REFERRESOURCEINFO_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_REFERRESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            namespace Model
            {
                /**
                * 引用资料信息
                */
                class ReferResourceInfo : public AbstractModel
                {
                public:
                    ReferResourceInfo();
                    ~ReferResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资料标题
                     * @return Title 资料标题
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置资料标题
                     * @param _title 资料标题
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取资料来源类型，1:问答库，2:文档，3:医典百科，4:临床指南，5:药品说明书
                     * @return Type 资料来源类型，1:问答库，2:文档，3:医典百科，4:临床指南，5:药品说明书
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资料来源类型，1:问答库，2:文档，3:医典百科，4:临床指南，5:药品说明书
                     * @param _type 资料来源类型，1:问答库，2:文档，3:医典百科，4:临床指南，5:药品说明书
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
                     * 获取资料详情链接
                     * @return Url 资料详情链接
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置资料详情链接
                     * @param _url 资料详情链接
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 资料标题
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 资料来源类型，1:问答库，2:文档，3:医典百科，4:临床指南，5:药品说明书
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 资料详情链接
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_REFERRESOURCEINFO_H_
