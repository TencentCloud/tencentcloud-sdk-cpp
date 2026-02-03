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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DELETECLOUDBASEGWAPIREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DELETECLOUDBASEGWAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DeleteCloudBaseGWAPI请求参数结构体
                */
                class DeleteCloudBaseGWAPIRequest : public AbstractModel
                {
                public:
                    DeleteCloudBaseGWAPIRequest();
                    ~DeleteCloudBaseGWAPIRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务ID
                     * @return ServiceId 服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID
                     * @param _serviceId 服务ID
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取API Path
                     * @return Path API Path
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置API Path
                     * @param _path API Path
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取API ID
                     * @return APIId API ID
                     * 
                     */
                    std::string GetAPIId() const;

                    /**
                     * 设置API ID
                     * @param _aPIId API ID
                     * 
                     */
                    void SetAPIId(const std::string& _aPIId);

                    /**
                     * 判断参数 APIId 是否已赋值
                     * @return APIId 是否已赋值
                     * 
                     */
                    bool APIIdHasBeenSet() const;

                    /**
                     * 获取API类型
                     * @return Type API类型
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置API类型
                     * @param _type API类型
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取API Name
                     * @return Name API Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置API Name
                     * @param _name API Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取自定义值字段（Type为2时，传递容器服务名表示需要删除JNSGW）
                     * @return Custom 自定义值字段（Type为2时，传递容器服务名表示需要删除JNSGW）
                     * 
                     */
                    std::string GetCustom() const;

                    /**
                     * 设置自定义值字段（Type为2时，传递容器服务名表示需要删除JNSGW）
                     * @param _custom 自定义值字段（Type为2时，传递容器服务名表示需要删除JNSGW）
                     * 
                     */
                    void SetCustom(const std::string& _custom);

                    /**
                     * 判断参数 Custom 是否已赋值
                     * @return Custom 是否已赋值
                     * 
                     */
                    bool CustomHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * API Path
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * API ID
                     */
                    std::string m_aPIId;
                    bool m_aPIIdHasBeenSet;

                    /**
                     * API类型
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * API Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义值字段（Type为2时，传递容器服务名表示需要删除JNSGW）
                     */
                    std::string m_custom;
                    bool m_customHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DELETECLOUDBASEGWAPIREQUEST_H_
