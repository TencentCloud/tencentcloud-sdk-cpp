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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_REMOTEWRITE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_REMOTEWRITE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/BasicAuth.h>
#include <tencentcloud/monitor/v20180724/model/RemoteWriteHeader.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 多写配置
                */
                class RemoteWrite : public AbstractModel
                {
                public:
                    RemoteWrite();
                    ~RemoteWrite() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取多写url
                     * @return URL 多写url
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置多写url
                     * @param _uRL 多写url
                     * 
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     * 
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取RelabelConfig
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URLRelabelConfig RelabelConfig
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetURLRelabelConfig() const;

                    /**
                     * 设置RelabelConfig
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uRLRelabelConfig RelabelConfig
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetURLRelabelConfig(const std::string& _uRLRelabelConfig);

                    /**
                     * 判断参数 URLRelabelConfig 是否已赋值
                     * @return URLRelabelConfig 是否已赋值
                     * 
                     */
                    bool URLRelabelConfigHasBeenSet() const;

                    /**
                     * 获取鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicAuth 鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BasicAuth GetBasicAuth() const;

                    /**
                     * 设置鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basicAuth 鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBasicAuth(const BasicAuth& _basicAuth);

                    /**
                     * 判断参数 BasicAuth 是否已赋值
                     * @return BasicAuth 是否已赋值
                     * 
                     */
                    bool BasicAuthHasBeenSet() const;

                    /**
                     * 获取最大block
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxBlockSize 最大block
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetMaxBlockSize() const;

                    /**
                     * 设置最大block
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxBlockSize 最大block
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetMaxBlockSize(const std::string& _maxBlockSize);

                    /**
                     * 判断参数 MaxBlockSize 是否已赋值
                     * @return MaxBlockSize 是否已赋值
                     * @deprecated
                     */
                    bool MaxBlockSizeHasBeenSet() const;

                    /**
                     * 获取Label
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label Label
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Label
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label Label
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * @deprecated
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取HTTP 额外添加的头
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers HTTP 额外添加的头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RemoteWriteHeader> GetHeaders() const;

                    /**
                     * 设置HTTP 额外添加的头
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers HTTP 额外添加的头
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeaders(const std::vector<RemoteWriteHeader>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 多写url
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * RelabelConfig
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uRLRelabelConfig;
                    bool m_uRLRelabelConfigHasBeenSet;

                    /**
                     * 鉴权
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BasicAuth m_basicAuth;
                    bool m_basicAuthHasBeenSet;

                    /**
                     * 最大block
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxBlockSize;
                    bool m_maxBlockSizeHasBeenSet;

                    /**
                     * Label
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * HTTP 额外添加的头
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RemoteWriteHeader> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_REMOTEWRITE_H_
