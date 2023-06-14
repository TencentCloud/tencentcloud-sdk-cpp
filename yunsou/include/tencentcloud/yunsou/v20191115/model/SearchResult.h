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

#ifndef TENCENTCLOUD_YUNSOU_V20191115_MODEL_SEARCHRESULT_H_
#define TENCENTCLOUD_YUNSOU_V20191115_MODEL_SEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yunsou/v20191115/model/SearchResultItem.h>
#include <tencentcloud/yunsou/v20191115/model/SearchResultSeg.h>


namespace TencentCloud
{
    namespace Yunsou
    {
        namespace V20191115
        {
            namespace Model
            {
                /**
                * 搜索结果
                */
                class SearchResult : public AbstractModel
                {
                public:
                    SearchResult();
                    ~SearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检索耗时，单位ms
                     * @return CostTime 检索耗时，单位ms
                     * 
                     */
                    uint64_t GetCostTime() const;

                    /**
                     * 设置检索耗时，单位ms
                     * @param _costTime 检索耗时，单位ms
                     * 
                     */
                    void SetCostTime(const uint64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取搜索最多可以展示的结果数，多页
                     * @return DisplayNum 搜索最多可以展示的结果数，多页
                     * 
                     */
                    uint64_t GetDisplayNum() const;

                    /**
                     * 设置搜索最多可以展示的结果数，多页
                     * @param _displayNum 搜索最多可以展示的结果数，多页
                     * 
                     */
                    void SetDisplayNum(const uint64_t& _displayNum);

                    /**
                     * 判断参数 DisplayNum 是否已赋值
                     * @return DisplayNum 是否已赋值
                     * 
                     */
                    bool DisplayNumHasBeenSet() const;

                    /**
                     * 获取和检索请求中的echo相对应
                     * @return Echo 和检索请求中的echo相对应
                     * 
                     */
                    std::string GetEcho() const;

                    /**
                     * 设置和检索请求中的echo相对应
                     * @param _echo 和检索请求中的echo相对应
                     * 
                     */
                    void SetEcho(const std::string& _echo);

                    /**
                     * 判断参数 Echo 是否已赋值
                     * @return Echo 是否已赋值
                     * 
                     */
                    bool EchoHasBeenSet() const;

                    /**
                     * 获取检索结果的估算篇数，由索引平台估算
                     * @return EResultNum 检索结果的估算篇数，由索引平台估算
                     * 
                     */
                    uint64_t GetEResultNum() const;

                    /**
                     * 设置检索结果的估算篇数，由索引平台估算
                     * @param _eResultNum 检索结果的估算篇数，由索引平台估算
                     * 
                     */
                    void SetEResultNum(const uint64_t& _eResultNum);

                    /**
                     * 判断参数 EResultNum 是否已赋值
                     * @return EResultNum 是否已赋值
                     * 
                     */
                    bool EResultNumHasBeenSet() const;

                    /**
                     * 获取检索返回的当前页码结果数
                     * @return ResultNum 检索返回的当前页码结果数
                     * 
                     */
                    uint64_t GetResultNum() const;

                    /**
                     * 设置检索返回的当前页码结果数
                     * @param _resultNum 检索返回的当前页码结果数
                     * 
                     */
                    void SetResultNum(const uint64_t& _resultNum);

                    /**
                     * 判断参数 ResultNum 是否已赋值
                     * @return ResultNum 是否已赋值
                     * 
                     */
                    bool ResultNumHasBeenSet() const;

                    /**
                     * 获取检索结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultList 检索结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SearchResultItem> GetResultList() const;

                    /**
                     * 设置检索结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultList 检索结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultList(const std::vector<SearchResultItem>& _resultList);

                    /**
                     * 判断参数 ResultList 是否已赋值
                     * @return ResultList 是否已赋值
                     * 
                     */
                    bool ResultListHasBeenSet() const;

                    /**
                     * 获取检索的分词结果，array类型，可包含多个
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegList 检索的分词结果，array类型，可包含多个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SearchResultSeg> GetSegList() const;

                    /**
                     * 设置检索的分词结果，array类型，可包含多个
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segList 检索的分词结果，array类型，可包含多个
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegList(const std::vector<SearchResultSeg>& _segList);

                    /**
                     * 判断参数 SegList 是否已赋值
                     * @return SegList 是否已赋值
                     * 
                     */
                    bool SegListHasBeenSet() const;

                private:

                    /**
                     * 检索耗时，单位ms
                     */
                    uint64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * 搜索最多可以展示的结果数，多页
                     */
                    uint64_t m_displayNum;
                    bool m_displayNumHasBeenSet;

                    /**
                     * 和检索请求中的echo相对应
                     */
                    std::string m_echo;
                    bool m_echoHasBeenSet;

                    /**
                     * 检索结果的估算篇数，由索引平台估算
                     */
                    uint64_t m_eResultNum;
                    bool m_eResultNumHasBeenSet;

                    /**
                     * 检索返回的当前页码结果数
                     */
                    uint64_t m_resultNum;
                    bool m_resultNumHasBeenSet;

                    /**
                     * 检索结果列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchResultItem> m_resultList;
                    bool m_resultListHasBeenSet;

                    /**
                     * 检索的分词结果，array类型，可包含多个
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchResultSeg> m_segList;
                    bool m_segListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNSOU_V20191115_MODEL_SEARCHRESULT_H_
