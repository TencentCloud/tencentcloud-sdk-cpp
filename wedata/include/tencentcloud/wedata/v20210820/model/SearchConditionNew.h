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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITIONNEW_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITIONNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SearchConditionInstanceNew.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 查询实例条件(新)
                */
                class SearchConditionNew : public AbstractModel
                {
                public:
                    SearchConditionNew();
                    ~SearchConditionNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询框架，必选
                     * @return Instance 查询框架，必选
                     * 
                     */
                    SearchConditionInstanceNew GetInstance() const;

                    /**
                     * 设置查询框架，必选
                     * @param _instance 查询框架，必选
                     * 
                     */
                    void SetInstance(const SearchConditionInstanceNew& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取查询关键字（任务Id精确匹配，任务名称模糊匹配），可选
                     * @return Keyword 查询关键字（任务Id精确匹配，任务名称模糊匹配），可选
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置查询关键字（任务Id精确匹配，任务名称模糊匹配），可选
                     * @param _keyword 查询关键字（任务Id精确匹配，任务名称模糊匹配），可选
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取排序顺序（asc，desc）
                     * @return Sort 排序顺序（asc，desc）
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序顺序（asc，desc）
                     * @param _sort 排序顺序（asc，desc）
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     * @return SortCol 排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     * 
                     */
                    std::string GetSortCol() const;

                    /**
                     * 设置排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     * @param _sortCol 排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     * 
                     */
                    void SetSortCol(const std::string& _sortCol);

                    /**
                     * 判断参数 SortCol 是否已赋值
                     * @return SortCol 是否已赋值
                     * 
                     */
                    bool SortColHasBeenSet() const;

                private:

                    /**
                     * 查询框架，必选
                     */
                    SearchConditionInstanceNew m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 查询关键字（任务Id精确匹配，任务名称模糊匹配），可选
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 排序顺序（asc，desc）
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 排序列（costTime 运行耗时，startTime 开始时间，state 实例状态，curRunDate 数据时间）
                     */
                    std::string m_sortCol;
                    bool m_sortColHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_SEARCHCONDITIONNEW_H_
