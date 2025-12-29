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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTQALISTREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTQALISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/QAQuery.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ExportQAList请求参数结构体
                */
                class ExportQAListRequest : public AbstractModel
                {
                public:
                    ExportQAListRequest();
                    ~ExportQAListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
若要操作共享知识库，传KnowledgeBizId
                     * @return BotBizId 应用ID
若要操作共享知识库，传KnowledgeBizId
                     * 
                     */
                    std::string GetBotBizId() const;

                    /**
                     * 设置应用ID
若要操作共享知识库，传KnowledgeBizId
                     * @param _botBizId 应用ID
若要操作共享知识库，传KnowledgeBizId
                     * 
                     */
                    void SetBotBizId(const std::string& _botBizId);

                    /**
                     * 判断参数 BotBizId 是否已赋值
                     * @return BotBizId 是否已赋值
                     * 
                     */
                    bool BotBizIdHasBeenSet() const;

                    /**
                     * 获取QA业务ID
                     * @return QaBizIds QA业务ID
                     * 
                     */
                    std::vector<std::string> GetQaBizIds() const;

                    /**
                     * 设置QA业务ID
                     * @param _qaBizIds QA业务ID
                     * 
                     */
                    void SetQaBizIds(const std::vector<std::string>& _qaBizIds);

                    /**
                     * 判断参数 QaBizIds 是否已赋值
                     * @return QaBizIds 是否已赋值
                     * 
                     */
                    bool QaBizIdsHasBeenSet() const;

                    /**
                     * 获取查询参数
Filters.pageNumber范围是>0,0<Filters.pageSize<=200
Filters.query用于内容检索，模糊匹配
Filters.AcceptStatus默认值是0，表示不筛选，返回所有状态
Filters.ReleaseStatus默认值是0，表示不筛选，返回所有状态
Filters.Source默认值是0，表示不筛选，返回所有来源。表示来源(1 文档生成 2 批量导入 3 手动添加)。
Filter.QueryType默认值是"filename"，表示查询类型。
ShowCurrCate表示，是否只展示当前分类的数据 0不是，1是
                     * @return Filters 查询参数
Filters.pageNumber范围是>0,0<Filters.pageSize<=200
Filters.query用于内容检索，模糊匹配
Filters.AcceptStatus默认值是0，表示不筛选，返回所有状态
Filters.ReleaseStatus默认值是0，表示不筛选，返回所有状态
Filters.Source默认值是0，表示不筛选，返回所有来源。表示来源(1 文档生成 2 批量导入 3 手动添加)。
Filter.QueryType默认值是"filename"，表示查询类型。
ShowCurrCate表示，是否只展示当前分类的数据 0不是，1是
                     * 
                     */
                    QAQuery GetFilters() const;

                    /**
                     * 设置查询参数
Filters.pageNumber范围是>0,0<Filters.pageSize<=200
Filters.query用于内容检索，模糊匹配
Filters.AcceptStatus默认值是0，表示不筛选，返回所有状态
Filters.ReleaseStatus默认值是0，表示不筛选，返回所有状态
Filters.Source默认值是0，表示不筛选，返回所有来源。表示来源(1 文档生成 2 批量导入 3 手动添加)。
Filter.QueryType默认值是"filename"，表示查询类型。
ShowCurrCate表示，是否只展示当前分类的数据 0不是，1是
                     * @param _filters 查询参数
Filters.pageNumber范围是>0,0<Filters.pageSize<=200
Filters.query用于内容检索，模糊匹配
Filters.AcceptStatus默认值是0，表示不筛选，返回所有状态
Filters.ReleaseStatus默认值是0，表示不筛选，返回所有状态
Filters.Source默认值是0，表示不筛选，返回所有来源。表示来源(1 文档生成 2 批量导入 3 手动添加)。
Filter.QueryType默认值是"filename"，表示查询类型。
ShowCurrCate表示，是否只展示当前分类的数据 0不是，1是
                     * 
                     */
                    void SetFilters(const QAQuery& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 应用ID
若要操作共享知识库，传KnowledgeBizId
                     */
                    std::string m_botBizId;
                    bool m_botBizIdHasBeenSet;

                    /**
                     * QA业务ID
                     */
                    std::vector<std::string> m_qaBizIds;
                    bool m_qaBizIdsHasBeenSet;

                    /**
                     * 查询参数
Filters.pageNumber范围是>0,0<Filters.pageSize<=200
Filters.query用于内容检索，模糊匹配
Filters.AcceptStatus默认值是0，表示不筛选，返回所有状态
Filters.ReleaseStatus默认值是0，表示不筛选，返回所有状态
Filters.Source默认值是0，表示不筛选，返回所有来源。表示来源(1 文档生成 2 批量导入 3 手动添加)。
Filter.QueryType默认值是"filename"，表示查询类型。
ShowCurrCate表示，是否只展示当前分类的数据 0不是，1是
                     */
                    QAQuery m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_EXPORTQALISTREQUEST_H_
