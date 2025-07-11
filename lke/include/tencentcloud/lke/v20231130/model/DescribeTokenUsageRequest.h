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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEREQUEST_H_

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
                * DescribeTokenUsage请求参数结构体
                */
                class DescribeTokenUsageRequest : public AbstractModel
                {
                public:
                    DescribeTokenUsageRequest();
                    ~DescribeTokenUsageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云主账号
                     * @return UinAccount 腾讯云主账号
                     * 
                     */
                    std::vector<std::string> GetUinAccount() const;

                    /**
                     * 设置腾讯云主账号
                     * @param _uinAccount 腾讯云主账号
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
                     * 获取登录用户主账号(集成商模式必填)
                     * @return LoginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置登录用户主账号(集成商模式必填)
                     * @param _loginUin 登录用户主账号(集成商模式必填)
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取登录用户子账号(集成商模式必填)
                     * @return LoginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置登录用户子账号(集成商模式必填)
                     * @param _loginSubAccountUin 登录用户子账号(集成商模式必填)
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

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
                     * 获取开始时间戳, 单位为秒(默认值0)
                     * @return StartTime 开始时间戳, 单位为秒(默认值0)
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间戳, 单位为秒(默认值0)
                     * @param _startTime 开始时间戳, 单位为秒(默认值0)
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间戳, 单位为秒(默认值0， 必须大于开始时间戳)
                     * @return EndTime 结束时间戳, 单位为秒(默认值0， 必须大于开始时间戳)
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间戳, 单位为秒(默认值0， 必须大于开始时间戳)
                     * @param _endTime 结束时间戳, 单位为秒(默认值0， 必须大于开始时间戳)
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取应用id列表
                     * @return AppBizIds 应用id列表
                     * 
                     */
                    std::vector<std::string> GetAppBizIds() const;

                    /**
                     * 设置应用id列表
                     * @param _appBizIds 应用id列表
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
                     * 获取筛选子场景(文档解析场景使用)
                     * @return SubScenes 筛选子场景(文档解析场景使用)
                     * 
                     */
                    std::vector<std::string> GetSubScenes() const;

                    /**
                     * 设置筛选子场景(文档解析场景使用)
                     * @param _subScenes 筛选子场景(文档解析场景使用)
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
                     * 获取应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     * @return AppType 应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     * @param _appType 应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                private:

                    /**
                     * 腾讯云主账号
                     */
                    std::vector<std::string> m_uinAccount;
                    bool m_uinAccountHasBeenSet;

                    /**
                     * 登录用户主账号(集成商模式必填)
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * 登录用户子账号(集成商模式必填)
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

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
                     * 开始时间戳, 单位为秒(默认值0)
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳, 单位为秒(默认值0， 必须大于开始时间戳)
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 应用id列表
                     */
                    std::vector<std::string> m_appBizIds;
                    bool m_appBizIdsHasBeenSet;

                    /**
                     * 筛选子场景(文档解析场景使用)
                     */
                    std::vector<std::string> m_subScenes;
                    bool m_subScenesHasBeenSet;

                    /**
                     * 应用类型(knowledge_qa应用管理， shared_knowlege 共享知识库)
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBETOKENUSAGEREQUEST_H_
