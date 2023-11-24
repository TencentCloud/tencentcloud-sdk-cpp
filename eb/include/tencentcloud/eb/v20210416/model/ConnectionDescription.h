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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_CONNECTIONDESCRIPTION_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_CONNECTIONDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/APIGWParams.h>
#include <tencentcloud/eb/v20210416/model/CkafkaParams.h>
#include <tencentcloud/eb/v20210416/model/DTSParams.h>
#include <tencentcloud/eb/v20210416/model/TDMQParams.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * ConnectionDescription描述
                */
                class ConnectionDescription : public AbstractModel
                {
                public:
                    ConnectionDescription();
                    ~ConnectionDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源qcs六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)
                     * @return ResourceDescription 资源qcs六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)
                     * 
                     */
                    std::string GetResourceDescription() const;

                    /**
                     * 设置资源qcs六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)
                     * @param _resourceDescription 资源qcs六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)
                     * 
                     */
                    void SetResourceDescription(const std::string& _resourceDescription);

                    /**
                     * 判断参数 ResourceDescription 是否已赋值
                     * @return ResourceDescription 是否已赋值
                     * 
                     */
                    bool ResourceDescriptionHasBeenSet() const;

                    /**
                     * 获取apigw参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return APIGWParams apigw参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    APIGWParams GetAPIGWParams() const;

                    /**
                     * 设置apigw参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aPIGWParams apigw参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAPIGWParams(const APIGWParams& _aPIGWParams);

                    /**
                     * 判断参数 APIGWParams 是否已赋值
                     * @return APIGWParams 是否已赋值
                     * 
                     */
                    bool APIGWParamsHasBeenSet() const;

                    /**
                     * 获取ckafka参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CkafkaParams ckafka参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CkafkaParams GetCkafkaParams() const;

                    /**
                     * 设置ckafka参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ckafkaParams ckafka参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCkafkaParams(const CkafkaParams& _ckafkaParams);

                    /**
                     * 判断参数 CkafkaParams 是否已赋值
                     * @return CkafkaParams 是否已赋值
                     * 
                     */
                    bool CkafkaParamsHasBeenSet() const;

                    /**
                     * 获取data transfer service (DTS)参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DTSParams data transfer service (DTS)参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DTSParams GetDTSParams() const;

                    /**
                     * 设置data transfer service (DTS)参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dTSParams data transfer service (DTS)参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDTSParams(const DTSParams& _dTSParams);

                    /**
                     * 判断参数 DTSParams 是否已赋值
                     * @return DTSParams 是否已赋值
                     * 
                     */
                    bool DTSParamsHasBeenSet() const;

                    /**
                     * 获取tdmq参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TDMQParams tdmq参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TDMQParams GetTDMQParams() const;

                    /**
                     * 设置tdmq参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tDMQParams tdmq参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTDMQParams(const TDMQParams& _tDMQParams);

                    /**
                     * 判断参数 TDMQParams 是否已赋值
                     * @return TDMQParams 是否已赋值
                     * 
                     */
                    bool TDMQParamsHasBeenSet() const;

                private:

                    /**
                     * 资源qcs六段式，更多参考 [资源六段式](https://cloud.tencent.com/document/product/598/10606)
                     */
                    std::string m_resourceDescription;
                    bool m_resourceDescriptionHasBeenSet;

                    /**
                     * apigw参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    APIGWParams m_aPIGWParams;
                    bool m_aPIGWParamsHasBeenSet;

                    /**
                     * ckafka参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CkafkaParams m_ckafkaParams;
                    bool m_ckafkaParamsHasBeenSet;

                    /**
                     * data transfer service (DTS)参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DTSParams m_dTSParams;
                    bool m_dTSParamsHasBeenSet;

                    /**
                     * tdmq参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TDMQParams m_tDMQParams;
                    bool m_tDMQParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_CONNECTIONDESCRIPTION_H_
