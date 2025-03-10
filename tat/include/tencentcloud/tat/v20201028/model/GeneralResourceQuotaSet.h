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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_GENERALRESOURCEQUOTASET_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_GENERALRESOURCEQUOTASET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 用户配额信息。
                */
                class GeneralResourceQuotaSet : public AbstractModel
                {
                public:
                    GeneralResourceQuotaSet();
                    ~GeneralResourceQuotaSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     * @return ResourceName 资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     * @param _resourceName 资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取已使用额度
                     * @return ResourceQuotaUsed 已使用额度
                     * 
                     */
                    int64_t GetResourceQuotaUsed() const;

                    /**
                     * 设置已使用额度
                     * @param _resourceQuotaUsed 已使用额度
                     * 
                     */
                    void SetResourceQuotaUsed(const int64_t& _resourceQuotaUsed);

                    /**
                     * 判断参数 ResourceQuotaUsed 是否已赋值
                     * @return ResourceQuotaUsed 是否已赋值
                     * 
                     */
                    bool ResourceQuotaUsedHasBeenSet() const;

                    /**
                     * 获取总额度
                     * @return ResourceQuotaTotal 总额度
                     * 
                     */
                    int64_t GetResourceQuotaTotal() const;

                    /**
                     * 设置总额度
                     * @param _resourceQuotaTotal 总额度
                     * 
                     */
                    void SetResourceQuotaTotal(const int64_t& _resourceQuotaTotal);

                    /**
                     * 判断参数 ResourceQuotaTotal 是否已赋值
                     * @return ResourceQuotaTotal 是否已赋值
                     * 
                     */
                    bool ResourceQuotaTotalHasBeenSet() const;

                private:

                    /**
                     * 资源名称

取值为：

- COMMAND：命令
- REGISTER_CODE：托管实例注册码
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 已使用额度
                     */
                    int64_t m_resourceQuotaUsed;
                    bool m_resourceQuotaUsedHasBeenSet;

                    /**
                     * 总额度
                     */
                    int64_t m_resourceQuotaTotal;
                    bool m_resourceQuotaTotalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_GENERALRESOURCEQUOTASET_H_
