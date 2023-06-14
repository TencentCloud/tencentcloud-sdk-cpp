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

#ifndef TENCENTCLOUD_TIONE_V20191022_MODEL_INPUTDATACONFIG_H_
#define TENCENTCLOUD_TIONE_V20191022_MODEL_INPUTDATACONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20191022/model/DataSource.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20191022
        {
            namespace Model
            {
                /**
                * 输入数据配置
                */
                class InputDataConfig : public AbstractModel
                {
                public:
                    InputDataConfig();
                    ~InputDataConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通道名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelName 通道名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置通道名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelName 通道名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取数据源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataSource 数据源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataSource GetDataSource() const;

                    /**
                     * 设置数据源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataSource 数据源配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataSource(const DataSource& _dataSource);

                    /**
                     * 判断参数 DataSource 是否已赋值
                     * @return DataSource 是否已赋值
                     * 
                     */
                    bool DataSourceHasBeenSet() const;

                    /**
                     * 获取输入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputMode 输入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputMode() const;

                    /**
                     * 设置输入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputMode 输入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputMode(const std::string& _inputMode);

                    /**
                     * 判断参数 InputMode 是否已赋值
                     * @return InputMode 是否已赋值
                     * 
                     */
                    bool InputModeHasBeenSet() const;

                    /**
                     * 获取文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ContentType 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _contentType 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                private:

                    /**
                     * 通道名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 数据源配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataSource m_dataSource;
                    bool m_dataSourceHasBeenSet;

                    /**
                     * 输入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputMode;
                    bool m_inputModeHasBeenSet;

                    /**
                     * 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20191022_MODEL_INPUTDATACONFIG_H_
