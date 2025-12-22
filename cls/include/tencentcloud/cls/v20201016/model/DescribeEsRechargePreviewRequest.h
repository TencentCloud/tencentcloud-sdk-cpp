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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEESRECHARGEPREVIEWREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEESRECHARGEPREVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/EsInfo.h>
#include <tencentcloud/cls/v20201016/model/EsImportInfo.h>
#include <tencentcloud/cls/v20201016/model/EsTimeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeEsRechargePreview请求参数结构体
                */
                class DescribeEsRechargePreviewRequest : public AbstractModel
                {
                public:
                    DescribeEsRechargePreviewRequest();
                    ~DescribeEsRechargePreviewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取名称：长度不超过64字符。
                     * @return Name 名称：长度不超过64字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称：长度不超过64字符。
                     * @param _name 名称：长度不超过64字符。
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
                     * 获取日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @return TopicId 日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @param _topicId 日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取索引信息。不同索引可以通过英文逗号分隔，支持*通配符
                     * @return Index 索引信息。不同索引可以通过英文逗号分隔，支持*通配符
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置索引信息。不同索引可以通过英文逗号分隔，支持*通配符
                     * @param _index 索引信息。不同索引可以通过英文逗号分隔，支持*通配符
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取es查询语句。
                     * @return Query es查询语句。
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置es查询语句。
                     * @param _query es查询语句。
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
                     * 获取es集群配置信息。
                     * @return EsInfo es集群配置信息。
                     * 
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置es集群配置信息。
                     * @param _esInfo es集群配置信息。
                     * 
                     */
                    void SetEsInfo(const EsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     * 
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取es导入信息。
                     * @return ImportInfo es导入信息。
                     * 
                     */
                    EsImportInfo GetImportInfo() const;

                    /**
                     * 设置es导入信息。
                     * @param _importInfo es导入信息。
                     * 
                     */
                    void SetImportInfo(const EsImportInfo& _importInfo);

                    /**
                     * 判断参数 ImportInfo 是否已赋值
                     * @return ImportInfo 是否已赋值
                     * 
                     */
                    bool ImportInfoHasBeenSet() const;

                    /**
                     * 获取es导入时间字段信息。
                     * @return TimeInfo es导入时间字段信息。
                     * 
                     */
                    EsTimeInfo GetTimeInfo() const;

                    /**
                     * 设置es导入时间字段信息。
                     * @param _timeInfo es导入时间字段信息。
                     * 
                     */
                    void SetTimeInfo(const EsTimeInfo& _timeInfo);

                    /**
                     * 判断参数 TimeInfo 是否已赋值
                     * @return TimeInfo 是否已赋值
                     * 
                     */
                    bool TimeInfoHasBeenSet() const;

                private:

                    /**
                     * 名称：长度不超过64字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 索引信息。不同索引可以通过英文逗号分隔，支持*通配符
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * es查询语句。
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * es集群配置信息。
                     */
                    EsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * es导入信息。
                     */
                    EsImportInfo m_importInfo;
                    bool m_importInfoHasBeenSet;

                    /**
                     * es导入时间字段信息。
                     */
                    EsTimeInfo m_timeInfo;
                    bool m_timeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEESRECHARGEPREVIEWREQUEST_H_
