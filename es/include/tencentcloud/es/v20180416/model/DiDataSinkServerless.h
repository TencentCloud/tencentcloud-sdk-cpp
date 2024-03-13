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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DIDATASINKSERVERLESS_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DIDATASINKSERVERLESS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 数据接入serverless目的端信息
                */
                class DiDataSinkServerless : public AbstractModel
                {
                public:
                    DiDataSinkServerless();
                    ~DiDataSinkServerless() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取serverless实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerlessId serverless实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServerlessId() const;

                    /**
                     * 设置serverless实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serverlessId serverless实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServerlessId(const std::string& _serverlessId);

                    /**
                     * 判断参数 ServerlessId 是否已赋值
                     * @return ServerlessId 是否已赋值
                     * 
                     */
                    bool ServerlessIdHasBeenSet() const;

                private:

                    /**
                     * serverless实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serverlessId;
                    bool m_serverlessIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DIDATASINKSERVERLESS_H_
