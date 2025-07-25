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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEPREVIEWSIGNURLREQUEST_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEPREVIEWSIGNURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20201222/model/Caller.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * CreatePreviewSignUrl请求参数结构体
                */
                class CreatePreviewSignUrlRequest : public AbstractModel
                {
                public:
                    CreatePreviewSignUrlRequest();
                    ~CreatePreviewSignUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取调用方信息
                     * @return Caller 调用方信息
                     * 
                     */
                    Caller GetCaller() const;

                    /**
                     * 设置调用方信息
                     * @param _caller 调用方信息
                     * 
                     */
                    void SetCaller(const Caller& _caller);

                    /**
                     * 判断参数 Caller 是否已赋值
                     * @return Caller 是否已赋值
                     * 
                     */
                    bool CallerHasBeenSet() const;

                    /**
                     * 获取URL过期时间戳
                     * @return Deadline URL过期时间戳
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置URL过期时间戳
                     * @param _deadline URL过期时间戳
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取目录ID。当 SignUrlType 为 CATALOG 时必填
                     * @return CatalogId 目录ID。当 SignUrlType 为 CATALOG 时必填
                     * 
                     */
                    std::string GetCatalogId() const;

                    /**
                     * 设置目录ID。当 SignUrlType 为 CATALOG 时必填
                     * @param _catalogId 目录ID。当 SignUrlType 为 CATALOG 时必填
                     * 
                     */
                    void SetCatalogId(const std::string& _catalogId);

                    /**
                     * 判断参数 CatalogId 是否已赋值
                     * @return CatalogId 是否已赋值
                     * 
                     */
                    bool CatalogIdHasBeenSet() const;

                    /**
                     * 获取流程ID。当 SignUrlType 为 FLOW 时必填
                     * @return FlowId 流程ID。当 SignUrlType 为 FLOW 时必填
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程ID。当 SignUrlType 为 FLOW 时必填
                     * @param _flowId 流程ID。当 SignUrlType 为 FLOW 时必填
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取签署链接类型：
1. FLOW - 单流程签署 (默认) 
2. CATALOG - 目录签署
                     * @return SignUrlType 签署链接类型：
1. FLOW - 单流程签署 (默认) 
2. CATALOG - 目录签署
                     * 
                     */
                    std::string GetSignUrlType() const;

                    /**
                     * 设置签署链接类型：
1. FLOW - 单流程签署 (默认) 
2. CATALOG - 目录签署
                     * @param _signUrlType 签署链接类型：
1. FLOW - 单流程签署 (默认) 
2. CATALOG - 目录签署
                     * 
                     */
                    void SetSignUrlType(const std::string& _signUrlType);

                    /**
                     * 判断参数 SignUrlType 是否已赋值
                     * @return SignUrlType 是否已赋值
                     * 
                     */
                    bool SignUrlTypeHasBeenSet() const;

                private:

                    /**
                     * 调用方信息
                     */
                    Caller m_caller;
                    bool m_callerHasBeenSet;

                    /**
                     * URL过期时间戳
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 目录ID。当 SignUrlType 为 CATALOG 时必填
                     */
                    std::string m_catalogId;
                    bool m_catalogIdHasBeenSet;

                    /**
                     * 流程ID。当 SignUrlType 为 FLOW 时必填
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 签署链接类型：
1. FLOW - 单流程签署 (默认) 
2. CATALOG - 目录签署
                     */
                    std::string m_signUrlType;
                    bool m_signUrlTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CREATEPREVIEWSIGNURLREQUEST_H_
