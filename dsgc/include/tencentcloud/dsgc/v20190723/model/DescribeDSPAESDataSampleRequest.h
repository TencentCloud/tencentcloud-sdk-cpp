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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAESDATASAMPLEREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAESDATASAMPLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAESDataSample请求参数结构体
                */
                class DescribeDSPAESDataSampleRequest : public AbstractModel
                {
                public:
                    DescribeDSPAESDataSampleRequest();
                    ~DescribeDSPAESDataSampleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DSPA实例ID
                     * @return DspaId DSPA实例ID
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置DSPA实例ID
                     * @param _dspaId DSPA实例ID
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取字段扫描结果ID
                     * @return FieldResultId 字段扫描结果ID
                     * 
                     */
                    int64_t GetFieldResultId() const;

                    /**
                     * 设置字段扫描结果ID
                     * @param _fieldResultId 字段扫描结果ID
                     * 
                     */
                    void SetFieldResultId(const int64_t& _fieldResultId);

                    /**
                     * 判断参数 FieldResultId 是否已赋值
                     * @return FieldResultId 是否已赋值
                     * 
                     */
                    bool FieldResultIdHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return Order 排序方式
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
                     * @param _order 排序方式
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return OrderField 排序字段
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段
                     * @param _orderField 排序字段
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * DSPA实例ID
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 字段扫描结果ID
                     */
                    int64_t m_fieldResultId;
                    bool m_fieldResultIdHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAESDATASAMPLEREQUEST_H_
