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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEOBJECTLISTING_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEOBJECTLISTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeObjectSummary.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeSee 直传对象列举结果
                */
                class SeeObjectListing : public AbstractModel
                {
                public:
                    SeeObjectListing();
                    ~SeeObjectListing() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>对象列表</p>
                     * @return Contents <p>对象列表</p>
                     * 
                     */
                    std::vector<SeeObjectSummary> GetContents() const;

                    /**
                     * 设置<p>对象列表</p>
                     * @param _contents <p>对象列表</p>
                     * 
                     */
                    void SetContents(const std::vector<SeeObjectSummary>& _contents);

                    /**
                     * 判断参数 Contents 是否已赋值
                     * @return Contents 是否已赋值
                     * 
                     */
                    bool ContentsHasBeenSet() const;

                    /**
                     * 获取<p>子目录路径列表</p>
                     * @return CommonPrefixes <p>子目录路径列表</p>
                     * 
                     */
                    std::vector<std::string> GetCommonPrefixes() const;

                    /**
                     * 设置<p>子目录路径列表</p>
                     * @param _commonPrefixes <p>子目录路径列表</p>
                     * 
                     */
                    void SetCommonPrefixes(const std::vector<std::string>& _commonPrefixes);

                    /**
                     * 判断参数 CommonPrefixes 是否已赋值
                     * @return CommonPrefixes 是否已赋值
                     * 
                     */
                    bool CommonPrefixesHasBeenSet() const;

                    /**
                     * 获取<p>本次列举使用的目录分隔符</p>
                     * @return Delimiter <p>本次列举使用的目录分隔符</p>
                     * 
                     */
                    std::string GetDelimiter() const;

                    /**
                     * 设置<p>本次列举使用的目录分隔符</p>
                     * @param _delimiter <p>本次列举使用的目录分隔符</p>
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
                     * 获取<p>是否还有后续分页数据</p>
                     * @return IsTruncated <p>是否还有后续分页数据</p>
                     * 
                     */
                    bool GetIsTruncated() const;

                    /**
                     * 设置<p>是否还有后续分页数据</p>
                     * @param _isTruncated <p>是否还有后续分页数据</p>
                     * 
                     */
                    void SetIsTruncated(const bool& _isTruncated);

                    /**
                     * 判断参数 IsTruncated 是否已赋值
                     * @return IsTruncated 是否已赋值
                     * 
                     */
                    bool IsTruncatedHasBeenSet() const;

                    /**
                     * 获取<p>本次列举使用的分页标记</p>
                     * @return Marker <p>本次列举使用的分页标记</p>
                     * 
                     */
                    std::string GetMarker() const;

                    /**
                     * 设置<p>本次列举使用的分页标记</p>
                     * @param _marker <p>本次列举使用的分页标记</p>
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
                     * 获取<p>本次列举的最大对象数量</p>
                     * @return MaxKeys <p>本次列举的最大对象数量</p>
                     * 
                     */
                    int64_t GetMaxKeys() const;

                    /**
                     * 设置<p>本次列举的最大对象数量</p>
                     * @param _maxKeys <p>本次列举的最大对象数量</p>
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
                     * 获取<p>下一页的分页标记</p>
                     * @return NextMarker <p>下一页的分页标记</p>
                     * 
                     */
                    std::string GetNextMarker() const;

                    /**
                     * 设置<p>下一页的分页标记</p>
                     * @param _nextMarker <p>下一页的分页标记</p>
                     * 
                     */
                    void SetNextMarker(const std::string& _nextMarker);

                    /**
                     * 判断参数 NextMarker 是否已赋值
                     * @return NextMarker 是否已赋值
                     * 
                     */
                    bool NextMarkerHasBeenSet() const;

                    /**
                     * 获取<p>本次列举的对象路径前缀</p>
                     * @return Prefix <p>本次列举的对象路径前缀</p>
                     * 
                     */
                    std::string GetPrefix() const;

                    /**
                     * 设置<p>本次列举的对象路径前缀</p>
                     * @param _prefix <p>本次列举的对象路径前缀</p>
                     * 
                     */
                    void SetPrefix(const std::string& _prefix);

                    /**
                     * 判断参数 Prefix 是否已赋值
                     * @return Prefix 是否已赋值
                     * 
                     */
                    bool PrefixHasBeenSet() const;

                private:

                    /**
                     * <p>对象列表</p>
                     */
                    std::vector<SeeObjectSummary> m_contents;
                    bool m_contentsHasBeenSet;

                    /**
                     * <p>子目录路径列表</p>
                     */
                    std::vector<std::string> m_commonPrefixes;
                    bool m_commonPrefixesHasBeenSet;

                    /**
                     * <p>本次列举使用的目录分隔符</p>
                     */
                    std::string m_delimiter;
                    bool m_delimiterHasBeenSet;

                    /**
                     * <p>是否还有后续分页数据</p>
                     */
                    bool m_isTruncated;
                    bool m_isTruncatedHasBeenSet;

                    /**
                     * <p>本次列举使用的分页标记</p>
                     */
                    std::string m_marker;
                    bool m_markerHasBeenSet;

                    /**
                     * <p>本次列举的最大对象数量</p>
                     */
                    int64_t m_maxKeys;
                    bool m_maxKeysHasBeenSet;

                    /**
                     * <p>下一页的分页标记</p>
                     */
                    std::string m_nextMarker;
                    bool m_nextMarkerHasBeenSet;

                    /**
                     * <p>本次列举的对象路径前缀</p>
                     */
                    std::string m_prefix;
                    bool m_prefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_SEEOBJECTLISTING_H_
