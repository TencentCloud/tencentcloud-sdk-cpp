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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_EXTERNALACCESS_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_EXTERNALACCESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/CLBSetting.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 容器集群外部访问设置
                */
                class ExternalAccess : public AbstractModel
                {
                public:
                    ExternalAccess();
                    ~ExternalAccess() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外部访问类型，当前仅支持CLB字段
                     * @return Type 外部访问类型，当前仅支持CLB字段
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置外部访问类型，当前仅支持CLB字段
                     * @param _type 外部访问类型，当前仅支持CLB字段
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取CLB设置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CLBServer CLB设置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CLBSetting GetCLBServer() const;

                    /**
                     * 设置CLB设置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cLBServer CLB设置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCLBServer(const CLBSetting& _cLBServer);

                    /**
                     * 判断参数 CLBServer 是否已赋值
                     * @return CLBServer 是否已赋值
                     * 
                     */
                    bool CLBServerHasBeenSet() const;

                private:

                    /**
                     * 外部访问类型，当前仅支持CLB字段
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * CLB设置信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CLBSetting m_cLBServer;
                    bool m_cLBServerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_EXTERNALACCESS_H_
