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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_RESOURCESERVICEINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_RESOURCESERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 资源服务信息
                */
                class ResourceServiceInfo : public AbstractModel
                {
                public:
                    ResourceServiceInfo();
                    ~ResourceServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取创建时间戳
                     * @return CreateTime 创建时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间戳
                     * @param _createTime 创建时间戳
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取到期时间戳
                     * @return ExpireTime 到期时间戳
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置到期时间戳
                     * @param _expireTime 到期时间戳
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取资源名称，如应用加固，源码混淆
                     * @return ResourceName 资源名称，如应用加固，源码混淆
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置资源名称，如应用加固，源码混淆
                     * @param _resourceName 资源名称，如应用加固，源码混淆
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                private:

                    /**
                     * 创建时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 到期时间戳
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 资源名称，如应用加固，源码混淆
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_RESOURCESERVICEINFO_H_
