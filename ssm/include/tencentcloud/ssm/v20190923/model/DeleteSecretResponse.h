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

#ifndef TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETRESPONSE_H_
#define TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssm
    {
        namespace V20190923
        {
            namespace Model
            {
                /**
                * DeleteSecret返回参数结构体
                */
                class DeleteSecretResponse : public AbstractModel
                {
                public:
                    DeleteSecretResponse();
                    ~DeleteSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定删除的凭据名称。</p>
                     * @return SecretName <p>指定删除的凭据名称。</p>
                     * 
                     */
                    std::string GetSecretName() const;

                    /**
                     * 判断参数 SecretName 是否已赋值
                     * @return SecretName 是否已赋值
                     * 
                     */
                    bool SecretNameHasBeenSet() const;

                    /**
                     * 获取<p>凭据删除的日期，unix时间戳。</p>
                     * @return DeleteTime <p>凭据删除的日期，unix时间戳。</p>
                     * 
                     */
                    int64_t GetDeleteTime() const;

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>异步删除任务 ID</p>
                     * @return FlowID <p>异步删除任务 ID</p>
                     * 
                     */
                    int64_t GetFlowID() const;

                    /**
                     * 判断参数 FlowID 是否已赋值
                     * @return FlowID 是否已赋值
                     * 
                     */
                    bool FlowIDHasBeenSet() const;

                private:

                    /**
                     * <p>指定删除的凭据名称。</p>
                     */
                    std::string m_secretName;
                    bool m_secretNameHasBeenSet;

                    /**
                     * <p>凭据删除的日期，unix时间戳。</p>
                     */
                    int64_t m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <p>异步删除任务 ID</p>
                     */
                    int64_t m_flowID;
                    bool m_flowIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSM_V20190923_MODEL_DELETESECRETRESPONSE_H_
