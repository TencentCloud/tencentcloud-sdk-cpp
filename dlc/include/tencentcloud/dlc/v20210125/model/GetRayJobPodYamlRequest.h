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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETRAYJOBPODYAMLREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETRAYJOBPODYAMLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GetRayJobPodYaml请求参数结构体
                */
                class GetRayJobPodYamlRequest : public AbstractModel
                {
                public:
                    GetRayJobPodYamlRequest();
                    ~GetRayJobPodYamlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return Id 任务ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置任务ID
                     * @param _id 任务ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Pod名称
                     * @return PodName Pod名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod名称
                     * @param _podName Pod名称
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Pod名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETRAYJOBPODYAMLREQUEST_H_
