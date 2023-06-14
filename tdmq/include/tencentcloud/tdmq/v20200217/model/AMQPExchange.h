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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPEXCHANGE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPEXCHANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * AMQP Exchange信息
                */
                class AMQPExchange : public AbstractModel
                {
                public:
                    AMQPExchange();
                    ~AMQPExchange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exchange名称
                     * @return Name Exchange名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Exchange名称
                     * @param _name Exchange名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Exchange的类别，为枚举类型:Direct, Fanout, Topic
                     * @return Type Exchange的类别，为枚举类型:Direct, Fanout, Topic
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Exchange的类别，为枚举类型:Direct, Fanout, Topic
                     * @param _type Exchange的类别，为枚举类型:Direct, Fanout, Topic
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
                     * 获取主绑定数
                     * @return SourceBindedNum 主绑定数
                     * 
                     */
                    uint64_t GetSourceBindedNum() const;

                    /**
                     * 设置主绑定数
                     * @param _sourceBindedNum 主绑定数
                     * 
                     */
                    void SetSourceBindedNum(const uint64_t& _sourceBindedNum);

                    /**
                     * 判断参数 SourceBindedNum 是否已赋值
                     * @return SourceBindedNum 是否已赋值
                     * 
                     */
                    bool SourceBindedNumHasBeenSet() const;

                    /**
                     * 获取说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取被绑定数
                     * @return DestBindedNum 被绑定数
                     * 
                     */
                    uint64_t GetDestBindedNum() const;

                    /**
                     * 设置被绑定数
                     * @param _destBindedNum 被绑定数
                     * 
                     */
                    void SetDestBindedNum(const uint64_t& _destBindedNum);

                    /**
                     * 判断参数 DestBindedNum 是否已赋值
                     * @return DestBindedNum 是否已赋值
                     * 
                     */
                    bool DestBindedNumHasBeenSet() const;

                    /**
                     * 获取创建时间，以毫秒为单位
                     * @return CreateTime 创建时间，以毫秒为单位
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，以毫秒为单位
                     * @param _createTime 创建时间，以毫秒为单位
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建时间，以毫秒为单位
                     * @return UpdateTime 创建时间，以毫秒为单位
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置创建时间，以毫秒为单位
                     * @param _updateTime 创建时间，以毫秒为单位
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否为内部Exchange(以amq.前缀开头的)
                     * @return Internal 是否为内部Exchange(以amq.前缀开头的)
                     * 
                     */
                    bool GetInternal() const;

                    /**
                     * 设置是否为内部Exchange(以amq.前缀开头的)
                     * @param _internal 是否为内部Exchange(以amq.前缀开头的)
                     * 
                     */
                    void SetInternal(const bool& _internal);

                    /**
                     * 判断参数 Internal 是否已赋值
                     * @return Internal 是否已赋值
                     * 
                     */
                    bool InternalHasBeenSet() const;

                    /**
                     * 获取备用Exchange名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlternateExchange 备用Exchange名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlternateExchange() const;

                    /**
                     * 设置备用Exchange名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alternateExchange 备用Exchange名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlternateExchange(const std::string& _alternateExchange);

                    /**
                     * 判断参数 AlternateExchange 是否已赋值
                     * @return AlternateExchange 是否已赋值
                     * 
                     */
                    bool AlternateExchangeHasBeenSet() const;

                    /**
                     * 获取备用Exchange是否删除标识: true(已删除)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlternateExchangeDeleteMark 备用Exchange是否删除标识: true(已删除)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAlternateExchangeDeleteMark() const;

                    /**
                     * 设置备用Exchange是否删除标识: true(已删除)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alternateExchangeDeleteMark 备用Exchange是否删除标识: true(已删除)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlternateExchangeDeleteMark(const bool& _alternateExchangeDeleteMark);

                    /**
                     * 判断参数 AlternateExchangeDeleteMark 是否已赋值
                     * @return AlternateExchangeDeleteMark 是否已赋值
                     * 
                     */
                    bool AlternateExchangeDeleteMarkHasBeenSet() const;

                    /**
                     * 获取延迟Exchange的类别，为枚举类型:Direct, Fanout, Topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DelayType 延迟Exchange的类别，为枚举类型:Direct, Fanout, Topic
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDelayType() const;

                    /**
                     * 设置延迟Exchange的类别，为枚举类型:Direct, Fanout, Topic
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _delayType 延迟Exchange的类别，为枚举类型:Direct, Fanout, Topic
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDelayType(const std::string& _delayType);

                    /**
                     * 判断参数 DelayType 是否已赋值
                     * @return DelayType 是否已赋值
                     * 
                     */
                    bool DelayTypeHasBeenSet() const;

                private:

                    /**
                     * Exchange名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Exchange的类别，为枚举类型:Direct, Fanout, Topic
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 主绑定数
                     */
                    uint64_t m_sourceBindedNum;
                    bool m_sourceBindedNumHasBeenSet;

                    /**
                     * 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 被绑定数
                     */
                    uint64_t m_destBindedNum;
                    bool m_destBindedNumHasBeenSet;

                    /**
                     * 创建时间，以毫秒为单位
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建时间，以毫秒为单位
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否为内部Exchange(以amq.前缀开头的)
                     */
                    bool m_internal;
                    bool m_internalHasBeenSet;

                    /**
                     * 备用Exchange名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alternateExchange;
                    bool m_alternateExchangeHasBeenSet;

                    /**
                     * 备用Exchange是否删除标识: true(已删除)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_alternateExchangeDeleteMark;
                    bool m_alternateExchangeDeleteMarkHasBeenSet;

                    /**
                     * 延迟Exchange的类别，为枚举类型:Direct, Fanout, Topic
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_delayType;
                    bool m_delayTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_AMQPEXCHANGE_H_
