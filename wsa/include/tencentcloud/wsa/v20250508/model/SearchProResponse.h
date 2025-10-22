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

#ifndef TENCENTCLOUD_WSA_V20250508_MODEL_SEARCHPRORESPONSE_H_
#define TENCENTCLOUD_WSA_V20250508_MODEL_SEARCHPRORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wsa
    {
        namespace V20250508
        {
            namespace Model
            {
                /**
                * SearchPro返回参数结构体
                */
                class SearchProResponse : public AbstractModel
                {
                public:
                    SearchProResponse();
                    ~SearchProResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取原始查询语
                     * @return Query 原始查询语
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取搜索结果页面详情，格式为json字符串。
title：结果标题
date：内容发布时间
url：内容发布源url
passage：标准摘要
content：动态摘要 （尊享版字段）
site：网站名称，部分不知名站点结果可能为空
score：相关性得分，取值0～1，越靠近1表示越相关
images：图片列表
favicon：网站图标链接，部分不知名站点结果可能为空
                     * @return Pages 搜索结果页面详情，格式为json字符串。
title：结果标题
date：内容发布时间
url：内容发布源url
passage：标准摘要
content：动态摘要 （尊享版字段）
site：网站名称，部分不知名站点结果可能为空
score：相关性得分，取值0～1，越靠近1表示越相关
images：图片列表
favicon：网站图标链接，部分不知名站点结果可能为空
                     * 
                     */
                    std::vector<std::string> GetPages() const;

                    /**
                     * 判断参数 Pages 是否已赋值
                     * @return Pages 是否已赋值
                     * 
                     */
                    bool PagesHasBeenSet() const;

                    /**
                     * 获取提示信息
                     * @return Msg 提示信息
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                private:

                    /**
                     * 原始查询语
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 搜索结果页面详情，格式为json字符串。
title：结果标题
date：内容发布时间
url：内容发布源url
passage：标准摘要
content：动态摘要 （尊享版字段）
site：网站名称，部分不知名站点结果可能为空
score：相关性得分，取值0～1，越靠近1表示越相关
images：图片列表
favicon：网站图标链接，部分不知名站点结果可能为空
                     */
                    std::vector<std::string> m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * 提示信息
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSA_V20250508_MODEL_SEARCHPRORESPONSE_H_
