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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ListFiles请求参数结构体
                */
                class ListFilesRequest : public AbstractModel
                {
                public:
                    ListFilesRequest();
                    ~ListFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取点播[应用](/document/product/266/14574) ID。
                     * @return SubAppId 点播[应用](/document/product/266/14574) ID。
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[应用](/document/product/266/14574) ID。
                     * @param _subAppId 点播[应用](/document/product/266/14574) ID。
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取对象键匹配前缀，限定响应中只包含指定前缀的对象键。
                     * @return Prefix 对象键匹配前缀，限定响应中只包含指定前缀的对象键。
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置对象键匹配前缀，限定响应中只包含指定前缀的对象键。
                     * @param _prefix 对象键匹配前缀，限定响应中只包含指定前缀的对象键。
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                    /**
                     * 获取一个字符的分隔符，用于对对象键进行分组。所有对象键中从 prefix 或从头（如未指定 prefix）到首个 delimiter 之间相同的部分将作为 CommonPrefixes 下的一个 Prefix 节点。被分组的对象键不再出现在后续对象列表中。
                     * @return Delimiter 一个字符的分隔符，用于对对象键进行分组。所有对象键中从 prefix 或从头（如未指定 prefix）到首个 delimiter 之间相同的部分将作为 CommonPrefixes 下的一个 Prefix 节点。被分组的对象键不再出现在后续对象列表中。
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置一个字符的分隔符，用于对对象键进行分组。所有对象键中从 prefix 或从头（如未指定 prefix）到首个 delimiter 之间相同的部分将作为 CommonPrefixes 下的一个 Prefix 节点。被分组的对象键不再出现在后续对象列表中。
                     * @param _delimiter 一个字符的分隔符，用于对对象键进行分组。所有对象键中从 prefix 或从头（如未指定 prefix）到首个 delimiter 之间相同的部分将作为 CommonPrefixes 下的一个 Prefix 节点。被分组的对象键不再出现在后续对象列表中。
                     * 
                     */
                    void SetDelimiter(const std::string& _delimiter);

                    /**
                     * 判断参数 Delimiter 是否已赋值
                     * @return Delimiter 是否已赋值
                     * 
                     */
                    bool DelimiterHasBeenSet() const;

                    /**
                     * 获取ys 	 单次返回最大的条目数量，默认值为100，最小为1，最大为100。
                     * @return MaxKeys ys 	 单次返回最大的条目数量，默认值为100，最小为1，最大为100。
                     * 
                     */
                    int64_t GetMaxKeys() const;

                    /**
                     * 设置ys 	 单次返回最大的条目数量，默认值为100，最小为1，最大为100。
                     * @param _maxKeys ys 	 单次返回最大的条目数量，默认值为100，最小为1，最大为100。
                     * 
                     */
                    void SetMaxKeys(const int64_t& _maxKeys);

                    /**
                     * 判断参数 MaxKeys 是否已赋值
                     * @return MaxKeys 是否已赋值
                     * 
                     */
                    bool MaxKeysHasBeenSet() const;

                    /**
                     * 获取起始对象键标记
                     * @return Marker 起始对象键标记
                     * 
                     */
                    std::string GetMarker() const;

                    /**
                     * 设置起始对象键标记
                     * @param _marker 起始对象键标记
                     * 
                     */
                    void SetMarker(const std::string& _marker);

                    /**
                     * 判断参数 Marker 是否已赋值
                     * @return Marker 是否已赋值
                     * 
                     */
                    bool MarkerHasBeenSet() const;

                    /**
                     * 获取文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     * @return Categories 文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     * @param _categories 文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     * 
                     */
                    void SetCategories(const std::vector<std::string>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                private:

                    /**
                     * 点播[应用](/document/product/266/14574) ID。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 对象键匹配前缀，限定响应中只包含指定前缀的对象键。
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                    /**
                     * 一个字符的分隔符，用于对对象键进行分组。所有对象键中从 prefix 或从头（如未指定 prefix）到首个 delimiter 之间相同的部分将作为 CommonPrefixes 下的一个 Prefix 节点。被分组的对象键不再出现在后续对象列表中。
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * ys 	 单次返回最大的条目数量，默认值为100，最小为1，最大为100。
                     */
                    int64_t m_maxKeys;
                    bool m_maxKeysHasBeenSet;

                    /**
                     * 起始对象键标记
                     */
                    std::string m_marker;
                    bool m_markerHasBeenSet;

                    /**
                     * 文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LISTFILESREQUEST_H_
