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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYAPPREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYAPPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/BaseConfig.h>
#include <tencentcloud/lke/v20231130/model/AppConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ModifyApp请求参数结构体
                */
                class ModifyAppRequest : public AbstractModel
                {
                public:
                    ModifyAppRequest();
                    ~ModifyAppRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID
                     * @return AppBizId 应用 ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用 ID
                     * @param _appBizId 应用 ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     * @return AppType 应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     * @param _appType 应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取应用基础配置
                     * @return BaseConfig 应用基础配置
                     * 
                     */
                    BaseConfig GetBaseConfig() const;

                    /**
                     * 设置应用基础配置
                     * @param _baseConfig 应用基础配置
                     * 
                     */
                    void SetBaseConfig(const BaseConfig& _baseConfig);

                    /**
                     * 判断参数 BaseConfig 是否已赋值
                     * @return BaseConfig 是否已赋值
                     * 
                     */
                    bool BaseConfigHasBeenSet() const;

                    /**
                     * 获取应用配置
                     * @return AppConfig 应用配置
                     * 
                     */
                    AppConfig GetAppConfig() const;

                    /**
                     * 设置应用配置
                     * @param _appConfig 应用配置
                     * 
                     */
                    void SetAppConfig(const AppConfig& _appConfig);

                    /**
                     * 判断参数 AppConfig 是否已赋值
                     * @return AppConfig 是否已赋值
                     * 
                     */
                    bool AppConfigHasBeenSet() const;

                    /**
                     * 获取登录用户子账号(集成商模式必填)	
                     * @return LoginSubAccountUin 登录用户子账号(集成商模式必填)	
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置登录用户子账号(集成商模式必填)	
                     * @param _loginSubAccountUin 登录用户子账号(集成商模式必填)	
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                private:

                    /**
                     * 应用 ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 应用基础配置
                     */
                    BaseConfig m_baseConfig;
                    bool m_baseConfigHasBeenSet;

                    /**
                     * 应用配置
                     */
                    AppConfig m_appConfig;
                    bool m_appConfigHasBeenSet;

                    /**
                     * 登录用户子账号(集成商模式必填)	
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_MODIFYAPPREQUEST_H_
