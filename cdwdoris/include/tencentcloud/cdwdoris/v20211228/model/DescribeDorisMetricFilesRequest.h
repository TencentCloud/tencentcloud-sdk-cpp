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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDORISMETRICFILESREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDORISMETRICFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwdoris/v20211228/model/DescribeMetricsFileReq.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyMetricFileStruct.h>
#include <tencentcloud/cdwdoris/v20211228/model/ModifyMetricFileStructNew.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeDorisMetricFiles请求参数结构体
                */
                class DescribeDorisMetricFilesRequest : public AbstractModel
                {
                public:
                    DescribeDorisMetricFilesRequest();
                    ~DescribeDorisMetricFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取接口类型
                     * @return ApiType 接口类型
                     * 
                     */
                    std::string GetApiType() const;

                    /**
                     * 设置接口类型
                     * @param _apiType 接口类型
                     * 
                     */
                    void SetApiType(const std::string& _apiType);

                    /**
                     * 判断参数 ApiType 是否已赋值
                     * @return ApiType 是否已赋值
                     * 
                     */
                    bool ApiTypeHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return InstanceId 集群id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置集群id
                     * @param _instanceId 集群id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取展示监控指标入参
                     * @return DescribeMetricsFileReq 展示监控指标入参
                     * 
                     */
                    DescribeMetricsFileReq GetDescribeMetricsFileReq() const;

                    /**
                     * 设置展示监控指标入参
                     * @param _describeMetricsFileReq 展示监控指标入参
                     * 
                     */
                    void SetDescribeMetricsFileReq(const DescribeMetricsFileReq& _describeMetricsFileReq);

                    /**
                     * 判断参数 DescribeMetricsFileReq 是否已赋值
                     * @return DescribeMetricsFileReq 是否已赋值
                     * 
                     */
                    bool DescribeMetricsFileReqHasBeenSet() const;

                    /**
                     * 获取点关注功能入参
                     * @return ModifyMetricFileReq 点关注功能入参
                     * 
                     */
                    ModifyMetricFileStruct GetModifyMetricFileReq() const;

                    /**
                     * 设置点关注功能入参
                     * @param _modifyMetricFileReq 点关注功能入参
                     * 
                     */
                    void SetModifyMetricFileReq(const ModifyMetricFileStruct& _modifyMetricFileReq);

                    /**
                     * 判断参数 ModifyMetricFileReq 是否已赋值
                     * @return ModifyMetricFileReq 是否已赋值
                     * 
                     */
                    bool ModifyMetricFileReqHasBeenSet() const;

                    /**
                     * 获取监控指标关注功能入参
                     * @return ModifyAttentionMetricFileReq 监控指标关注功能入参
                     * 
                     */
                    ModifyMetricFileStructNew GetModifyAttentionMetricFileReq() const;

                    /**
                     * 设置监控指标关注功能入参
                     * @param _modifyAttentionMetricFileReq 监控指标关注功能入参
                     * 
                     */
                    void SetModifyAttentionMetricFileReq(const ModifyMetricFileStructNew& _modifyAttentionMetricFileReq);

                    /**
                     * 判断参数 ModifyAttentionMetricFileReq 是否已赋值
                     * @return ModifyAttentionMetricFileReq 是否已赋值
                     * 
                     */
                    bool ModifyAttentionMetricFileReqHasBeenSet() const;

                private:

                    /**
                     * 接口类型
                     */
                    std::string m_apiType;
                    bool m_apiTypeHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 展示监控指标入参
                     */
                    DescribeMetricsFileReq m_describeMetricsFileReq;
                    bool m_describeMetricsFileReqHasBeenSet;

                    /**
                     * 点关注功能入参
                     */
                    ModifyMetricFileStruct m_modifyMetricFileReq;
                    bool m_modifyMetricFileReqHasBeenSet;

                    /**
                     * 监控指标关注功能入参
                     */
                    ModifyMetricFileStructNew m_modifyAttentionMetricFileReq;
                    bool m_modifyAttentionMetricFileReqHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEDORISMETRICFILESREQUEST_H_
