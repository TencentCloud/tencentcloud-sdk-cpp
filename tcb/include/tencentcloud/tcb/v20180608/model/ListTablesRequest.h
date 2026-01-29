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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_LISTTABLESREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_LISTTABLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MongoConnector.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ListTables请求参数结构体
                */
                class ListTablesRequest : public AbstractModel
                {
                public:
                    ListTablesRequest();
                    ~ListTablesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页返回数量（0-1000)
                     * @return MgoLimit 每页返回数量（0-1000)
                     * 
                     */
                    int64_t GetMgoLimit() const;

                    /**
                     * 设置每页返回数量（0-1000)
                     * @param _mgoLimit 每页返回数量（0-1000)
                     * 
                     */
                    void SetMgoLimit(const int64_t& _mgoLimit);

                    /**
                     * 判断参数 MgoLimit 是否已赋值
                     * @return MgoLimit 是否已赋值
                     * 
                     */
                    bool MgoLimitHasBeenSet() const;

                    /**
                     * 获取FlexDB实例ID
                     * @return Tag FlexDB实例ID
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置FlexDB实例ID
                     * @param _tag FlexDB实例ID
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取分页偏移量
                     * @return MgoOffset 分页偏移量
                     * 
                     */
                    int64_t GetMgoOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _mgoOffset 分页偏移量
                     * 
                     */
                    void SetMgoOffset(const int64_t& _mgoOffset);

                    /**
                     * 判断参数 MgoOffset 是否已赋值
                     * @return MgoOffset 是否已赋值
                     * 
                     */
                    bool MgoOffsetHasBeenSet() const;

                    /**
                     * 获取过滤标签数组，用于过滤表名，可选值如：HIDDEN、WEDA、WEDA_SYSTEM
                     * @return Filters 过滤标签数组，用于过滤表名，可选值如：HIDDEN、WEDA、WEDA_SYSTEM
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置过滤标签数组，用于过滤表名，可选值如：HIDDEN、WEDA、WEDA_SYSTEM
                     * @param _filters 过滤标签数组，用于过滤表名，可选值如：HIDDEN、WEDA、WEDA_SYSTEM
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取模糊搜索查询值
                     * @return SearchValue 模糊搜索查询值
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置模糊搜索查询值
                     * @param _searchValue 模糊搜索查询值
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取是否展示隐藏表
                     * @return ShowHidden 是否展示隐藏表
                     * 
                     */
                    bool GetShowHidden() const;

                    /**
                     * 设置是否展示隐藏表
                     * @param _showHidden 是否展示隐藏表
                     * 
                     */
                    void SetShowHidden(const bool& _showHidden);

                    /**
                     * 判断参数 ShowHidden 是否已赋值
                     * @return ShowHidden 是否已赋值
                     * 
                     */
                    bool ShowHiddenHasBeenSet() const;

                    /**
                     * 获取云开发环境ID
                     * @return EnvId 云开发环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置云开发环境ID
                     * @param _envId 云开发环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取mongo连接器信息
                     * @return MongoConnector mongo连接器信息
                     * 
                     */
                    MongoConnector GetMongoConnector() const;

                    /**
                     * 设置mongo连接器信息
                     * @param _mongoConnector mongo连接器信息
                     * 
                     */
                    void SetMongoConnector(const MongoConnector& _mongoConnector);

                    /**
                     * 判断参数 MongoConnector 是否已赋值
                     * @return MongoConnector 是否已赋值
                     * 
                     */
                    bool MongoConnectorHasBeenSet() const;

                private:

                    /**
                     * 每页返回数量（0-1000)
                     */
                    int64_t m_mgoLimit;
                    bool m_mgoLimitHasBeenSet;

                    /**
                     * FlexDB实例ID
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_mgoOffset;
                    bool m_mgoOffsetHasBeenSet;

                    /**
                     * 过滤标签数组，用于过滤表名，可选值如：HIDDEN、WEDA、WEDA_SYSTEM
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 模糊搜索查询值
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 是否展示隐藏表
                     */
                    bool m_showHidden;
                    bool m_showHiddenHasBeenSet;

                    /**
                     * 云开发环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * mongo连接器信息
                     */
                    MongoConnector m_mongoConnector;
                    bool m_mongoConnectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_LISTTABLESREQUEST_H_
