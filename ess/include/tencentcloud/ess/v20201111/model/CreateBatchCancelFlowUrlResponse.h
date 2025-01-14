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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHCANCELFLOWURLRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHCANCELFLOWURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateBatchCancelFlowUrl返回参数结构体
                */
                class CreateBatchCancelFlowUrlResponse : public AbstractModel
                {
                public:
                    CreateBatchCancelFlowUrlResponse();
                    ~CreateBatchCancelFlowUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量撤回签署流程链接
                     * @return BatchCancelFlowUrl 批量撤回签署流程链接
                     * 
                     */
                    std::string GetBatchCancelFlowUrl() const;

                    /**
                     * 判断参数 BatchCancelFlowUrl 是否已赋值
                     * @return BatchCancelFlowUrl 是否已赋值
                     * 
                     */
                    bool BatchCancelFlowUrlHasBeenSet() const;

                    /**
                     * 获取签署流程撤回失败信息
数组里边的错误原因与传进来的FlowIds一一对应,如果是空字符串则标识没有出错
                     * @return FailMessages 签署流程撤回失败信息
数组里边的错误原因与传进来的FlowIds一一对应,如果是空字符串则标识没有出错
                     * 
                     */
                    std::vector<std::string> GetFailMessages() const;

                    /**
                     * 判断参数 FailMessages 是否已赋值
                     * @return FailMessages 是否已赋值
                     * 
                     */
                    bool FailMessagesHasBeenSet() const;

                    /**
                     * 获取签署连接过期时间字符串：年月日-时分秒

                     * @return UrlExpireOn 签署连接过期时间字符串：年月日-时分秒

                     * 
                     */
                    std::string GetUrlExpireOn() const;

                    /**
                     * 判断参数 UrlExpireOn 是否已赋值
                     * @return UrlExpireOn 是否已赋值
                     * 
                     */
                    bool UrlExpireOnHasBeenSet() const;

                    /**
                     * 获取批量撤销任务编号，为32位字符串，可用于[查询批量撤销签署流程任务结果](https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl) 或关联[批量撤销任务结果回调](https://qian.tencent.com/developers/company/callback_types_contracts_sign#%E4%B9%9D-%E6%89%B9%E9%87%8F%E6%92%A4%E9%94%80%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)
                     * @return TaskId 批量撤销任务编号，为32位字符串，可用于[查询批量撤销签署流程任务结果](https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl) 或关联[批量撤销任务结果回调](https://qian.tencent.com/developers/company/callback_types_contracts_sign#%E4%B9%9D-%E6%89%B9%E9%87%8F%E6%92%A4%E9%94%80%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 批量撤回签署流程链接
                     */
                    std::string m_batchCancelFlowUrl;
                    bool m_batchCancelFlowUrlHasBeenSet;

                    /**
                     * 签署流程撤回失败信息
数组里边的错误原因与传进来的FlowIds一一对应,如果是空字符串则标识没有出错
                     */
                    std::vector<std::string> m_failMessages;
                    bool m_failMessagesHasBeenSet;

                    /**
                     * 签署连接过期时间字符串：年月日-时分秒

                     */
                    std::string m_urlExpireOn;
                    bool m_urlExpireOnHasBeenSet;

                    /**
                     * 批量撤销任务编号，为32位字符串，可用于[查询批量撤销签署流程任务结果](https://qian.tencent.com/developers/companyApis/operateFlows/CreateBatchCancelFlowUrl) 或关联[批量撤销任务结果回调](https://qian.tencent.com/developers/company/callback_types_contracts_sign#%E4%B9%9D-%E6%89%B9%E9%87%8F%E6%92%A4%E9%94%80%E7%BB%93%E6%9E%9C%E5%9B%9E%E8%B0%83)
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEBATCHCANCELFLOWURLRESPONSE_H_
