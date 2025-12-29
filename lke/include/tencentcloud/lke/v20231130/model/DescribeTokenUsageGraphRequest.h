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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEGRAPHREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEGRAPHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeTokenUsageGraph请求参数结构体
                */
                class DescribeTokenUsageGraphRequest : public AbstractModel
                {
                public:
                    DescribeTokenUsageGraphRequest();
                    ~DescribeTokenUsageGraphRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子账号标识列表，支持批量查询多个子账号。不填时查询主账号下所有子账号的汇总数据
                     * @return UinAccount 子账号标识列表，支持批量查询多个子账号。不填时查询主账号下所有子账号的汇总数据
                     * 
                     */
                    std::vector<std::string> GetUinAccount() const;

                    /**
                     * 设置子账号标识列表，支持批量查询多个子账号。不填时查询主账号下所有子账号的汇总数据
                     * @param _uinAccount 子账号标识列表，支持批量查询多个子账号。不填时查询主账号下所有子账号的汇总数据
                     * 
                     */
                    void SetUinAccount(const std::vector<std::string>& _uinAccount);

                    /**
                     * 判断参数 UinAccount 是否已赋值
                     * @return UinAccount 是否已赋值
                     * 
                     */
                    bool UinAccountHasBeenSet() const;

                    /**
                     * 获取知识引擎子业务类型:  FileParse(文档解析)、Embedding、Rewrite(多轮改写)、 Concurrency(并发)、KnowledgeSummary(知识总结)   KnowledgeQA(知识问答)、KnowledgeCapacity(知识库容量)、SearchEngine(搜索引擎)
                     * @return SubBizType 知识引擎子业务类型:  FileParse(文档解析)、Embedding、Rewrite(多轮改写)、 Concurrency(并发)、KnowledgeSummary(知识总结)   KnowledgeQA(知识问答)、KnowledgeCapacity(知识库容量)、SearchEngine(搜索引擎)
                     * 
                     */
                    std::string GetSubBizType() const;

                    /**
                     * 设置知识引擎子业务类型:  FileParse(文档解析)、Embedding、Rewrite(多轮改写)、 Concurrency(并发)、KnowledgeSummary(知识总结)   KnowledgeQA(知识问答)、KnowledgeCapacity(知识库容量)、SearchEngine(搜索引擎)
                     * @param _subBizType 知识引擎子业务类型:  FileParse(文档解析)、Embedding、Rewrite(多轮改写)、 Concurrency(并发)、KnowledgeSummary(知识总结)   KnowledgeQA(知识问答)、KnowledgeCapacity(知识库容量)、SearchEngine(搜索引擎)
                     * 
                     */
                    void SetSubBizType(const std::string& _subBizType);

                    /**
                     * 判断参数 SubBizType 是否已赋值
                     * @return SubBizType 是否已赋值
                     * 
                     */
                    bool SubBizTypeHasBeenSet() const;

                    /**
                     * 获取模型标识
                     * @return ModelName 模型标识
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型标识
                     * @param _modelName 模型标识
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取开始时间戳, 单位为秒(废弃)
                     * @return StartTime 开始时间戳, 单位为秒(废弃)
                     * @deprecated
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间戳, 单位为秒(废弃)
                     * @param _startTime 开始时间戳, 单位为秒(废弃)
                     * @deprecated
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * @deprecated
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间戳, 单位为秒(废弃)
                     * @return EndTime 结束时间戳, 单位为秒(废弃)
                     * @deprecated
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间戳, 单位为秒(废弃)
                     * @param _endTime 结束时间戳, 单位为秒(废弃)
                     * @deprecated
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * @deprecated
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取应用ID列表。不填时：若指定SpaceId则查该空间所有应用；否则查用户下所有应用
                     * @return AppBizIds 应用ID列表。不填时：若指定SpaceId则查该空间所有应用；否则查用户下所有应用
                     * 
                     */
                    std::vector<std::string> GetAppBizIds() const;

                    /**
                     * 设置应用ID列表。不填时：若指定SpaceId则查该空间所有应用；否则查用户下所有应用
                     * @param _appBizIds 应用ID列表。不填时：若指定SpaceId则查该空间所有应用；否则查用户下所有应用
                     * 
                     */
                    void SetAppBizIds(const std::vector<std::string>& _appBizIds);

                    /**
                     * 判断参数 AppBizIds 是否已赋值
                     * @return AppBizIds 是否已赋值
                     * 
                     */
                    bool AppBizIdsHasBeenSet() const;

                    /**
                     * 获取应用类型。可选值：knowledge_qa(知识问答)/plugin_parsing_qa(插件)/shared_knowledge(知识库)/evaluate_test(评测)。不填时查所有类型
                     * @return AppType 应用类型。可选值：knowledge_qa(知识问答)/plugin_parsing_qa(插件)/shared_knowledge(知识库)/evaluate_test(评测)。不填时查所有类型
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型。可选值：knowledge_qa(知识问答)/plugin_parsing_qa(插件)/shared_knowledge(知识库)/evaluate_test(评测)。不填时查所有类型
                     * @param _appType 应用类型。可选值：knowledge_qa(知识问答)/plugin_parsing_qa(插件)/shared_knowledge(知识库)/evaluate_test(评测)。不填时查所有类型
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取筛选子场景
                     * @return SubScenes 筛选子场景
                     * 
                     */
                    std::vector<std::string> GetSubScenes() const;

                    /**
                     * 设置筛选子场景
                     * @param _subScenes 筛选子场景
                     * 
                     */
                    void SetSubScenes(const std::vector<std::string>& _subScenes);

                    /**
                     * 判断参数 SubScenes 是否已赋值
                     * @return SubScenes 是否已赋值
                     * 
                     */
                    bool SubScenesHasBeenSet() const;

                    /**
                     * 获取开始时间。Unix 时间戳，单位是秒，默认为空。
                     * @return StatStartTime 开始时间。Unix 时间戳，单位是秒，默认为空。
                     * 
                     */
                    int64_t GetStatStartTime() const;

                    /**
                     * 设置开始时间。Unix 时间戳，单位是秒，默认为空。
                     * @param _statStartTime 开始时间。Unix 时间戳，单位是秒，默认为空。
                     * 
                     */
                    void SetStatStartTime(const int64_t& _statStartTime);

                    /**
                     * 判断参数 StatStartTime 是否已赋值
                     * @return StatStartTime 是否已赋值
                     * 
                     */
                    bool StatStartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。Unix 时间戳，单位是秒，默认为空。
                     * @return StatEndTime 结束时间。Unix 时间戳，单位是秒，默认为空。
                     * 
                     */
                    int64_t GetStatEndTime() const;

                    /**
                     * 设置结束时间。Unix 时间戳，单位是秒，默认为空。
                     * @param _statEndTime 结束时间。Unix 时间戳，单位是秒，默认为空。
                     * 
                     */
                    void SetStatEndTime(const int64_t& _statEndTime);

                    /**
                     * 判断参数 StatEndTime 是否已赋值
                     * @return StatEndTime 是否已赋值
                     * 
                     */
                    bool StatEndTimeHasBeenSet() const;

                private:

                    /**
                     * 子账号标识列表，支持批量查询多个子账号。不填时查询主账号下所有子账号的汇总数据
                     */
                    std::vector<std::string> m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                    /**
                     * 知识引擎子业务类型:  FileParse(文档解析)、Embedding、Rewrite(多轮改写)、 Concurrency(并发)、KnowledgeSummary(知识总结)   KnowledgeQA(知识问答)、KnowledgeCapacity(知识库容量)、SearchEngine(搜索引擎)
                     */
                    std::string m_subBizType;
                    bool m_subBizTypeHasBeenSet;

                    /**
                     * 模型标识
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 开始时间戳, 单位为秒(废弃)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳, 单位为秒(废弃)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 应用ID列表。不填时：若指定SpaceId则查该空间所有应用；否则查用户下所有应用
                     */
                    std::vector<std::string> m_appBizIds;
                    bool m_appBizIdsHasBeenSet;

                    /**
                     * 应用类型。可选值：knowledge_qa(知识问答)/plugin_parsing_qa(插件)/shared_knowledge(知识库)/evaluate_test(评测)。不填时查所有类型
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 筛选子场景
                     */
                    std::vector<std::string> m_subScenes;
                    bool m_subScenesHasBeenSet;

                    /**
                     * 开始时间。Unix 时间戳，单位是秒，默认为空。
                     */
                    int64_t m_statStartTime;
                    bool m_statStartTimeHasBeenSet;

                    /**
                     * 结束时间。Unix 时间戳，单位是秒，默认为空。
                     */
                    int64_t m_statEndTime;
                    bool m_statEndTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEGRAPHREQUEST_H_
