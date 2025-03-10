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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGESETLISTREQUEST_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGESETLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * DescribeKnowledgeSetList请求参数结构体
                */
                class DescribeKnowledgeSetListRequest : public AbstractModel
                {
                public:
                    DescribeKnowledgeSetListRequest();
                    ~DescribeKnowledgeSetListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
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
                     * 获取知识库标识，精准查询
                     * @return Name 知识库标识，精准查询
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置知识库标识，精准查询
                     * @param _name 知识库标识，精准查询
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取知识库名称，精准查询
                     * @return Title 知识库名称，精准查询
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置知识库名称，精准查询
                     * @param _title 知识库名称，精准查询
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取分页起始位
                     * @return Offset 分页起始位
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页起始位
                     * @param _offset 分页起始位
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询条数
                     * @return Limit 查询条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询条数
                     * @param _limit 查询条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取NoPage标识不分页
                     * @return QueryMode NoPage标识不分页
                     * 
                     */
                    std::string GetQueryMode() const;

                    /**
                     * 设置NoPage标识不分页
                     * @param _queryMode NoPage标识不分页
                     * 
                     */
                    void SetQueryMode(const std::string& _queryMode);

                    /**
                     * 判断参数 QueryMode 是否已赋值
                     * @return QueryMode 是否已赋值
                     * 
                     */
                    bool QueryModeHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 知识库标识，精准查询
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 知识库名称，精准查询
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 分页起始位
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * NoPage标识不分页
                     */
                    std::string m_queryMode;
                    bool m_queryModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGESETLISTREQUEST_H_
