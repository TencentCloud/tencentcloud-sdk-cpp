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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEFOOMPROBLEMDETAILREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEFOOMPROBLEMDETAILREQUEST_H_

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
                * DescribeFOOMProblemDetail请求参数结构体
                */
                class DescribeFOOMProblemDetailRequest : public AbstractModel
                {
                public:
                    DescribeFOOMProblemDetailRequest();
                    ~DescribeFOOMProblemDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
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
                     * 获取消息唯一标识
                     * @return ClientIdentify 消息唯一标识
                     * 
                     */
                    std::string GetClientIdentify() const;

                    /**
                     * 设置消息唯一标识
                     * @param _clientIdentify 消息唯一标识
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
                     * 获取特征
                     * @return Feature 特征
                     * 
                     */
                    std::string GetFeature() const;

                    /**
                     * 设置特征
                     * @param _feature 特征
                     * 
                     */
                    void SetFeature(const std::string& _feature);

                    /**
                     * 判断参数 Feature 是否已赋值
                     * @return Feature 是否已赋值
                     * 
                     */
                    bool FeatureHasBeenSet() const;

                    /**
                     * 获取事件开始时间
                     * @return StartEventTime 事件开始时间
                     * 
                     */
                    int64_t GetStartEventTime() const;

                    /**
                     * 设置事件开始时间
                     * @param _startEventTime 事件开始时间
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
                     * 获取事件结束时间
                     * @return EndEventTime 事件结束时间
                     * 
                     */
                    int64_t GetEndEventTime() const;

                    /**
                     * 设置事件结束时间
                     * @param _endEventTime 事件结束时间
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
                     * 获取拓展数据
                     * @return ExtraData 拓展数据
                     * 
                     */
                    std::string GetExtraData() const;

                    /**
                     * 设置拓展数据
                     * @param _extraData 拓展数据
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
                     * 获取请求头
                     * @return RequestHeader 请求头
                     * 
                     */
                    std::string GetRequestHeader() const;

                    /**
                     * 设置请求头
                     * @param _requestHeader 请求头
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
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 消息唯一标识
                     */
                    std::string m_clientIdentify;
                    bool m_clientIdentifyHasBeenSet;

                    /**
                     * 特征
                     */
                    std::string m_feature;
                    bool m_featureHasBeenSet;

                    /**
                     * 事件开始时间
                     */
                    int64_t m_startEventTime;
                    bool m_startEventTimeHasBeenSet;

                    /**
                     * 事件结束时间
                     */
                    int64_t m_endEventTime;
                    bool m_endEventTimeHasBeenSet;

                    /**
                     * 拓展数据
                     */
                    std::string m_extraData;
                    bool m_extraDataHasBeenSet;

                    /**
                     * 请求头
                     */
                    std::string m_requestHeader;
                    bool m_requestHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEFOOMPROBLEMDETAILREQUEST_H_
