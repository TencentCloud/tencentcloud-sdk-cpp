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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_AUTOSTRATEGY_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_AUTOSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CPU 弹性扩容的自动扩容策略。
                */
                class AutoStrategy : public AbstractModel
                {
                public:
                    AutoStrategy();
                    ~AutoStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动扩容阈值，可选值40、50、60、70、80、90，代表 CPU 利用率达到40%、50%、60%、70%、80%、90%时后台进行自动扩容。
                     * @return ExpandThreshold 自动扩容阈值，可选值40、50、60、70、80、90，代表 CPU 利用率达到40%、50%、60%、70%、80%、90%时后台进行自动扩容。
                     * 
                     */
                    int64_t GetExpandThreshold() const;

                    /**
                     * 设置自动扩容阈值，可选值40、50、60、70、80、90，代表 CPU 利用率达到40%、50%、60%、70%、80%、90%时后台进行自动扩容。
                     * @param _expandThreshold 自动扩容阈值，可选值40、50、60、70、80、90，代表 CPU 利用率达到40%、50%、60%、70%、80%、90%时后台进行自动扩容。
                     * 
                     */
                    void SetExpandThreshold(const int64_t& _expandThreshold);

                    /**
                     * 判断参数 ExpandThreshold 是否已赋值
                     * @return ExpandThreshold 是否已赋值
                     * 
                     */
                    bool ExpandThresholdHasBeenSet() const;

                    /**
                     * 获取自动缩容阈值，可选值10、20、30，代表CPU利用率达到10%、20%、30%时后台进行自动缩容
                     * @return ShrinkThreshold 自动缩容阈值，可选值10、20、30，代表CPU利用率达到10%、20%、30%时后台进行自动缩容
                     * 
                     */
                    int64_t GetShrinkThreshold() const;

                    /**
                     * 设置自动缩容阈值，可选值10、20、30，代表CPU利用率达到10%、20%、30%时后台进行自动缩容
                     * @param _shrinkThreshold 自动缩容阈值，可选值10、20、30，代表CPU利用率达到10%、20%、30%时后台进行自动缩容
                     * 
                     */
                    void SetShrinkThreshold(const int64_t& _shrinkThreshold);

                    /**
                     * 判断参数 ShrinkThreshold 是否已赋值
                     * @return ShrinkThreshold 是否已赋值
                     * 
                     */
                    bool ShrinkThresholdHasBeenSet() const;

                    /**
                     * 获取自动扩容观测周期，单位是分钟，可选值1、3、5、10、15、30。后台会按照配置的周期进行扩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpandPeriod 自动扩容观测周期，单位是分钟，可选值1、3、5、10、15、30。后台会按照配置的周期进行扩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetExpandPeriod() const;

                    /**
                     * 设置自动扩容观测周期，单位是分钟，可选值1、3、5、10、15、30。后台会按照配置的周期进行扩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expandPeriod 自动扩容观测周期，单位是分钟，可选值1、3、5、10、15、30。后台会按照配置的周期进行扩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetExpandPeriod(const int64_t& _expandPeriod);

                    /**
                     * 判断参数 ExpandPeriod 是否已赋值
                     * @return ExpandPeriod 是否已赋值
                     * @deprecated
                     */
                    bool ExpandPeriodHasBeenSet() const;

                    /**
                     * 获取自动缩容观测周期，单位是分钟，可选值5、10、15、30。后台会按照配置的周期进行缩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShrinkPeriod 自动缩容观测周期，单位是分钟，可选值5、10、15、30。后台会按照配置的周期进行缩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    int64_t GetShrinkPeriod() const;

                    /**
                     * 设置自动缩容观测周期，单位是分钟，可选值5、10、15、30。后台会按照配置的周期进行缩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shrinkPeriod 自动缩容观测周期，单位是分钟，可选值5、10、15、30。后台会按照配置的周期进行缩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetShrinkPeriod(const int64_t& _shrinkPeriod);

                    /**
                     * 判断参数 ShrinkPeriod 是否已赋值
                     * @return ShrinkPeriod 是否已赋值
                     * @deprecated
                     */
                    bool ShrinkPeriodHasBeenSet() const;

                    /**
                     * 获取弹性扩容观测周期（秒级），可取值为：5，30，45，60，180，300，600，900，1800。
                     * @return ExpandSecondPeriod 弹性扩容观测周期（秒级），可取值为：5，30，45，60，180，300，600，900，1800。
                     * 
                     */
                    int64_t GetExpandSecondPeriod() const;

                    /**
                     * 设置弹性扩容观测周期（秒级），可取值为：5，30，45，60，180，300，600，900，1800。
                     * @param _expandSecondPeriod 弹性扩容观测周期（秒级），可取值为：5，30，45，60，180，300，600，900，1800。
                     * 
                     */
                    void SetExpandSecondPeriod(const int64_t& _expandSecondPeriod);

                    /**
                     * 判断参数 ExpandSecondPeriod 是否已赋值
                     * @return ExpandSecondPeriod 是否已赋值
                     * 
                     */
                    bool ExpandSecondPeriodHasBeenSet() const;

                    /**
                     * 获取缩容观测周期（秒级），可取值为：300。
                     * @return ShrinkSecondPeriod 缩容观测周期（秒级），可取值为：300。
                     * 
                     */
                    int64_t GetShrinkSecondPeriod() const;

                    /**
                     * 设置缩容观测周期（秒级），可取值为：300。
                     * @param _shrinkSecondPeriod 缩容观测周期（秒级），可取值为：300。
                     * 
                     */
                    void SetShrinkSecondPeriod(const int64_t& _shrinkSecondPeriod);

                    /**
                     * 判断参数 ShrinkSecondPeriod 是否已赋值
                     * @return ShrinkSecondPeriod 是否已赋值
                     * 
                     */
                    bool ShrinkSecondPeriodHasBeenSet() const;

                private:

                    /**
                     * 自动扩容阈值，可选值40、50、60、70、80、90，代表 CPU 利用率达到40%、50%、60%、70%、80%、90%时后台进行自动扩容。
                     */
                    int64_t m_expandThreshold;
                    bool m_expandThresholdHasBeenSet;

                    /**
                     * 自动缩容阈值，可选值10、20、30，代表CPU利用率达到10%、20%、30%时后台进行自动缩容
                     */
                    int64_t m_shrinkThreshold;
                    bool m_shrinkThresholdHasBeenSet;

                    /**
                     * 自动扩容观测周期，单位是分钟，可选值1、3、5、10、15、30。后台会按照配置的周期进行扩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expandPeriod;
                    bool m_expandPeriodHasBeenSet;

                    /**
                     * 自动缩容观测周期，单位是分钟，可选值5、10、15、30。后台会按照配置的周期进行缩容判断。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_shrinkPeriod;
                    bool m_shrinkPeriodHasBeenSet;

                    /**
                     * 弹性扩容观测周期（秒级），可取值为：5，30，45，60，180，300，600，900，1800。
                     */
                    int64_t m_expandSecondPeriod;
                    bool m_expandSecondPeriodHasBeenSet;

                    /**
                     * 缩容观测周期（秒级），可取值为：300。
                     */
                    int64_t m_shrinkSecondPeriod;
                    bool m_shrinkSecondPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_AUTOSTRATEGY_H_
