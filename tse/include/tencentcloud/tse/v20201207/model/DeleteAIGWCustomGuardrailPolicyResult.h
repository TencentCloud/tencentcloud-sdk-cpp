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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETEAIGWCUSTOMGUARDRAILPOLICYRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETEAIGWCUSTOMGUARDRAILPOLICYRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CustomGuardrailSyncFailure.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 删除自定义安全护栏策略结果
                */
                class DeleteAIGWCustomGuardrailPolicyResult : public AbstractModel
                {
                public:
                    DeleteAIGWCustomGuardrailPolicyResult();
                    ~DeleteAIGWCustomGuardrailPolicyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否完成插件投影清理并删除策略。false 时策略保留供重试，应检查 FailedResources。</p>
                     * @return Success <p>是否完成插件投影清理并删除策略。false 时策略保留供重试，应检查 FailedResources。</p>
                     * 
                     */
                    bool GetSuccess() const;

                    /**
                     * 设置<p>是否完成插件投影清理并删除策略。false 时策略保留供重试，应检查 FailedResources。</p>
                     * @param _success <p>是否完成插件投影清理并删除策略。false 时策略保留供重试，应检查 FailedResources。</p>
                     * 
                     */
                    void SetSuccess(const bool& _success);

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取<p>投影清理失败的业务资源</p>
                     * @return FailedResources <p>投影清理失败的业务资源</p>
                     * 
                     */
                    std::vector<CustomGuardrailSyncFailure> GetFailedResources() const;

                    /**
                     * 设置<p>投影清理失败的业务资源</p>
                     * @param _failedResources <p>投影清理失败的业务资源</p>
                     * 
                     */
                    void SetFailedResources(const std::vector<CustomGuardrailSyncFailure>& _failedResources);

                    /**
                     * 判断参数 FailedResources 是否已赋值
                     * @return FailedResources 是否已赋值
                     * 
                     */
                    bool FailedResourcesHasBeenSet() const;

                private:

                    /**
                     * <p>是否完成插件投影清理并删除策略。false 时策略保留供重试，应检查 FailedResources。</p>
                     */
                    bool m_success;
                    bool m_successHasBeenSet;

                    /**
                     * <p>投影清理失败的业务资源</p>
                     */
                    std::vector<CustomGuardrailSyncFailure> m_failedResources;
                    bool m_failedResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETEAIGWCUSTOMGUARDRAILPOLICYRESULT_H_
