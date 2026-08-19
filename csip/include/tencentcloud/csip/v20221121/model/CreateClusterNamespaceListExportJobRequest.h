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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERNAMESPACELISTEXPORTJOBREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERNAMESPACELISTEXPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateClusterNamespaceListExportJob请求参数结构体
                */
                class CreateClusterNamespaceListExportJobRequest : public AbstractModel
                {
                public:
                    CreateClusterNamespaceListExportJobRequest();
                    ~CreateClusterNamespaceListExportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群CA证书MD5</p>
                     * @return ClusterCaMD5 <p>集群CA证书MD5</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>集群CA证书MD5</p>
                     * @param _clusterCaMD5 <p>集群CA证书MD5</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>通用过滤条件列表。支持的过滤字段：<br>Name：命名空间名称，模糊匹配。<br>Label：标签，模糊匹配（对标签的 key 或 value 做匹配，任一命中即匹配）。</p>
                     * @return Filter <p>通用过滤条件列表。支持的过滤字段：<br>Name：命名空间名称，模糊匹配。<br>Label：标签，模糊匹配（对标签的 key 或 value 做匹配，任一命中即匹配）。</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>通用过滤条件列表。支持的过滤字段：<br>Name：命名空间名称，模糊匹配。<br>Label：标签，模糊匹配（对标签的 key 或 value 做匹配，任一命中即匹配）。</p>
                     * @param _filter <p>通用过滤条件列表。支持的过滤字段：<br>Name：命名空间名称，模糊匹配。<br>Label：标签，模糊匹配（对标签的 key 或 value 做匹配，任一命中即匹配）。</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>Name：命名空间名称<br>Labels：标签（格式：key1=value1;key2=value2）<br>CreateTime：创建时间</p>
                     * @return ExportFields <p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>Name：命名空间名称<br>Labels：标签（格式：key1=value1;key2=value2）<br>CreateTime：创建时间</p>
                     * 
                     */
                    std::vector<std::string> GetExportFields() const;

                    /**
                     * 设置<p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>Name：命名空间名称<br>Labels：标签（格式：key1=value1;key2=value2）<br>CreateTime：创建时间</p>
                     * @param _exportFields <p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>Name：命名空间名称<br>Labels：标签（格式：key1=value1;key2=value2）<br>CreateTime：创建时间</p>
                     * 
                     */
                    void SetExportFields(const std::vector<std::string>& _exportFields);

                    /**
                     * 判断参数 ExportFields 是否已赋值
                     * @return ExportFields 是否已赋值
                     * 
                     */
                    bool ExportFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>集群CA证书MD5</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件列表。支持的过滤字段：<br>Name：命名空间名称，模糊匹配。<br>Label：标签，模糊匹配（对标签的 key 或 value 做匹配，任一命中即匹配）。</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>导出字段列表（不传则导出全部字段）<br>枚举值：<br>Name：命名空间名称<br>Labels：标签（格式：key1=value1;key2=value2）<br>CreateTime：创建时间</p>
                     */
                    std::vector<std::string> m_exportFields;
                    bool m_exportFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERNAMESPACELISTEXPORTJOBREQUEST_H_
