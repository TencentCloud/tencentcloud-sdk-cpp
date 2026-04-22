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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEAPPLICATIONEXITREPORTDETAILREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEAPPLICATIONEXITREPORTDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeApplicationExitReportDetail请求参数结构体
                */
                class DescribeApplicationExitReportDetailRequest : public AbstractModel
                {
                public:
                    DescribeApplicationExitReportDetailRequest();
                    ~DescribeApplicationExitReportDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品Id</p>
                     * @return ProductId <p>产品Id</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品Id</p>
                     * @param _productId <p>产品Id</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
                     * @return ParamToken <p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
                     * 
                     */
                    std::string GetParamToken() const;

                    /**
                     * 设置<p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
                     * @param _paramToken <p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
                     * 
                     */
                    void SetParamToken(const std::string& _paramToken);

                    /**
                     * 判断参数 ParamToken 是否已赋值
                     * @return ParamToken 是否已赋值
                     * 
                     */
                    bool ParamTokenHasBeenSet() const;

                    /**
                     * 获取<p>问题Id</p>
                     * @return ClientIdentify <p>问题Id</p>
                     * 
                     */
                    std::string GetClientIdentify() const;

                    /**
                     * 设置<p>问题Id</p>
                     * @param _clientIdentify <p>问题Id</p>
                     * 
                     */
                    void SetClientIdentify(const std::string& _clientIdentify);

                    /**
                     * 判断参数 ClientIdentify 是否已赋值
                     * @return ClientIdentify 是否已赋值
                     * 
                     */
                    bool ClientIdentifyHasBeenSet() const;

                    /**
                     * 获取<p>开始时间</p>
                     * @return StartEventTime <p>开始时间</p>
                     * 
                     */
                    int64_t GetStartEventTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _startEventTime <p>开始时间</p>
                     * 
                     */
                    void SetStartEventTime(const int64_t& _startEventTime);

                    /**
                     * 判断参数 StartEventTime 是否已赋值
                     * @return StartEventTime 是否已赋值
                     * 
                     */
                    bool StartEventTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p>
                     * @return EndEventTime <p>结束时间</p>
                     * 
                     */
                    int64_t GetEndEventTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endEventTime <p>结束时间</p>
                     * 
                     */
                    void SetEndEventTime(const int64_t& _endEventTime);

                    /**
                     * 判断参数 EndEventTime 是否已赋值
                     * @return EndEventTime 是否已赋值
                     * 
                     */
                    bool EndEventTimeHasBeenSet() const;

                    /**
                     * 获取<p>拓展数据</p>
                     * @return ExtraData <p>拓展数据</p>
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置<p>拓展数据</p>
                     * @param _extraData <p>拓展数据</p>
                     * 
                     */
                    void SetExtraData(const std::string& _extraData);

                    /**
                     * 判断参数 ExtraData 是否已赋值
                     * @return ExtraData 是否已赋值
                     * 
                     */
                    bool ExtraDataHasBeenSet() const;

                    /**
                     * 获取<p>请求头</p>
                     * @return RequestHeader <p>请求头</p>
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置<p>请求头</p>
                     * @param _requestHeader <p>请求头</p>
                     * 
                     */
                    void SetRequestHeader(const std::string& _requestHeader);

                    /**
                     * 判断参数 RequestHeader 是否已赋值
                     * @return RequestHeader 是否已赋值
                     * 
                     */
                    bool RequestHeaderHasBeenSet() const;

                private:

                    /**
                     * <p>产品Id</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>提供给前端使用，当填写本字段时，会覆盖 formlist 的值</p>
                     */
                    std::string m_paramToken;
                    bool m_paramTokenHasBeenSet;

                    /**
                     * <p>问题Id</p>
                     */
                    std::string m_clientIdentify;
                    bool m_clientIdentifyHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    int64_t m_startEventTime;
                    bool m_startEventTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    int64_t m_endEventTime;
                    bool m_endEventTimeHasBeenSet;

                    /**
                     * <p>拓展数据</p>
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                    /**
                     * <p>请求头</p>
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEAPPLICATIONEXITREPORTDETAILREQUEST_H_
