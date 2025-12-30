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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateBindResourceTaskDetail请求参数结构体
                */
                class DescribeCertificateBindResourceTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeCertificateBindResourceTaskDetailRequest();
                    ~DescribeCertificateBindResourceTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果</p>
                     * @return TaskId <p>任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果</p>
                     * @param _taskId <p>任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>每页展示数量， 默认10，最大值100; 分页总数为云资源地域下实例总数， 即第一页会拉群每个云资源的地域下面Limit数量实例</p>
                     * @return Limit <p>每页展示数量， 默认10，最大值100; 分页总数为云资源地域下实例总数， 即第一页会拉群每个云资源的地域下面Limit数量实例</p>
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置<p>每页展示数量， 默认10，最大值100; 分页总数为云资源地域下实例总数， 即第一页会拉群每个云资源的地域下面Limit数量实例</p>
                     * @param _limit <p>每页展示数量， 默认10，最大值100; 分页总数为云资源地域下实例总数， 即第一页会拉群每个云资源的地域下面Limit数量实例</p>
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>当前偏移量，默认为0</p>
                     * @return Offset <p>当前偏移量，默认为0</p>
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置<p>当前偏移量，默认为0</p>
                     * @param _offset <p>当前偏移量，默认为0</p>
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>查询资源类型的结果详情， 不传则查询所有，取值支持：- clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     * @return ResourceTypes <p>查询资源类型的结果详情， 不传则查询所有，取值支持：- clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置<p>查询资源类型的结果详情， 不传则查询所有，取值支持：- clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     * @param _resourceTypes <p>查询资源类型的结果详情， 不传则查询所有，取值支持：- clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取<p>查询地域列表的数据，clb、tke、waf、apigateway、tcb、cos、tse支持地域查询， 其他资源类型不支持</p>
                     * @return Regions <p>查询地域列表的数据，clb、tke、waf、apigateway、tcb、cos、tse支持地域查询， 其他资源类型不支持</p>
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置<p>查询地域列表的数据，clb、tke、waf、apigateway、tcb、cos、tse支持地域查询， 其他资源类型不支持</p>
                     * @param _regions <p>查询地域列表的数据，clb、tke、waf、apigateway、tcb、cos、tse支持地域查询， 其他资源类型不支持</p>
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID，根据CreateCertificateBindResourceSyncTask得到的任务ID查询绑定云资源结果</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>每页展示数量， 默认10，最大值100; 分页总数为云资源地域下实例总数， 即第一页会拉群每个云资源的地域下面Limit数量实例</p>
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>当前偏移量，默认为0</p>
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>查询资源类型的结果详情， 不传则查询所有，取值支持：- clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * <p>查询地域列表的数据，clb、tke、waf、apigateway、tcb、cos、tse支持地域查询， 其他资源类型不支持</p>
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILREQUEST_H_
