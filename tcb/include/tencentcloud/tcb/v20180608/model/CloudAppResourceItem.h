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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPRESOURCEITEM_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPRESOURCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 云应用资源信息
                */
                class CloudAppResourceItem : public AbstractModel
                {
                public:
                    CloudAppResourceItem();
                    ~CloudAppResourceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务名称</p>
                     * @return ServiceName <p>服务名称</p>
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名称</p>
                     * @param _serviceName <p>服务名称</p>
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取<p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     * @return ServiceType <p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     * @param _serviceType <p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>服务部署版本</p>
                     * @return DeployedRef <p>服务部署版本</p>
                     * 
                     */
                    std::string GetDeployedRef() const;

                    /**
                     * 设置<p>服务部署版本</p>
                     * @param _deployedRef <p>服务部署版本</p>
                     * 
                     */
                    void SetDeployedRef(const std::string& _deployedRef);

                    /**
                     * 判断参数 DeployedRef 是否已赋值
                     * @return DeployedRef 是否已赋值
                     * 
                     */
                    bool DeployedRefHasBeenSet() const;

                    /**
                     * 获取<p>服务动作</p>
                     * @return DiffCategory <p>服务动作</p>
                     * 
                     */
                    std::string GetDiffCategory() const;

                    /**
                     * 设置<p>服务动作</p>
                     * @param _diffCategory <p>服务动作</p>
                     * 
                     */
                    void SetDiffCategory(const std::string& _diffCategory);

                    /**
                     * 判断参数 DiffCategory 是否已赋值
                     * @return DiffCategory 是否已赋值
                     * 
                     */
                    bool DiffCategoryHasBeenSet() const;

                    /**
                     * 获取<p>服务状态</p>
                     * @return Status <p>服务状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>服务状态</p>
                     * @param _status <p>服务状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>服务名称</p>
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * <p>服务类型</p><p>枚举值：</p><ul><li>http-function： HTTP 云函数</li><li>function： 普通云函数</li><li>static-hosting： 静态托管</li></ul>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>服务部署版本</p>
                     */
                    std::string m_deployedRef;
                    bool m_deployedRefHasBeenSet;

                    /**
                     * <p>服务动作</p>
                     */
                    std::string m_diffCategory;
                    bool m_diffCategoryHasBeenSet;

                    /**
                     * <p>服务状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CLOUDAPPRESOURCEITEM_H_
