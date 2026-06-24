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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_WEBUIINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_WEBUIINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * WebUI访问信息
                */
                class WebUIInfo : public AbstractModel
                {
                public:
                    WebUIInfo();
                    ~WebUIInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>访问地址，可能为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url <p>访问地址，可能为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>访问地址，可能为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url <p>访问地址，可能为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>WebUI状态包括：<br>-1表示当前服务没有WebUI；<br>0表示当前服务有WebUI，但是没有安装KNOX服务；<br>1表示当前服务有WebUI并安装有KNOX服务，但是KNOX没有开启公网访问；<br>2表示，当前服务有WebUI，安装有KNOX服务且已开启公网访问。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebUIStatus <p>WebUI状态包括：<br>-1表示当前服务没有WebUI；<br>0表示当前服务有WebUI，但是没有安装KNOX服务；<br>1表示当前服务有WebUI并安装有KNOX服务，但是KNOX没有开启公网访问；<br>2表示，当前服务有WebUI，安装有KNOX服务且已开启公网访问。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWebUIStatus() const;

                    /**
                     * 设置<p>WebUI状态包括：<br>-1表示当前服务没有WebUI；<br>0表示当前服务有WebUI，但是没有安装KNOX服务；<br>1表示当前服务有WebUI并安装有KNOX服务，但是KNOX没有开启公网访问；<br>2表示，当前服务有WebUI，安装有KNOX服务且已开启公网访问。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webUIStatus <p>WebUI状态包括：<br>-1表示当前服务没有WebUI；<br>0表示当前服务有WebUI，但是没有安装KNOX服务；<br>1表示当前服务有WebUI并安装有KNOX服务，但是KNOX没有开启公网访问；<br>2表示，当前服务有WebUI，安装有KNOX服务且已开启公网访问。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebUIStatus(const int64_t& _webUIStatus);

                    /**
                     * 判断参数 WebUIStatus 是否已赋值
                     * @return WebUIStatus 是否已赋值
                     * 
                     */
                    bool WebUIStatusHasBeenSet() const;

                    /**
                     * 获取<p>服务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName <p>服务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置<p>服务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceName <p>服务名</p>
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

                private:

                    /**
                     * <p>访问地址，可能为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>WebUI状态包括：<br>-1表示当前服务没有WebUI；<br>0表示当前服务有WebUI，但是没有安装KNOX服务；<br>1表示当前服务有WebUI并安装有KNOX服务，但是KNOX没有开启公网访问；<br>2表示，当前服务有WebUI，安装有KNOX服务且已开启公网访问。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_webUIStatus;
                    bool m_webUIStatusHasBeenSet;

                    /**
                     * <p>服务名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_WEBUIINFO_H_
