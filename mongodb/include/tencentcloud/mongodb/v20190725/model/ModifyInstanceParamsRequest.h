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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEPARAMSREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ModifyMongoDBParamType.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * ModifyInstanceParams请求参数结构体
                */
                class ModifyInstanceParamsRequest : public AbstractModel
                {
                public:
                    ModifyInstanceParamsRequest();
                    ~ModifyInstanceParamsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>指定实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>指定实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>指定实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>指定需修改的参数名及值。当前所支持的参数名及对应取值范围，请通过 <a href="https://cloud.tencent.com/document/product/240/65903">DescribeInstanceParams </a>获取。</p>
                     * @return InstanceParams <p>指定需修改的参数名及值。当前所支持的参数名及对应取值范围，请通过 <a href="https://cloud.tencent.com/document/product/240/65903">DescribeInstanceParams </a>获取。</p>
                     * 
                     */
                    std::vector<ModifyMongoDBParamType> GetInstanceParams() const;

                    /**
                     * 设置<p>指定需修改的参数名及值。当前所支持的参数名及对应取值范围，请通过 <a href="https://cloud.tencent.com/document/product/240/65903">DescribeInstanceParams </a>获取。</p>
                     * @param _instanceParams <p>指定需修改的参数名及值。当前所支持的参数名及对应取值范围，请通过 <a href="https://cloud.tencent.com/document/product/240/65903">DescribeInstanceParams </a>获取。</p>
                     * 
                     */
                    void SetInstanceParams(const std::vector<ModifyMongoDBParamType>& _instanceParams);

                    /**
                     * 判断参数 InstanceParams 是否已赋值
                     * @return InstanceParams 是否已赋值
                     * 
                     */
                    bool InstanceParamsHasBeenSet() const;

                    /**
                     * 获取<p>操作类型，包括：</p><ul><li>IMMEDIATELY：立即调整。</li><li>DELAY：延迟调整。可选字段，不配置该参数则默认为立即调整。</li></ul>
                     * @return ModifyType <p>操作类型，包括：</p><ul><li>IMMEDIATELY：立即调整。</li><li>DELAY：延迟调整。可选字段，不配置该参数则默认为立即调整。</li></ul>
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置<p>操作类型，包括：</p><ul><li>IMMEDIATELY：立即调整。</li><li>DELAY：延迟调整。可选字段，不配置该参数则默认为立即调整。</li></ul>
                     * @param _modifyType <p>操作类型，包括：</p><ul><li>IMMEDIATELY：立即调整。</li><li>DELAY：延迟调整。可选字段，不配置该参数则默认为立即调整。</li></ul>
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                private:

                    /**
                     * <p>指定实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>指定需修改的参数名及值。当前所支持的参数名及对应取值范围，请通过 <a href="https://cloud.tencent.com/document/product/240/65903">DescribeInstanceParams </a>获取。</p>
                     */
                    std::vector<ModifyMongoDBParamType> m_instanceParams;
                    bool m_instanceParamsHasBeenSet;

                    /**
                     * <p>操作类型，包括：</p><ul><li>IMMEDIATELY：立即调整。</li><li>DELAY：延迟调整。可选字段，不配置该参数则默认为立即调整。</li></ul>
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_MODIFYINSTANCEPARAMSREQUEST_H_
