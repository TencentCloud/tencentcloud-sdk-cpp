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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DETAILEDROLEPERM_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DETAILEDROLEPERM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Topic&Group维度的权限配置
                */
                class DetailedRolePerm : public AbstractModel
                {
                public:
                    DetailedRolePerm();
                    ~DetailedRolePerm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取权限对应的资源
                     * @return Resource 权限对应的资源
                     * 
                     */
                    std::string GetResource() const;

                    /**
                     * 设置权限对应的资源
                     * @param _resource 权限对应的资源
                     * 
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取是否开启生产权限
                     * @return PermWrite 是否开启生产权限
                     * 
                     */
                    bool GetPermWrite() const;

                    /**
                     * 设置是否开启生产权限
                     * @param _permWrite 是否开启生产权限
                     * 
                     */
                    void SetPermWrite(const bool& _permWrite);

                    /**
                     * 判断参数 PermWrite 是否已赋值
                     * @return PermWrite 是否已赋值
                     * 
                     */
                    bool PermWriteHasBeenSet() const;

                    /**
                     * 获取是否开启消费权限
                     * @return PermRead 是否开启消费权限
                     * 
                     */
                    bool GetPermRead() const;

                    /**
                     * 设置是否开启消费权限
                     * @param _permRead 是否开启消费权限
                     * 
                     */
                    void SetPermRead(const bool& _permRead);

                    /**
                     * 判断参数 PermRead 是否已赋值
                     * @return PermRead 是否已赋值
                     * 
                     */
                    bool PermReadHasBeenSet() const;

                    /**
                     * 获取授权资源类型（Topic:主题; Group:消费组）
                     * @return ResourceType 授权资源类型（Topic:主题; Group:消费组）
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置授权资源类型（Topic:主题; Group:消费组）
                     * @param _resourceType 授权资源类型（Topic:主题; Group:消费组）
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取资源备注
                     * @return Remark 资源备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置资源备注
                     * @param _remark 资源备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 权限对应的资源
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 是否开启生产权限
                     */
                    bool m_permWrite;
                    bool m_permWriteHasBeenSet;

                    /**
                     * 是否开启消费权限
                     */
                    bool m_permRead;
                    bool m_permReadHasBeenSet;

                    /**
                     * 授权资源类型（Topic:主题; Group:消费组）
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 资源备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DETAILEDROLEPERM_H_
