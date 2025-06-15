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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEAPPRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEAPPRESPONSE_H_

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
                * DescribeApp返回参数结构体
                */
                class DescribeAppResponse : public AbstractModel
                {
                public:
                    DescribeAppResponse();
                    ~DescribeAppResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用 ID
                     * @return AppBizId 应用 ID
                     * 
                     */
                    std::string GetAppBizId() const;

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
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取应用类型说明
                     * @return AppTypeDesc 应用类型说明
                     * 
                     */
                    std::string GetAppTypeDesc() const;

                    /**
                     * 判断参数 AppTypeDesc 是否已赋值
                     * @return AppTypeDesc 是否已赋值
                     * 
                     */
                    bool AppTypeDescHasBeenSet() const;

                    /**
                     * 获取应用类型说明
                     * @return BaseConfig 应用类型说明
                     * 
                     */
                    BaseConfig GetBaseConfig() const;

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
                     * 判断参数 AppConfig 是否已赋值
                     * @return AppConfig 是否已赋值
                     * 
                     */
                    bool AppConfigHasBeenSet() const;

                    /**
                     * 获取头像是否在申诉中
                     * @return AvatarInAppeal 头像是否在申诉中
                     * 
                     */
                    bool GetAvatarInAppeal() const;

                    /**
                     * 判断参数 AvatarInAppeal 是否已赋值
                     * @return AvatarInAppeal 是否已赋值
                     * 
                     */
                    bool AvatarInAppealHasBeenSet() const;

                    /**
                     * 获取角色描述是否在申诉中
                     * @return RoleInAppeal 角色描述是否在申诉中
                     * 
                     */
                    bool GetRoleInAppeal() const;

                    /**
                     * 判断参数 RoleInAppeal 是否已赋值
                     * @return RoleInAppeal 是否已赋值
                     * 
                     */
                    bool RoleInAppealHasBeenSet() const;

                    /**
                     * 获取名称是否在申诉中
                     * @return NameInAppeal 名称是否在申诉中
                     * 
                     */
                    bool GetNameInAppeal() const;

                    /**
                     * 判断参数 NameInAppeal 是否已赋值
                     * @return NameInAppeal 是否已赋值
                     * 
                     */
                    bool NameInAppealHasBeenSet() const;

                    /**
                     * 获取欢迎语是否在申诉中
                     * @return GreetingInAppeal 欢迎语是否在申诉中
                     * 
                     */
                    bool GetGreetingInAppeal() const;

                    /**
                     * 判断参数 GreetingInAppeal 是否已赋值
                     * @return GreetingInAppeal 是否已赋值
                     * 
                     */
                    bool GreetingInAppealHasBeenSet() const;

                    /**
                     * 获取未知问题回复语是否在申诉中
                     * @return BareAnswerInAppeal 未知问题回复语是否在申诉中
                     * 
                     */
                    bool GetBareAnswerInAppeal() const;

                    /**
                     * 判断参数 BareAnswerInAppeal 是否已赋值
                     * @return BareAnswerInAppeal 是否已赋值
                     * 
                     */
                    bool BareAnswerInAppealHasBeenSet() const;

                    /**
                     * 获取应用appKey
                     * @return AppKey 应用appKey
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取应用状态，1：未上线，2：运行中，3：停用
                     * @return AppStatus 应用状态，1：未上线，2：运行中，3：停用
                     * 
                     */
                    uint64_t GetAppStatus() const;

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取状态说明
                     * @return AppStatusDesc 状态说明
                     * 
                     */
                    std::string GetAppStatusDesc() const;

                    /**
                     * 判断参数 AppStatusDesc 是否已赋值
                     * @return AppStatusDesc 是否已赋值
                     * 
                     */
                    bool AppStatusDescHasBeenSet() const;

                    /**
                     * 获取应用是否在复制中
                     * @return IsCopying 应用是否在复制中
                     * 
                     */
                    bool GetIsCopying() const;

                    /**
                     * 判断参数 IsCopying 是否已赋值
                     * @return IsCopying 是否已赋值
                     * 
                     */
                    bool IsCopyingHasBeenSet() const;

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
                     * 应用类型说明
                     */
                    std::string m_appTypeDesc;
                    bool m_appTypeDescHasBeenSet;

                    /**
                     * 应用类型说明
                     */
                    BaseConfig m_baseConfig;
                    bool m_baseConfigHasBeenSet;

                    /**
                     * 应用配置
                     */
                    AppConfig m_appConfig;
                    bool m_appConfigHasBeenSet;

                    /**
                     * 头像是否在申诉中
                     */
                    bool m_avatarInAppeal;
                    bool m_avatarInAppealHasBeenSet;

                    /**
                     * 角色描述是否在申诉中
                     */
                    bool m_roleInAppeal;
                    bool m_roleInAppealHasBeenSet;

                    /**
                     * 名称是否在申诉中
                     */
                    bool m_nameInAppeal;
                    bool m_nameInAppealHasBeenSet;

                    /**
                     * 欢迎语是否在申诉中
                     */
                    bool m_greetingInAppeal;
                    bool m_greetingInAppealHasBeenSet;

                    /**
                     * 未知问题回复语是否在申诉中
                     */
                    bool m_bareAnswerInAppeal;
                    bool m_bareAnswerInAppealHasBeenSet;

                    /**
                     * 应用appKey
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * 应用状态，1：未上线，2：运行中，3：停用
                     */
                    uint64_t m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * 状态说明
                     */
                    std::string m_appStatusDesc;
                    bool m_appStatusDescHasBeenSet;

                    /**
                     * 应用是否在复制中
                     */
                    bool m_isCopying;
                    bool m_isCopyingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEAPPRESPONSE_H_
