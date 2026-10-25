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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMBUSINESSSYSTEMREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMBUSINESSSYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/Tag.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateTDEMBusinessSystem请求参数结构体
                */
                class CreateTDEMBusinessSystemRequest : public AbstractModel
                {
                public:
                    CreateTDEMBusinessSystemRequest();
                    ~CreateTDEMBusinessSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>业务系统名称（必填）</p>
                     * @return InstanceName <p>业务系统名称（必填）</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>业务系统名称（必填）</p>
                     * @param _instanceName <p>业务系统名称（必填）</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>业务系统描述（可选）</p>
                     * @return InstanceDesc <p>业务系统描述（可选）</p>
                     * 
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置<p>业务系统描述（可选）</p>
                     * @param _instanceDesc <p>业务系统描述（可选）</p>
                     * 
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     * 
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return Tags <p>标签列表</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tags <p>标签列表</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>业务系统名称（必填）</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>业务系统描述（可选）</p>
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATETDEMBUSINESSSYSTEMREQUEST_H_
