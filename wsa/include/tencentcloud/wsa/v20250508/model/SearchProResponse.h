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
                     * 获取<p>原始查询语</p>
                     * @return Query <p>原始查询语</p>
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
                     * 获取<p>搜索结果页面详情，格式为json字符串。</p><ul><li><p>title：结果标题</p></li><li><p>date：内容发布时间</p></li><li><p>url：内容发布源url</p></li><li><p>passage：标准摘要</p></li><li><p>content：动态摘要（仅尊享版、旗舰版返回该字段）</p></li><li><p>site：网站名称，部分不知名站点结果可能为空</p></li><li><p>score：相关性得分，取值0～1，越靠近1表示越相关</p></li><li><p>images：图片列表（旗舰版无该出参）</p></li><li><p>pics：图片列表，单个doc返回0～10条（仅旗舰版参数）</p><ul><li>caption：图片描述</li><li>origin_url：源图url地</li></ul></li><li><p>favicon：网站图标链接，部分不知名站点结果可能为空</p></li><li><p>deeplinks：子链信息，单个doc最多返回10条子链信息。（仅旗舰版参数，通过Deeplinks入参控制）</p><ul><li>title：子链标题</li><li>url：子链地址</li></ul></li></ul>
                     * @return Pages <p>搜索结果页面详情，格式为json字符串。</p><ul><li><p>title：结果标题</p></li><li><p>date：内容发布时间</p></li><li><p>url：内容发布源url</p></li><li><p>passage：标准摘要</p></li><li><p>content：动态摘要（仅尊享版、旗舰版返回该字段）</p></li><li><p>site：网站名称，部分不知名站点结果可能为空</p></li><li><p>score：相关性得分，取值0～1，越靠近1表示越相关</p></li><li><p>images：图片列表（旗舰版无该出参）</p></li><li><p>pics：图片列表，单个doc返回0～10条（仅旗舰版参数）</p><ul><li>caption：图片描述</li><li>origin_url：源图url地</li></ul></li><li><p>favicon：网站图标链接，部分不知名站点结果可能为空</p></li><li><p>deeplinks：子链信息，单个doc最多返回10条子链信息。（仅旗舰版参数，通过Deeplinks入参控制）</p><ul><li>title：子链标题</li><li>url：子链地址</li></ul></li></ul>
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
                     * 获取<p>用户版本：standard/premium/lite/flagship（标准/尊享/轻量/旗舰）</p>
                     * @return Version <p>用户版本：standard/premium/lite/flagship（标准/尊享/轻量/旗舰）</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>提示信息</p>
                     * @return Msg <p>提示信息</p>
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
                     * <p>原始查询语</p>
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * <p>搜索结果页面详情，格式为json字符串。</p><ul><li><p>title：结果标题</p></li><li><p>date：内容发布时间</p></li><li><p>url：内容发布源url</p></li><li><p>passage：标准摘要</p></li><li><p>content：动态摘要（仅尊享版、旗舰版返回该字段）</p></li><li><p>site：网站名称，部分不知名站点结果可能为空</p></li><li><p>score：相关性得分，取值0～1，越靠近1表示越相关</p></li><li><p>images：图片列表（旗舰版无该出参）</p></li><li><p>pics：图片列表，单个doc返回0～10条（仅旗舰版参数）</p><ul><li>caption：图片描述</li><li>origin_url：源图url地</li></ul></li><li><p>favicon：网站图标链接，部分不知名站点结果可能为空</p></li><li><p>deeplinks：子链信息，单个doc最多返回10条子链信息。（仅旗舰版参数，通过Deeplinks入参控制）</p><ul><li>title：子链标题</li><li>url：子链地址</li></ul></li></ul>
                     */
                    std::vector<std::string> m_pages;
                    bool m_pagesHasBeenSet;

                    /**
                     * <p>用户版本：standard/premium/lite/flagship（标准/尊享/轻量/旗舰）</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>提示信息</p>
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSA_V20250508_MODEL_SEARCHPRORESPONSE_H_
