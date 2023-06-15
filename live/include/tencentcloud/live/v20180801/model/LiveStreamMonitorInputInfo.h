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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITORINPUTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITORINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播监播功能输入流信息
                */
                class LiveStreamMonitorInputInfo : public AbstractModel
                {
                public:
                    LiveStreamMonitorInputInfo();
                    ~LiveStreamMonitorInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待监播的输入流名称。256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputStreamName 待监播的输入流名称。256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputStreamName() const;

                    /**
                     * 设置待监播的输入流名称。256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputStreamName 待监播的输入流名称。256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputStreamName(const std::string& _inputStreamName);

                    /**
                     * 判断参数 InputStreamName 是否已赋值
                     * @return InputStreamName 是否已赋值
                     * 
                     */
                    bool InputStreamNameHasBeenSet() const;

                    /**
                     * 获取待监播的输入流推流域名。128字节以内，只允许填处于启用状态的推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputDomain 待监播的输入流推流域名。128字节以内，只允许填处于启用状态的推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputDomain() const;

                    /**
                     * 设置待监播的输入流推流域名。128字节以内，只允许填处于启用状态的推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputDomain 待监播的输入流推流域名。128字节以内，只允许填处于启用状态的推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputDomain(const std::string& _inputDomain);

                    /**
                     * 判断参数 InputDomain 是否已赋值
                     * @return InputDomain 是否已赋值
                     * 
                     */
                    bool InputDomainHasBeenSet() const;

                    /**
                     * 获取待监播的输入流推流路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputApp 待监播的输入流推流路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputApp() const;

                    /**
                     * 设置待监播的输入流推流路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputApp 待监播的输入流推流路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputApp(const std::string& _inputApp);

                    /**
                     * 判断参数 InputApp 是否已赋值
                     * @return InputApp 是否已赋值
                     * 
                     */
                    bool InputAppHasBeenSet() const;

                    /**
                     * 获取待监播的输入流推流url。一般场景下，无需该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputUrl 待监播的输入流推流url。一般场景下，无需该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputUrl() const;

                    /**
                     * 设置待监播的输入流推流url。一般场景下，无需该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputUrl 待监播的输入流推流url。一般场景下，无需该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputUrl(const std::string& _inputUrl);

                    /**
                     * 判断参数 InputUrl 是否已赋值
                     * @return InputUrl 是否已赋值
                     * 
                     */
                    bool InputUrlHasBeenSet() const;

                    /**
                     * 获取描述。256字节以内。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 描述。256字节以内。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。256字节以内。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 描述。256字节以内。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 待监播的输入流名称。256字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputStreamName;
                    bool m_inputStreamNameHasBeenSet;

                    /**
                     * 待监播的输入流推流域名。128字节以内，只允许填处于启用状态的推流域名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputDomain;
                    bool m_inputDomainHasBeenSet;

                    /**
                     * 待监播的输入流推流路径。32字节以内，只允许包含字母、数字、‘-’，‘_’，'.'字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputApp;
                    bool m_inputAppHasBeenSet;

                    /**
                     * 待监播的输入流推流url。一般场景下，无需该参数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputUrl;
                    bool m_inputUrlHasBeenSet;

                    /**
                     * 描述。256字节以内。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITORINPUTINFO_H_
