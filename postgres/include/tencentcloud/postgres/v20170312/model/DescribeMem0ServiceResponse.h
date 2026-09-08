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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEMEM0SERVICERESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEMEM0SERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DBInstanceNetInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeMem0Service返回参数结构体
                */
                class DescribeMem0ServiceResponse : public AbstractModel
                {
                public:
                    DescribeMem0ServiceResponse();
                    ~DescribeMem0ServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>mem0服务运行状态</p><p>枚举值：</p><ul><li>running： mem0服务正常运行</li><li>none： 未开通</li><li>creating： 正在开通</li><li>deleting： mem0服务关闭中</li></ul>
                     * @return Status <p>mem0服务运行状态</p><p>枚举值：</p><ul><li>running： mem0服务正常运行</li><li>none： 未开通</li><li>creating： 正在开通</li><li>deleting： mem0服务关闭中</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务创建时间</p>
                     * @return CreateTime <p>Mem0服务创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务最后更新时间</p>
                     * @return UpdateTime <p>Mem0服务最后更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务访问地址</p>
                     * @return InnerAddress <p>Mem0服务访问地址</p>
                     * 
                     */
                    std::string GetInnerAddress() const;

                    /**
                     * 判断参数 InnerAddress 是否已赋值
                     * @return InnerAddress 是否已赋值
                     * 
                     */
                    bool InnerAddressHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务使用的AgenticBase</p>
                     * @return AgenticBaseId <p>Mem0服务使用的AgenticBase</p>
                     * 
                     */
                    std::string GetAgenticBaseId() const;

                    /**
                     * 判断参数 AgenticBaseId 是否已赋值
                     * @return AgenticBaseId 是否已赋值
                     * 
                     */
                    bool AgenticBaseIdHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务使用的LLM提供方</p><p>枚举值：</p><ul><li>tokenhub： 腾讯云大模型服务平台TokenHub</li></ul>
                     * @return LLMMode <p>Mem0服务使用的LLM提供方</p><p>枚举值：</p><ul><li>tokenhub： 腾讯云大模型服务平台TokenHub</li></ul>
                     * 
                     */
                    std::string GetLLMMode() const;

                    /**
                     * 判断参数 LLMMode 是否已赋值
                     * @return LLMMode 是否已赋值
                     * 
                     */
                    bool LLMModeHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务使用的LLM模型</p>
                     * @return LLMModel <p>Mem0服务使用的LLM模型</p>
                     * 
                     */
                    std::string GetLLMModel() const;

                    /**
                     * 判断参数 LLMModel 是否已赋值
                     * @return LLMModel 是否已赋值
                     * 
                     */
                    bool LLMModelHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务当前使用的Embedding 模型</p>
                     * @return EmbeddingModel <p>Mem0服务当前使用的Embedding 模型</p>
                     * 
                     */
                    std::string GetEmbeddingModel() const;

                    /**
                     * 判断参数 EmbeddingModel 是否已赋值
                     * @return EmbeddingModel 是否已赋值
                     * 
                     */
                    bool EmbeddingModelHasBeenSet() const;

                    /**
                     * 获取<p>Embedding 向量维度，目前固定1024</p>
                     * @return EmbeddingDims <p>Embedding 向量维度，目前固定1024</p>
                     * 
                     */
                    int64_t GetEmbeddingDims() const;

                    /**
                     * 判断参数 EmbeddingDims 是否已赋值
                     * @return EmbeddingDims 是否已赋值
                     * 
                     */
                    bool EmbeddingDimsHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务使用的PG数据库</p>
                     * @return PGDatabaseName <p>Mem0服务使用的PG数据库</p>
                     * 
                     */
                    std::string GetPGDatabaseName() const;

                    /**
                     * 判断参数 PGDatabaseName 是否已赋值
                     * @return PGDatabaseName 是否已赋值
                     * 
                     */
                    bool PGDatabaseNameHasBeenSet() const;

                    /**
                     * 获取<p>Mem0服务使用的PG用户名</p>
                     * @return PGUserName <p>Mem0服务使用的PG用户名</p>
                     * 
                     */
                    std::string GetPGUserName() const;

                    /**
                     * 判断参数 PGUserName 是否已赋值
                     * @return PGUserName 是否已赋值
                     * 
                     */
                    bool PGUserNameHasBeenSet() const;

                    /**
                     * 获取<p>Mem0的网络状态</p>
                     * @return NetworkAccessList <p>Mem0的网络状态</p>
                     * 
                     */
                    std::vector<DBInstanceNetInfo> GetNetworkAccessList() const;

                    /**
                     * 判断参数 NetworkAccessList 是否已赋值
                     * @return NetworkAccessList 是否已赋值
                     * 
                     */
                    bool NetworkAccessListHasBeenSet() const;

                private:

                    /**
                     * <p>mem0服务运行状态</p><p>枚举值：</p><ul><li>running： mem0服务正常运行</li><li>none： 未开通</li><li>creating： 正在开通</li><li>deleting： mem0服务关闭中</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Mem0服务创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>Mem0服务最后更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>Mem0服务访问地址</p>
                     */
                    std::string m_innerAddress;
                    bool m_innerAddressHasBeenSet;

                    /**
                     * <p>Mem0服务使用的AgenticBase</p>
                     */
                    std::string m_agenticBaseId;
                    bool m_agenticBaseIdHasBeenSet;

                    /**
                     * <p>Mem0服务使用的LLM提供方</p><p>枚举值：</p><ul><li>tokenhub： 腾讯云大模型服务平台TokenHub</li></ul>
                     */
                    std::string m_lLMMode;
                    bool m_lLMModeHasBeenSet;

                    /**
                     * <p>Mem0服务使用的LLM模型</p>
                     */
                    std::string m_lLMModel;
                    bool m_lLMModelHasBeenSet;

                    /**
                     * <p>Mem0服务当前使用的Embedding 模型</p>
                     */
                    std::string m_embeddingModel;
                    bool m_embeddingModelHasBeenSet;

                    /**
                     * <p>Embedding 向量维度，目前固定1024</p>
                     */
                    int64_t m_embeddingDims;
                    bool m_embeddingDimsHasBeenSet;

                    /**
                     * <p>Mem0服务使用的PG数据库</p>
                     */
                    std::string m_pGDatabaseName;
                    bool m_pGDatabaseNameHasBeenSet;

                    /**
                     * <p>Mem0服务使用的PG用户名</p>
                     */
                    std::string m_pGUserName;
                    bool m_pGUserNameHasBeenSet;

                    /**
                     * <p>Mem0的网络状态</p>
                     */
                    std::vector<DBInstanceNetInfo> m_networkAccessList;
                    bool m_networkAccessListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEMEM0SERVICERESPONSE_H_
