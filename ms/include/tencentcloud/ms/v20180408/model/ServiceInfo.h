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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_SERVICEINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_SERVICEINFO_H_

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
                * 提交app加固的服务信息
                */
                class ServiceInfo : public AbstractModel
                {
                public:
                    ServiceInfo();
                    ~ServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务版本，基础版basic，专业版professional，企业版enterprise。
                     * @return ServiceEdition 服务版本，基础版basic，专业版professional，企业版enterprise。
                     * 
                     */
                    std::string GetServiceEdition() const;

                    /**
                     * 设置服务版本，基础版basic，专业版professional，企业版enterprise。
                     * @param _serviceEdition 服务版本，基础版basic，专业版professional，企业版enterprise。
                     * 
                     */
                    void SetServiceEdition(const std::string& _serviceEdition);

                    /**
                     * 判断参数 ServiceEdition 是否已赋值
                     * @return ServiceEdition 是否已赋值
                     * 
                     */
                    bool ServiceEditionHasBeenSet() const;

                    /**
                     * 获取任务处理完成后的反向通知回调地址，如果不需要通知请传递空字符串。通知为POST请求，post包体数据示例{"Response":{"ItemId":"4cdad8fb86f036b06bccb3f58971c306","ShieldCode":0,"ShieldMd5":"78701576793c4a5f04e1c9660de0aa0b","ShieldSize":11997354,"TaskStatus":1,"TaskTime":1539148141}}，调用方需要返回如下信息，{"Result":"ok","Reason":"xxxxx"}，如果Result字段值不等于ok会继续回调。
                     * @return CallbackUrl 任务处理完成后的反向通知回调地址，如果不需要通知请传递空字符串。通知为POST请求，post包体数据示例{"Response":{"ItemId":"4cdad8fb86f036b06bccb3f58971c306","ShieldCode":0,"ShieldMd5":"78701576793c4a5f04e1c9660de0aa0b","ShieldSize":11997354,"TaskStatus":1,"TaskTime":1539148141}}，调用方需要返回如下信息，{"Result":"ok","Reason":"xxxxx"}，如果Result字段值不等于ok会继续回调。
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置任务处理完成后的反向通知回调地址，如果不需要通知请传递空字符串。通知为POST请求，post包体数据示例{"Response":{"ItemId":"4cdad8fb86f036b06bccb3f58971c306","ShieldCode":0,"ShieldMd5":"78701576793c4a5f04e1c9660de0aa0b","ShieldSize":11997354,"TaskStatus":1,"TaskTime":1539148141}}，调用方需要返回如下信息，{"Result":"ok","Reason":"xxxxx"}，如果Result字段值不等于ok会继续回调。
                     * @param _callbackUrl 任务处理完成后的反向通知回调地址，如果不需要通知请传递空字符串。通知为POST请求，post包体数据示例{"Response":{"ItemId":"4cdad8fb86f036b06bccb3f58971c306","ShieldCode":0,"ShieldMd5":"78701576793c4a5f04e1c9660de0aa0b","ShieldSize":11997354,"TaskStatus":1,"TaskTime":1539148141}}，调用方需要返回如下信息，{"Result":"ok","Reason":"xxxxx"}，如果Result字段值不等于ok会继续回调。
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取提交来源 YYB-应用宝 RDM-rdm MC-控制台 MAC_TOOL-mac工具 WIN_TOOL-window工具。
                     * @return SubmitSource 提交来源 YYB-应用宝 RDM-rdm MC-控制台 MAC_TOOL-mac工具 WIN_TOOL-window工具。
                     * 
                     */
                    std::string GetSubmitSource() const;

                    /**
                     * 设置提交来源 YYB-应用宝 RDM-rdm MC-控制台 MAC_TOOL-mac工具 WIN_TOOL-window工具。
                     * @param _submitSource 提交来源 YYB-应用宝 RDM-rdm MC-控制台 MAC_TOOL-mac工具 WIN_TOOL-window工具。
                     * 
                     */
                    void SetSubmitSource(const std::string& _submitSource);

                    /**
                     * 判断参数 SubmitSource 是否已赋值
                     * @return SubmitSource 是否已赋值
                     * 
                     */
                    bool SubmitSourceHasBeenSet() const;

                    /**
                     * 获取加固策略编号，如果不传则使用系统默认加固策略。如果指定的plan不存在会返回错误。
                     * @return PlanId 加固策略编号，如果不传则使用系统默认加固策略。如果指定的plan不存在会返回错误。
                     * 
                     */
                    uint64_t GetPlanId() const;

                    /**
                     * 设置加固策略编号，如果不传则使用系统默认加固策略。如果指定的plan不存在会返回错误。
                     * @param _planId 加固策略编号，如果不传则使用系统默认加固策略。如果指定的plan不存在会返回错误。
                     * 
                     */
                    void SetPlanId(const uint64_t& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                private:

                    /**
                     * 服务版本，基础版basic，专业版professional，企业版enterprise。
                     */
                    std::string m_serviceEdition;
                    bool m_serviceEditionHasBeenSet;

                    /**
                     * 任务处理完成后的反向通知回调地址，如果不需要通知请传递空字符串。通知为POST请求，post包体数据示例{"Response":{"ItemId":"4cdad8fb86f036b06bccb3f58971c306","ShieldCode":0,"ShieldMd5":"78701576793c4a5f04e1c9660de0aa0b","ShieldSize":11997354,"TaskStatus":1,"TaskTime":1539148141}}，调用方需要返回如下信息，{"Result":"ok","Reason":"xxxxx"}，如果Result字段值不等于ok会继续回调。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 提交来源 YYB-应用宝 RDM-rdm MC-控制台 MAC_TOOL-mac工具 WIN_TOOL-window工具。
                     */
                    std::string m_submitSource;
                    bool m_submitSourceHasBeenSet;

                    /**
                     * 加固策略编号，如果不传则使用系统默认加固策略。如果指定的plan不存在会返回错误。
                     */
                    uint64_t m_planId;
                    bool m_planIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_SERVICEINFO_H_
