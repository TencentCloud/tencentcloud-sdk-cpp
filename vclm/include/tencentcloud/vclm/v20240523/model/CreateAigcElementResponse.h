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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_CREATEAIGCELEMENTRESPONSE_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_CREATEAIGCELEMENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * CreateAigcElement返回参数结构体
                */
                class CreateAigcElementResponse : public AbstractModel
                {
                public:
                    CreateAigcElementResponse();
                    ~CreateAigcElementResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务ID。</p>
                     * @return JobId <p>任务ID。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>主体Id</p>
                     * @return ElementId <p>主体Id</p>
                     * 
                     */
                    std::string GetElementId() const;

                    /**
                     * 判断参数 ElementId 是否已赋值
                     * @return ElementId 是否已赋值
                     * 
                     */
                    bool ElementIdHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>默认值：任务状态</p>
                     * @return Status <p>任务状态</p><p>默认值：任务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>厂商</p>
                     * @return Provider <p>厂商</p>
                     * 
                     */
                    std::vector<std::string> GetProvider() const;

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间</p>
                     * @return CreatedAt <p>任务创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>任务ID。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>主体Id</p>
                     */
                    std::string m_elementId;
                    bool m_elementIdHasBeenSet;

                    /**
                     * <p>任务状态</p><p>默认值：任务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>厂商</p>
                     */
                    std::vector<std::string> m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * <p>任务创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_CREATEAIGCELEMENTRESPONSE_H_
