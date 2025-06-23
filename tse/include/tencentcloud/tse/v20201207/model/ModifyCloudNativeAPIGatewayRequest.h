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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ModifyCloudNativeAPIGateway请求参数结构体
                */
                class ModifyCloudNativeAPIGatewayRequest : public AbstractModel
                {
                public:
                    ModifyCloudNativeAPIGatewayRequest();
                    ~ModifyCloudNativeAPIGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云原生API网关实例ID。
                     * @return GatewayId 云原生API网关实例ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置云原生API网关实例ID。
                     * @param _gatewayId 云原生API网关实例ID。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取云原生API网关名字, 最多支持60个字符。
                     * @return Name 云原生API网关名字, 最多支持60个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置云原生API网关名字, 最多支持60个字符。
                     * @param _name 云原生API网关名字, 最多支持60个字符。
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
                     * 获取云原生API网关描述信息, 最多支持120个字符。
                     * @return Description 云原生API网关描述信息, 最多支持120个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置云原生API网关描述信息, 最多支持120个字符。
                     * @param _description 云原生API网关描述信息, 最多支持120个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取是否开启 CLS 日志。暂时取值只能是 true，即只能从关闭状态变成开启状态。
                     * @return EnableCls 是否开启 CLS 日志。暂时取值只能是 true，即只能从关闭状态变成开启状态。
                     * 
                     */
                    bool GetEnableCls() const;

                    /**
                     * 设置是否开启 CLS 日志。暂时取值只能是 true，即只能从关闭状态变成开启状态。
                     * @param _enableCls 是否开启 CLS 日志。暂时取值只能是 true，即只能从关闭状态变成开启状态。
                     * 
                     */
                    void SetEnableCls(const bool& _enableCls);

                    /**
                     * 判断参数 EnableCls 是否已赋值
                     * @return EnableCls 是否已赋值
                     * 
                     */
                    bool EnableClsHasBeenSet() const;

                    /**
                     * 获取公网计费模式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
                     * @return InternetPayMode 公网计费模式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
                     * 
                     */
                    std::string GetInternetPayMode() const;

                    /**
                     * 设置公网计费模式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
                     * @param _internetPayMode 公网计费模式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
                     * 
                     */
                    void SetInternetPayMode(const std::string& _internetPayMode);

                    /**
                     * 判断参数 InternetPayMode 是否已赋值
                     * @return InternetPayMode 是否已赋值
                     * 
                     */
                    bool InternetPayModeHasBeenSet() const;

                    /**
                     * 获取是否开启实例删除保护,默认false
                     * @return DeleteProtect 是否开启实例删除保护,默认false
                     * 
                     */
                    bool GetDeleteProtect() const;

                    /**
                     * 设置是否开启实例删除保护,默认false
                     * @param _deleteProtect 是否开启实例删除保护,默认false
                     * 
                     */
                    void SetDeleteProtect(const bool& _deleteProtect);

                    /**
                     * 判断参数 DeleteProtect 是否已赋值
                     * @return DeleteProtect 是否已赋值
                     * 
                     */
                    bool DeleteProtectHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 云原生API网关名字, 最多支持60个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 云原生API网关描述信息, 最多支持120个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 是否开启 CLS 日志。暂时取值只能是 true，即只能从关闭状态变成开启状态。
                     */
                    bool m_enableCls;
                    bool m_enableClsHasBeenSet;

                    /**
                     * 公网计费模式。可选取值 BANDWIDTH | TRAFFIC ，表示按带宽和按流量计费。
                     */
                    std::string m_internetPayMode;
                    bool m_internetPayModeHasBeenSet;

                    /**
                     * 是否开启实例删除保护,默认false
                     */
                    bool m_deleteProtect;
                    bool m_deleteProtectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYCLOUDNATIVEAPIGATEWAYREQUEST_H_
