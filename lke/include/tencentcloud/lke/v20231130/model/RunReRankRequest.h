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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_RUNRERANKREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_RUNRERANKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ReRankDataObject.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * RunReRank请求参数结构体
                */
                class RunReRankRequest : public AbstractModel
                {
                public:
                    RunReRankRequest();
                    ~RunReRankRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询内容，必填
                     * @return Query 查询内容，必填
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置查询内容，必填
                     * @param _query 查询内容，必填
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取文档列表，必填，最多20个
                     * @return Docs 文档列表，必填，最多20个
                     * 
                     */
                    std::vector<std::string> GetDocs() const;

                    /**
                     * 设置文档列表，必填，最多20个
                     * @param _docs 文档列表，必填，最多20个
                     * 
                     */
                    void SetDocs(const std::vector<std::string>& _docs);

                    /**
                     * 判断参数 Docs 是否已赋值
                     * @return Docs 是否已赋值
                     * 
                     */
                    bool DocsHasBeenSet() const;

                    /**
                     * 获取模型名称, 非必填，默认: lke-reranker-base
                     * @return Model 模型名称, 非必填，默认: lke-reranker-base
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置模型名称, 非必填，默认: lke-reranker-base
                     * @param _model 模型名称, 非必填，默认: lke-reranker-base
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取需要计算关联性的2段内容
                     * @return DataList 需要计算关联性的2段内容
                     * @deprecated
                     */
                    std::vector<ReRankDataObject> GetDataList() const;

                    /**
                     * 设置需要计算关联性的2段内容
                     * @param _dataList 需要计算关联性的2段内容
                     * @deprecated
                     */
                    void SetDataList(const std::vector<ReRankDataObject>& _dataList);

                    /**
                     * 判断参数 DataList 是否已赋值
                     * @return DataList 是否已赋值
                     * @deprecated
                     */
                    bool DataListHasBeenSet() const;

                    /**
                     * 获取是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     * @return Online 是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     * @deprecated
                     */
                    bool GetOnline() const;

                    /**
                     * 设置是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     * @param _online 是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     * @deprecated
                     */
                    void SetOnline(const bool& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * @deprecated
                     */
                    bool OnlineHasBeenSet() const;

                private:

                    /**
                     * 查询内容，必填
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 文档列表，必填，最多20个
                     */
                    std::vector<std::string> m_docs;
                    bool m_docsHasBeenSet;

                    /**
                     * 模型名称, 非必填，默认: lke-reranker-base
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 需要计算关联性的2段内容
                     */
                    std::vector<ReRankDataObject> m_dataList;
                    bool m_dataListHasBeenSet;

                    /**
                     * 是否在线, 后台异步任务使用离线, 实时任务使用在线, 默认值: false
                     */
                    bool m_online;
                    bool m_onlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_RUNRERANKREQUEST_H_
