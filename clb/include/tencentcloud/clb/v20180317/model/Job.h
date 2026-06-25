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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_JOB_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_JOB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 异步任务信息
                */
                class Job : public AbstractModel
                {
                public:
                    Job();
                    ~Job() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>接口名称</p>
                     * @return ApiName <p>接口名称</p>
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置<p>接口名称</p>
                     * @param _apiName <p>接口名称</p>
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取<p>请求ID</p>
                     * @return RequestId <p>请求ID</p>
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>请求ID</p>
                     * @param _requestId <p>请求ID</p>
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取<p>异步任务状态</p><p>枚举值：</p><ul><li>Processing： 进行中</li><li>Succeeded： 成功</li><li>Failed： 失败</li></ul>
                     * @return Status <p>异步任务状态</p><p>枚举值：</p><ul><li>Processing： 进行中</li><li>Succeeded： 成功</li><li>Failed： 失败</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>异步任务状态</p><p>枚举值：</p><ul><li>Processing： 进行中</li><li>Succeeded： 成功</li><li>Failed： 失败</li></ul>
                     * @param _status <p>异步任务状态</p><p>枚举值：</p><ul><li>Processing： 进行中</li><li>Succeeded： 成功</li><li>Failed： 失败</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>资源ID</p>
                     * @return ResourceIds <p>资源ID</p>
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _resourceIds <p>资源ID</p>
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * <p>接口名称</p>
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * <p>请求ID</p>
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <p>异步任务状态</p><p>枚举值：</p><ul><li>Processing： 进行中</li><li>Succeeded： 成功</li><li>Failed： 失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>资源ID</p>
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_JOB_H_
