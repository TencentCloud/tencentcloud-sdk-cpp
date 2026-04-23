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
                     * 获取<p>多写url</p>
                     * @return URL <p>多写url</p>
                     * 
                     */
                    std::string GetURL() const;

                    /**
                     * 设置<p>多写url</p>
                     * @param _uRL <p>多写url</p>
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
                     * 获取<p>RelabelConfig</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return URLRelabelConfig <p>RelabelConfig</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetURLRelabelConfig() const;

                    /**
                     * 设置<p>RelabelConfig</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uRLRelabelConfig <p>RelabelConfig</p>
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
                     * 获取<p>鉴权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BasicAuth <p>鉴权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BasicAuth GetBasicAuth() const;

                    /**
                     * 设置<p>鉴权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _basicAuth <p>鉴权</p>
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
                     * 获取<p>最大block</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxBlockSize <p>最大block</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetMaxBlockSize() const;

                    /**
                     * 设置<p>最大block</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxBlockSize <p>最大block</p>
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
                     * 获取<p>Label</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label <p>Label</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>Label</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _label <p>Label</p>
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
                     * 获取<p>HTTP 额外添加的头</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers <p>HTTP 额外添加的头</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RemoteWriteHeader> GetHeaders() const;

                    /**
                     * 设置<p>HTTP 额外添加的头</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _headers <p>HTTP 额外添加的头</p>
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

                    /**
                     * 获取<p>数据多写类型:<br>1- 只多写采集指标<br>2- 只多写预聚合指标<br>3- 同时多写采集和预聚合指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RemoteWriteType <p>数据多写类型:<br>1- 只多写采集指标<br>2- 只多写预聚合指标<br>3- 同时多写采集和预聚合指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRemoteWriteType() const;

                    /**
                     * 设置<p>数据多写类型:<br>1- 只多写采集指标<br>2- 只多写预聚合指标<br>3- 同时多写采集和预聚合指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remoteWriteType <p>数据多写类型:<br>1- 只多写采集指标<br>2- 只多写预聚合指标<br>3- 同时多写采集和预聚合指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemoteWriteType(const int64_t& _remoteWriteType);

                    /**
                     * 判断参数 RemoteWriteType 是否已赋值
                     * @return RemoteWriteType 是否已赋值
                     * 
                     */
                    bool RemoteWriteTypeHasBeenSet() const;

                private:

                    /**
                     * <p>多写url</p>
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * <p>RelabelConfig</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uRLRelabelConfig;
                    bool m_uRLRelabelConfigHasBeenSet;

                    /**
                     * <p>鉴权</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BasicAuth m_basicAuth;
                    bool m_basicAuthHasBeenSet;

                    /**
                     * <p>最大block</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_maxBlockSize;
                    bool m_maxBlockSizeHasBeenSet;

                    /**
                     * <p>Label</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>HTTP 额外添加的头</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RemoteWriteHeader> m_headers;
                    bool m_headersHasBeenSet;

                    /**
                     * <p>数据多写类型:<br>1- 只多写采集指标<br>2- 只多写预聚合指标<br>3- 同时多写采集和预聚合指标</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_remoteWriteType;
                    bool m_remoteWriteTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_REMOTEWRITE_H_
