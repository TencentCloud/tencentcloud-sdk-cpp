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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPRERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPRERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/CreateInstancePreData.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 预付费实例相关接口返回结构
                */
                class CreateInstancePreResp : public AbstractModel
                {
                public:
                    CreateInstancePreResp();
                    ~CreateInstancePreResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取返回的code，0为正常，非0为错误
                     * @return ReturnCode 返回的code，0为正常，非0为错误
                     * 
                     */
                    std::string GetReturnCode() const;

                    /**
                     * 设置返回的code，0为正常，非0为错误
                     * @param _returnCode 返回的code，0为正常，非0为错误
                     * 
                     */
                    void SetReturnCode(const std::string& _returnCode);

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取成功消息
                     * @return ReturnMessage 成功消息
                     * 
                     */
                    std::string GetReturnMessage() const;

                    /**
                     * 设置成功消息
                     * @param _returnMessage 成功消息
                     * 
                     */
                    void SetReturnMessage(const std::string& _returnMessage);

                    /**
                     * 判断参数 ReturnMessage 是否已赋值
                     * @return ReturnMessage 是否已赋值
                     * 
                     */
                    bool ReturnMessageHasBeenSet() const;

                    /**
                     * 获取操作型返回的Data数据
                     * @return Data 操作型返回的Data数据
                     * 
                     */
                    CreateInstancePreData GetData() const;

                    /**
                     * 设置操作型返回的Data数据
                     * @param _data 操作型返回的Data数据
                     * 
                     */
                    void SetData(const CreateInstancePreData& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取删除时间。目前该参数字段已废弃，将会在未来被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeleteRouteTimestamp 删除时间。目前该参数字段已废弃，将会在未来被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetDeleteRouteTimestamp() const;

                    /**
                     * 设置删除时间。目前该参数字段已废弃，将会在未来被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deleteRouteTimestamp 删除时间。目前该参数字段已废弃，将会在未来被删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetDeleteRouteTimestamp(const std::string& _deleteRouteTimestamp);

                    /**
                     * 判断参数 DeleteRouteTimestamp 是否已赋值
                     * @return DeleteRouteTimestamp 是否已赋值
                     * @deprecated
                     */
                    bool DeleteRouteTimestampHasBeenSet() const;

                private:

                    /**
                     * 返回的code，0为正常，非0为错误
                     */
                    std::string m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 成功消息
                     */
                    std::string m_returnMessage;
                    bool m_returnMessageHasBeenSet;

                    /**
                     * 操作型返回的Data数据
                     */
                    CreateInstancePreData m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 删除时间。目前该参数字段已废弃，将会在未来被删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deleteRouteTimestamp;
                    bool m_deleteRouteTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEINSTANCEPRERESP_H_
