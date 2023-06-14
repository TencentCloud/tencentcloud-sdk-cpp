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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDAPIINFO_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDAPIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * vpc通道绑定的api信息
                */
                class BindApiInfo : public AbstractModel
                {
                public:
                    BindApiInfo();
                    ~BindApiInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取api唯一id
                     * @return ApiId api唯一id
                     * 
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置api唯一id
                     * @param _apiId api唯一id
                     * 
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     * 
                     */
                    bool ApiIdHasBeenSet() const;

                    /**
                     * 获取Service唯一id
                     * @return ServiceId Service唯一id
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置Service唯一id
                     * @param _serviceId Service唯一id
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
                     * 获取api名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiName api名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiName() const;

                    /**
                     * 设置api名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiName api名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiName(const std::string& _apiName);

                    /**
                     * 判断参数 ApiName 是否已赋值
                     * @return ApiName 是否已赋值
                     * 
                     */
                    bool ApiNameHasBeenSet() const;

                    /**
                     * 获取服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName 服务名字
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取绑定时间
                     * @return BindTime 绑定时间
                     * 
                     */
                    std::string GetBindTime() const;

                    /**
                     * 设置绑定时间
                     * @param _bindTime 绑定时间
                     * 
                     */
                    void SetBindTime(const std::string& _bindTime);

                    /**
                     * 判断参数 BindTime 是否已赋值
                     * @return BindTime 是否已赋值
                     * 
                     */
                    bool BindTimeHasBeenSet() const;

                private:

                    /**
                     * api唯一id
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                    /**
                     * Service唯一id
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * api名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiName;
                    bool m_apiNameHasBeenSet;

                    /**
                     * 服务名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 绑定时间
                     */
                    std::string m_bindTime;
                    bool m_bindTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BINDAPIINFO_H_
